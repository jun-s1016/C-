#include <iostream>

void Swap(int& firstValue, int& secondValue)
{
	int temp = firstValue;

	firstValue = secondValue;

	secondValue = temp;

}

int main()
{
#pragma region ��Ʈ��
	// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧
	/*
	char alphabet = 'A';
	int data = 100;

	std::cout << "data ������ �� : " << data << std::endl;
	std::cout << "alphabet ������ �� : " << alphabet << std::endl;
	*/
	// ��Ʈ���� ��� �Էµ� �����ʹ� ��� ��ġ�� �����ϸ�
	//  " << " �����ڸ� ����Ͽ� �ڽ��� ������ ���� ��ȯ�Ͽ� ����Ѵ�.


	//int selectCount = 0;


	/// ��Ʈ������ �Է¹��� �� " >> " �����ڸ� ����Ͽ� ���ۿ� ������ ����
	/// NULL ���ڱ����� ���� ���� ������ ����Ѵ�.
	//std::cin >> selectCount;

	//std::cout << " selectCount �� �� : " << selectCount << std::endl;

	// ��Ʈ���� �ü�翡 ���� �����Ǹ�, ��Ʈ�� ��ü�� ���۶��
	// �ӽ� �޸� ������ �����Ѵ�.

#pragma endregion

#pragma region ���� �Ҵ�
	// int* ptr = new int;
	// 
	// std::cout << " ptr �� ����Ű�� �� : " << *ptr << std::endl;
	// 
	// *ptr = 999;
	// 
	// std::cout << " ptr �� ����Ű�� �� : " << *ptr << std::endl;
	// 
	// delete ptr;
	//
	//int* list = new int[5];
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	list[i] = 10 + i;
	//	std::cout << "list [" << i << "] �� �� : " << list[i] << std::endl;
	//}
	//
	//delete [ ] list;
	//
#pragma endregion

#pragma region ������

	//int value = 100;
	//
	//int& ref = value;
	//
	//ref = 999;
	//std::cout << "ref  �� �� : " << ref << std::endl;
	//std::cout << "value  �� �� : " << value << std::endl;

	//int x = 10;
	//int y = 20;

	//Swap(x, y);

	//std::cout << " x�� �� : " << x << std::endl;
	//std::cout << " y�� �� : " << y << std::endl;



#pragma endregion

#pragma region ���� ��� for ��

	int dataList[5] = { 1,2,3,4,5 };

	for (const int& element : dataList)
	{
		dataList[0] = 999;
		std::cout << " element �� �� : " << element << std::endl;
	}

#pragma endregion

	return 0;
}

