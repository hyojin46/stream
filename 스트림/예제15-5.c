//#include <stdio.h> //���� 15-5 
//
//int main(void)
//{
//	char good[80];
//	FILE* fp;
//	errno_t err;
//
//	err = fopen_s(&fp, "insa.txt", "rt");
//
//	if (NULL != fp)
//	{
//		printf("���� ���� ����\n");
//
//		while (NULL != fgets(good, sizeof(good), fp)) //���ڿ� �̱⶧���� sizeof()�Լ��� ����
//		{
//			printf("%s", good);
//		}
//		fclose(fp);
//	}
//	else
//		printf("���� ���� ����\n");
//
//	return 0;
//}
