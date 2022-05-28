
// Mapeamento de Hardware
#define botao 17
#define led   16

// Protótipo da função

void leitura_botao();

void setup() 
{
  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(botao,INPUT_PULLUP);
  digitalWrite(led,LOW);

}

void loop() 
{
     leitura_botao();
}


// Desenvolvimento da função
void leitura_botao()
{
  // A leitura digitalRead(botao) devolve 0, mas a exclamação converte para 1
  static char flag = 0;
  if(!digitalRead(botao)) flag = 1;
  if(digitalRead(botao) && flag)
  { 
      flag = 0;
      digitalWrite(led,!digitalRead(led));
      delay(150);
  }
}
