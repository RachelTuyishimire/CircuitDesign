const int trigPin = 10;
const int echoPin = 9;

float duration, distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);
  Serial.println("setup is complete");
  pinMode(4, INPUT);
}
  
  void loop()
  {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(10);
    
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration*.0343)/2;
    
    Serial.println(distance);
    delay(100);
    
    if (distance > 100){
      digitalWrite(4,HIGH);
    }
    else{
      digitalWrite(4,LOW);
}
  }