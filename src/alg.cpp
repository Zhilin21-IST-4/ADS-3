// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int k = 0;
  int i = 0; 
  int j = size - 1;
  while (i < j) {
    int middle = i + (i - j) / 2;
    if (arr[middle] == value) {
      int mid1 = middle;
      while (arr[--middle] == value)
        k++;
      while (arr[++mid1] == value)
        k++;
      return k;
    }
    else if (arr[middle] > value) {
      j = middle;
    }
    else {
      i = middle + 1;
    }
  }
  return 0; // если ничего не найдено
}
