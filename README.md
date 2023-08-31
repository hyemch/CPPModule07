# CPPModule07
C++ templates

## Exercise 00: Start with a few functions

| Turn-in directory | ex00 |
| --- | --- |
| Files | Makefile, main.cpp, whatever.hpp |
| Forbidden functions | None |

다음 함수 templates 을 구현한다.

- swap
    - 주어진 두 arguments(인자)의 값을 swap한다(바꾼다).
    - 아무것도 return 하지 않는다.
- min
    - 인자로 전달된 두 값을 비교하고,  `작은 값을 return`한다.
    - 두 값이 `같으면`,  `두 번째 값을 반환`한다.
- max
    - 인자로 전달된 두 값을 비교하고, `큰 값을 return` 한다.
    - 두 값이 `같으면`, `두 번째 값을 반환`한다.

이 함수는 모든 유형의 인자를 사용하여 호출 할 수 있다.

유일한 요구 사항은 두 인자의 유형이 같아야 하고 모든 비교 연산자를 지원해야 한다.

<aside>
ℹ️  템플릿은 헤더파일에 정의 되어있어야 한다.

</aside>

Running the following code :

```cpp
int main( void )
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}
```

```cpp
output

a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2
```

## Exercise 01: Iter

| Turn-in directory | ex01 |
| --- | --- |
| Files | Makefile, main.cpp, iter.hpp |
| Forbidden functions | None |
- 3개의 매개변수를 받고 아무것도 반환하지 않는 함수 템플릿 iter(반복)을 구현한다.
    - 첫 번째 매개변수는 배열의 주소 (address of an array)
    - 두 번째 매개변수는 배열의 길이 (length of array)
    - 세 번째 매개변수는 모든 배열의 요소에서 호출 될 함수
- 테스트가 포함된 main.cpp 파일을 제출한다.
- 테스트 실행 파일을 생성할 수 있는 충분한 코드를 제공한다.
- 반복 함수 템플릿은 모든 유형의 배열에서 작동해야 한다.
- 세 번째 매개변수는 인스턴스화된 함수 템플릿일 수 있다.


- study
    1. 함수 템플릿 iter
        1. 템플릿 매개변수를 사용하여 배열의 요소를 반복적으로 처리하는 함수를 정의한다.
    2. 주소로부터 배열 접근
        1. 배열의 주소를 받아 배열의 요소에 접근할 수 있어야 한다.
    3. 배열 길이
        1. 배열의 길이도 인수로 받는다.
    4. 호출 함수 (call back function)
        1. 각 요소에 대해 소출할 함수를 템블릿의 인수로 받는다.

## Exercise 02: Array

| Turn-in directory | ex02 |
| --- | --- |
| Files | Makefile, main.cpp, Array.hpp
and optional file : Array.tpp |
| Forbidden functions | None |
- `type T`의 요소를 포함하고, 다음과 같은 동작과 함수를 구현하는 class template `Array` 를 만든다.
    - Construction with no parameter : 비어있는 배열을 생성한다.
    - Construction with an `unsigned int n` as parameter : 디폴트로 초기화된 n개의 요소로 구성된 배열을 생성한다.
        - ***Tip**: int *a = new int(); 를 컴파일 한 다음 *a를 나타내라.
    - Construction by copy and assignment operator : 두 경우 모두, 복사 후 원본 배열이나 복사본을 수정해도 다른 배열에 영향을 미치지 않는다.
    - 메모리를 할당할 때는 new[] 연산자를 사용해야만 한다.
    - 예방적 할당 (메모리를 미리 할당하는 것)은 금지되어있다. 프로그램은 할당하지 않은 메모리에 절대 엑세스해서는 안된다.
    - Elements 아래첨자 연산자:[] 를 통해 접근할 수 있다.
    - []연산자를 사용하여 요소에 접근할때 해당 인덱스가 범위를 벗어나면, std::exception을 던진다.
    - 멤버 함수 size() : the number of elements in the array 를 반환한다.
        - 이 멤버 함수는 매개변수를 받지 않으며 현재 인스턴스를 수정하지 않는다. → const ?
    - 평소와 같이, 모든 것이 예상대로 작동하는지 확인하고 테스트를 포함하는 main.cpp 파일을 제출해라.
