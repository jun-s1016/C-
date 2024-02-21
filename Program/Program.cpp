#include <iostream>
#include "../Program/Siege_Tank.h"
#include "../Program/Goliath.h"
#include "../Program/Vulture.h"

using namespace std;

int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로 재정의될 수 있는 함수

	// Mechanic* mechanic = new Vulture();

	// mechanic->Move();

	
	// 가상함수 실행 시간에 상위클래스에 대한 참조로
	// 하위클래스에 재정의된 함수를 호출할 수 있다. " Override : 재정의 "

	// cout << "Mechanic의 크기 : " << sizeof(Vulture) << endl;

	// 가상 함수는 한 개 이상의 가상함수를 포함하는 클래스가 있을 때
	// 객체 주소에 가상 함수 테이블을 추가한다.

#pragma endregion

#pragma region Factory
	// 입력 5번하고 종료 ,
	// 0 : 벌쳐 , 1 : 시즈 탱크 , 2 : 골리앗 생성

	int select;
	
	Mechanic* mechanic;

	for(int i = 0; i < 5; i++)
	{
		cin >> select;
		switch (select)
		{
		case 0: mechanic = new Vulture();
			break;
		case 1: mechanic = new Siege_Tank();
			break;
		case 2: mechanic = new Goliath();
			break;
		}
	}
	
	


#pragma endregion


	return 0;
}