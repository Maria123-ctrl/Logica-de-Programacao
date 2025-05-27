// C++ code
//


/*
  Função que 
*///funções
int palpite;
int numeroSorteado;
int ledVerde = 10;
int ledVermelho = 8;
int ledAzul1 = 2;
int ledAzul2 = 3;
int ledAzul3 = 4;
int acerto;

#include <Servo.h>
Servo meuServo;  // cria um objeto/variável servo
Servo motor;
void desenhaCabecalho()
{
  Serial.println("------- A Fortaleza do Dado Sagrado --------");
  Serial.println();
  Serial.println();
}
void desenhaPontinhos(int qtdPontos = 5)
{
  for(int i = 1; i <= qtdPontos; i++)
  {Serial.print(".");
   delay(700);
  }
}
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  
  motor.attach(2);//configura o motor na porta 2
  motor.write(0);//configura a posição inicial em 0 graus
}
void loop()
{
  motor.write(0);    //Move para 0 graus
  delay(1500);       // Espera 1.5 graus
  motor.write(90);   // Move para 90 graus
  delay(1500);       // Espera 1.5 graus
  motor.write(180);  // Move para 180 graus
  delay(1500);       // Espera 1.5 graus
  motor.write(90);   // Move para 90 graus
  delay(1500);        // Espera 1.5 graus
  
  desenhaCabecalho();
  
  Serial.println("Seja bem vindo a Fortaleza Sagrada!");
  Serial.println("Adivinhe corretamente o numero sagrado do dado, que varia de 1 a 6. ");
  while(!Serial.available());//espera o usu[ario digitar
  int palpite = Serial.parseInt();//guarda o palpite do usu[ario
  
  if(numeroSorteado == palpite){
  digitalWrite(ledVerde, HIGH);
  delay(500); 
  digitalWrite(ledVerde, LOW);
  delay(500);
  } else{ 
    digitalWrite(ledVermelho, HIGH);
    delay(500);
    digitalWrite(ledVermelho, LOW);
    Serial.println("Voce errou!");
    
    
  
  }
  
   
  if (palpite == numeroSorteado){
  digitalWrite(ledAzul1, HIGH);
  delay(500);
  digitalWrite(ledAzul2, HIGH);
  delay(500);
  digitalWrite(ledAzul3, HIGH);
  delay(500);
    acerto + 1;
  }else{
  digitalWrite(ledAzul1, LOW);
  delay(500);
  digitalWrite(ledAzul2, LOW);
  delay(500);
  digitalWrite(ledAzul3, HIGH);
  delay(500);
  }
  //jogar o dado - sorteia um numero randomico/aleatorio de 1 ate 7 - 1, ou seja, 6
    int numeroSorteado = random(1, 7);//numero entre 1 e 6
    
    //Exibir o palpite do usu[ario
    
    
    desenhaPontinhos();
  
    Serial.println("Seu palpite :" + String(palpite));
    Serial.println("Numero Sorteado :" + String(numeroSorteado));
  
  if(palpite == numeroSorteado){
  Serial.println("Parabens, voce acertou!!1" );
  }else {
  Serial.println("Que pena, tente outra vez!!" );
  }
   
    //Exibir o numero sorteado
    
  Serial.println("Reiniciando o programa" );
  Serial.println();
  
  delay(9600);
  
  
}