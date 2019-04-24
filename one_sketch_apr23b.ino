int amarillo = 13;
int rojo = 7;
//numero de pin donde está el led
int milisegundos = 100;
//tiempo de parpadeo

//en C las funciones se crean declarando que va a retornar la función
//pero esta función no va a retornar entonces escribimos void y 
//es la función de inicio
void  setup()
{
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);
}
//loop es la función que se va a ejecutar todo el tiempo cada 500 mlsg
//digitalWrite es la manera de enviar electricidad en arduino seguido
//de cuanto voltaje.High para encender y LOW para apagar
void loop()
{
  digitalWrite(amarillo, HIGH);
  digitalWrite(rojo,LOW);
  delay(milisegundos);
  digitalWrite(amarillo, LOW);
  digitalWrite(rojo, HIGH);
  delay(milisegundos * 2); 
}
