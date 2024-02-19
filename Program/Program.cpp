#include <iostream>
#include <stdarg.h> 
#include "Marine.h"

using namespace std;
class Mouse
{
public:
	Mouse()
	{
		cout << "Create Mouse" << endl;
	}
	~Mouse()
	{
		cout << "Release Mouse" << endl;
	}
	void Ondrag()
	{
		cout << "Ondrag" << endl;
	}
	void Connect()
	{
		cout << "Connect Mouse" << endl;
	}
};

class Keyboard
{
public:
	Keyboard()
	{
		cout << "Create Keyboard" << endl;
	}
	~Keyboard()
	{
		cout << "Release Keyboard" << endl;
	}
	void Typing()
	{
		cout << "Typing" << endl;
	}
	void Connect()
	{
		cout << "Connect Keyboard" << endl;
	}
};

class Computer : public Keyboard, public Mouse
{
public:
	void Use()
	{
		Typing();
		Ondrag();

		Mouse::Connect();
		Keyboard::Connect();
	}
};

// Debug(2 , 10 , 20 )
// Debug(3 , 10 , 20 , 30 )

//  ~~( 가변길이변수를 몇개 쓸건지 , 매개변수1,2,3,,,,)
void Debug(int count, ...) // " ..." : 가변길이 매개변수 문법0
{
	// va_list  : 가변 인자 목록으로, 
	//            가변 인자의 메모리 주소를 저장하는 포인터

	// va_start : 가변 인자의 시작 주소를 가져오는 변수
	
	// va_arg   : 가변 인자 포인터에서 특정 자료형의 크기만큼
	//            이동하는 변수이고, 값을 반환하는 변수이다.

	// va_end   : 가변 인자 처리가 끝났을 때 포인터를
	//            NULL 로 초기화하는 변수


}

int main()
{

#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 설정해주는 기능

	/*Unit unit;

	cout << "unit 오브젝트의 크기 : " << sizeof(unit) << endl;

	Marine marine;

	cout << "marine 오브젝트의 크기 : " << sizeof(marine) << endl;*/

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의 속성을 사용할 수 없으며
	// 하위 클래스는 상위 클래스의 메모리를 포함한 상태로 메모리의 크기가 결정된다

#pragma endregion

#pragma region 다중 상속
	// 하나의 하위 클래스가 여러 개의 상위 클래스를 상속받는것
	//Computer computer;

	//computer.Use();

	// 다중 상속은 여러 개의 상위 클래스에 중복되는 속성이 
	// 존재할 수 있기 때문에 범위 지정 연산자를 통해 
	// 상위클래스의 이름을 선언하고 속성을 사용해야 한다.
#pragma endregion

#pragma region 가변 길이 매개 변수

	
#pragma endregion


	return 0;
}