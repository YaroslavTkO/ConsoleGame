
#include <iostream>
#include <time.h>
using namespace std;
class Player {
private:
	int id;
	string name, rank = "norank";
	int points = 0;
public:
	int setId(int ID) {
		id = ID;
		return id;
	}
	int getId() {
		return id;
	}
	void setname(string name) {
		this->name = name;
	}
	void createplayer() {
		cout << "Creating new player..." << endl << "**************" << endl << "Your name is: ";
		cin >> name;
		cout << endl << "**************" << endl;

	}
	void ShowPlayerInfo() {
		cout << "**************" << endl << "Players id: " << id << "\nName: " << name << "\nRank: " << rank << endl;
		
	}
	bool GetPlayerByName(string name) {
		if (this->name == name) {
			bool NameMatch = true;
			return NameMatch;
		}
		else return 0;
	}
	bool GetPlayerByID(int id) {
		if (this->id == id) {
			bool IDmatch = true;
			return IDmatch;
		}
		else return 0;
	}
	
};
class Hero {
private:
	int id, hp, damage;
	string name;
public:
	void CreateHero(int id, int hp, int damage, string name1) {
		this->id = id;
		this->hp = hp;
		this->damage = damage;
		name = name1;
	}
	int getHeroId() {
		return id;
	}
	int SetHeroId(int ID) {
		id = ID;
		return id;
	}
	bool GetHeroByName(string name) {
		if (this->name == name) {
			bool NameMatch = true;
			return NameMatch;
		}
		else return 0;
	}
	bool GetHeroByID(int id) {
		if (this->id == id) {
			bool IDmatch = true;
			return IDmatch;
		}
		else return 0;
	}
	void ShowHeroInfo() {
		cout << "Heroes id: " << id << "\nClass is: " << name << "\nHp is: " << hp << "\nDamage is: " << damage << "\n**************" << endl;

	}
};
class PlayerHero {
private:
	Player p;
	Hero h;
	int id = p.getId();
public:
	void MatchingHeroPlayer(Player a, Hero b) {
		p = a;
		h = b;
	}
	void View() {
		p.ShowPlayerInfo();
		h.ShowHeroInfo();
	}
};
class Team {
private:
	PlayerHero a[10];
public:
	void GenerateTeam() {
		for (int i = 0; i < 10; i++) {

		}
	}
};
