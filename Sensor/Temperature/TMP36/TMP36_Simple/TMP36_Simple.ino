/* Прстой пример подключения аналогового датчика температуры TMP36
ВНИМАНИЕ! Скетч не проверял - нет в наличии датчика TMP36

Отображение в мониторе значения температуры в градусах Цельсия 
Формула: T = (Uвых - 500 мВ) / 10

Датчика температуры TMP36 подключен к аналоговому выводу A0.
Полную схему подключения смотри на картинке
*/
#define ANALOG_PIN_TEMP A0 
#define REFERENCE_VOLTAGE 5000 


void setup()
{
  Serial.begin(9600);           
}

void loop() {
  int val = analogRead(ANALOG_PIN_TEMP); 
  int voltage = map(val, 0, 1023, 0, REFERENCE_VOLTAGE);
  float temp = (voltage - 500) / 10.0; 
  Serial.println(val);  
  delay(1000);
}