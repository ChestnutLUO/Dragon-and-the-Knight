
#pragma once

#include <string>

#include "card/Deck.h"

class Player {
 private:
  std::string name;
  int hp;
  int maxHp;
  int block = 0;
  int energy = 0;
  int gold = 0;
  Deck deck;

 public:
  // Constructor
  Player(std::string name, int maxHp);

  // Health and defense
  void takeDamage(int amount);
  void heal(int amount);
  void addBlock(int amount);
  bool isAlive() const;

  // Gold
  void gainGold(int amount);
  bool spendGold(int amount);

  // Energy
  void resetEnergy();

  // Getters
  const std::string& getName() const;
  int getHp() const;
  int getMaxHp() const;
  int getBlock() const;
  int getEnergy() const;
  int getGold() const;

  // Deck access
  Deck& getDeck();
  const Deck& getDeck() const;
};
