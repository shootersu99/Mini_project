#define BLYNK_PRINT Serial // Comment this out to disable prints and save space
#include <AFMotor.h>
#include <ESP8266_SoftSer.h>
#include <BlynkSimpleShieldEsp8266_SoftSer.h>
#include <SoftwareSerial.h>
SoftwareSerial EspSerial(A0, A1); // RX, TX
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
ESP8266 wifi(EspSerial);
char auth[] = "Enter your authentication code from your blynk app";
void forward()
{
  motor1.setSpeed(255); //Define maximum velocity
  motor1.run(FORWARD); //rotate the motor clockwise
  motor2.setSpeed(255); //Define maximum velocity
  motor2.run(FORWARD); //rotate the motor clockwise
  motor3.setSpeed(255); //Define maximum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(255); //Define maximum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
}

void backward()
{
  motor1.setSpeed(255); //Define maximum velocity
  motor1.run(BACKWARD); //rotate the motor counterclockwise
  motor2.setSpeed(255); //Define maximum velocity
  motor2.run(BACKWARD); //rotate the motor counterclockwise
  motor3.setSpeed(255); //Define maximum velocity
  motor3.run(BACKWARD); //rotate the motor counterclockwise
  motor4.setSpeed(255); //Define maximum velocity
  motor4.run(BACKWARD); //rotate the motor counterclockwise
}

void left()
{
  motor1.setSpeed(255); //Define maximum velocity
  motor1.run(BACKWARD); //rotate the motor counterclockwise
  motor2.setSpeed(255); //Define maximum velocity
  motor2.run(BACKWARD); //rotate the motor counterclockwise
  motor3.setSpeed(255); //Define maximum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(255); //Define maximum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
}


void right()
{
  motor1.setSpeed(255); //Define maximum velocity
  motor1.run(FORWARD); //rotate the motor clockwise
  motor2.setSpeed(255); //Define maximum velocity
  motor2.run(FORWARD); //rotate the motor clockwise
  motor3.setSpeed(255); //Define maximum velocity
  motor3.run(BACKWARD); //rotate the motor counterclockwise
  motor4.setSpeed(255); //Define maximum velocity
  motor4.run(BACKWARD); //rotate the motor counterclockwise
}

void Stop()
{
  motor1.setSpeed(0); //Define minimum velocity
  motor1.run(RELEASE); //turn motor1 off
  motor2.setSpeed(0); //Define minimum velocity
  motor2.run(RELEASE); //turn motor2 off
  motor3.setSpeed(0); //Define minimum velocity
  motor3.run(RELEASE); //turn motor3 off
  motor4.setSpeed(0); //Define minimum velocity
  motor4.run(RELEASE); //turn motor4 off
}

void setup()
{
  Serial.begin(9600);
  delay(10);
  // Set ESP8266 baud rate
  // 9600 is recommended for Software Serial
  EspSerial.begin(9600);
  delay(10);
  Blynk.begin(auth, wifi, "wifi username", "your wifi password");
}
BLYNK_WRITE(V1)
{
  int x = param[0].asInt();
  int y = param[1].asInt();

  // Do something with x and y
  /*  Serial.print("X = ");
    Serial.print(x);
    Serial.print("; Y = ");
    Serial.println(y);*/
  if (y > 220)
    forward();
  else if (y < 35)
    backward();
  else if (x > 220)
    right();
  else if (x < 35)
    left();
  else
    Stop();
}

void loop()
{
  Blynk.run();
}
