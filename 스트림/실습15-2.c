//#include <stdio.h> //�ǽ� 15-2 ->�������� �ѱ��� ������ ����, ����� ���� ��
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
//		printf("������ ������ �ʽ��ϴ�.\n");
//
//	return 0;
//}