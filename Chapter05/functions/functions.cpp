int findLength(const char word[]) {
  int size{0};
  while (word[size] != '\0') {
    size++;
  }

  return size;
}

// hello
// oellh
// olleh
// olleh ***
// oellh
// hello
void reverse(char word[], const int &size) {
  for (int i = 0; i < size / 2; i++) {
    char temp = word[size - 1 - i];
    word[size - 1 - i] = word[i];
    word[i] = temp;
  }
}