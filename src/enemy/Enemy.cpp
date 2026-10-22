#include "enemy/Enemy.hpp"

Enemy::Enemy(EnemyType name,int max_hp,int difficulty){
    name_=name;
    max_hp_=max_hp;
}

void Enemy::set_hp(int hp){
    hp_=hp;
}

int Enemy::get_hp(){
    return hp_;
}

int Enemy::get_difficulty(){
    return difficulty_;
}

void Enemy::set_shield(int shield){
    shield_=shield;
}

int Enemy::get_shield(){
    return shield_;
}