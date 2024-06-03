#include "player.h"
#include <string>

//funkcja wspólna dla CPU i Human - definicja w player
std::string Player::getName() const {
    return nickname;
}