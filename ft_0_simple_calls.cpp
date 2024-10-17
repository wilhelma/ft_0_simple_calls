int global = 41;

int foo(const int* arg) {
  return *arg + global--;
}

int bar(const int& arg) {
   return foo(&arg) - global++;
}

int main(int argc, char** argv) {
  int local = 5;
  bar(argc);
  foo(&local);

	return 0;
}
