#include <Keyboard.h>
//Made by _eg0rian_

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);//тут пины которые используются кнопками
  Keyboard.begin();
}

void loop() {
  //если кнопка нажата то
  if (digitalRead(2) == LOW)
    Keyboard.print("Hello!");
  if (digitalRead(3) == LOW)
    Keyboard.print("Я балбес");
  if (digitalRead(4) == LOW)
    Keyboard.print("И ты тоже");
  if (digitalRead(5) == LOW)
    Keyboard.print("Вот");
  if (digitalRead(6) == LOW)
    Keyboard.print("Я люблю кушать ");
  if (digitalRead(7) == LOW)
    Keyboard.print("И какать");
  if (digitalRead(8) == LOW)
    Keyboard.print("Вот");
  if (digitalRead(9) == LOW)
    Keyboard.print("Прошу прощения.У меня отрыжка вышла");
  if (digitalRead(10) == LOW)
    Keyboard.print("Я дурачек!");
  if (digitalRead(11) == LOW)
    Keyboard.print("Это правда");
  if (digitalRead(12) == LOW)
    Keyboard.print("НУ ПАКЕДА");
  if (digitalRead(13) == LOW)
    Keyboard.print("Hello");
    {
    }
    }
