#include <iostream>
#include "LinkedList.h"
#include "Bank.h"

using namespace std;



template <typename T>
void Calculator(T x, T y)
{
	cout << " x + y  : " << x + y << endl;
}

template <>
void Calculator(char x, char y)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
}

int main()
{
#pragma region 템플릿 
	// 데이터 형식에 의존하지 않고, 하나의 값이
	// 여러 다른 데이터 타입들을 가질 수 있는 기술에 중점을 두어
	// 재사용성을 높일 수 있는 기능 
	/*Calculator(10, 20);
	Calculator(10.5f, 28.3f);
	Calculator('A','B');

	LinkedList<int> linkedList;

	linkedList.Push(1000);

	cout << linkedList.GetData() << endl;*/


#pragma endregion
	
#pragma region Friend
	// Friend 로 선언된 클래스의 private 및 protected 멤버에
	// 접근할 수 있도록 설정해주는 기능.

	/*Character character;
	character.Show();

	Bank bank;
	bank.Withdrawal(character, 15000);

	bank.Show();
	character.Show();*/


#pragma endregion

#pragma region 등비수열


	int firstTerm, different, n;
	cout << " 초항 : ";
	cin >> firstTerm;
	cout << " 공비 : ";
	cin >> different;
	cout << " 횟수 : ";
	cin >> n;
	for (int i = 1; i < n+1; i++)
	{
		cout << firstTerm << " ";

		firstTerm *= different;
	}
	 
#pragma endregion
	
	return 0;
}