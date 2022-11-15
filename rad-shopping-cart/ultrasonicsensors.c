#define trig 4
#define echo 5


// variables
int dist; 
long timepassed; 


void setup() {
  pinMode(trig, OUTPUT); 
  pinMode(echo, INPUT); 

}
void loop() {
  // Clear the trig condition
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  // Sets the trig HIGH for 10 microseconds
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigP, LOW);
  // Read echo and return the sound wave travel time (microseconds)
  timepassed = pulseIn(echo, HIGH);
  // Calculate distance
  dist = timepassed * 0.034 / 2; // Speed of sound divided by 2 to account for travel there and back (in CM)
}
