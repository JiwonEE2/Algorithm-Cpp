int func1(int N)
{
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return sum;
}

int func2(int arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i] + arr[j] == 100)return 1;
		}
	}
	return 0;
}

int func3(int N)
{
	for (int i = 2; i * i <= N; i++)
	{
		if (i * i == N)return 1;
	}
	return 0;
}

int func4(int N)
{
	int result = 1;
	for (int i = 1; result * 2 <= N; i++)
	{
		result *= 2;
	}
	return result;
	// While 문 방식이 더 좋아 보인다.
}
