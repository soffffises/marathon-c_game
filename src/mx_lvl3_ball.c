#include "../inc/header.h"

static void updateBall3(Ball3 *ball, TimeInfo *timeInfo, RenderInfo *renderInfo) {
    const float GRAVITY = 750.0f;

    if (!ball->onGround) {
        ball->vy += GRAVITY * timeInfo->deltaTime;
    }

    ball->x += ball->vx * timeInfo->deltaTime;
    ball->y += ball->vy * timeInfo->deltaTime;

    mx_handleCollisions3(ball, 1280, renderInfo, timeInfo);
}

static void handleInput3(Ball3 *ball, SDL_Event *event) {
    const float moveSpeed = 250.0f;
    const Uint8 *keyState = SDL_GetKeyboardState(NULL);

    if (keyState[SDL_SCANCODE_A]) {
        ball->vx = -moveSpeed;
    } else if (keyState[SDL_SCANCODE_D]) {
        ball->vx = moveSpeed;
    } else {
        ball->vx *= 0.9f;
    }

    if (keyState[SDL_SCANCODE_SPACE] && ball->onGround) {
        mx_playBounceSound();
        ball->vy = -300.0f;
        ball->onGround = false;
    }

    while (SDL_PollEvent(event)) {
        if (event->type == SDL_QUIT) {
            return;
        }
    }
}

void mx_runBall3Logic(Ball3 *ball, SDL_Event *event, TimeInfo *timeInfo, RenderInfo *renderInfo) {
    handleInput3(ball, event);
    updateBall3(ball, timeInfo, renderInfo);
}
