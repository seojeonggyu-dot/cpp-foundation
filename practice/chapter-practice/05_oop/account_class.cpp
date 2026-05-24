#include <iostream>
#include <string>
using namespace std;

class Account {
public:
	Account(string name, string account, string pass = "11111", int balance = 1);
	void setPass(string);
	void setBalance(int);
	string getName(void) const;
	string getAccount(void) const;
	string getPass(void) const;
	int getBalance(void) const;
	void showAccount(void) const;
private:
	const string name_;
	const string account_;
	string pass_;
	int balance_;
};

Account::Account(string name, string account, string pass, int balance)
	:name_(name), account_(account) {
	pass_ = pass;
	balance_ = balance;
}
void Account::setBalance(int num) { balance_ = num; }
void Account::setPass(string str) { pass_ = str; }

string Account::getName(void) const { return name_; }
string Account::getAccount(void) const { return account_; }
string Account::getPass(void) const { return pass_; }
int Account::getBalance(void) const { return balance_; }


void Account::showAccount(void) const { 
	cout << "이    름:" << name_ << endl;
	cout << "계좌번호:" << account_ << endl;
	cout << "패스워드:" << pass_ << endl;
	cout << "현재잔액:" << balance_ << endl;
}

int main(void) {
	Account user("홍길동", "111-2222-33333", "12345", 100000);
	string	userAccount, userPass;
	user.showAccount();
	try {
		cout << "/n##### 은행 계좌 인증#####" << endl;
		cout << "계좌번호 입력: ";	cin >> userAccount;
		cout << "비밀번호 입력: ";	cin >> userPass;
		if (user.getAccount() != userAccount || user.getPass() != userPass)
			throw Account("", userAccount, userPass, 0);
		int money;
		cout << "출금액 입력: ";	cin >> money;
		if (user.getBalance() < money)
			throw money;
		int num = a.getBalance() - money;
		user.setBalance(num);
		cout << user.getName() << "님의 현재 잔액은: " << user.getBalance() << "입니다." << endl;
	}
	catch (int money) {
		cout << "현재 잔액: " << a.getBalance() << endl;
		cout << "희망 출금액: (" << money << ")이 너무 많네요." << endl;
	}
	catch (Account& exception) {
		cout << "/n다음 입력을 다시 한 번 확인하세요!!!" << endl;
		exception.showAccount();
	}
	return 0;
	}
	}
}