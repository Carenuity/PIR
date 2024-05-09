int pirPin = D3;      // PIR sensor pin
int buzzerPin = D7;   // Buzzer pin
int val;

void setup() {
    pinMode(pirPin, INPUT);
    pinMode(buzzerPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    val = digitalRead(pirPin); // Read PIR sensor state (LOW = no motion, HIGH = motion)
    
    if (val == HIGH) {
        // Motion detected
        beepBuzzer();
    }
}

void beepBuzzer() {
    // Beep the buzzer with a constant frequency
    tone(buzzerPin, 1000);  // 1000 Hz frequency
    delay(500);            // Beep for 1 second
    noTone(buzzerPin);      // Turn off the buzzer
}
