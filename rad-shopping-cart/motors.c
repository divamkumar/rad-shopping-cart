// Motor Left connection
#define enableLeft 5
#define input1 7
#define input2 8

// Motor Right connection
#define enableRight 6
#define input3 3
#define input4 4

void setup() {
	// Motor control pins set to outputs
	pinMode(enableLeft, OUTPUT);
	pinMode(enableRight, OUTPUT);
	pinMode(input1, OUTPUT);
	pinMode(input2, OUTPUT);
	pinMode(input3, OUTPUT);
	pinMode(input4, OUTPUT);
	
	// Turn off motors (Initialization)
	digitalWrite(input1, LOW);
	digitalWrite(input2, LOW);
	digitalWrite(input3, LOW);
	digitalWrite(input4, LOW);
}

void loop() {
	MotorDirectionControl();
	delay(1000);
	speedControl();
	delay(1000);
}

// This function lets you control spinning direction of motors
void MotorDirectionControl() {
	// Set to max speed
	// For PWM maximum possible values are 0 to 255
	analogWrite(enableLeft, 255);
	analogWrite(enableRight, 255);

	// Turn on motor Left & Right
	digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
	digitalWrite(in3, HIGH);
	digitalWrite(in4, LOW);
	delay(2000);
	
	// GO backwards
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	delay(2000);
	
	// Turn off motors
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}
