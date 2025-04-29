//Faça um programa que receba o ano de nascimento
//de uma pessoa e o ano atual.

//Variáveis
int anodeNasc = 0;
int anoAtual = 0;
long idadeSem = 0;
int idade = 0;


void setup()  
{
  Serial.begin(9600);
}


void loop()
{
  
  
  //Cabeçalho - 2 pipes + 30 tracinhos
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");
  Serial.println("|        LOPAL - EX_03         |");
  Serial.println("|                              |");  
  Serial.println("|------------------------------|");//última linha
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha

  
  
  
  
  //entrada
  Serial.println("Digite o ano em que voce nasceu");
  while( ! Serial.available() ){}//espere o usuario digitar/dar um <Enter>
  anodeNasc = Serial.parseInt();
  
  Serial.println("Digite o ano em que voce esta");
  while( ! Serial.available() ){}//Aguarda o usuário digitar (para o loop)
  anoAtual = Serial.parseInt(); 
  
  //processamento
  idade = anoAtual - anodeNasc;
  idadeSem = idade * 365 / 7;
  
  //saída
  Serial.println("Voce tem " + String(idade) + " Anos");
  Serial.println("Sua idade em semana:" + String (idadeSem) );
  
}