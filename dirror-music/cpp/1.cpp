#include <cstring>
#include <iostream>
using namespace std;

static int STUDENT_COUNTS = 10;

class Student {
   public:
    int id;
    string name;
    int score;
    Student(int id, string name, int score) {
        this->id = id;
        this->name = name;
        this->score = score;
    }

   private:
};

int main() {
    Student student(0, "bob", 90);

    return 0;
}

class M {
    int A;
    static int B;

   public:
    M(int a) {
        A = a;
        B += a;
        cout << "Constructing" << endl;
    }
    static void f1(M m);
    ~M() { cout << "Destructing\n"; }
};

void start() {}

void M::f1(M m) {
    cout << "A=" << m.A << endl;
    cout << "B=" << B << endl;
}
int M::B = 0;

int main() {
    
	int a = 0;
	

	return 0;
}

int slite_number(int a, int b) {
	int sum = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			

		}
	}

	return 0;
}