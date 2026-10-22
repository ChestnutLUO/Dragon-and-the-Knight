#pragma once

#include "enemy/EnemyTypes.hpp"

#include <string>

class Enemy{
	private:
        EnemyType name_;
		int hp_;
        int max_hp_;
		int difficulty_;
        int shield_;
        bool is_alive_;
	public:
        Enemy(EnemyType name,int maxHp,int difficulty);
		void set_hp(int hp);
        int get_hp();
		int get_difficulty();
        void set_shield(int shield);
        int get_shield();
};