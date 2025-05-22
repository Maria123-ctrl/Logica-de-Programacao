// C++ code
//Vari[aveis Globais
/* 
Cria cada vetor tamanho 4,
fazendo parte do mesmo cadastro
*/

String convidados [4];
int idadeConvidados[4];//Camel case
String emailConvidados [4];

//Funções
void desenhaCabecalho()
  {
  Serial.println("Seja bem vindo ao nosso Churras!!");
  Serial.println();
  Serial.println();
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //fazer um cabeçalho bonitinho para o programa
 	desenhaCabecalho();
  
  //cadastrar dados
  
  for(int i = 0; i < 4; i++){
    
    //solicitar o nome do usu[ario
    Serial.println("Informe"+ String(i + 1)+ " o nome para cadastro");
    while(!Serial.available());
    convidados[i] = Serial.readString();
    
    
    //solicitar a idade
    Serial.println("Informe a idade " + convidados [i]);
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();
    
    //solicitar o email
    Serial.println("Informe o email " + convidados [i]);
    while(!Serial.available());
   	emailConvidados[i] = Serial.readString();
    
    Serial.println();
  }
  
  
  //Exibir a lista de convidados
  //obs: s[o vai na festa quem for maior de idade >= 18
  
  Serial.println("** Exibindo convidados eleitos para a festa **");
  Serial.println();
  
  for (int i = 0; i < 4;i++){
    //if(idadeConvidados[i] >= 18)
    //{//apenas maiores de 18
    Serial.println("Nome :" + convidados[i]);
    Serial.println("Idade :" + String(idadeConvidados[i]));
    Serial.println("Email :" + emailConvidados[i]);
    Serial.println("Permiissao para a festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade"));
      
  	Serial.println("---------------");
    Serial.println();
  //}
  
}
  //criar um for
  //exibir com o print cada um dos arrays
  //pular uma linha
  Serial.println();
  
  delay(2000);
}