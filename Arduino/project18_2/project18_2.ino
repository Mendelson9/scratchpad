// Project 18 - Creating a Single-Digit Display
#define DATA 6 // connect to pin 14 on the 74HC595
#define LATCH 8 // connect to pin 12 on the 74HC595
#define CLOCK 10 // connect to pin 11 on the 74HC595
// set up the array with the segments for 0 to 9, A to F (from Table 6-2)
int digits[] = {
  3, 159, 37, 13, 153, 73, 65, 31, 1, 9, 17, 193, 99,
  133, 97, 113};
void setup()
{
  pinMode(LATCH, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
}
void loop()
{
  int i;
  
  for ( i = 0 ; i < 16 ; i++ ) // display digits 0-9, A-F
  {
    digitalWrite(LATCH, HIGH);
    shiftOut(DATA, CLOCK, LSBFIRST, digits[i]);
    digitalWrite(LATCH, LOW);
    delay(500);
  }
  for ( i = 0 ; i < 16 ; i++ ) // display digits 0-9, A-F with DP
  {
    digitalWrite(LATCH, HIGH);
    shiftOut(DATA, CLOCK, LSBFIRST, digits[i]-1); // +1 is to turn on the DP bit
    digitalWrite(LATCH, LOW);
    delay(500);
  }
}

