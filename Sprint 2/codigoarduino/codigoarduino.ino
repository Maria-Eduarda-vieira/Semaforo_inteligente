// Linguagem C++ code
//Projeto: Sémaforo inteligente que detecta ambulâncias em emergencia
// e prioriza a passagem
//Autores: Grupo 4
//Ana Júlia, Gustavo Schimming, Maria Eduarda Vieira,
//Maria Eduarda Vilela, Victor Hugo.
//Arduino Uno e sensor de presença ultrassonico HC-SR04

/////////////////////////////////////////////////////////////////

// Declaração e armazenamento de valores que não vão ser alterados
//Indica a porta em que estão inseridos os sinais dos semáforos

#define sinalVermelho1 10 
#define sinalAmarelo1 9
#define sinalVerde1 8

#define sinalVermelho2 7
#define sinalAmarelo2 6
#define sinalVerde2 2

//Indica a porta em que está inserido o iniciador da medição 
#define trigPin 13

// Indica a porta em que está inserido o receptor do retorno da onda sonora
#define echoPin 12

long duracao;// Armazena o tempo que o som levou para ir e voltar
float distancia;// Armazena a distãncia calculadas em centímetros


//Funcionalidade do sensor de presença ultrassonico

float medirDistancia() {
  // Para garantir que o trig inicie desligado
  
  digitalWrite(trigPin, LOW);
  // espera 2 microsegundos
  delayMicroseconds(2);
  
  //Envia pulso HIGH pro trig
  //Emite uma onda sonora
  digitalWrite(trigPin, HIGH);
  // espera 10 microsegundos
  delayMicroseconds(10);
  
  // Finaliza a emissão
  digitalWrite(trigPin, LOW);
  
  
  //Após isso, é feito a leitura da emissão
  //o pulseIn mede quanto tempo o echoPin ficou acesso.
  
  // a fórmula converte o tempo medido em cm
  //é necessário dividir a duração por dois pois o som vai até o objeto e volta
  //A velocidade do som é aprox 340m/s,convertendo pra cm/µs
  //1 segundo=1.000.000 microssegundos
  //340 m/s=34.000cm/s
  //34.000 cm/s/1.000.000 µs/s=0,034 cm/µs
   
  duracao = pulseIn(echoPin, HIGH);

return duracao * 0.034 / 2;
}



// Funções void criadas para organizar o estados dos semáforos
//Funções void fazem uma função

void semaforo1Verde() { //Função do sinal verde  1via

  digitalWrite(sinalVerde1, HIGH);//Verde 1 acesso
  digitalWrite(sinalAmarelo1, LOW);//Amarelo1 desligado
  digitalWrite(sinalVermelho1, LOW);//Vermelho 1 desligado

  digitalWrite(sinalVerde2, LOW);//Verde 2 desligado
  digitalWrite(sinalAmarelo2, LOW);//Amarelo2 desligado
  digitalWrite(sinalVermelho2, HIGH);//vermelho 2 ligado
}

void semaforo1Amarelo() {// Função do sinal amarelo 1 via

  digitalWrite(sinalVerde1, LOW);//Verde 1 desligado
  digitalWrite(sinalAmarelo1, HIGH);//Amarelo 1 ligado
  digitalWrite(sinalVermelho1, LOW);//Vermelho 1 desligado

  digitalWrite(sinalVerde2, LOW);//Verde 2 desligado
  digitalWrite(sinalAmarelo2, LOW);//Amarelo2 desligado
  digitalWrite(sinalVermelho2, HIGH);//Vermelho2 acesso
}

void semaforo2Verde() {//Função do sinal verde 2 via

  digitalWrite(sinalVerde2, HIGH);//verde 2 acesso
  digitalWrite(sinalAmarelo2, LOW);//amarelo 2 desligado
  digitalWrite(sinalVermelho2, LOW);//vermelho 2 desligado

  digitalWrite(sinalVerde1, LOW);//verde 1 desligado
  digitalWrite(sinalAmarelo1, LOW);//amarelo1 desligado
  digitalWrite(sinalVermelho1, HIGH);//vermelho 1 acesso
}

void semaforo2Amarelo() { //Função do sinal amarelo 2 via

  digitalWrite(sinalVerde2, LOW);//verde 2 desligado
  digitalWrite(sinalAmarelo2, HIGH);//amarelo2 acesso
  digitalWrite(sinalVermelho2, LOW);//vermelho 2 desligado

  digitalWrite(sinalVerde1, LOW);//verde 1 desligado
  digitalWrite(sinalAmarelo1, LOW);//amarelo1 desligado
  digitalWrite(sinalVermelho1, HIGH);//vermelho 1 acesso
}

//Função setup obrigatória para configurar os pinos e comunicação serial
//Inicialização
void setup() {
  //Configura os pinos leds como SAÍDA
  pinMode(sinalVermelho1, OUTPUT);
  pinMode(sinalAmarelo1, OUTPUT);
  pinMode(sinalVerde1, OUTPUT);

  pinMode(sinalVermelho2, OUTPUT);
  pinMode(sinalAmarelo2, OUTPUT);
  pinMode(sinalVerde2, OUTPUT);
  //Configura o pino trig do ultrassÔnico como SAÍDA
  pinMode(trigPin, OUTPUT);
  //Configuts o pino echo do ultrassônico como ENTRADA
  pinMode(echoPin, INPUT);
  
  //Inicia a comunicação serial com velocidade de 9600 bps
  Serial.begin(9600);
}

//Função que funciona infinitamente enquanto o arduíno estiver ligado
void loop() {

  //Essa parte verifica se foi detectado a presença de uma
  //ambulância em emergencia
  //Define a distância igual ao resultado da fórmula de duração
  distancia = medirDistancia();

   //Se a distância for menor do que 30
  
   if (distancia < 30) {
    // Então a função apresentada no void semaforol1Verde será
    //executada
    semaforo1Verde();
    
    delay(4000);
    //O comando retorno interrompe o ciclo atual da função
    // e faz com que o arduino volte a primeira linha do void loop
    //impedindo que continue executando as linhas de baixo
    return;
  }

  //Funcionamento dos semáforos normalmente
  
  semaforo1Verde();
  delay(4000); //Espera 4 segundos
  
  //Mas se a distância for menor do que 30, o sinal verde1 abre
  distancia = medirDistancia();
  if (distancia < 30) return;//Interrompe o ciclo
  
  
  semaforo1Amarelo();
  delay(3000);//Espera 1 segundo
  
  //Se a distância da ambulância for menor que 30,o sinal verde1 abre
  
  distancia = medirDistancia();
  if (distancia < 30) return; // Interrope o ciclo

  //Se a distância da ambulância for menor que 30,o sinal verde1 abre
  
  semaforo2Verde();
  delay(6000);//Espera 6 segundos
  
  //Se a distância da ambulância for menor que 30,o sinal verde1 abre
  

  distancia = medirDistancia();
  if (distancia < 30) return;
  
  semaforo2Amarelo();
  delay(1000);
}