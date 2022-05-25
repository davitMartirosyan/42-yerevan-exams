#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int len;
	int *range;
	int i;

	len = (end >= start) ? end - start : start - end;
	//printf("%d", len);
	range = (int *)malloc(sizeof(int) * len);
	i = 0;
	while(end != start)
	{
		*range++ = end > start ? start++ : start--;
	}
	*range = end;


	return (range - len);
}

int main(void)
{
	int *arr = ft_range(0, -3);
	printf("%d\n", arr[3]);
}
