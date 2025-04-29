// Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: meses, Dias, horas, Minutos.

//Variáveis
int idade = 0;//inicia a idade
int idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;


void setup()
{
  Serial.begin(9600);
}



void loop()
{
  //entrada
  Serial.println("Digite a sua idade");
  while( ! Serial.available() ){}//Aguarda o usuário digitar (para o loop)
  idade = Serial.parseInt();
  
  //processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idade * 24;
  idadeMinutos = idade * 60;
  
  //saída
  Serial.println("Sua idade em meses: " + String (idadeMeses));
  Serial.println("Sua idade em dias: " + String (idadeDias));
  Serial.println("Sua idadeem horas: " + String (idadeHoras));
  Serial.println("Sua idade em minutos: " + String (idadeMinutos));
}