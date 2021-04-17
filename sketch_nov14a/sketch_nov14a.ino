// includere SOLO la melodia da riprodurre

//#include "allstar.h"
//#include "canond.h"
#include "einekleinenachtmusik.h"
//#include "happier.h"
//#include "happybd.h"
//#include "ilponte.h"
//#include "innomameli.h"
//#include "mariobros.h"
//#include "megalovania.h"
//#include "nyancat.h"
//#include "rickrolled.h"
//#include "rondoallaturca.h"
//#include "smashbros.h"
//#include "symphonyn40.h"
//#include "takeonme.h"
//#include "tetris.h"
//#include "theentertainer.h"

const int piezoPin = 8;

void setup() {
  pinMode(piezoPin,OUTPUT);
  for (int thisNote = 0; thisNote < sizeof(melody)/sizeof(int); thisNote++) {
    int noteDuration = (240000/bpm) / noteDurations[thisNote];
    tone(piezoPin, melody[thisNote], noteDuration*0.90);
    int pauseBetweenNotes = noteDuration;
    delay(pauseBetweenNotes);
    noTone(piezoPin);
  }
}

void loop() {
  
}
