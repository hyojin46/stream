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
//		printf("���Ͽ��� ���� ���ڿ�: ");
//		puts(s); //Q.�� puts����..?
//
//		fclose(f);
//	}
//	else
//		printf("������ ������ �ʽ��ϴ�.\n");
//	return 0;
//}