int renamed_global = 41;
int a_new_global = 41;

int foo(const int* arg) {
  return *arg + a_new_global + renamed_global--;
}

int bar(const int& arg) {
   return foo(&arg) - a_new_global - renamed_global++;
}

int main(int argc, char** argv) {
  int local = 5;
  bar(argc);
  foo(&local);

	return 0;
}
