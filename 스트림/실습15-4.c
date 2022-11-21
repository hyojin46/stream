//#include <stdio.h>
//
//int main(void)
//{
//	char s[20];
//
//	FILE* f;
//	errno_t err;
//
//	err = fopen_s(&f, "test3.txt", "r");
//
//	if (NULL != f)
//	{
//		fgets(s,20,f);
//		printf("파일에서 읽은 문자열: ");
//		puts(s); //Q.왜 puts인지..?
//
//		fclose(f);
//	}
//	else
//		printf("파일이 열리지 않습니다.\n");
//	return 0;
//}