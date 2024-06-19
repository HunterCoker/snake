#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define WIDTH   32
#define HEIGHT  32

#define get_x(snake_point) \
    snake_point & 0xff00 >> 8

#define get_y(snake_point) \
    snake_point & 0x00ff

typedef struct {
    bool running;
    uint16_t snake[WIDTH * HEIGHT];
    size_t snake_len;
} state_t;

void step_game(state_t *state, uint8_t input);
void render_state(state_t *state);

int main(int argc, const char* argv[]) {
    
    state_t state = {
        .running = true,
        .snake = {0},
        .snake_len = 0
    };

    uint8_t input;
    while (state.running) {
        step_game(&state, input);
        render_state(&state);
    }

    return 0;
}

void step_game(state_t *state, uint8_t input) {

}

void render_state(state_t *state) {

}