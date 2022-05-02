#include <iostream>

using namespace std;

void HanoiTower(int count, char fromArea, char middleArea, char toArea)
{
	if (count == 1)
	{
		cout << "원반 1을 " << fromArea << "에서 " << toArea << "로 이동" << endl;
	}
	else
	{
		HanoiTower(count - 1, fromArea, toArea, middleArea);
		cout << "원반 " << count <<"를 " << fromArea << "에서 " << toArea << "로 이동" << endl;
		HanoiTower(count - 1, middleArea, fromArea, toArea);

	}
}

int main(void)
{
	HanoiTower(3, 'A', 'B', 'C');
	return 0;
}