
#include <iostream>
#include <stdlib.h>


using namespace std;



int BinSearch(int data[], int element,int size);


int main()
{
  int data[23] = {1, 4, 5, 6, 9, 14, 21, 23, 28, 31, 35, 42, 46, 50, 53, 57, 62, 63, 65, 74, 79, 89, 95};
  cout << BinSearch(data,9,23);

}


int BinSearch(int data[], int element,int size)
{
  int low = 0;
  int hight = size-1;
  while (low<=hight)
  {
    int mid = (low+hight)/2;
    if (element == data[mid])
    {
      return mid;
    }
    else if (element<data[mid])
    {
      hight = mid -1;
    }
    if (element>data[mid])
    {
      low = mid + 1;
    }


  }
  return -1;

}
