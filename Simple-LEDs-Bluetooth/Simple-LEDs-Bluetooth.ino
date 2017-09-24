//#include <MaxMatrix.h>
//
//int DIN = 7;   // DIN pin of MAX7219 module
//int CLK = 6;   // CLK pin of MAX7219 module
//int CS = 5;    // CS pin of MAX7219 module
//int maxInUse = 1;
//
//MaxMatrix m(DIN, CS, CLK, maxInUse);
//
//char A[] = {4, 8,
//            B01111110,
//            B00010001,
//            B00010001,
//            B01111110,
//           };
//char B[] = {4, 8,
//            B01111111,
//            B01001001,
//            B01001001,
//            B00110110,
//           };
//char smile01[] = {8, 8,
//                  B00111100,
//                  B01000010,
//                  B10010101,
//                  B10100001,
//                  B10100001,
//                  B10010101,
//                  B01000010,
//                  B00111100
//                 };
//char smile02[] = {8, 8,
//                  B00111100,
//                  B01000010,
//                  B10010101,
//                  B10010001,
//                  B10010001,
//                  B10010101,
//                  B01000010,
//                  B00111100
//                 };
//char smile03[] = {8, 8,
//                  B00111100,
//                  B01000010,
//                  B10100101,
//                  B10010001,
//                  B10010001,
//                  B10100101,
//                  B01000010,
//                  B00111100
//                 };

const int ledPin1 = 9;
const int ledPin2 = 10;
const int ledPin3 = 11;
const int ledPin4 = 12;
const int ledPin5 = 13;

//int led1state;
//int led2state;
//int led3state;
//int led4state;
//int led5state;

//byte dataRecieved;
int fromBT;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  //  led1state = 255;
  //  led2state = 255;
  //  led3state = 255;
  //  led4state = 255;
  //  led5state = 255;
  analogWrite(ledPin1, 255);
  analogWrite(ledPin2, 255);
  analogWrite(ledPin3, 255);
  analogWrite(ledPin4, 255);
  analogWrite(ledPin5, 255);

  //  m.init(); // MAX7219 initialization
  //  m.setIntensity(8); // initial led matrix intensity, 0-15
}

void loop() {
  delay(5);
  if (Serial.available() > 0) {
    fromBT = Serial.read();
    switch (fromBT) {
      case ' ':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 0);
        break;
      case '!':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 255);
        break;
      case '"':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 0);
        break;
      case '#':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 255);
        break;
      case '$':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 0);
        break;
      case '%':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 255);
        break;
      case '&':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 0);
        break;
      case '\'':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 255);
        break;
      case '(':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 0);
        break;
      case ')':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 255);
        break;
      case '*':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 0);
        break;
      case '+':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 255);
        break;
      case ',':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 0);
        break;
      case '-':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 255);
        break;
      case '.':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 0);
        break;
      case '/':
        analogWrite(ledPin1, 0);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 255);
        break;
      case '0':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 0);
        break;
      case '1':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 255);
        break;
      case '2':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 0);
        break;
      case '3':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 255);
        break;
      case '4':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 0);
        break;
      case '5':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 255);
        break;
      case '6':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 0);
        break;
      case '7':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 0);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 255);
        break;
      case '8':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 0);
        break;
      case '9':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 255);
        break;
      case ':':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 0);
        break;
      case ';':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 0);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 255);
        break;
      case '<':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 0);
        break;
      case '=':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 0);
        analogWrite(ledPin5, 255);
        break;
      case '>':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 0);
        break;
      case '?':
        analogWrite(ledPin1, 255);
        analogWrite(ledPin2, 255);
        analogWrite(ledPin3, 255);
        analogWrite(ledPin4, 255);
        analogWrite(ledPin5, 255);
        break;

    }
    //    led1state = Serial.parseInt();
    //    led2state = Serial.parseInt();
    //    led3state = Serial.parseInt();
    //    led4state = Serial.parseInt();
    //    led5state = Serial.parseInt();
  }

  //  analogWrite(ledPin1, led1state);
  //  analogWrite(ledPin2, led2state);
  //  analogWrite(ledPin3, led3state);
  //  analogWrite(ledPin4, led4state);
  //  analogWrite(ledPin5, led5state);

  //*****************************

  //  m.setDot(6, 2, true);
  //  delay(1000);
  //  m.setDot(6, 3, true);
  //  delay(1000);
  //  m.clear(); // Clears the display
  //  for (int i = 0; i < 8; i++) {
  //    m.setDot(i, i, true);
  //    delay(300);
  //  }
  //  m.clear();
  //  // Displaying the character at x,y (upper left corner of the character)
  //  m.writeSprite(2, 0, A);
  //  delay(1000);
  //  m.writeSprite(2, 0, B);
  //  delay(1000);
  //  m.writeSprite(0, 0, smile01);
  //  delay(1000);
  //
  //  m.writeSprite(0, 0, smile02);
  //  delay(1000);
  //
  //  m.writeSprite(0, 0, smile03);
  //  delay(1000);
  //
  //  for (int i = 0; i < 8; i++) {
  //    m.shiftLeft(false, false);
  //    delay(300);
  //  }
  //  m.clear();
}


