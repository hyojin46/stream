//#include <stdio.h> //�ǽ� 15-1
//
//int main(void)
//{
//	char fname[] = "basic.txt";
//	char name[30] = "��ȿ��";
//	int point = 100;
//	FILE* f;
//	errno_t err;
//
//	err = fopen_s(&f, "basic.txt", "wt");
//
//	if (NULL != f)
//	{
//		fprintf(f, "��ȿ��");
//		printf("�̸��� %s�� �л��� ������ %d �Դϴ�.\n", name, point);
//		fclose(f);
//	}
//	else
//		printf("������ ������ �ʽ��ϴ�.\n");
//
//	puts("������Ʈ �������� ���� basic.txt�� �޸��忡�� �������");
//
//	return 0;
//}