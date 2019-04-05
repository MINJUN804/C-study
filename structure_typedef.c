/*
typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct Rectangle
{
	Point pos1;
	Point pos2;
	Point pos3;
	Point pos4;

	int width;
}Rec;

Rectangle area(Rec* ptr)
{
	ptr->width = (ptr->pos1.xpos - ptr->pos2.xpos)*(ptr->pos1.ypos - ptr->pos2.ypos);
	printf("width:%d \n",ptr->width);
	return *ptr;
}
void dot(Rec* pptr)
{
	pptr->pos3.xpos = pptr->pos2.xpos;
	pptr->pos3.ypos = pptr->pos1.ypos;
	pptr->pos4.xpos = pptr->pos1.xpos;
	pptr->pos4.ypos = pptr->pos2.ypos;
	printf("pos1:[%d, %d] \n", pptr->pos1.xpos, pptr->pos1.ypos);
	printf("pos2:[%d, %d] \n", pptr->pos2.xpos, pptr->pos2.ypos);
	printf("pos3:[%d, %d] \n", pptr->pos3.xpos, pptr->pos3.ypos);
	printf("pos4:[%d, %d] \n", pptr->pos4.xpos, pptr->pos4.ypos);

}
int main(void)
{
	Rec rec = {
		{0,0},
	{100,100},
	{},
	{},
	{}
	};
	area(&rec);
	dot(&rec);
	return 0;
	//Rec info = { {0,0},{100,100} ,area() };
}
*/