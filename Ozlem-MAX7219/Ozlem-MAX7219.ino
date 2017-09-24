#include <MaxMatrix.h>    // MAX7219'i kullanabilmek için gerekli bir kütüphane
                          // bu kütüphaneyi önceden arduino programına yüklemek gerekiyor
                          // bunu ben hallederim (teamviewer üzerinden falan)

int DIN = 7;         // MAX7219 DIN pini
int CLK = 6;         // MAX7219 CLK pini
int CS = 5;          // MAX7219 CS pini
int maxInUse = 1;    // Kullanılan MAX7219 sayısı

MaxMatrix m(DIN, CS, CLK, maxInUse);    // MAX7219 için gerekli (bununla işin olmiyacak görmezden gel)

char A[] = {4, 8,
            // Burada 4 oluşacak şeklin genişliği
            // 8 ise oluşacak şeklin uzunluğu
            B01111110,
            B00010001,
            B00010001,
            B01111110,
            // Burada A karakteri çizilmeye çalışılmış
            // Başını sağa eğerek bakarsan görebilirsin
           };
char B[] = {4, 8,
            // Burada 4 oluşacak şeklin genişliği
            // 8 ise oluşacak şeklin uzunluğu
            B01111111,
            B01001001,
            B01001001,
            B00110110,
            // Burada B karakteri çizilmeye çalışılmış
            // Başını sağa eğerek bakarsan görebilirsin
           };
char smile01[] = {8, 8,
                  // Burada ilk 8 oluşacak şeklin genişliği
                  // ikinci 8 ise oluşacak şeklin uzunluğu
                  B00111100,
                  B01000010,
                  B10010101,
                  B10100001,
                  B10100001,
                  B10010101,
                  B01000010,
                  B00111100
                  // Burada (: (gülen yüz) çizilmeye çalışılmış
                  // Başını sağa eğerek bakarsan görebilirsin
                 };
char smile02[] = {8, 8,
                  // Burada ilk 8 oluşacak şeklin genişliği
                  // ikinci 8 ise oluşacak şeklin uzunluğu
                  B00111100,
                  B01000010,
                  B10010101,
                  B10010001,
                  B10010001,
                  B10010101,
                  B01000010,
                  B00111100
                  // Burada |: (-_- gibi bir yüz) çizilmeye çalışılmış
                  // Başını sağa eğerek bakarsan görebilirsin
                 };
char smile03[] = {8, 8,
                  // Burada ilk 8 oluşacak şeklin genişliği
                  // ikinci 8 ise oluşacak şeklin uzunluğu
                  B00111100,
                  B01000010,
                  B10100101,
                  B10010001,
                  B10010001,
                  B10100101,
                  B01000010,
                  B00111100
                  // Burada ): (mutsuz yüz) çizilmeye çalışılmış
                  // Başını sağa eğerek bakarsan görebilirsin
                 };

int fromBT;

void setup() {
  Serial.begin(9600);   //  dışarıdan gelen veriler ile işlem yapmak amacıyla baud hızı
  m.init();             //  MAX7219 initialization (MAX7219 parçasını başlatma)
  m.setIntensity(8);    // (MAX7219 daki LED'lerin parlaklık ayarı (0-15 arası değerler verilebilir) )
}

void loop() {
  delay(5);   // sağlıklı çalışması amacıyla beklettik
  if (Serial.available() > 0) {   // dışarıdan veri geldiğinde if içerine gir
    fromBT = Serial.read();       // dışarıdan gelen veriyi oku
    switch (fromBT) {             // dışarıdan gelen veriye göre işlem yap
      case ' ':
        //islem
        break;
      case '!':
        //islem
        break;
      case '"':
        //islem
        break;
      case '#':
        //islem
        break;
      case '$':
        //islem
        break;
      case '%':
        //islem
        break;
      case '&':
        //islem
        break;
      case '\'':
        //islem
        break;
      case '(':
        //islem
        break;
      case ')':
        //islem
        break;
      case '*':
        //islem
        break;
      case '+':
        //islem
        break;
      case ',':
        //islem
        break;
      case '-':
        //islem
        break;
      case '.':
        //islem
        break;
      case '/':
        //islem
        break;
      case '0':
        //islem
        break;
      case '1':
        //islem
        break;
      case '2':
        //islem
        break;
      case '3':
        //islem
        break;
      case '4':
        //islem
        break;
      case '5':
        //islem
        break;
      case '6':
        //islem
        break;
      case '7':
        //islem
        break;
      case '8':
        //islem
        break;
      case '9':
        //islem
        break;
      case ':':
        //islem
        break;
      case ';':
        //islem
        break;
      case '<':
        //islem
        break;
      case '=':
        //islem
        break;
      case '>':
        //islem
        break;
      case '?':
        //islem
        break;
    }
  }  
}

/*  Gerekirse Diye Bagzi Ozel Yontemler

  m.setDot(6, 2, true); // 6. satır 2. sütundaki LED'i yak (söndürmek için false yaz)

  m.clear(); // Tüm LED'leri söndür

  delay(1000); // 1000 milisaniye (1 saniye) bekle - kullanmamaya çalış!

  m.writeSprite(2, 0, A);           // 2. sütun 0. satırdan itibaren A'yı çiz
  m.writeSprite(2, 0, B);           // 2. sütun 0. satırdan itibaren B'yi çiz
  m.writeSprite(0, 0, smile01);     // 0. sütun 0. satırdan itibaren smile01'i çiz
  m.writeSprite(0, 0, smile02);     // 0. sütun 0. satırdan itibaren smile02'yi çiz
  m.writeSprite(0, 0, smile03);     // 0. sütun 0. satırdan itibaren smile03'ü çiz
  
*/



