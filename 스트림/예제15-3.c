//#include <stdio.h> //���� 15-3
//
//int main(void)
//{
//	int num;
//	FILE* fp;
//	errno_t err;
//
//	err = fopen_s(&fp, "data.txt", "rt");
//
//	if (NULL != fp)
//	{
//		printf("���� ���� ����\n");
//
//		while (EOF != fscanf_s(fp, "%d", &num))
//		{
//			printf("%d\n", num);
//		}
//		fclose(fp);
//	}
//	else
//		printf("���� ���� ����");
//
//	return 0;
//}