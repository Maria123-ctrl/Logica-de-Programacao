

float resultado;
float soma;
float subtracao;
float multiplicacao;
float divisao;

int escolhaDaOperacao;
int contador;

float somar(float numero1,float numero2, int numero3= 5){

  return(numero1 + numero2 + numero3);
}


float subtrair(float numero1,float numero2, int numero3= 5){

  return(numero1 - numero2 - numero3);
}


float multiplicar(float numero1,float numero2, int numero3= 5){

  return(numero1 * numero2 * numero3);
}



float dividir(float numero1,float numero2, int numero3= 5){

  return(numero1 / numero2 / numero3);
}
void setup()
{
  Serial.begin(9600);
  
 	float numero1 = 0.0; // variável global
	float numero2 = 0.0;
  
   do{

    Serial.println("Eae! Voce esta na melhor calculadora inteligente!:");
    Serial.println("Escolha uma das opcoes/operacoes:");
    Serial.println("1- Somar");
    Serial.println("2- Subtrair");
    Serial.println("3- Multiplicacao");
    Serial.println("4- Dividir");

    while (! Serial.available()){} //Espera o usu[ario digitar

    escolhaDaOperacao = Serial.parseInt(); // Armazena o que o usu[ario digitou na variável

    Serial.println("Agora, para realizar a operacao, digite o 1° numero");
    while (! Serial.available()){} //Espera o usuário digitar
    numero1 = Serial.parseFloat();

    Serial.println("Agora, para realizar a operacao, digite o 2° numero");
    while (! Serial.available()){} //Espera o usuário digitar
    numero2 = Serial.parseFloat();
     
   



    switch(escolhaDaOperacao){
      case 1:
      resultado = somar(numero1, numero2);
      Serial.println("WOW!!! O resultado foi: " + String(resultado));
      //1a opcao - float resultado = somar();
      //1a opcao - Serial.println("WOW!!! O resultado foi: " + String(resultado));
		//2a opcao - Serial.println("WOW!!! O resultado foi: " + String(somar()));

      break;

      case 2:
      resultado = subtrair (numero1, numero2, 2);
      Serial.println("WOW!!! O resultado foi: " + String(resultado));
      break;

      case 3:
      resultado = multiplicar (numero1, numero2, 5);
      Serial.println("WOW!!! O resultado foi: " + String(resultado));
      break;

      case 4:
      resultado = dividir (numero1, numero2, 2);
      Serial.println("WOW!!! O resultado foi: " + String(resultado));
      break;

      default:
      Serial.println("Opcao invalida");

    }

    Serial.println("Voce deeja continuar? Se sim, digite [s] , se nao digite [n]");
    while (! Serial.available());//Espera o usuário digitar

    if(Serial.readString() == "s"){
      contador++;
    }
    else{
      contador = 0;

      Serial.println("Ate breve, obrigado por usar a cauculadora inteligente");
      Serial.println("Caso queira voltar, reinicie o sistema.");
    }
  }
  while(contador != 0);
}
  
  
  
void loop()
{}