package sample;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.TextField;
import javafx.scene.input.KeyCode;
import javafx.scene.input.KeyEvent;

import javax.comm.CommPortIdentifier;
import javax.comm.SerialPort;

import java.io.IOException;
import java.io.OutputStream;
import java.util.Enumeration;

public class Controller {
    @FXML
    private ComboBox comboBox;
    @FXML
    private TextField textField;
    @FXML
    private Button sendButton;
    @FXML
    private Button connectButton;
    private String COMPort;
    private String Data;
    private static int baud = 9600;
    private OutputStream OStream;
    private boolean Connected;
    static SerialPort com;
    public static Enumeration printport = CommPortIdentifier.getPortIdentifiers();

    @FXML
    private void initialize() {
        comboBox.getItems().removeAll(comboBox.getItems());
        comboBox.getItems().addAll("COM1", "COM2", "COM3", "COM4", "COM5", "COM6", "COM7", "COM8", "COM9", "COM10");
        comboBox.getSelectionModel().select("COM8");
        sendButton.setDisable(true);
        Connected = false;
    }

    public void SendButtonClickEvent() throws Exception {
        Data = textField.getText();
        System.out.println("Data: " + Data);
        printLine(Data, OStream);
    }

    @FXML
    public void pressedEnterKey(KeyEvent event) throws Exception {
        if(event.getCode().equals(KeyCode.ENTER) && Connected == true) {
            SendButtonClickEvent();
        }
    }

    public void ConnectButtonClickEvent() throws Exception {
        if (Connected == false) {
            COMPort = (String) comboBox.getValue();
            System.out.println("Selected COM: " + COMPort);
            printport = CommPortIdentifier.getPortIdentifiers();
            OStream = getStream(COMPort);
            sendButton.setDisable(false);
            Connected = true;
            connectButton.setText("Disconnect");
        }
        else {
            OStream.flush();
            OStream.close();
            com.close();
            System.out.println("Disconnected");
            sendButton.setDisable(true);
            Connected = false;
            connectButton.setText("Connect");
        }
    }

    public static OutputStream getStream(String port) throws Exception {
        while (printport.hasMoreElements()) {
            CommPortIdentifier portid = (CommPortIdentifier) printport.nextElement();
            if (portid.getPortType() == CommPortIdentifier.PORT_SERIAL) {
                if (portid.getName().equals(port)) {
                    System.out.println("port = " + port);
                    com = (SerialPort) portid.open("ListPortClass",300);
                    com.setSerialPortParams(baud, SerialPort.DATABITS_8,SerialPort.STOPBITS_1, SerialPort.PARITY_NONE);
                    OutputStream output = com.getOutputStream();
                    System.out.println("Connection Successful");
                    return output;
                }
            }
        }
        return null;
    }

    public void printLine(String line, OutputStream outputStream) throws IOException {
        byte[] bytes = line.getBytes("UTF-8");
        outputStream.write(bytes);
        newLine(outputStream);
    }

    public void newLine(OutputStream outputStream) throws IOException {
        outputStream.write(new byte[] { 10, 13 });
    }

}
