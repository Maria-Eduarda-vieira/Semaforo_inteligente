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

**Segue abaixo o link do código do projeto**:

https://github.com/Maria-Eduarda-vieira/Semaforo_inteligente/tree/main/Sprint%202/codigoarduino
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
---






 # **Softwares Utilizados**
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


[![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&pause=1000&color=007BFF&width=600&height=120&vCenter=true&lines=Construção+da+maquete)](https://git.io/typing-svg)


Nós fizemos uma representação física do cruzamento da Avenida Santos Dummont, contendo:

*Parque;
* Vias urbanas;
* Ambulância;
* Semáforos;
* Área verde;
* Construções urbanas.

Para a confeccção da maquete, utilizamos alguns materiais, segue a lista deles abaixo:
| Materiais      | Quantidade       |
| -----------    | ------------------- |
| Isopor         | 1                   |
| EVA            | 6                   |
| Cola quente    | 4                   |
|Cola  isopor    | 1                   |
|Palito Sorvete  | 1                   |
|Tinta Guache    | 1                   |
| Papel Crepom   | 1                   |
|Planta Falsa    | 10                  |
| Caixas de Leite| 2                   |
| Caixas perfume | 3                   |
| Canudos        | 6                   |        |
| Pisca pisca    | 1                   |
| Fita crepe     | 1                   |
| Pinceís        | 2                   |



---








#  Resultados Obtidos

✅ Desenvolvimento completo da documentação,

✅ Aplicação da metodologia SCRUM,

✅ Simulação funcional no Tinkercad,

✅ Construção da maquete física,

✅ Desenvolvimento do circuito eletrônico,

✅ Implementação da lógica de prioridade para ambulâncias,

✅ Apresentação final do projeto.

---

**Requisitos funcionais**:
* Detectação de ambulâncias através do sensor ultrassônico HC-SR04
* Identificação de ambulâncias em uma distância de 30 cm do semáforo 
*Liberação automática para ambulâncias (sinal verde)
* Fechar via oposta (sinal vermelho)
*Controle de vias e sinal de pedestre de acordo com o estado do
semáforo 
*Dar continuidade ao funcionamento normal após a passagem da
ambulância 
*Emissão de sinais através de LEDS que representam o semáforo 

**Requisitos não funcionais**:
* Rápida resposta após identificação de ambulâncias 
* Apresentação de sistema contínuo e estável 
* Baixo custo e utilização de componentes simples
* Utilização da linguagem C++
* Fácil manuseio de código 
* Estrutura de fluxograma 
* Evitação de falhas no controle do trânsito 
* Priorização de segurança nas vias durante o seu funcionamento

---
<h1 align="center">
  <span style="font-family: 'Arial Black', sans-serif; font-size: 3em; color: #0040FF; font-weight: 900; display: block; border-bottom: 8px solid #0040FF; padding-bottom: 10px;">
    CONCLUSÃO
  </span>
</h1>


O projeto demonstrou como tecnologias embarcadas podem ser utilizadas para solucionar problemas reais da sociedade.
Além do desenvolvimento técnico envolvendo Arduino, sensores e programação em C++, a atividade permitiu aplicar conceitos de:

* Gestão de Projetos,
* Metodologia Scrum,
* Documentação Técnica,
* Desenvolvimento de Sistemas,
*Lógica de programação.

O protótipo desenvolvido comprova a viabilidade da utilização de semáforos inteligentes para auxiliar veículos de emergência e contribuir para uma mobilidade urbana mais eficiente.

---

<div align="center">

### SENAI "A. Jacob Lafer"

**Curso Técnico em Desenvolvimento de Sistemas**

**Projeto desenvolvido pela equipe MindTech - 2026**

</div>
