#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable:4996)
int main()
{
	FILE* f = fopen("homework.question3", "w");
	if (!f) {
		printf("error");
		exit(1);
	}
	int nameLen;
	struct item {
		int val;
		char name[100];
		short answer;
	};
	struct item list[3];
	for (int i = 0; i < 3; i++)
	{
		printf("please enter a number and a name:\n");
		scanf("%d %s", &list[i].val, &list[i].name);
		nameLen = strlen(list[i].name);
		if (list[i].val > 10 && nameLen > 5)
		{
			list[i].answer = 1;
		}
		else {
			list[i].answer = 0;
		}
	}
	int write = fwrite(&list, sizeof(struct item), 3, f);
	fclose(f);
}