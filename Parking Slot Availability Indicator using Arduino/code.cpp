// Parking Slot Availability Indicator

const int sensor1 = 2;
const int sensor2 = 3;

const int green1 = 8;
const int red1 = 9;

const int green2 = 10;
const int red2 = 11;

void setup() {
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);

  pinMode(green1, OUTPUT);
  pinMode(red1, OUTPUT);

  pinMode(green2, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop() {

  // Slot 1
  if (digitalRead(sensor1) == LOW) {   // Vehicle Detected
    digitalWrite(green1, LOW);
    digitalWrite(red1, HIGH);
  } else {
    digitalWrite(green1, HIGH);
    digitalWrite(red1, LOW);
  }

  // Slot 2
  if (digitalRead(sensor2) == LOW) {
    digitalWrite(green2, LOW);
    digitalWrite(red2, HIGH);
  } else {
    digitalWrite(green2, HIGH);
    digitalWrite(red2, LOW);
  }

  delay(100);
}