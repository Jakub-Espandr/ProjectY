
#define S0 12
#define S1 10
#define S2 11
#define S3 9

#define sensorOut1 2
#define sensorOut2 3
#define sensorOut3 4
#define sensorOut4 5

// Stores frequency read by the photodiodes
int redFrequency1 = 0;
int greenFrequency1 = 0;
int blueFrequency1 = 0;
int clearFrequency1 = 0;

int redFrequency2 = 0;
int greenFrequency2 = 0;
int blueFrequency2 = 0;
int clearFrequency2 = 0;

int redFrequency3 = 0;
int greenFrequency3 = 0;
int blueFrequency3 = 0;
int clearFrequency3 = 0;

int redFrequency4 = 0;
int greenFrequency4 = 0;
int blueFrequency4 = 0;
int clearFrequency4 = 0;

void setup() {
  // Setting the outputs
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);

  // Setting the sensorOut as an input
  pinMode(sensorOut1, INPUT);
  pinMode(sensorOut2, INPUT);
  pinMode(sensorOut3, INPUT);
  pinMode(sensorOut4, INPUT);

  // Setting frequency scaling to 2%
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);

  // Begins serial communication
  Serial.begin(9600);
}
void loop() {
  // Setting RED (R) filtered photodiodes to be read
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

  // Reading the output frequency
  redFrequency1 = pulseIn(sensorOut1, LOW);
  redFrequency2 = pulseIn(sensorOut2, LOW);
  redFrequency3 = pulseIn(sensorOut3, LOW);
  redFrequency4 = pulseIn(sensorOut4, LOW);

  // Printing the RED (R) value
  Serial.print("R = ");
  Serial.print(redFrequency1);
  Serial.print("  ");
  Serial.print(redFrequency2);
  Serial.print("  ");
  Serial.print(redFrequency3);
  Serial.print("  ");
  Serial.print(redFrequency4);
  Serial.print("  ");



  // Setting GREEN (G) filtered photodiodes to be read
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);

  // Reading the output frequency
  greenFrequency1 = pulseIn(sensorOut1, LOW);
  greenFrequency2 = pulseIn(sensorOut1, LOW);
  greenFrequency3 = pulseIn(sensorOut1, LOW);
  greenFrequency4 = pulseIn(sensorOut1, LOW);

  // Printing the GREEN (G) value
  Serial.print(" G = ");
  Serial.print(greenFrequency1);
  Serial.print("  ");
  Serial.print(greenFrequency2);
  Serial.print("  ");
  Serial.print(greenFrequency3);
  Serial.print("  ");
  Serial.print(greenFrequency4);
  Serial.print("  ");

  // Setting BLUE (B) filtered photodiodes to be read
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);

  // Reading the output frequency
  blueFrequency1 = pulseIn(sensorOut1, LOW);
  blueFrequency2 = pulseIn(sensorOut2, LOW);
  blueFrequency3 = pulseIn(sensorOut3, LOW);
  blueFrequency4 = pulseIn(sensorOut4, LOW);
  // Printing the BLUE (B) value
  Serial.print(" B = ");
  Serial.println(blueFrequency1);
  Serial.print("   ");
  Serial.println(blueFrequency2);
  Serial.print("   ");
  Serial.println(blueFrequency3);
  Serial.print("   ");
  Serial.println(blueFrequency4);
  Serial.print("   ");

   // Setting Clear (C) filtered photodiodes to be read
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);

  // Reading the output frequency
  clearFrequency1 = pulseIn(sensorOut1, LOW);
  clearFrequency2 = pulseIn(sensorOut2, LOW);
  clearFrequency3 = pulseIn(sensorOut3, LOW);
  clearFrequency4 = pulseIn(sensorOut4, LOW);
  // Printing the BLUE (B) value
  Serial.print(" C = ");
  Serial.println(clearFrequency1);
  Serial.print("   ");
  Serial.println(clearFrequency2);
  Serial.print("   ");
  Serial.println(clearFrequency3);
  Serial.print("   ");
  Serial.println(clearFrequency4);
  Serial.println("   ");
}
