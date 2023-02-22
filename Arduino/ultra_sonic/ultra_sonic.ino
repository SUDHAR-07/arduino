#define sensorTrigPin    4
#define sensorEchoPin    2

void setup()
{
    Serial.begin(9600);
    pinMode(sensorTrigPin, OUTPUT);
    pinMode(sensorEchoPin, INPUT);
}

void loop()
{
    int pulseWidth = 0;

    digitalWrite(sensorTrigPin, HIGH);
    //delayMicroseconds(10);
    digitalWrite(sensorTrigPin, LOW);

    pulseWidth = pulseIn(sensorEchoPin, HIGH);

    Serial.print("Pulse Width: ");
    Serial.println(pulseWidth);
    delay(1000);
}
