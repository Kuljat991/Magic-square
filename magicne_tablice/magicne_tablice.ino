class randomNesto{
  private:
  int pozition;

  public:
  randomNesto(int);
  double degree;
};

randomNesto::randomNesto(int x)
{    
  pozition = x;
  if (pozition == 0){
    degree = 0;
  }
  else if (pozition == 1){
    degree = 90;
      }
  else if (pozition == 2){
    degree = 180;
      }
  else {
    degree = 270;
  }
}

long randomNumber0;
long randomNumber1;
long randomNumber2;
long randomNumber3;

int pozition0;
int pozition1;
int pozition2;
int pozition3;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // if analog input pin 0 is unconnected, random analog
  // noise will cause the call to randomSeed() to generate
  // different seed numbers each time the sketch runs.
  // randomSeed() will then shuffle the random function.
  randomSeed(analogRead(0));
}

// the loop function runs over and over again forever
void loop() {
  randomNumber0 = random(100);
  delay(50);
  randomNumber1 = random(100,200);
  delay(50);
  randomNumber2 = random(200,300);
  delay(50);
  randomNumber3 = random(300,400);

  pozition0 = randomNumber0 % 4;
  pozition1 = randomNumber1 % 4;
  pozition2 = randomNumber2 % 4;
  pozition3 = randomNumber3 % 4;

  randomNesto koracni0(pozition0);
  randomNesto koracni1(pozition1);
  randomNesto koracni2(pozition2);
  randomNesto koracni3(pozition3);
   
  Serial.print(koracni0.degree);
  Serial.print(' ');
  Serial.print(koracni1.degree);
  Serial.print(' ');
  Serial.print(koracni2.degree);
  Serial.print(' ');
  Serial.print(koracni3.degree);
  Serial.print('\n');
  
  delay(500);
}
