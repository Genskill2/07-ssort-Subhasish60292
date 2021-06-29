void
swap_max (int arr[], int l, int n)
{
  int t = arr[n];
  int max = arr[n];
  int h = l;
  for (int i = n; i < l; i++)
    {
      if (arr[i] > max)
	{
	  max = arr[i];
	  h = i;
	}
    }
  arr[n] = max;
  arr[h] = t;
}

void
ssort (int arr[], int l)
{
  for (int i = 0; i < l; i++)
    {
      swap_max (arr, l, i);
    }
}
