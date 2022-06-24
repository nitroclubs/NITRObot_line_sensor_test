
#define LEFT_FOR 9    // PWMB
#define LEFT_BACK 5   // DIRB  ---  Left
#define RIGHT_FOR 6   // PWMA
#define RIGHT_BACK 10 // DIRA  ---  Right

#define LN_SENS_PIN_RIGHTEDGE 22 // right edge sensor - Connected to D1 pin of the sensor
#define LN_SENS_PIN_RIGHT 23       // right sensor - Connected to D2 pin of the sensor
#define LN_SENS_PIN_MIDDLE 24 // middle sensor - Connected to D3 pin of the sensor
#define LN_SENS_PIN_LEFT 25       // left sensor Connected to D4 pin of the sensor
#define LN_SENS_PIN_LEFTEDGE 26 // left edge sensor - Connected to D5 pin of the sensor
#define LN_SENS_CALIB_PIN 27    // Connected to CAL pin of the sensor
#define LN_SENS_ANALOG_PIN A15  // Connected to AN pin of the sensor

const int LeftIrAvoidancePin = 12;
const int RightIrAvoidancePin = A5;
const int UltrasonicPin = 3;
const int RgbPin = 2;
const int ServoPin = 13;
const int LedPin = 33;

void setup() {
  // put your setup code here, to run once:
 pinMode(LN_SENS_PIN_RIGHTEDGE, INPUT);
  pinMode(LN_SENS_PIN_RIGHT, INPUT);
  pinMode(LN_SENS_PIN_MIDDLE, INPUT);
  pinMode(LN_SENS_PIN_LEFT, INPUT);
  pinMode(LN_SENS_PIN_LEFTEDGE, INPUT);
  // pinMode(LN_SENS_CALIB_PIN, OUTPUT);
  pinMode(LN_SENS_ANALOG_PIN, INPUT);

  pinMode(ServoPin, OUTPUT);
  pinMode(LEFT_FOR, OUTPUT);
  pinMode(LEFT_BACK, OUTPUT);
  pinMode(RIGHT_FOR, OUTPUT);
  pinMode(RIGHT_BACK, OUTPUT);
  pinMode(UltrasonicPin, OUTPUT);
  pinMode(LedPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 Serial.print(digitalRead(LN_SENS_PIN_RIGHTEDGE));
 Serial.print( digitalRead(LN_SENS_PIN_RIGHT));
 Serial.print(digitalRead(LN_SENS_PIN_MIDDLE));
 Serial.print(digitalRead(LN_SENS_PIN_LEFT));
 Serial.println(digitalRead(LN_SENS_PIN_LEFTEDGE));
 delay(1000);
}
