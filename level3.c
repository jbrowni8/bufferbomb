int global_value;

int move() {
  global_value = 0x324754fd; /* my cookie */
}

int main() {
  move();
}
