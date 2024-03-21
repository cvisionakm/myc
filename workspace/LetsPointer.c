#include <stdio.h>
#include <time.h>
int main(){
    int one= 1;
    //*p는 one주소값을 가진다.그 말은 *p가 가지고 있는 데이터가 one의 주소라는 것이다.
    int *p= &one;
    //p는 *p가 가지고 있는 데이터를 출력한다. 그 말은 *p는 one의 주소(숫자)를 가지고 있기때문에 모르는 숫자가 나온다.    
    printf("%d\n\n",p);
    //*p가 가지고 있는 데이터 즉 주소를 검색해서 해당 주소안에 데이터를 불러오는 방법이 *p로 사용하는것이다.
    printf("%d\n\n",*p);
    
    // 이 예제에서 중요한 부분은 int*p=&one을 넣었을경우 *p의 저장공간에는 one의 주소값이들어간다.
    // 그리고 주소값을 표현하는 방법은 *을 뺀 p를 사용하는 것이다.
    //*p가 가지고 있는 주소값을 타고 도착한 저장공간의 값을 사용하고 싶다면 *p를 이용하면 된다.
    //컴파일 할때마다 one에 주소값이 다르게 나오는대 그 이유는 컴파일러가 주소를 할당하기 때문이다.(컴파일러 맘대로함)

    return 0;
}