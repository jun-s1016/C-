#include <iostream>
#include <vector> // 선형 컨테이너 vector 
#include <time.h>
#include <conio.h>
#include <Windows.h>

using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int main()
{
	// 선형 컨테이너   : Vector , Deque ( #include )
	// 컨테이너 어댑터 : Stack , Queue 
	// 연관 컨테이너   : map, set, list
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 일반적인 컨테이너.

#pragma region vector

	//std::vector<int> vector;
	//
	//vector.reserve(10);
	//
	//// push_back :  vector 컨테이너 뒤에 데이터 값을 넣어준다.
	//// [10] [20] [30] [40] [50] [60]
	//
	//vector.push_back(10);
	//cout << " vector.capacity : " << vector.capacity() << endl;
	//vector.push_back(20);
	//
	//vector.push_back(30);
	//vector.push_back(40);
	//vector.push_back(50);
	//
	//cout << " vector.capacity : " << vector.capacity() << endl;
	// 
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << " ";
	//}
	//
	//
	//vector.pop_back();
	//vector.pop_back();
	//vector.pop_back();
	//
	//cout << endl;
	//
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << " ";
	//}
	//cout << endl;
	//
	//cout << "vector.size : " << vector.size() << endl;
	//cout << "vector.capacity : " << vector.capacity() << endl;

#pragma endregion

#pragma region Rythme Game

	srand(time(NULL));

	std::vector<const char*> note;

	int createCount = 5;

#pragma endregion



#pragma endregion

	return 0;
}
