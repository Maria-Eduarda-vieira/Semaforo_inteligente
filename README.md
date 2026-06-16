[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&pause=1000&color=F7F7F7&width=435&lines=Projeto+de+semáforo+inteligente+que+prioriza+ambulâncias)](https://git.io/typing-svg)

<div align="center">


### Trabalho de Conclusão do 1º Semestre - SENAI "A. Jacob Lafer"

[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&pause=1000&color=007BFF&width=600&height=120&vCenter=true&lines=Projeto+de+semáforo+inteligente+que+prioriza+ambulâncias)](https://git.io/typing-svg)

![Status](https://img.shields.io/badge/Status-Concluído-success)
![Arduino](https://img.shields.io/badge/Arduino-UNO-blue)
![Linguagem](https://img.shields.io/badge/C%2B%2B-Arduino%20IDE-orange)
![Metodologia](https://img.shields.io/badge/Metodologia-SCRUM-red)

### Desenvolvido pela empresa <span style="color:#007BFF">MindTech</span>

</div>

---



# **Sobre o Projeto**

A empresa ABC Technology contratou a nossa empresa (<span style="color:#007BFF">MindTech</span> ), para desenvolver sistemas de semáforos inteligentes e melhorar a mobilidade urbana, propondo alternativas para diminuir o engarrafamento e congestionamento das metrópoles. Com base nisso, criamos um  projeto que consiste no desenvolvimento de um semáforo Inteligente capaz de priorizar a passagem de ambulâncias em situações de emergência, reduzindo o tempo de deslocamento até hospitais e contribuindo para a movimentação nas cidades.
# Objetivos principais 

Aqui vai uma breve lista das principais finalidades da escolha desse projeto:

✅ Detectar a aproximação de ambulâncias.                                 
-----------------------------------------------------                     
✅ Alterar automaticamente o estado dos semáforos.                       
------------------------------------------------------                    
✅ Liberar a via para passagem prioritária.
-------------------------------------------------------
✅ Reduzir atrasos no atendimento médico emergencial e auxiliar na hora de ouro.
-----------------------------------------------------------------------------------
✅ Iniciar um plano de ação urbano na cidade de Santo André, São Paulo.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# **Sobre a nossa empresa**
[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&pause=1000&color=007BFF&width=600&height=120&vCenter=true&lines=MindTech)](https://git.io/typing-svg)

A (<span style="color:#007BFF">MindTech</span> ) é uma empresa de desenvolvimento que visa a solução de problemas urbanos utilizando da tecnologia para isso.
Utilizamos a metodologia SCRUM como principal para o desenvolvimento de nossos projetos, principalmente na divisão de tarefas. Segue abaixo todos os integrantes:

Função | Integrante |
| :--- | :--- |
|  <span style="color:#FF2E93">**Product Owner**</span> | Maria Eduarda Vieira |
|  <span style="color:#A020F0">**Scrum Master**</span> | Ana Júlia Valentim de Maria |
|  <span style="color:#007BFF">**Dev**</span> | Maria Eduarda Vilela de Brito |
|  <span style="color:#007BFF">**Dev**</span> | Victor Hugo Franck Voltarelli |
|  <span style="color:#007BFF">**Dev**</span> | Gustavo Schimming |

-------------------------------------------------------------------------------------------------------------------------------------------------------------

<h1 align="center">
  <span style="font-family: 'Arial Black', sans-serif; font-size: 3em; color: #0040FF; font-weight: 900; display: block; border-bottom: 8px solid #0040FF; padding-bottom: 10px;">
    SPRINT 1 - PLANEJAMENTO E PESQUISA
  </span>
</h1>

 [![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&pause=1000&color=007BFF&width=600&height=120&vCenter=true&lines=OBJETIVOS+DO+PROJETO)](https://git.io/typing-svg)


* Início e desenvolvimento das ideias
* Pesquisa de soluções existentes,
* Planejamentos e justificativas (5W2H)
* Definição dos requisitos

[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&pause=1000&color=007BFF&width=600&height=120&vCenter=true&lines=ANÁLISES+PRINCIPAIS)](https://git.io/typing-svg)


A partir da análise de um sistema internacional de prioridade semafórica para transporte público baseado em GPS e comunicações sem fio, surgiu a ideia de criar um sistema de prioridade 
para os veículos ambulatórios. Em um segundo projeto, tivemos como ideia a instalação de outro semáforo inteligente mas que priorizasse pedestres. No entanto, essa ideia foi descartada
na Sprint 2.

### Planejamento

Durante a Sprint 1 foram produzidos:

* Documentação inicial;
* Planejamento 5W2H;
* Cronograma;
* Definição de papéis Scrum;
* Slides explicativos

### Entregas da Sprint 1

| Entrega              | Status |
| -------------------- | ------ |
| Pesquisa do problema | ✅      |
| Documentação inicial | ✅      |
| 5W2H                 | ✅      |
| Cronograma           | ✅      |
| Slides               | ✅      |

---------------------------------------------------------------------------------------------------------------------------------------------

<h1 align="center">
  <span style="font-family: 'Arial Black', sans-serif; font-size: 3em; color: #0040FF; font-weight: 900; display: block; border-bottom: 8px solid #0040FF; padding-bottom: 10px;">
    SPRINT 2-DESENVOLVIMENTO E IMPLEMENTAÇÃO
  </span>
</h1>

Após as análises realizadas na Sprint 1, o projeto passou por algumas melhorias. A ideia dos pedestres foi substituída pela utilização do:

### Sensor Ultrassônico HC-SR04

Responsável por detectar a aproximação da ambulância e acionar o sistema automaticamente.

---


[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&pause=1000&color=007BFF&width=600&height=120&vCenter=true&lines=ATIVIDADES+DESENVOLVIDAS)](https://git.io/typing-svg)
###  Desenvolvimento do Circuito

Fizemos uma montagem virtual no ambiente virtual Tinkercad utilizando alguns componentes de Hardware, sendo eles:

| Componentes                 | Quantidades
| --------------------------- |---------------- |
| Placa Arduino UNO R3        |  1              |
| Sensor Ultrassônico HC-SR04 |  1              |
| LEDs Vermelhos              |  2              |
| LEDs Amarelos               |  2              |
| LEDs Verdes                 |  2              |
| Resistores                  |  7              |
| Protoboard                  |  1              |
| Jumpers Macho-Macho         |  7              |
| Jumpers Macho-Fêmea         |  7              |
| Jumpers Fêmea-Fêmea         |  7              |
| Cabo USB                    |  1              |
| Computadores                |  5              |

Link dos vídeos da montagem no Tinkercad:

 https://github.com/Maria-Eduarda-vieira/Semaforo_inteligente/blob/main/Sprint%202/VideoTinkerCad.mp4

https://github.com/Maria-Eduarda-vieira/Semaforo_inteligente/blob/main/Sprint%202/VideosemaforoTinkerCad.mp4

---------------------------------------------------------------------------------------------------------------------------------------------------------------------
###  Desenvolvimento do Código(C++)

Antes do desenvolvimento do código, o grupo realizou a produção do fluxograma no software **Flowgorithm**. Depois disso, programamos o código na linguagem C++
no Tinkercad para finalizar no software Arduino IDE.

Segue abaixo o código do projeto:
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
---

```cpp
// Linguagem C++ code
// Projeto: Semáforo inteligente que detecta ambulâncias em emergência e prioriza a passagem
// Autores: Grupo 4 (Ana Júlia, Gustavo Schimming, Maria Eduarda Vieira, Maria Eduarda Vilela, Victor Hugo)
// Hardware: Arduino Uno e sensor de presença ultrassônico HC-SR04

// Definição das portas dos semáforos
#define sinalVermelho1 10 
#define sinalAmarelo1 9
#define sinalVerde1 8

#define sinalVermelho2 7
#define sinalAmarelo2 6
#define sinalVerde2 5

// Definição das portas do sensor ultrassônico
#define trigPin 13
#define echoPin 12

long duracao;      // Armazena o tempo que o som levou para ir e voltar
float distancia;   // Armazena a distância calculada em centímetros

// Função para calcular a distância medida pelo sensor ultrassônico
float medirDistancia() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duracao = pulseIn(echoPin, HIGH);
  
  // Converte o tempo do pulso em distância (cm)
  return duracao * 0.034 / 2;
}

// Funções de gerenciamento dos estados dos semáforos
void semaforo1Verde() {
  digitalWrite(sinalVerde1, HIGH);
  digitalWrite(sinalAmarelo1, LOW);
  digitalWrite(sinalVermelho1, LOW);

  digitalWrite(sinalVerde2, LOW);
  digitalWrite(sinalAmarelo2, LOW);
  digitalWrite(sinalVermelho2, HIGH);
}

void semaforo1Amarelo() {
  digitalWrite(sinalVerde1, LOW);
  digitalWrite(sinalAmarelo1, HIGH);
  digitalWrite(sinalVermelho1, LOW);

  digitalWrite(sinalVerde2, LOW);
  digitalWrite(sinalAmarelo2, LOW);
  digitalWrite(sinalVermelho2, HIGH);
}

void semaforo2Verde() {
  digitalWrite(sinalVerde2, HIGH);
  digitalWrite(sinalAmarelo2, LOW);
  digitalWrite(sinalVermelho2, LOW);

  digitalWrite(sinalVerde1, LOW);
  digitalWrite(sinalAmarelo1, LOW);
  digitalWrite(sinalVermelho1, HIGH);
}

void semaforo2Amarelo() {
  digitalWrite(sinalVerde2, LOW);
  digitalWrite(sinalAmarelo2, HIGH);
  digitalWrite(sinalVermelho2, LOW);

  digitalWrite(sinalVerde1, LOW);
  digitalWrite(sinalAmarelo1, LOW);
  digitalWrite(sinalVermelho1, HIGH);
}

void setup() {
  // Configuração dos pinos como Saídas e Entradas
  pinMode(sinalVermelho1, OUTPUT);
  pinMode(sinalAmarelo1, OUTPUT);
  pinMode(sinalVerde1, OUTPUT);

  pinMode(sinalVermelho2, OUTPUT);
  pinMode(sinalAmarelo2, OUTPUT);
  pinMode(sinalVerde2, OUTPUT);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // Verifica constantemente se há uma ambulância a menos de 30cm do sensor
  distancia = medirDistancia();

  if (distancia < 30) {
    semaforo1Verde();
    delay(4000);
    return; // Interrompe a sequência normal e reinicia o loop
  }

  // Ciclo normal de funcionamento dos semáforos
  semaforo1Verde();
  delay(4000); 
  
  distancia = medirDistancia();
  if (distancia < 30) return;
  
  semaforo1Amarelo();
  delay(3000);
  
  distancia = medirDistancia();
  if (distancia < 30) return; 
  
  semaforo2Verde();
  delay(6000);
  
  distancia = medirDistancia();
  if (distancia < 30) return;
  
  semaforo2Amarelo();
  delay(1000);
}

------------------------------------------------------------------------------------------------------------------------------------

[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&size=32&pause=1000&color=0040FF&width=450&height=60&lines=Softwares+Utilizados)](https://git.io/typing-svg)
A partir do desenvolvimento do projeto, foi possível analisar todos os componentes não físicos de software que foram utilizados para o resultado final.

| Software        | Utilização            |
| --------------- | --------------------- |
| Arduino IDE     | Programação           |
| Tinkercad       | Simulação do circuito |
| Canva           | Apresentação          |
| GitHub          | Repositório           |
| Microsoft Excel | Cronograma e 5W2H     |
| Microsoft Word  | Documentação

# Tecnologias Utilizadas

| Tecnologia  | Finalidade          |
| ----------- | ------------------- |
| Arduino UNO | Controle do sistema |
| C++         | Programação         |
| Arduino IDE | Desenvolvimento     |
| Tinkercad   | Simulação           |
| GitHub      | Versionamento       |
| SCRUM       | Gestão do projeto   |
| 5W2H        | Planejamento        |


### 🏗️ Construção da Maquete

Representação física do cruzamento contendo:

* Hospital;
* Vias urbanas;
* Ambulância;
* Semáforos;
* Área verde;
* Construções urbanas.

---

# 🛠 Tecnologias Utilizadas

| Tecnologia  | Finalidade          |
| ----------- | ------------------- |
| Arduino UNO | Controle do sistema |
| C++         | Programação         |
| Arduino IDE | Desenvolvimento     |
| Tinkercad   | Simulação           |
| GitHub      | Versionamento       |
| SCRUM       | Gestão do projeto   |
| 5W2H        | Planejamento        |

---

---




---

# 🔄 Fluxo de Funcionamento

```text
Início

↓
Sensor monitora a via

↓
Ambulância detectada?

├── Não
│
└── Sim
      ↓
Fechar semáforo da via cruzada

↓
Abrir semáforo da ambulância

↓
Permitir passagem

↓
Tempo finalizado?

├── Não
│
└── Sim
      ↓
Retornar ao ciclo normal

↓
Fim
```

---

# 💻 Código do Projeto

```cpp
// Exemplo simplificado da lógica principal

if (distancia <= 30) {

  // Ambulância detectada

  digitalWrite(verdeVia1, HIGH);

  digitalWrite(vermelhoVia2, HIGH);

}
else {

  // Funcionamento normal

  cicloSemaforo();

}
```

---

# 📊 Resultados Obtidos

✅ Desenvolvimento completo da documentação;

✅ Aplicação da metodologia SCRUM;

✅ Simulação funcional no Tinkercad;

✅ Construção da maquete física;

✅ Desenvolvimento do circuito eletrônico;

✅ Implementação da lógica de prioridade para ambulâncias;

✅ Apresentação final do projeto.

---

# 👥 Integrantes

| Integrante                    |
| ----------------------------- |
| Ana Júlia Valentim de Maria   |
| Gustavo Schimming             |
| Maria Eduarda Vieira          |
| Maria Eduarda Vilela de Brito |
| Victor Hugo Franck Voltarelli |

---

# 🎓 Conclusão

O projeto demonstrou como tecnologias embarcadas podem ser utilizadas para solucionar problemas reais da sociedade.

Além do desenvolvimento técnico envolvendo Arduino, sensores e programação em C++, a atividade permitiu aplicar conceitos de:

* Gestão de Projetos;
* Metodologia Scrum;
* Trabalho em Equipe;
* Documentação Técnica;
* Desenvolvimento de Sistemas.

O protótipo desenvolvido comprova a viabilidade da utilização de semáforos inteligentes para auxiliar veículos de emergência e contribuir para uma mobilidade urbana mais eficiente.

---

<div align="center">

### SENAI "A. Jacob Lafer"

**Curso Técnico em Desenvolvimento de Sistemas**

**Projeto desenvolvido pela equipe MindTech - 2026**

</div>
