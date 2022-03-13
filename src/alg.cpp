// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int k = 0;
  int i = 0;
  int j = size - 1;
  int middleArray = i + (j - i) / 2;
  for (int i = 0; i <= middleArray; i++) {
    if (arr[i] == value) {
      k++;
    }
  }
  for (int i = size; i > middleArray; i--) {
    if (arr[i] == value) {
      k++;
    }
  }
  return 0; // если ничего не найдено
}
