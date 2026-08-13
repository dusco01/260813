//#include <iostream>
//using namespace std;
//
//// 주머니에 공이 64개가 있음
//// 그 중에 6개를 임의로 뽑는 게임
//// 한 판에 1000원
//
//int main() {
//
//	// 1. 주머니를 만든다.
//
//	int pocket[64] = { 0, };
//	int i;
//
//	// 2. 주머니에 공을 넣는다.
//
//	for (i = 0; i < 64; i++) 
//	{
//		pocket[i] = i + 1;
//	}
//
//	srand((unsigned int)time(nullptr)); // 시간을 가져옴
//
//	// 3. 섞는다 (shuffle)
//
//	for (i = 0; i < 10000; i++)
//	{
//		int IndexNum1 = (rand() % 64);
//		int IndexNum2 = (rand() % 64);
//		int Temp = 0;
//
//		Temp = pocket[IndexNum1];
//		pocket[IndexNum1] = pocket[IndexNum2];
//		pocket[IndexNum2] = Temp;
//
//	}
//
//	// 4. 뽑는다.
//
//	for (i = 0; i < 6; i++)
//	{
//		//cout << rand() << endl; // 난수 출력해주는 함수 -> 숫자가 너무 큼
//		//int Number = rand() % 64; // 0 ~ 63 의 숫자가 나옴
//		cout << pocket[i] << endl; // 0 ~ 63 번째 자리에 있는 배열 출력
//	}
//
//	return 0;
//}
