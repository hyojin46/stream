//#include <stdio.h> //실습 15-2 ->실행결과가 한글이 깨져서 나옴, 영어는 실행 됨
//
//int main(void)
//{
//	int score;
//	char* str;
//	char subject[20];
//
//	FILE* f;
//	errno_t err;
//
//	str = "test1.txt";
//	err = fopen_s(&f, str, "rt");
//
//	if (NULL != f)
//	{
//		while (EOF != fscanf_s(f, "%s %d \n", subject, sizeof(subject), &score))
//			printf("%s %d \n", subject, score);
//		fclose(f);
//	}
//	else
//		printf("파일이 열리지 않습니다.\n");
//
//	return 0;
//}