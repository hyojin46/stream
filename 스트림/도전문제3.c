//#include <stdio.h>
//
//int main(void)
//{
//	int su = 0x000035;
//	FILE* fb;
//	errno_t err;
//
//	err = fopen_s(&fb, "binary.txt", "wb");
//
//	if (NULL != fb)
//	{
//		printf("바이너리 파일 열기 성공\n");
//		printf("쓰기 모드로 binary.txt 파일 생성 완료\n");
//
//		fwrite(&su, sizeof(int), 1, fb);
//		fclose(fb);
//	}
//	else
//		printf("바이너리 파일 열기 실패!\n");
//
//	return 0;
//}