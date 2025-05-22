// C++ code
//
String produtos[2] = {"Amaciante", "Sabao em po"};
int numeros[1] = {};

void setup()
{
  Serial.begin(9600);
  
  
  //exibindo o valor de um respectivo indice
  Serial.println(produtos[0]);
  
  //Inserindo valor em um respectivo indice
  produtos[2] = "Detergente";
  
  Serial.println(produtos[2]);
}

void loop()
{
 
}