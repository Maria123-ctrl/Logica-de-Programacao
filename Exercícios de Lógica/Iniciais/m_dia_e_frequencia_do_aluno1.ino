/*Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/
// C++ code
//Variáveis
float media = 0;
float n1 = 0;
float n2 = 0;
int frequencia = >=75;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Digite a primeira nota");//esperar o usuário digitar
 while (! Serial.available());
 nota = Serial.parseFloat ();
  
 Serial.println("Digite a segunda nota");//esperar o usuário digital
  while (! Serial.available ());
  nota = Serial.parseFloat ();
  
  Serial.println("Digite a frequencia");
  while ( ! Serial.available());
  frequencia = Serial.parseInt ();
  
   // nao consigo me lembrar oque fazer depois disso
   // eu ate sei, mas sobre pressão me da branco
  
  
}