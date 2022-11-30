#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "pokemon.h"
using namespace std;

class PokeBase{
	private:
		vector<Pokemon> pokemons;
	public:
		PokeBase(string nomFichier){
			fstream file (nomFichier,ios::in);
			file.open(nomFichier);
    		if (file.fail()){
        		cout<<"Fail to open File"<<endl;
    		}
			string line;
			int nbLignes=0;
			while (getline(file, line)){
				nbLignes++;
			}
			for (int i=1;i<nbLignes;i++){
				pokemons.push_back(Pokemon(i,nomFichier));
			}
		}
		PokeBase(vector<Pokemon> &other){
			this->pokemons=other;
		}
};
int main() {
	cout << "Entrez le chemin du fichier :";
	string nomFichier;
	getline(cin, nomFichier);
	PokeBase base(nomFichier);
	return 0;
}