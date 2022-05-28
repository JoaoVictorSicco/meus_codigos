// ===== Mapeamento de Hardware =====
#define rele 33
#define pot  4  // Utilizar um pino que tenha AD
#define led  32



// ===== Configurações iniciais =====
void setup() 
{
  Serial.begin(115200);
  pinMode(rele,OUTPUT);
  pinMode(pot,OUTPUT);
  pinMode(led,OUTPUT);
}

void loop() 
{
    float voltage = analogRead(pot)*(3.3/4095.0);
    Serial.print("Valor do tensão:");
    Serial.println(voltage);
    delay(1000);

    if (voltage > 1.5)
    {
      digitalWrite(led,HIGH);
      digitalWrite(rele,HIGH);
    }
    else
    {
      digitalWrite(led,LOW);
      digitalWrite(rele,LOW);
    }

}
