/*дһ������maxMinAver(int* data, int* max, int* min, float* ave, int size)��
��һ�����ݵ����ֵ����Сֵ��ƽ��ֵ������֮������dataָ��������ݵ������ָ�룬
max,min,ave�ֱ�ָ�����ֵ����Сֵ��ƽ��ֵ��size������Ĵ�С��*/
#include <stdio.h>
void maxMinAver(int* data, int* max, int* min, float* ave, int size);
int main()
{
	int i;
	int a[5], max, min;
	float ave;
	for (i = 0; i < 5; i++)
	{
		printf("please input numbers:\n");
		scanf_s("%d", &a[i]);
	}
	maxMinAver(a, &max, &min, &ave, 5);
	printf("max=%d\nmin=%d\nave=%g\n", max, min, ave);
}
void maxMinAver(int* data, int* max, int* min, float* ave, int size)
{
	int i;
	int sum = *data;
	*max = *data;
	*min = *data;
	for (i = 1; i < 5; i++)
	{
		if (*(data + i) > * max)
			* max = *(data + i);
		if (*(data + i) < *min)
			* min = *(data + i);
		sum += *(data + i);
	}
	*ave = 1.0 * sum / size;
}