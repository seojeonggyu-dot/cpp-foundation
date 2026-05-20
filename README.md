# C++ Foundation

C++ 기초 문법과 객체지향 프로그래밍 학습 내용을 정리한 저장소입니다.

## 주요 학습 내용

- 기본 입출력
- 동적 메모리 할당
- vector / string
- stack STL
- 파일 분리 컴파일
- 클래스와 객체
- 템플릿
- 예외 처리

## 폴더 구조

```text
practice/
├── report-01/
│   ├── 01_student_grade.cpp
│   ├── 02_lotto_generator.cpp
│   ├── 03_cli_calculator.cpp
│   ├── 04_binary_to_decimal.cpp
│   ├── 05_exception_calculator.cpp
│   └── 06_template_array.cpp
│
└── report-02/
    ├── 01_vector_grade.cpp
    ├── 02_my_atoi.cpp
    ├── 03_my_atof.cpp
    ├── 04_stack_reverse.cpp
    ├── point_class/
    │   ├── main.cpp
    │   ├── point.cpp
    │   └── point.h
    └── template_point/
        ├── main.cpp
        └── point_template.cpp
```

## Report 01

C++ 기본 문법과 동적 메모리, 예외 처리, 템플릿 기초를 연습한 코드입니다.

## Report 02

STL, 문자열 처리, stack, 클래스 분리, 템플릿 클래스를 연습한 코드입니다.

## 사용 환경

- Language: C++
- IDE: Visual Studio
- Compiler: MSVC

## 실행 방법

각 `.cpp` 파일을 Visual Studio에서 실행하거나, g++ 환경에서는 다음과 같이 컴파일할 수 있습니다.

```bash
g++ 파일명.cpp -o main
./main
```
