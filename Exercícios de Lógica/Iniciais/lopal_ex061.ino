//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

//Variáveis
float numeroPolegadas = 0;
float numeroCm = 0;

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
  
  
  //Entrada
  Serial.println("Digite uma medida em polegadas");//pergunta uma medida em polegadas da escolha do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  numeroPolegadas = Serial.parseFloat();//resposta do usuário
  
  //Processamento
  numeroCm = numeroPolegadas * 3.30;
  
  //Saída
  Serial.println("A conversao de polegadas em centimetros eh: " + String (numeroCm) );
  delay(5000);//aguarda 5 segundos antes de rodar o loop noe    
  
}