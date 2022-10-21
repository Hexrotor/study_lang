//This code is copied
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rectangle {
	struct point p1;//结构中的结构，p1的类型是rectangle，包含了类型为point的xy
	struct point p2;
};

void printRect(struct rectangle r)
{
	printf("<%d, %d> to <%d, %d>\n", r.p1.x, r.p1.y, r.p2.x, r.p2.y);
}

int main(int argc, char const *argv[])
{
	int i;
	struct rectangle rects[] = {
		{{1, 2}, {3, 4}},//为rect[0]p1中的xy和p2中的xy赋值
		{{5, 6}, {7, 8}}//为rect[1]赋值
	};
	for(i=0;i<2;i++){
		printRect(rects[i]);
	}
}
