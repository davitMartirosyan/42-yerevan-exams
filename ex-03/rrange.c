#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	range = (int *)malloc(sizeof(int) * len);
	while(len--)
	{
		range[len] = (end >= start) ? start++ : start--;
	}
	return (range);

}


int main(void)
{
	int i;
	int *arr = ft_rrange(1, 5);

	i = 0;
	while(arr[i])
	{
		printf("%d", arr[i]);
		i++;
	}
}
