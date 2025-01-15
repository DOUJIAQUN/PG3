
#include <stdio.h>
#include <thread>

void one() {
	printf("shread1\n");
}
void two() {
	printf("thread2\n");
}
void three() {
	printf("thread3\n");
}
int main()
{
	std::thread th1(one);
	th1.join();
	std::thread th2(two);
	th2.join();
	std::thread th3(three);
	th3.join();

}