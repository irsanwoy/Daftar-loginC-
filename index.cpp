#include<iostream>
using namespace std;

//hash table
struct HashTable{
	//data
	string ussername, password;
}dataAkun[26];

//function hash 
int hashFunction(string key){
	return tolower(key[0]) - 97;
}

//cek daftar
bool cekDaftar(string ussername, string password){
	int index = hashFunction(ussername);
	
	//cek index masih kosong atau sudah ditempati
	if(dataAkun[index].ussername == ussername){
		//kalo sel index di hash tidak boleh kosong
		cout<<"User sudah ada!!"<<endl;
		return false;
	}else{
		//kalo sel index di hash table kosong
		dataAkun[index].ussername = ussername;
		dataAkun[index].password = password;
		return true;
	}
}

//print hash table
void printAkun(){
	cout<<"Data Akun :"<<endl;
	cout<<"| Index\t - ussername "
}

//view daftar
void viewDaftar(){
	string ussername, password;
	cout<<"**MENU DAFTAR**"<<endl;
	cout<<"Masukan Username & Password anda"<<endl;
	cout<<"Isi username anda :";
	cin>>ussername;
	cout<<"Isi password anda :";
	cin>>password;
	
	if(cekDaftar(ussername, password)){
		cout<<"Akun berhasil terdaftar"<<endl;
	}else{
		cout<<"Akun gagal terdaftar"<<endl;
	}
}

//tamopilan utama
void welcome(){
	while(true){
		string pilihan;
		cout<<"***PROGRAM SEDERHANA LOGIN DENGAN HASHING**"<<endl;
		cout<<"\nMenu Pilihan :"<<endl;
		cout<<"1.Daftar"<<endl;
		cout<<"2.Login"<<endl;
		cout<<"3.Keluar"<<endl;
		cout<<"\tPilih menu[1/2/3] : ";
		cin>>pilihan;
	
		if(pilihan == "1"){
			cout<<"\nAnda berada dimenu daftar"<<endl;
			viewDaftar();
		}else if(pilihan == "2"){
			cout<<"\nAnda berada dimenu login"<<endl;
		}else if(pilihan == "3"){
			cout<<"Terimakasih telah menggunakan aplikasi login sederhana"<<endl;
			break;
		}else{
			cout<<"pilihan tidak tersedia"<<endl;
		}
	}
}

int main(){	
	welcome();
}
