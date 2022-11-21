//#include <stdio.h>
//
//int main(void)
//{
//	FILE* fp;
//	errno_t err;
//	err = fopen_s(&fp, "smile.txt", "wt");
//
//	if (NULL != fp)
//	{
//		fprintf(fp, "안녕하세요.\n");
//		fprintf(fp, "웃음은 언제나 행복을 선사합니다.\n");
//		printf("새로운 smile.txt 파일: 생성 완료\n");
//		printf("생성된 파일 위치: 소스 코드와 동일한 디렉터리\n");
//		printf("smile.txt 파일 안 내용 확인\n");
//		fclose(fp);
//	}
//	else
//		printf("파일 열기 실패!\n");
//
//	return 0;
//}