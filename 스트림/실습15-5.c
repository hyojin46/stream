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
//			printf("�̸��� �Է��ϼ���: ");
//			gets_s(name, sizeof(name));
//			offset = n * 7;
//			fseek(f, offset, SEEK_SET);
//			fprintf(f, "%7s", name);
//		}
//		fclose(f);
//	}
//	else
//		printf("������ ������ �ʽ��ϴ�.\n");
//	return 0;
//}