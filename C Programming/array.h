
void PrintArray(int a[], int size)
{

	puts("Index\tValue");

	size_t i;
	for(i = 0; i < size; i++)
	{
		printf("[ %d ] =\t%d\n", i, a[i]);
	}
	puts("");
}