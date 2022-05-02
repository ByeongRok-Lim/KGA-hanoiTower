#include <iostream>

using namespace std;

void HanoiTower(int count, char fromArea, char middleArea, char toArea)
{
	if (count == 1)
	{
		cout << "���� 1�� " << fromArea << "���� " << toArea << "�� �̵�" << endl;
	}
	else
	{
		HanoiTower(count - 1, fromArea, toArea, middleArea);
		cout << "���� " << count <<"�� " << fromArea << "���� " << toArea << "�� �̵�" << endl;
		HanoiTower(count - 1, middleArea, fromArea, toArea);

	}
}

int main(void)
{
	HanoiTower(3, 'A', 'B', 'C');
	return 0;
}