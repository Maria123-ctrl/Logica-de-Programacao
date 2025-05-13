//Pedir a tabuada ao usuario e mostrar toda a tabuada
//
int tabuadaEscolhida;
int resultado;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
   Serial.println("Digite um numero da tabuada: ");
  while (!Serial.available()){}
  tabuadaEscolhida = Serial.parseInt();
  
  
  for(int contador = 1; contador <= 10; contador++){
  resultado = tabuadaEscolhida * contador;
    
    //Exibir assim: 2x 1 = 20
    Serial.println(String(tabuadaEscolhida) + " X " + String(contador) + " = " + String (resultado));
  }
 
   
}