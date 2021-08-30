
const int SPEED_OF_LIGHT = 100;  // NEVER DO THIS
string word;

int main() {
  auto x;        // does not compile
  auto x = 100;  // does compile

  const int value = 10;

  value = 11;

  return 0;
}