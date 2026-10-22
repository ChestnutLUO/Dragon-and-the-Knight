
#include "Player.h"

#include <algorithm>
#include <utility>

// Constructor
Player::Player(std::string name, int maxHp)
    : name(std::move(name)),
      hp(std::max(1, maxHp)),
      maxHp(std::max(1, maxHp)) {}

// Take damage: block absorbs damage first
void Player::takeDamage(int amount) {
  if (amount <= 0) {
    return;
  }

  int blocked = std::min(block, amount);
  block -= blocked;
  amount -= blocked;

  hp = std::max(0, hp - amount);
}

// Heal without exceeding maximum HP
void Player::heal(int amount) {
  if (amount <= 0) {
    return;
  }

  hp = std::min(maxHp, hp + amount);
}

// Increase block
void Player::addBlock(int amount) {
  if (amount > 0) {
    block += amount;
  }
}

// Check whether player is alive
bool Player::isAlive() const {
  return hp > 0;
}

// Gain gold
void Player::gainGold(int amount) {
  if (amount > 0) {
    gold += amount;
  }
}

// Spend gold if sufficient
bool Player::spendGold(int amount) {
  if (amount < 0 || gold < amount) {
    return false;
  }

  gold -= amount;
  return true;
}

// Reset energy at the start of each turn
void Player::resetEnergy() {
  energy = 3;
}

// Getters
const std::string& Player::getName() const {
  return name;
}

int Player::getHp() const {
  return hp;
}

int Player::getMaxHp() const {
  return maxHp;
}

int Player::getBlock() const {
  return block;
}

int Player::getEnergy() const {
  return energy;
}

int Player::getGold() const {
  return gold;
}

// Deck access
Deck& Player::getDeck() {
  return deck;
}

const Deck& Player::getDeck() const {
  return deck;
}
