package Bitirme;

import javafx.fxml.FXML;
import javafx.scene.image.ImageView;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.AnchorPane;

import java.awt.*;
import java.io.File;
import java.io.IOException;

public class Controller {

    @FXML
    private ImageView im1, im2, im3, im4;

    @FXML
    private AnchorPane bottom_bar1, bottom_bar2, bottom_bar3;

    @FXML
    private void InputFunction() {
        if (bottom_bar1.isVisible() == true) {
            bottom_bar1.setVisible(false);
        } else {
            bottom_bar1.setVisible(true);
            bottom_bar2.setVisible(false);
            bottom_bar3.setVisible(false);
        }
    }

    @FXML
    private void SettingsFunction() {
        if (bottom_bar2.isVisible() == true) {
            bottom_bar2.setVisible(false);
        } else {
            bottom_bar1.setVisible(false);
            bottom_bar2.setVisible(true);
            bottom_bar3.setVisible(false);
        }
    }

    @FXML
    private void AboutFunction() {
        if (bottom_bar3.isVisible() == true) {
            bottom_bar3.setVisible(false);
        } else {
            bottom_bar1.setVisible(false);
            bottom_bar2.setVisible(false);
            bottom_bar3.setVisible(true);
        }
    }

    @FXML
    private void pdf() {
        try {
            File myFile = new File("src/sample.pdf");
            Desktop.getDesktop().open(myFile);
        } catch (IOException ex) {
            // no application registered for PDFs
            // perhaps provide a weblink ..
        }
    }


    @FXML
    public void Exit_Program() {
        System.exit(0);
    }
}
