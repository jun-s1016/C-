#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

char character = 'A';
using namespace std;  // �̰� ����ϸ� std:: �� �Ƚᵵ ��


namespace EnemySkill
{
	void Skill()
	{
		cout << "Enemy Skill" << endl;
	}
}
using namespace EnemySkill;

namespace PlayerSkill
{
	void Skill()
	{
		cout << "Player Skill" << endl;
	}
}

int main()
{
#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴ� �� ����ϴ� ������
	//char character = 'W';

	//std::cout << "Character �� �� : " << character << std::endl;

	//// ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������ ����Ǿ��� �� 
	//// ���� ����� ������ ����� ������ �̸��� ����ϴ� ���� ��Ģ�� �����Ѵ�
	//// �� ������ ���� ������ ȣ����� �ʴ´� .

	//std::cout << "���� ���� Character �� �� :" << ::character << std::endl;

	// ���� ���� �����ڸ� ����Ͽ� ���� ������ ������ �����찡 �Ǹ�
	// ���� ������ ������ �� �ִ�.


#pragma endregion

#pragma region �̸� ����
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����̴�.

	//Skill();
	//PlayerSkill::Skill();

	// �̸� ������ ���� �̸��� �Լ��� ������ �� �ٸ� ������
	// �����Ͽ� �ߺ����� �ʵ��� ������ �� �ִ�.

#pragma endregion

#pragma region ȸ�� �Ǻ�

	//bool flag = true;

	//const char* content = "qwerewq";

	//int count = strlen(content);

	//for (int i = 0; i < count / 2; i++)
	//{
	//	if (content[i] != content[count - 1 - i])
	//	{
	//		flag = false;
	//		break;
	//	}

	//}
	//if (flag == true)
	//{
	//	cout << " ȸ���Դϴ�. " << endl;
	//}
	//else
	//{
	//	cout << " ȸ���� �ƴմϴ� . " << endl;
	//}

#pragma endregion

#pragma region �ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� �˰���
	//ASCII ���� �ҹ��ڿ� �빮���� �� ���̴� 32�̴�.
	//char nickName [ ]  = "gosegu";
	//r (int i = 0; i < strlen(nickName); i++)
	//
	//f (nickName[i] >= 'a' && nickName[i] <= 'z')
	//
	//ickName[i] -= 32;
	//
	//

	//cout << "nickName�� �� : " << nickName << endl;


#pragma endregion


	return 0;
}

