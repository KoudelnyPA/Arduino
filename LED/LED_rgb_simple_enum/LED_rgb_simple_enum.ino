/* Подключение RGB-светодиода (с общим катодом)

Два раза  в секунду светодиод произвольно меняет цвет
Цвета перечислены в enum

Для подключения RGB-LED используются один резистор номиналом 220 Ом
(красный цвет) и два резистора номиналом 150 Ом (синий и зеленый цвета)
*/

#define PIN_RED 9
#define PIN_BLUE 11
#define PIN_GREEN 10
#define MAX_COLORS 8

enum Color : uint8_t {
  red=1,
  orange,
  yellow,
  green,
  cyan,
  blue,
  violet,
  white
};

void setup() {
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
}

void loop() {
  int color = random(MAX_COLORS);
  changeColor((Color)((uint8_t)color + 1));
  delay(500);
}

void changeColor(Color color) {
  byte r, g, b;
  switch (color) {
    case red: // Красный
      r=255; g=0; b=0; break;
    case green: // Зеленый
      r=0; g=255; b=0; break;
    case blue: // Синий
      r=0; g=0; b=255; break;  
    case violet: // Пурпурный (Красный + Синий)
      r=127; g=0; b=127; break;
    case cyan: // Бирюзовый (Синий + Зеленый)
      r=0; g=127; b=127; break;   
    case orange: // Оранжевый (Красный + Зеленый)
      r=255; g=127; b=0; break;  
    case white: // Белый (Красный + Зеленый + Синий)
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