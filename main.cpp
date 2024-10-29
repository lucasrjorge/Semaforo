void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  sinalVermelho();
  sinalAmarelo();
  sinalVerde();
  reiniciarLoop();
}

  void sinalVermelho()
  {
    //Acende o vermelho e apaga após 6 segundos
    digitalWrite(13, HIGH);
    delay(6000);
    digitalWrite(13, LOW);
  }

  void sinalAmarelo()
  {
    //Acende o amarelo e apaga após 2 segundos
    digitalWrite(11, HIGH);
    delay(2000);
    digitalWrite(11, LOW);
  }

  void sinalVerde()
  {
    //Acende o verde a apaga após 2 + 2 segundos
    digitalWrite(12, HIGH);
    delay(2000);
    delay(2000);
    digitalWrite(12, LOW);
  }

  void reiniciarLoop()
  {  
    //Acende o amarelo e apaga após 2 segundos, completando o loop
    digitalWrite(11, HIGH);
    delay(2000);
    digitalWrite(11, LOW);
  }
