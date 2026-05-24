# C++ Foundation

C++ 기초 문법부터 객체지향 프로그래밍, STL, 파일 입출력, 연결 리스트까지 학습하며 작성한 예제 코드와 실습 파일을 정리한 저장소입니다.

단순히 파일을 모아두는 용도가 아니라, C++ 학습 과정에서 다룬 개념들을 주제별로 정리하는 것을 목표로 합니다.

## 주요 학습 내용

- 기본 입출력과 자료형
- 조건문, 반복문, 함수
- 포인터와 동적 메모리 할당
- 배열, 문자열, `vector`, `string`
- `stack` 등 STL 사용
- 클래스와 객체
- 생성자, 소멸자, 캡슐화
- 상속, 가상 함수, 다형성
- 템플릿과 템플릿 클래스
- 텍스트/이진 파일 입출력
- 단일 연결 리스트와 이중 연결 리스트

## 폴더 구조

```text
cpp-foundation/
├── practice/
│   ├── report-01/
│   ├── report-02/
│   ├── report-03/
│   └── chapter-practice/
│
├── examples/
│   ├── basic_io/
│   ├── class_examples/
│   ├── file_io/
│   ├── linked_list/
│   ├── polymorphism/
│   └── stl/
│
├── README.md
└── .gitignore
```

## practice

수업 과제와 장별 연습 문제를 정리한 폴더입니다.

### report-01

C++ 기본 문법, 동적 메모리, 예외 처리, 템플릿 기초를 연습한 코드입니다.

### report-02

`vector`, 문자열 처리, `stack`, 클래스 파일 분리, 템플릿 클래스를 연습한 코드입니다.

### report-03

클래스, 생성자/소멸자, 동적 메모리, 단일 연결 리스트, 이중 연결 리스트를 연습한 코드입니다.

### chapter-practice

수업 시간에 진행한 장별 연습 문제와 개인 실습 코드를 정리한 폴더입니다.

## examples

수업 중 다룬 예제 코드와 개념 확인용 실습 코드를 정리한 폴더입니다.

- `basic_io/`: 기본 입출력과 간단한 문법 예제
- `class_examples/`: 클래스 분리, 사용자 정의 클래스 예제
- `file_io/`: 텍스트 파일 및 이진 파일 입출력 예제
- `linked_list/`: 연결 리스트 관련 예제
- `polymorphism/`: 상속, 가상 함수, 다형성 예제
- `stl/`: `string`, `stack` 등 STL 활용 예제

## 사용 환경

- Language: C++
- IDE: Visual Studio
- Compiler: MSVC

## 실행 방법

각 `.cpp` 파일은 Visual Studio에서 실행할 수 있습니다.

일부 단일 파일 예제는 g++ 환경에서도 다음과 같이 컴파일할 수 있습니다.

```bash
g++ 파일명.cpp -o main
./main
```

헤더 파일과 구현 파일이 분리된 예제는 관련 `.cpp`, `.h` 파일을 같은 프로젝트에 포함한 뒤 빌드해야 합니다.

## 정리 기준

- 과제/리포트 코드는 `practice/report-XX/`에 정리합니다.
- 수업 예제와 개념 확인 코드는 `examples/`에 정리합니다.
- 미완성 파일은 필요한 경우 `unfinished/` 폴더에 따로 보관합니다.
- Visual Studio 빌드 결과물과 개인 설정 파일은 `.gitignore`로 제외합니다.
