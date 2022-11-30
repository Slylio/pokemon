#ifndef POKEMON
#define POKEMON
#include <string>
#include <iostream>
class Pokemon{
	private:
		std::string name, type_1, type_2;
		int total,hp,attack,defense,sp_atk,sp_def,speed;
		bool legendary;
	public:
        Pokemon(int ,std::string);
        Pokemon(const Pokemon &);
        const std::string& getType1() const;
		const std::string& getType2() const;
        friend std::ostream& operator<<(std::ostream& os, const Pokemon&);
};
#endif