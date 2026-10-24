
#define enA 5
#define in1 6
#define in2 7
#define in3 9
#define in4 10
#define enB 11

#define R_S A1
#define L_S A0

// Motor speed: 0 to 255
int motorSpeed = 70;

void setup() {
  pinMode(R_S, INPUT);
  pinMode(L_S, INPUT);

  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);

  // Set motor speed using PWM
  analogWrite(enA, motorSpeed);
  analogWrite(enB, motorSpeed);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  int rightSensor = digitalRead(R_S);
  int leftSensor = digitalRead(L_S);

  Serial.print("Right: ");
  Serial.print(rightSensor);
  Serial.print(" | Left: ");
  Serial.println(leftSensor);

  // 0 = Black line, 1 = White surface
  if (rightSensor == 0 && leftSensor == 0) {
    forward();
  }
  else if (rightSensor == 1 && leftSensor == 0) {
    turnRight();
  }
  else if (rightSensor == 0 && leftSensor == 1) {
    turnLeft();
  }
  else {
    Stop();
  }

  delay(50);
}

void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void turnRight() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void turnLeft() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void Stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
