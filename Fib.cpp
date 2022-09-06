#include <cassert>
#include <iostream>

class Fibonacci final {
 public:
  static int get(int n) {
    assert(n >= 0);
    int arr[n+1];
    arr[0]=0;
    arr[1]=1;
         
      for(int index = 2; index <= n; index++)
      {
            arr[index] = arr[index-1] + arr[index-2];
	    std:: cout << arr[index] << std::endl;
      }
    return arr[n];
  }
};

int main(void) {
  int n;
  std::cin >> n;
  std::cout << Fibonacci::get(n) << std::endl;
  return 0;
}
