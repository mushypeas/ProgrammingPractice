#include <stdio.h>

typedef struct{ int candidate_num; char* candidate_name;} candidate;
candidate pws = {1, "원순"};
int main()
{
	pws.candidate_num += 1;
	printf("%d %s\n", pws.candidate_num, pws.candidate_name);
	return 0;
}