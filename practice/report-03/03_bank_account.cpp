#include <iostream>
#include <string>
using namespace std;

class Account {
public:
	Account(string name, string account, string pass = "11111", int balance = 1);
	void setPass(string);
	void setBalance(int);
	string getName() const;
	string getAccount() const;
	string getPass() const;
	int getBalance() const;
	void showAccount() const;
private:
	const string name_;
	const string account_;
	string pass_;
	int balance_;
};

Account::Account(string name, string account, string pass, int balance)
	:account_(account), name_(name) {
	pass_ = pass;
	balance_ = balance;;
}

void Account::setPass(string pass) {
	pass_ = pass;
}

void Account::setBalance(int balance) {
	balance_ = balance;
}

string Account::getName(void)const {
	return name_;
}

string Account::getAccount(void)const {
	return account_;
}

string Account::getPass(void)const {
	return pass_;
}

int Account::getBalance(void)const {
	return balance_;
}

void Account::showAccount(void)const {
	cout << "이    름:" << name_ << endl;
	cout << "계좌번호:" << account_ << endl;
	cout << "패스워드:" << pass_ << endl;
	cout << "현재잔액:" << balance_ << endl;
}

int main() {
	Account user("홍길동", "111-2222-33333","12345",100000);
	user.showAccount();
	string password, account;
	cout << "##### 은행 계좌 인증 #####"<<endl;
	try {
		cout << "계좌번호 입력: "; cin >> account;
		cout << "비밀번호 입력: "; cin >> password;
		if (account != user.getAccount() || password != user.getPass()) {
			throw Account("",account,password,0);
		}
		int money;
		cout << "희망 출금액: "; cin >> money;
		if (money > user.getBalance()) {
			throw money;
		}
		int balance = user.getBalance() - money;
		user.setBalance(balance);
		cout << user.getName() << "님의 현재 잔액은: " << user.getBalance() << "입니다.";
	}
	catch (Account a) {
		cout << "다음 입력을 다시 한 번 확인하세요!!!"<<endl;
		a.showAccount();
		return 0;
	}
	catch (int money) {
		cout << "현재 잔액: " << user.getBalance() << endl;
		cout << "희망 출금액(" << money << ")이 너무 많네요.";
	}
	return 0;
}