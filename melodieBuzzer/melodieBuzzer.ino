#include "allstar.h"
#include "canond.h"
#include "einekleinenachtmusik.h"
#include "happybd.h"
#include "ilponte.h"
#include "innomameli.h"
#include "mariobros.h"
#include "megalovania.h"
#include "nyancat.h"
#include "rickrolled.h"
#include "rondoallaturca.h"
#include "smashbros.h"
#include "symphonyn40.h"
#include "takeonme.h"
#include "tetris.h"
#include "theentertainer.h"



const int piezoPin = 8;

void setup() {
  pinMode(piezoPin,OUTPUT);
  Serial.begin(9600);
  
  /*canond::play(piezoPin);
  einekleinenachtmusik::play(piezoPin);
  happybd::play(piezoPin);*/
  /*ilponte::play(piezoPin);*/
  /*innomameli::play(piezoPin);
  mariobros::play(piezoPin);
  megalovania::play(piezoPin);
  nyancat::play(piezoPin);
  rickrolled::play(piezoPin);
  rondoallaturca::play(piezoPin);
  smashbros::play(piezoPin);
  symphonyn40::play(piezoPin);
  takeonme::play(piezoPin);
  tetris::play(piezoPin);*/
  //theentertainer::play(piezoPin);
}

void loop() {
  allstar::play(piezoPin);

}
