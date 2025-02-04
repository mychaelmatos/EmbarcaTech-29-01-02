#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define RED_LED 13
#define YELLOW_LED 12
#define GREEN_LED 11
#define TIMER_INTERVAL 3000  // 3 segundos

enum State { RED, YELLOW, GREEN };
enum State current_state = RED;

bool alternar_sinal(struct repeating_timer *t) {
    // Desliga todos os LEDs
    gpio_put(RED_LED, 0);
    gpio_put(YELLOW_LED, 0);
    gpio_put(GREEN_LED, 0);

    // Alterna o estado do semáforo
    switch (current_state) {
        case RED:
            gpio_put(RED_LED, 1);
            current_state = YELLOW;
            break;
        case YELLOW:
            gpio_put(YELLOW_LED, 1);
            current_state = GREEN;
            break;
        case GREEN:
            gpio_put(GREEN_LED, 1);
            current_state = RED;
            break;
    }
    return true;
}

void configurar_gpio() {
    gpio_init(RED_LED);
    gpio_set_dir(RED_LED, GPIO_OUT);
    gpio_init(YELLOW_LED);
    gpio_set_dir(YELLOW_LED, GPIO_OUT);
    gpio_init(GREEN_LED);
    gpio_set_dir(GREEN_LED, GPIO_OUT);

    // Inicializa o semáforo na cor vermelha
    gpio_put(RED_LED, 1);
}

int main() {
    stdio_init_all();

    configurar_gpio();

    // Configuração do temporizador para alternar o sinal a cada 3 segundos
    struct repeating_timer timer;
    add_repeating_timer_ms(TIMER_INTERVAL, alternar_sinal, NULL, &timer);

    // Loop principal
    while (true) {
        printf("Sistema de Semáforo Operando...\n");
        sleep_ms(1000);  // Atraso para não inundar o terminal
    }

    return 0;
}
