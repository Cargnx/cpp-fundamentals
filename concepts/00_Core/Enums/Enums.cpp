#include <iostream>

enum class PlayerState {
    Idle,
    Running,
    Jumping,
    Attacking,
};

std::string stateToString(PlayerState state) {
    switch (state) {
        case PlayerState::Idle: return "Idle";
        case PlayerState::Running: return "Running";
        case PlayerState::Jumping: return "Jumping";
        case PlayerState::Attacking: return "Attacking";
        default: return "Unknown";
    }
}

int main() {
    PlayerState state = PlayerState::Idle;

    std::cout << "Player is currently: " << stateToString(state) << '\n';

    // Change state based on some game logic
    state = PlayerState::Running;
    std::cout << "Player is currently: " << stateToString(state) << '\n';

    return 0;
}
