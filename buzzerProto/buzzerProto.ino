int pos = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(0, INPUT_PULLUP);
}


void song(int buzzerPin){
  
  tone(buzzerPin, 208);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(248);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(248);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(221);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(221);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(221);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(386);
  noTone(buzzerPin);

  tone(buzzerPin, 415);
  delay(386);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(386);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(883);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(441);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(331);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(331);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(331);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(331);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(441);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(441);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(386);
  noTone(buzzerPin);

  tone(buzzerPin, 415);
  delay(386);
  noTone(buzzerPin);

  tone(buzzerPin, 311);
  delay(386);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(883);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(441);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(166);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(331);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(331);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(331);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(331);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(441);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(441);
  noTone(buzzerPin);
}

void song1(int buzzerPin){
  
  tone(buzzerPin, 466);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(2281);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(526);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(702);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(526);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(175);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 622);
  delay(351);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(351);
  noTone(buzzerPin);
}

void loop()
{
  int sensorVal = digitalRead(2);
  int sensorVal2 = digitalRead(4);
 
 tone(4, 698);
  delay(351);
  noTone(4);
  
 
  delay(10); // Delay a little bit to improve simulation performance
}
