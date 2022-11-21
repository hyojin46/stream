//#include <stdio.h>
//
//int main()
//{
//	char name[10];
//	long offset;
//	int n;
//	FILE* f;
//	errno_t err;
//
//	err = fopen_s(&f, "test4.txt", "w");
//
//	if (NULL != f)
//	{
//		for (n = 0; n < 3; n++)
//		{
//			printf("이름을 입력하세요: ");
//			gets_s(name, sizeof(name));
//			offset = n * 7;
//			fseek(f, offset, SEEK_SET);
//			fprintf(f, "%7s", name);
//		}
//		fclose(f);
//	}
//	else
//		printf("파일이 열리지 않습니다.\n");
//	return 0;
//}