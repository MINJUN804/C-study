/*
struct employee
{
	char name[20];
	char ls[20];
	int pay;
};
int main(void)
{
	struct employee infor;

	printf("name:\n");
	printf("lecense num:\n");
	printf("salary:\n");
	scanf("%s %s %d",infor.name, infor.ls, &infor.pay);

	printf("name:%s lexense num:%s salary:%d", infor.name, infor.ls, infor.pay);

	return 0;

}
*/
//
/*
struct employee
{
	char name[20];
	char ls[20];
	int pay;
};
int main(void)
{
	struct employee infor[3];
	int i;
	printf("name, lecense num, salary \n");
	for (i = 0; i < 3; i++)
	{
		printf("name:");
		scanf("%s", infor[i].name);
		printf("lecense num:");
		scanf("%s", infor[i].ls);
		printf("salary:");
		scanf("%d", &infor[i].pay);
	}
	for (i = 0; i < 3; i++)
	{
		printf("name:%s", infor[i].name);
		printf("lecense num:%s", infor[i].ls);
		printf("salary:%d", infor[i].pay);
	}
	return 0;
}
*/