/* Экономичная схема измерения освещенности
Схему подключения смотри на картинке
Используем сопротивление номиналом 1-10К
*/

#define POWER_PIN 12
#define PHOTO_SENSOR_PIN A0

void setup() {
  Serial.begin(9600);
  pinMode(POWER_PIN, OUTPUT);
}

void loop() {
  Serial.println(takeReading());
  delay(500);
}

int takeReading() {
  digitalWrite(POWER_PIN, HIGH); // Подаем напряжение на фоторезистор
  delay(10); // фоторезистору требуется некоторое время
  int reading = analogRead(PHOTO_SENSOR_PIN);
  digitalWrite(POWER_PIN, LOW); // Отключаем фоторезистор
  return reading;
}
