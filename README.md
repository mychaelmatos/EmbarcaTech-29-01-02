Projeto - Tarefa 2
Este projeto é a Tarefa 2 da atividade de residência de sistemas embarcados da CEPEDI. Ele demonstra como controlar LEDs e um botão usando a Raspberry Pi Pico. O código faz com que três LEDs (azul, vermelho e verde) acendam simultaneamente quando o botão é pressionado e, em seguida, apaguem em sequência após um atraso. O projeto utiliza a placa BitDogLab e o simulador Wokwi para testar a funcionalidade durante o desenvolvimento.

Estrutura do Projeto
blink.c: Contém o código principal do projeto.
CMakeLists.txt: Arquivo de configuração do CMake para compilar o projeto.
pico_sdk_import.cmake: Arquivo para importar o SDK da Raspberry Pi Pico.

Funcionalidades

LEDs
LED Azul: Conectado ao pino 12.
LED Vermelho: Conectado ao pino 13.
LED Verde: Conectado ao pino 11.

Botão
Botão: Conectado ao pino 5.

Constantes
ATRASO_ALARME_MS: Define o atraso em milissegundos para o alarme (3000 ms).
ATRASO_DEBOUNCE_MS: Define o atraso em milissegundos para o debounce do botão (50 ms).
Simulação
Para testar a funcionalidade do projeto durante o desenvolvimento, utilizamos a placa BitDogLab e o simulador Wokwi.

Compilação e Execução
Para compilar e executar este projeto, siga os passos abaixo:

Certifique-se de que o SDK da Raspberry Pi Pico está instalado.
Crie um diretório de build e navegue até ele:

mkdir build
cd build

Execute o CMake para gerar os arquivos de build:

Compile o projeto:

cmake ..

Carregue o arquivo blink.uf2 gerado na Raspberry Pi Pico.

Autor
Mychael Matos

Licença
Este projeto está licenciado sob a licença MIT.
