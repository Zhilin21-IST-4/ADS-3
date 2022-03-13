// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int i = 0, j = size - 1, count = 0;
  int middleArray = i + (j - i) / 2;
  for (int i = 0; i <= middleArray; i++) {
    if (arr[i] == value) {
      count++;}}
  for (int i = size; i > middleArray; i--) {
    if (arr[i] == value) {
      count++;}}
  return 0; // если ничего не найдено
}
