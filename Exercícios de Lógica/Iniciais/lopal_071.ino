//Faça um programa que receba o nome, cargo e salário de um funcionário.
//Calcule o salário acrescido de 10%.Ao final exiba o nome,
//o cargo e o novo salário desse funcionário.


//Variáveis
int nome = 0;
int cargoInicial = 0;
int cargoAcrescido = 0;
int salarioInicial = 0;
int salarioAcrescido = 0;

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
   Serial.println("Digite o nome do funcionario");//pergunta o nome para o usuario
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
 nome = Serial.parseFloat();//resposta do usuário
  
   Serial.println("Digite o cargo");// pergunta o cargo ao usuario
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  cargoInicial = Serial.parseFloat();//resposta do usuário
  
  Serial.println("Digite o cargo");// pergunta o cargo ao usuario
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  cargoAcrescido = Serial.parseFloat();//resposta do usuário
  
   Serial.println("Digite o salario");//pergunta o salario ao usuario
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  salarioInicial = Serial.parseFloat();//resposta do usuário
  
  
  Serial.println("Digite o salario");//pergunta o salario ao usuario
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  salarioAcrescido = Serial.parseFloat();//resposta do usuário
  
  //Processamento
  salarioAcrescido = salarioInicial + (salarioInicial * 0.10);
  
  //Saída
  Serial.println("O seu nome eh: " + String (nome) );
  Serial.println("O seu cargo eh: " + String (cargoInicial) );
  Serial.println("O seu salario eh: " + String (salarioInicial) );
  delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
  
}