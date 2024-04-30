/* Подключение RGB-светодиода (с общим катодом)

Два раза  в секунду светодиод произвольно меняет цвет

Для подключения RGB-LED используются один резистор номиналом 220 Ом
(красный цвет) и два резистора номиналом 150 Ом (синий и зеленый цвета)
*/

#define PIN_RED 9
#define PIN_BLUE 11
#define PIN_GREEN 10

void setup() {
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
}

void loop() {
  changeColor();
  delay(500);
}

void changeColor() {
  byte r, g, b;
  int color = random(8);
  switch (color) {
    case 1: // Красный
      r=255; g=0; b=0; break;
    case 2: // Зеленый
      r=0; g=255; b=0; break;
    case 3: // Синий
      r=0; g=0; b=255; break;  
    case 4: // Пурпурный (Красный + Синий)
      r=127; g=0; b=127; break;
    case 5: // Бирюзовый (Синий + Зеленый)
      r=0; g=127; b=127; break;   
    case 6: // Оранжевый (Красный + Зеленый)
      r=127; g=127; b=0; break;  
    case 7: // Белый (Красный + Зеленый + Синий)
      r=85; g=85; b=85; break;  
    default:
      r=0; g=0; b=0; break;
  }
  setRGBColor(r, g, b);
}

void setRGBColor(byte red, byte blue, byte green) {
  analogWrite(PIN_RED, red);
  analogWrite(PIN_BLUE, blue);
  analogWrite(PIN_GREEN, green);
}