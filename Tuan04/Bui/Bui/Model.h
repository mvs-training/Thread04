#include<conio.h>
#include "sqlite3.h"
#include<Windows.h>
#include <iostream>
#include <string>
using namespace std;
class Model{
public:
	int rc;
	char *error;
	char **results = NULL;
	int rows, columns;
	sqlite3 *db;
	string nguoidung;
public:
	Model();
	void ConnectDB();
	void DisConnectDB();
	int Login();
	int SingUp();
	void SignOut();
	int Block();
	int SendMess();
	int SendMess_ctr_l();
	void Detail_fr();
	void BlockFriend();
	void ShowFriend_ctr_C();
	int ShowMessDetail();
	int showmess();
	int AddFriend();
	string getNguoidung();
	void setNguoidung(string);
	void Error();
	~Model();
};

class Controller
{
public:
	Model m;
public:
	int  id;
	char *username;
	char *password;
	int zID;
	bool isLogin;
	bool Detail;
	int zID2;
public:
	Controller();
	~Controller();
	void ConnectDB();
	void DisConnectDB();
	int Login();
	int SingUp();
	void SignOut();
	int Block();
	int SendMess();
	int SendMess_ctr_l();
	void Detail_fr();
	void Update_fr();
	void BlockFriend();
	void ShowFriend_ctr_C();
	int ShowMessDetail();
	int showmess();
	void Error();
	string getNguoidung();
	void setNguoidung(string);
	int AddFriend();


};
