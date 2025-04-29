//Faça um programa que receba um número e exiba o seu dobro.
//

//Variáveis
int numero = 0;
int dobro = 0;

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
  Serial.println("Digite o seu numero");
  while( ! Serial.available() ){}//Espere o usuário digitar/dar um <Enter>
  numero = Serial.parseInt();
  
  //processamento
  dobro = numero * 2;
  
  //saída
Serial.println(" o dobro do numero eh " + String(dobro));
}