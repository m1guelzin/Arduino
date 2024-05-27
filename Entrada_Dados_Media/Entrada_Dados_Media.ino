//Declaração das variaveis / números Reais
float nota1, nota2, nota3, peso1, peso2, peso3, media;


void setup() {
  //Inicia a comunicação com o serial monitor
  Serial.begin(9600);
  delay(1000);  //a paradinhaaaaa a paradinha a a a a
}

void loop() {
  Serial.print("Digite a nota 1: ");
  //while = comando de repetição "enquanto"
  while (Serial.available() == 0) {
    //Aguarda a entrada de valores do usuário
  }
  nota1 = Serial.parseFloat();
  Serial.println(nota1);

  //nota 2
  Serial.print("Digite a nota 2: ");
  while (Serial.available() == 0) {
  }

  nota2 = Serial.parseFloat();
  Serial.println(nota2);

  //nota 3
  Serial.print("Digite a nota 3: ");
  while (Serial.available() == 0) {
  }
  nota3 = Serial.parseFloat();
  Serial.println(nota3);

  //Atribuição dos pesos
  Serial.print("Digite o peso 1: ");
  while (Serial.available() == 0) {
  //aguarda a entrada do peso 1
  
  
  }
  peso1 = Serial.parseFloat();
  Serial.println(peso1);

  Serial.print("Digite o peso 2: ");
  while (Serial.available() == 0) {
  }
  peso2 = Serial.parseFloat();
  Serial.println(peso2);

  Serial.print("Digite o peso 3: ");
  while (Serial.available() == 0) {
  }
  peso3 = Serial.parseFloat();
  Serial.println(peso3);

  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  //exibe o valor da media calculada
  Serial.print("A media ponderada e: ");
  Serial.println(media);
  delay(1000);
}

//criando uma função chamada
float aguardaEntrada() {
  while(!Serial.available()){
    //aguarda ate que um valor seja digitado
  }

  //retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}