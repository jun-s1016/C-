#include <iostream>
#include <vector> // 선형 컨테이너 vector
#include <deque>
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
	/*
	srand(time(NULL));

	std::vector<const char*> note;

	int createCount = 5;
	// 1. note 를 생성한다.
	for (int i = 0; i < createCount; i++)
	{
		// 2. 랜덤한 NOTE를 생성한다.
		int random = rand() % 4;

		switch (random)
		{
		case 0: note.push_back("↑");
			break;
		case 1: note.push_back("←");
			break;
		case 2: note.push_back("→");
			break;
		case 3: note.push_back("↓");
			break;
		}
	}

	char key = 0;

	// 3. 게임의 시작 조건 설정
	while (note.empty() == false)
	{
		// 4. note 를 출력한다
		for (int i = 0; i < note.size(); i++)
		{
			cout << note[i] << " ";
		}

		// 5. key 입력을 받는다
		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}

		// 6. 내가 선택한 key가 맞다면 Note 를 삭제한다.
		switch (key)
		{
		case UP: if (note[note.size() - 1] == "↑") { note.pop_back(); }
			break;
		case LEFT:if (note[note.size() - 1] == "←") { note.pop_back(); }
			break;
		case RIGHT:if (note[note.size() - 1] == "→") { note.pop_back(); }
			break;
		case DOWN:if (note[note.size() - 1] == "↓") { note.pop_back(); }
			break;
		}

		// 7. 화면을 전체 지워준다.
		system("cls");
	}
	*/
#pragma endregion

#pragma region Deque
	//Double ended queue 의 약자.

/*
	std::deque<int> deque;

	deque.push_front(10);
	deque.push_back(5);

	deque.push_front(8);
	deque.push_back(13);

	for (int i = 0; i < deque.size(); i++)
	{
		cout << "deque 의 [ " << i << " ] : " << deque[i] << endl;
	}

	deque.pop_front();
	deque.pop_back();

	cout << "-------------------------------------------" << endl;
	for (int i = 0; i < deque.size(); i++)
	{
		cout << "deque 의 [ " << i << " ] : " << deque[i] << endl;
	}
	*/

#pragma endregion




#pragma endregion

	return 0;
}
