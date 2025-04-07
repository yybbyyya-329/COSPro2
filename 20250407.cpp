/*****************************************************
* 
* 2개의 2차원 벡터로 내적을 구하는 프로그램
* 
* ***************************************************/

#include<stdio.h>
#include<math.h>

int main(void)
{
	//0. 변수 선언
	double a1, b1, a2, b2;

	//1.값 입력받기
	printf("첫 번째 벡터의 x값을 입력하세요 :");
	scanf_s("%lf", &a1);

	printf("첫 번째 벡터의 y값을 입력하세요 :");
	scanf_s("%lf", &b1);

	printf("두 번째 벡터의 x값을 입력하세요 :");
	scanf_s("%lf", &a2);

	printf("두 번째 벡터의 y값을 입력하세요 :");
	scanf_s("%lf", &b2);

	//2. 내적 값을 구한다.
	float dotProduct = a1 * b1 * a2 * b2;

	//3. 외적 계산
	float crossProduct = a1 * b2 - a2 * b1;

	//4, 결과값 출력
	printf("두 벡터의 내적값을 : %.2f\n", dotProduct);
	printf("두 벡터의 와적값을 : %.2f\n", crossProduct);//

}