
int main(void)
{
	int i, n, sum = 0;
	int *score;
	printf("student n:");
	scanf("%d", &n);
	score = (int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("%d student score:", i + 1);
		scanf("%d", &score[i]);//==scanf("%d", score+i); 
	}
	for (i = 0; i < n; i++)
		sum += (score[i]);//==*(score+i); 

	printf("%d studen tscore sum:%d %d \n", n, sum);
	free(score);
	return 0;
}
