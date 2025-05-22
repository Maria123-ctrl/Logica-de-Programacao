// C++ code
//


/*
  Função que 
*///funções
int palpite;
int numeroSorteado;
void desenhaCabecalho()
{
  Serial.println("------- PROGRAMA JOGO DE DADOS --------");
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
}
void loop()
{
 desenhaCabecalho();
  
  Serial.println("Escolha um numero de 1 a 6: ");
  while(!Serial.available());//espera o usu[ario digitar
  int palpite = Serial.parseInt();//guarda o palpite do usu[ario
    
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