#include <POP32.h>
#define s0 in(0)
#define s1 in(1)
#define s2 in(2)
#define s3 in(3)
#define s4 in(7)
#define s5 in(6)
#define s6 in(5)
#define s7 in(16)

#define sL in(PB0)
#define sR in(PB0)  //////////cant use
#define W == 1
#define B == 0
int error = 0, old_error = 0, kp = 0, kd = 0, sp_int = 0;
int error_b = 0, old_error_b = 0, kp_b = 0, kd_b = 0, sp_int_b = 0;

void setup() {
  // put your setup code here, to run once:
  fixf();
  kp = 8;
  kd = 0;
  sp_int = 50;
  servo(1, 90);
  servo(2, 90);
  delay(200);
  servo(1, -1);
  servo(2, -1);
  beep();
  sw_ok_press();
  // DropB();
  // m_b(-100,100);
  first();
  second();
  third();
  forth();
  fifth();
  sixth();
  seventh();
  eight();
  beep();
}
void loop() {
  CheckSensors();
}


void first() {
  fixf();
  fixb();
  kp = 7;
  kd = 2;
  t_ff();
  beep();
  sp_int = 50;
  t_wst();
  m_f(-100,-100);
  delay(90);
  m_f(0,0);
  delay(100);
  DropF();
}

void second(){
  sp_int_b = 35;
  kp_b = 19;
  kd_b = 4;
  t_bl();
  beep();
  sp_int_b = 27;
  kp_b = 12;
  kd_b = 2;
  t_blsecond();
  beep();
  t_blsecond();
  m_b(30,30);
  delay(40);
  m_f(-100,-100);
  delay(20);
  m_f(0,0);
  delay(100);
  DropB();
  m_b(70,70);
  delay(30);
  m_b(0,0);
  delay(300);

}

void third(){
  sp_int = 45;
  t_flthird();
  sp_int = 30;
  t_flthird2();
  t_wst3();
  m_f(-100,-100);
  delay(90);
  m_f(0,0);
  delay(300);
  DropF();
  delay(300);
  
}

void forth(){
  t_bl();
  t_blforth2();
  m_f(-100,-100);
  delay(20);
  m_f(0,0);
  delay(100);
  DropB();
  m_b(70,70);
  delay(30);
  m_b(0,0);
  delay(300);
}

void fifth() {
  t_flthird();
  t_flfifth();
  t_wst3();
  m_f(-100,-100);
  delay(90);
  m_f(0,0);
  delay(100);
  DropF();
}

void sixth() {
  t_blsixth();
  beep();
  t_blsixth2();
  m_f(-100,-100);
  delay(20);
  m_f(0,0);
  delay(100);
  DropB();
  m_b(70,70);
  delay(30);
  m_b(0,0);
  delay(300);
  DropB();

}

void seventh() {
  t_flthird2();
  t_flthird2();
  t_flthird2();
  t_ff();
  t_wst();
  m_f(-100,-100);
  delay(90);
  m_f(0,0);
  delay(100);
  DropF();



}

void eight() {
  t_bleight();
  DropB();
}
void CheckSensors() {
  oled.text(0, 0, "f0=%d     ", s0);
  oled.text(1, 0, "f1=%d     ", s1);
  oled.text(2, 0, "f2=%d     ", s2);
  oled.text(3, 0, "f3=%d     ", s3);
  oled.text(4, 0, "b0=%d     ", s4);
  oled.text(5, 0, "b1=%d     ", s5);
  oled.text(6, 0, "b2=%d     ", s6);
  oled.text(7, 0, "b3=%d     ", s7);
  oled.show();

}
