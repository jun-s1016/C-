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

	/*int select;

	int createCount = 0;

	Mechanic* mechanic = nullptr;

	while (createCount<5)
	{
		cin >> select;
		switch (select)
		{
		case 0: mechanic = new Vulture();
			break;
		case 1: mechanic = new Vulture();
			break;
		case 2: mechanic = new Vulture();
			break;
		default: continue;
		}
		createCount++;
		mechanic->Move();
	}
		*/
		/* 내가 쓴 답변
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
			default: continue;
			}
		}
		*/



#pragma endregion

#pragma region 가상 소멸자
		// 객체가 소멸될 때 현재 참조하고 있는 객체와 상관없이 
		// 모두 호출되는 소멸자이다.

		// Mechanic* unit1 = new Vulture();

		// delete unit1;

		// 상속된 객체가 해제될 때 하위 클래스의 소멸자가 먼저 실행되고
		// 상위 클래스의 소멸자가 실행되어야 하기 때문에 
		// 실행 시간에 메모리에 할당된 객체를 확인하고 차례대로 소멸 시켜야한다.

#pragma endregion


	return 0;
}