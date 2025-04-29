// C++ code
//
void setup()
{
  Serial.begin(9600);
}

//Inicialização de Variáveis
int caixapequena = 0;// -32768 até 32767 (faixa inicial e final do int)
long caixaGrande = 0;// -2147483648 até 2147483647 ( faixa inicial e final do long)

void loop()
{
  caixapequena = 32768098;//truncou o valor (cortou, pois estoura a faixa permitida)
  caixaGrande = 32768098;
  
  Serial.println(caixapequena);
  Serial.println(caixaGrande);
  
  delay(20000);//20 segundos
}