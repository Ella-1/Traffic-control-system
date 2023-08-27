#define echoPin1 29
#define trigPin1 28
#define echoPin2 31
#define trigPin2 30
#define echoPin3 33
#define trigPin3 32
#define echoPin4 35
#define trigPin4 34

#include <LiquidCrystal.h>
LiquidCrystal lcd(22, 23, 24, 25, 26, 27);

int Red1 = 0;
int Yellow1 = 1;
int Green1 = 2 ;
int Red2 = 3;
int Yellow2 = 4;
int Green2 = 5;
int Red3 = 6;
int Yellow3 = 7;
int Green3 = 8;
int Red4 = 9;
int Yellow4 = 10;
int Green4 = 11;

long duration1;
int distance1;
long duration2;
int distance2;
long duration3;
int distance3;
long duration4;
int distance4;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);

  pinMode(Red1, OUTPUT);
  pinMode(Green1, OUTPUT);
  pinMode(Yellow1, OUTPUT);
  pinMode(Red2, OUTPUT);
  pinMode(Green2, OUTPUT);
  pinMode(Yellow2, OUTPUT);
  pinMode(Red3, OUTPUT);
  pinMode(Green3, OUTPUT);
  pinMode(Yellow3, OUTPUT);
  pinMode(Red4, OUTPUT);
  pinMode(Green4, OUTPUT);
  pinMode(Yellow4, OUTPUT);

  lcd.begin(16, 2);
}

void loop() {
  
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  Serial.println("i am here");
  Serial.println(duration1);
  distance1 = duration1 * 0.034 / 2;

  if (distance1 > 0 && distance1 < 500) {
    digitalWrite(Green1, HIGH);
    digitalWrite(Red2, HIGH);
    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("3 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("2 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();

    digitalWrite(Yellow1, HIGH);
    digitalWrite(Yellow2, HIGH);
    digitalWrite(Green1, HIGH);
    digitalWrite(Red2, HIGH);


    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    delay(1000);
    digitalWrite(Yellow1, LOW);
    digitalWrite(Yellow2, LOW);
    digitalWrite(Green1, LOW);
    digitalWrite(Red2, LOW);
    digitalWrite(Red3, LOW);
    digitalWrite(Red4, LOW);
    delay(1000);
  }

  else if (distance1 > 500 && distance1 < 900) {

    digitalWrite(Green1, HIGH);
    digitalWrite(Red2, HIGH);
    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("2 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();
    digitalWrite(Yellow1, HIGH);
    digitalWrite(Yellow2, HIGH);
    digitalWrite(Green1, HIGH);
    digitalWrite(Red2, HIGH);


    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    delay(1000);
    digitalWrite(Yellow1, LOW);
    digitalWrite(Yellow2, LOW);
    digitalWrite(Green1, LOW);
    digitalWrite(Red2, LOW);
    digitalWrite(Red3, LOW);
    digitalWrite(Red4, LOW);
    delay(1000);

  }

  else if (distance1 > 900) {

    digitalWrite(Green1, HIGH);
    digitalWrite(Red2, HIGH);
    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();
    digitalWrite(Yellow1, HIGH);
    digitalWrite(Yellow2, HIGH);
    digitalWrite(Green1, HIGH);
    digitalWrite(Red2, HIGH);


    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    delay(1000);
    digitalWrite(Yellow1, LOW);
    digitalWrite(Yellow2, LOW);
    digitalWrite(Green1, LOW);
    digitalWrite(Red2, LOW);
    digitalWrite(Red3, LOW);
    digitalWrite(Red4, LOW);
    delay(1000);
  }

  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = duration2 * 0.034 / 2;

  if (distance2 > 0 && distance2 < 500) {
    digitalWrite(Green2, HIGH);
    digitalWrite(Red1, HIGH);
    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("3 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("2 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();
  

    digitalWrite(Yellow2, HIGH);
    digitalWrite(Yellow3, HIGH);
    digitalWrite(Green2, HIGH);
    digitalWrite(Red1, HIGH);


    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    delay(1000);
    digitalWrite(Yellow2, LOW);
    digitalWrite(Yellow3, LOW);
    digitalWrite(Green2, LOW);
    digitalWrite(Red1, LOW);
    digitalWrite(Red3, LOW);
    digitalWrite(Red4, LOW);
    delay(1000);
  }

  else if (distance2 > 500 && distance2 < 900) {

    digitalWrite(Green2, HIGH);
    digitalWrite(Red1, HIGH);
    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("2 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();
    digitalWrite(Yellow2, HIGH);
    digitalWrite(Yellow3, HIGH);
    digitalWrite(Green2, HIGH);
    digitalWrite(Red1, HIGH);


    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    delay(1000);
    digitalWrite(Yellow2, LOW);
    digitalWrite(Yellow3, LOW);
    digitalWrite(Green2, LOW);
    digitalWrite(Red1, LOW);
    digitalWrite(Red3, LOW);
    digitalWrite(Red4, LOW);
    delay(1000);

  }

  else if (distance2 > 900) {

    digitalWrite(Green2, HIGH);
    digitalWrite(Red1, HIGH);
    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();
    digitalWrite(Yellow2, HIGH);
    digitalWrite(Yellow3, HIGH);
    digitalWrite(Green2, HIGH);
    digitalWrite(Red1, HIGH);


    digitalWrite(Red3, HIGH);
    digitalWrite(Red4, HIGH);
    delay(1000);
    digitalWrite(Yellow2, LOW);
    digitalWrite(Yellow3, LOW);
    digitalWrite(Green2, LOW);
    digitalWrite(Red1, LOW);
    digitalWrite(Red3, LOW);
    digitalWrite(Red4, LOW);
    delay(1000);
  }

  digitalWrite(trigPin3, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
  distance3 = duration3 * 0.034 / 2;

  if (distance3 > 0 && distance3 < 500) {
    digitalWrite(Green3, HIGH);
    digitalWrite(Red1, HIGH);
    digitalWrite(Red2, HIGH);
    digitalWrite(Red4, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("3 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("2 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();

    digitalWrite(Yellow3, HIGH);
    digitalWrite(Yellow4, HIGH);
    digitalWrite(Green3, HIGH);
    digitalWrite(Red1, HIGH);


    digitalWrite(Red2, HIGH);
    digitalWrite(Red4, HIGH);
    delay(1000);
    digitalWrite(Yellow3, LOW);
    digitalWrite(Yellow4, LOW);
    digitalWrite(Green3, LOW);
    digitalWrite(Red1, LOW);
    digitalWrite(Red2, LOW);
    digitalWrite(Red4, LOW);
    delay(1000);
  }

  else if (distance3 > 500 && distance3 < 900) {

    digitalWrite(Green3, HIGH);
    digitalWrite(Red1, HIGH);
    digitalWrite(Red2, HIGH);
    digitalWrite(Red4, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("2 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();
    digitalWrite(Yellow3, HIGH);
    digitalWrite(Yellow4, HIGH);
    digitalWrite(Green3, HIGH);
    digitalWrite(Red1, HIGH);


    digitalWrite(Red2, HIGH);
    digitalWrite(Red4, HIGH);
    delay(1000);
    digitalWrite(Yellow3, LOW);
    digitalWrite(Yellow4, LOW);
    digitalWrite(Green3, LOW);
    digitalWrite(Red1, LOW);
    digitalWrite(Red2, LOW);
    digitalWrite(Red4, LOW);
    delay(1000);

  }

  else if (distance3 > 900) {

    digitalWrite(Green3, HIGH);
    digitalWrite(Red1, HIGH);
    digitalWrite(Red2, HIGH);
    digitalWrite(Red4, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();
    digitalWrite(Yellow3, HIGH);
    digitalWrite(Yellow4, HIGH);
    digitalWrite(Green3, HIGH);
    digitalWrite(Red1, HIGH);


    digitalWrite(Red2, HIGH);
    digitalWrite(Red4, HIGH);
    delay(1000);
    digitalWrite(Yellow3, LOW);
    digitalWrite(Yellow4, LOW);
    digitalWrite(Green3, LOW);
    digitalWrite(Red1, LOW);
    digitalWrite(Red2, LOW);
    digitalWrite(Red4, LOW);
    delay(1000);
  }

  digitalWrite(trigPin4, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin4, LOW);
  duration4 = pulseIn(echoPin4, HIGH);
  distance4 = duration4 * 0.034 / 2;

  if (distance4 > 0 && distance4 < 500) {
    digitalWrite(Green4, HIGH);
    digitalWrite(Red1, HIGH);
    digitalWrite(Red2, HIGH);
    digitalWrite(Red3, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("3 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("2 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();

    digitalWrite(Yellow4, HIGH);
    digitalWrite(Yellow1, HIGH);
    digitalWrite(Green4, HIGH);
    digitalWrite(Red1, HIGH);


    digitalWrite(Red2, HIGH);
    digitalWrite(Red3, HIGH);
    delay(1000);
    digitalWrite(Yellow4, LOW);
    digitalWrite(Yellow1, LOW);
    digitalWrite(Green4, LOW);
    digitalWrite(Red1, LOW);
    digitalWrite(Red2, LOW);
    digitalWrite(Red3, LOW);
    delay(1000);
  }

  else if (distance4 > 500 && distance4 < 900) {

    digitalWrite(Green4, HIGH);
    digitalWrite(Red1, HIGH);
    digitalWrite(Red2, HIGH);
    digitalWrite(Red3, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("2 secounds");
    delay(1000);
    lcd.clear();
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();
    digitalWrite(Yellow4, HIGH);
    digitalWrite(Yellow1, HIGH);
    digitalWrite(Green4, HIGH);
    digitalWrite(Red1, HIGH);


    digitalWrite(Red2, HIGH);
    digitalWrite(Red3, HIGH);
    delay(1000);
    digitalWrite(Yellow4, LOW);
    digitalWrite(Yellow1, LOW);
    digitalWrite(Green4, LOW);
    digitalWrite(Red1, LOW);
    digitalWrite(Red2, LOW);
    digitalWrite(Red3, LOW);
    delay(1000);

  }

  else if (distance4 > 900) {

    digitalWrite(Green4, HIGH);
    digitalWrite(Red1, HIGH);
    digitalWrite(Red2, HIGH);
    digitalWrite(Red3, HIGH);
    lcd.print("Time remaining");
    lcd.setCursor(0, 1);
    lcd.print("1 secounds");
    delay(1000);
    lcd.clear();
    digitalWrite(Yellow4, HIGH);
    digitalWrite(Yellow1, HIGH);
    digitalWrite(Green4, HIGH);
    digitalWrite(Red1, HIGH);


    digitalWrite(Red2, HIGH);
    digitalWrite(Red3, HIGH);
    delay(1000);
    digitalWrite(Yellow4, LOW);
    digitalWrite(Yellow1, LOW);
    digitalWrite(Green4, LOW);
    digitalWrite(Red1, LOW);
    digitalWrite(Red2, LOW);
    digitalWrite(Red3, LOW);
    delay(1000);
  }
}