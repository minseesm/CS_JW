#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char file_buff[100];
	fp = fopen("memo.csv", "w");

	if (fp == NULL) printf("파일열기 실패\n");
	else printf("파일열기 성공\n");

	int i;

	for (i = 1; i <= 5; i++) {
		printf("파일에 적을 내용을 입력하세요 (%d번째 라인)\n", i);
		memset(file_buff, 0, sizeof(file_buff));
		scanf("%s", file_buff);
		file_buff[strlen(file_buff)] = '\n';

		fputs(file_buff, fp);
	}
	fclose(fp);

	fp = fopen("memo.csv", "r");

	if (fp == NULL) printf("파일열기 실패\n");
	else printf("파일열기 성공\n");

	while(fgets(file_buff, sizeof(file_buff), fp) != NULL){
		printf("%s", file_buff);
		memset(file_buff, 0, sizeof(file_buff));
	}
	fclose(fp);

	return 0;
}