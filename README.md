# Projeto TAREFA 2 - Atividade 29/01

Este projeto é uma tarefa da residência do CEPEDI de Sistemas Embarcados. Ele demonstra como controlar LEDs e um botão usando a Raspberry Pi Pico. O código faz com que três LEDs (azul, vermelho e verde) acendam simultaneamente quando o botão é pressionado e, em seguida, apaguem em sequência após um atraso. O projeto utiliza a placa BitDogLab e o simulador Wokwi para testar a funcionalidade durante o desenvolvimento.

## Descrição

O projeto utiliza um microcontrolador para controlar LEDS RGB. Um botão é usado para iniciar um evento de controlar os LEDS de acordo como pede a tarefa.

## Estrutura do Projeto

- `blink.c`: Contém a lógica principal para controlar o display de LEDs e tratar as interrupções dos botões.
- `diagram.json`: Arquivo json onde é usado para visualizar os testes com as funcionalidades do Wokwi
- `CMakeLists.txt`: Arquivo de configuração do CMake para compilar o projeto.

## Funcionalidades

- Acender três LEDs (azul, vermelho e verde) simultaneamente ao pressionar o botão.
- Desligar os LEDs em sequência após um atraso.
- Debouncing de 50 ms para evitar múltiplas leituras de um único pressionamento de botão.

## Como usar o projeto

1. Clone o repositório.
2. Importe o projeto com a extensão Raspberry Pi Pico.
3. Coloque a placa BitDogLab no modo BOOTSEL, compile e rode o arquivo .c.
4. Acesse o arquivo "diagram.json" e abrirá uma tela onde será simulado a placa, leds e o botão de acionamento. 

## Requisitos

- Placa BitDogLab
- Computador Pessoal

## Licença

Este projeto é licenciado sob a [MIT License](LICENSE).

---

Residência do CEPEDI de Sistemas Embarcados, Embarcatech.
