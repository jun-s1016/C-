#include <iostream>
#include "Transform.h"
using namespace std;

class Monster
{
private:
	int health;
public:
	static int killCount;

	void PrintDamage(int damage) const
	{
		cout << "Hp : " << damage << endl;
	}

	~Monster()
	{
		killCount++;
	}
};

int Monster::killCount = 10;

int main()
{
#pragma region 정적 멤버 변수

	//Monster* monster1 = new Monster;
	//
	//monster1->PrintDamage(23);

	//Monster* monster2 = new Monster;

	//monster2->PrintDamage(33);

	//Monster* monster3 = new Monster;

	//monster3->PrintDamage(47);

	//Monster* monster4 = new Monster;

	//monster4->PrintDamage(58);

	//delete monster1;
	//delete monster2;
	//delete monster3;
	//delete monster4;

	//cout << "monster가 죽은 횟수 : " << Monster::killCount << endl;

#pragma endregion

#pragma region 기본 매개 변수

	//Transform transform;

	//transform.Rotate();
	//
	//cout << endl;

	//// 기본 매개변수는 왼쪽에서부터 값을 설정합니다.
	//transform.Rotate(25);
	//cout << endl;

	//// 기본 매개변수를 지정하려면 왼쪽에서부터 지정해야 한다. 
	//transform.Rotate(25,50);
	//cout << endl;

	//transform.Rotate(25,50,100);

#pragma endregion

	return 0;
}