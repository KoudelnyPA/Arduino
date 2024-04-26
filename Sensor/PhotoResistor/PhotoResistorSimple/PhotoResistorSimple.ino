/* Выключаем светодиод L при хорошей освещенности 
Схему подключения смотри на картинке
Используем сопротивление номиналом 1-10К
*/

#define PIN_LED 13
#define PIN_PHOTO_SENSOR A0
#define IS_LIGHT_BOUND 300

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  int val = analogRead(PIN_PHOTO_SENSOR);
  Serial.println(val);
  
  if (val > IS_LIGHT_BOUND) {
    digitalWrite(PIN_LED, LOW);
  } else {
    digitalWrite(PIN_LED, HIGH);
  }
  delay(1000);
}
