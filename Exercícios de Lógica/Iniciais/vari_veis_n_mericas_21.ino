// C++ code
//
void setup()
{
 Serial.begin(9600);
}

//Variáveis - criação e inicialização
int numero1 = 0;
int numero2 = 0;
int soma = 0;
int subtracao = 0;
int multiplicacao = 0;
int divisao = 0;

void loop()
{
  //entrada
  numero1 = 5;
  numero2 = 2;
  
  //processamento
  soma = numero1 + numero2;
  subtracao = numero1 - numero2;
  multiplicacao = numero1 * numero2;
  divisao =  numero1 / numero2;
  
  //saída
  Serial.println( "Resultado da soma eh: " + String(soma) );
  Serial.println( "Resultado da subtracao eh: " + String(subtracao) );
  Serial.println( "Resultado da multiplicacao eh: " + String(multiplicacao) );
  Serial.println( "Resultado da divisao eh: " + String(divisao) );
  delay(1000);
}