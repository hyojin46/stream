//#include <stdio.h> //�ǽ� 15-3
//
//int main(void)
//{
//	int in, i;
//	int hap = 0;
//	FILE* rfp;
//	errno_t err;
//
//	err = fopen_s(&rfp, "test2.txt", "r");
//	if (NULL != rfp)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			fscanf_s(rfp, "%d", &in); //������ ����, ����� �� <-> fgets�� ����� �� ���� ������ ������ ����
//			hap = hap + in;
//		}
//		printf("�հ� = = > %d", hap);
//		fclose(rfp);
//	}
//	else
//		printf("������ ������ �ʽ��ϴ�.\n");
//
//	return 0;
//}