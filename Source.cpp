#include<iostream>
using namespace std;
class Knight {
private:
	double m_hp;
	double m_damage;
	string m_name;
public:
	void setHp(double hp) { m_hp = hp; }
	void setDamage(double damage) { m_damage = damage; }
	void setName(string name) { m_name = name; }
	double getHp() { return m_hp; }
	double getDamage() { return m_damage; }
	string getName() { return m_name; }
	void increaseDamage() {
		m_damage *= 1.1;
	}
	void print() {
		cout << "Knight name" << m_name << endl;
		cout << "Knight hp" << m_hp << endl;
		cout << "Knight damage" << m_damage << endl;
	}
};
class Mage {
private:
	double m_hp;
	double m_damage;
	string m_name;
public:
	void setHp(double hp) { m_hp = hp; }
	void setDamage(double damage) { m_damage = damage; }
	void setName(string name) { m_name = name; }
	double getHp() { return m_hp; }
	double getDamage() { return m_damage; }
	string getName() { return m_name; }
	void increaseHp(double addHp) {
		m_hp += addHp;
	}
	void print() {
		cout << "Mage name" << m_name << endl;
		cout << "Mage hp" << m_hp << endl;
		cout << "Mage damage" << m_damage << endl;
	}
};

int main() {
	Knight k1;
	k1.setName("Valera");
	k1.setHp(100);
	k1.setDamage(20);
	k1.print();
	Mage m1;
	m1.setName("Travis");
	m1.setHp(50);
	m1.setDamage(20);
	m1.print();
	return 0;
}

