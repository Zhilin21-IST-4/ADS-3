// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int k = 0;
  for (int i = 0; i < size; i++) {
    if (value == arr[i]) {
      k++;
    }
  }
  return k;
  return 0; // если ничего не найдено
}
