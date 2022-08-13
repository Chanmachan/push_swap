//malloc stack -> argc - 1 size


       0  1  2  3  4
a[] = {a, b, c, d, e};
b[] = { ,  ,  ,  ,  };

pb;

a[0] = 10;
a[1] = 34;
a[2] = 5;
a[3] = 98;
a[4] = 2;

b[0] = NULL;
b[1] = NULL;
b[2] = NULL;
b[3] = NULL;
b[4] = NULL;

a[0] = 34;
a[1] = 5;
a[2] = 98;
a[3] = 2;
a[4] = NULL;

b[0] = 10;
b[1] = NULL;
b[2] = NULL;
b[3] = NULL;
b[4] = NULL;

argc == 6;
n = 5;
n = 0, 1, 2, 3, 4, 5;
//配列を一つずつ前にずらす
while (n < argc - 1)//a[n] != NULL(?)
{
	a[n] = a[n+1];
	n++;
}

//bの配列にaの配列の先頭を移動する
while ()
{
	b[n+1] = b[n];
	n++;
}
b[0] = a[0];
