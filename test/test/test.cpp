// test.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include "stdio.h"
#include "pch.h"
#include <iostream>
#include <regex>
using namespace std;

	/*int num1 = 1 << 30;
	int buffer[32] = { 0 };
	int j = 31;
	int push = 0;
	 cout << "2 진수로 변환할 수을 입력하시오 : ";
	cin >> push;
	push = num1;
	for (int i = 0; push > 0; j-- ) {
	
		buffer[j] = push % 2 << i;
		push /= 2;

	}
	for (int h = 0; h < 31;) {
		for (int i = 0; i < 4; i++)
		{
			cout << buffer[h++];
		}
		cout << " ";
	}

*/ 
void sum() {
	 
	static int i = 0;
	i++;
	cout << i << endl;


	}

int main(int argc, char *argv[])
{    
	char a[] = "sdfaf";
	int ch1, ch2;
	while (1) {
	ch1 = getchar();
	if (ch1 != '\n') {
		if (ch1 >= 91)
			ch1 -= 32;
		else
			ch1 += 32;
	}
	putchar(ch1);
}
		


		return 0; 
	}

	
	


// 프로그램 실행: <ctrl+f5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <f5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
