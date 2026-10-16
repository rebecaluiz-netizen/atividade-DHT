#include <Arduino.h>
#include <DHT.h>
#include <LiquidCrystal_I2C.h>

#define pinDHT 5
#define tipoDHT DHT22
#define pinLed 2
#define pinLed2 4
#define pinLed3 15

int intensidade = 0;
int intensidade2 = 0;
int intensidade3 = 0;
bool verifica;
bool verifica2;
bool verifica3;

int valorInicial = 26;
int valorFinal;

bool cicloCompleto;

DHT medidorzinho(pinDHT, tipoDHT);
LiquidCrystal_I2C lcd(0x27, 20, 4);

unsigned long tempoAnterior = 0;
unsigned long intervalo = 160;

void setup()
{
  Serial.begin(115200);
  // analogWrite(pinLed, 0);
  // analogWrite(pinLed, 4);
  // analogWrite(pinLed, 15);

   pinMode(pinLed, OUTPUT);
   pinMode(pinLed2, OUTPUT);
   pinMode(pinLed3, OUTPUT);

   valorFinal = map(valorInicial, 22, 30, 0, 255);
   Serial.println("Valor final");

   medidorzinho.begin();
  // Serial.println("Teste de DHT22");

  // lcd.init();
  // lcd.backlight();

  // lcd.setCursor(0, 0);
  // lcd.print("Temp em C: ");

  // lcd.setCursor(0, 1);
  // lcd.print("Temp em F: ");

  // lcd.setCursor(0, 2);
  // lcd.print("Umidade: ");
}

void loop()
{
  // float tempC =  medidorzinho.readTemperature();
  // float tempF = medidorzinho.readTemperature(true);
  // float umi = medidorzinho.readHumidity();

  // Serial.print("Tem em C: ");
  // Serial.println(tempC);
  // Serial.print("Tem em F: ");
  // Serial.println(tempF);
  // Serial.print("Umidade: ");
  // Serial.println(umi);
  // Serial.println("------------------");

  // delay(3000);

  // Ex1
  //  float tempC =  medidorzinho.readTemperature();
  //  float tempF = medidorzinho.readTemperature(true);
  //  float umi = medidorzinho.readHumidity();

  // lcd.setCursor(0, 0);
  // lcd.print("Temp em C: ");
  // lcd.print(tempC);

  // lcd.setCursor(0, 1);
  // lcd.print("Temp em F: ");
  // lcd.print(tempF);

  // lcd.setCursor(0, 2);
  // lcd.print("Umidade: ");
  // lcd.print(umi);

  // Ex1
  //Etapa 1
  //  unsigned long tempoAtual = millis();

  // float tempC =  medidorzinho.readTemperature();
  // float tempF = medidorzinho.readTemperature(true);
  // float umi = medidorzinho.readHumidity();

  // if(tempoAtual - TempoAnterior >= intervalo)
  // {
  // lcd.setCursor(11, 0);
  // lcd.print(tempC);

  // lcd.setCursor(11, 1);
  // lcd.print(tempF);

  // lcd.setCursor(9, 2);
  // lcd.print(umi);
  // }

  // Ex3
  //  analogWrite(pinLed, intensidade);
  //  intensidade += 5;

  // if(intensidade == 255){
  //   intensidade = 0;
  // }

  //Etapa 2
  // analogWrite(pinLed, intensidade);

  // if (intensidade <= 0)
  // {
  //   verifica = true;
  // }

  // if (intensidade >= 255)
  // {
  //   verifica = false;
  // }

  // if (verifica = true)
  // {
  //   intensidade += 5;
  // }

  // else
  // {
  //   intensidade -= 5;
  // }

  //Etapa 3
  // unsigned long tempoAtual = millis();

  // if (intensidade <= 0)
  // {
  //   verifica = true;
  // }

  // if (intensidade >= 255)
  // {
  //   verifica = false;
  // }

  // if (tempoAtual - TempoAnterior >= intervalo)
  // {
  //   TempoAnterior = tempoAtual;

  //   if (verifica == true)
  //   {
  //     intensidade += 5;
  //   }
  //   else
  //   {
  //     intensidade -= 5;
  //   }
  //   Serial.println(intensidade);
  //   analogWrite(pinLed, intensidade);
  // }


//Etapa 4  
//    if (intensidade >= 255 && !cicloCompleto)
//   {
//     verifica2 = true;
//   }

//   if (intensidade2 >= 255 && !cicloCompleto)
//   {
//     verifica3 = true;
//   }

//   if (intensidade3 >= 255)
//   {
//     cicloCompleto = true;
//     verifica3 = false;
//   }

//   if (intensidade3 <= 0 && cicloCompleto)
//   {
//     verifica2 = false;
//   }

//   if (intensidade2 <= 0 && cicloCompleto)
//   {
//     verifica = false;
//   }

//   if (intensidade <= 0)
//   {
//     verifica = true;
//     cicloCompleto = false;
//   }


// unsigned long tempoAtual = millis();

//   if (tempoAtual - tempoAnterior >= intervalo)
//   {
//     tempoAnterior = tempoAtual;

//     if (verifica == true && intensidade < 255)
//     {
//       intensidade += 5;
//     }
//     else if (verifica == false && intensidade > 0)
//     {
//       intensidade -= 5;
//     }

//     if (verifica2 == true && intensidade2 < 255)
//     {
//       intensidade2 += 5;
//     }
//     else if (verifica2 == false && intensidade2 > 0)
//     {
//       intensidade2 -= 5;
//     }

//     if (verifica3 == true && intensidade3 < 255)
//     {
//       intensidade3 += 5;
//     }
//     else if (verifica3 == false && intensidade3 > 0)
//     {
//       intensidade3 -= 5; 
//     }

//     Serial.println(intensidade);
//     Serial.println(intensidade2);
//     Serial.println(intensidade3);

//     analogWrite(pinLed, intensidade);
//     analogWrite(pinLed2, intensidade2);
//     analogWrite(pinLed3, intensidade3);
//   }



  //Ex2
  //Etapa 1
  // float tempC =  medidorzinho.readTemperature();
  // float umi = medidorzinho.readHumidity();


  // if (tempC >= 26)
  // {
  //   digitalWrite(pinLed2, HIGH);
  // }

  // else{
  //    digitalWrite(pinLed2, LOW);
  // }

  // if (umi >= 60)
  // {
  //   digitalWrite(pinLed3, HIGH);
  // }

  // else{
  //    digitalWrite(pinLed3, LOW);
  // }

  // Serial.println(tempC);
  // Serial.println(umi);


  //Etapa 2
  

  
}
