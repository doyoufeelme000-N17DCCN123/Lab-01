#include<iostream>
using namespace std;
class ThoiGian
{
	private:
		int Gio;
		int Phut;
		int Giay;
	public:
		ThoiGian()
		{
			this->Gio=0;
			this->Phut=0;
			this->Giay=0;	
		}
		ThoiGian(int Gio,int Phut,int Giay)
		{
			this->Gio=Gio;
			this->Phut=Phut;
			this->Giay=Giay;	
		}
		void CaiDat(){
			int Gio=this->Gio;
			int Phut=this->Phut;
			int Giay=this->Giay;
			if(Giay>=60)
			{
				int i=Giay/60;
				Phut+=i;
			}
			if(Phut>=60)
			{
				int i=Phut/60;
				Gio+=i;
			}
			Gio=Gio%12;
			Phut=Phut%60;
			Giay=Giay%60;
			cout << Gio << ":" << Phut << ":" << Giay <<endl;
		}
		ThoiGian operator+(const ThoiGian &TG)
		{
			ThoiGian TG2;
			int Gio;
			int Phut;
			int Giay;
			TG2.Gio=this->Gio+TG.Gio;
			TG2.Phut=this->Phut+TG.Phut;
			TG2.Giay=this->Giay+TG.Giay;
			return TG2;	
		}	
};
int main()
{
	
	ThoiGian TG1(1,1,1);
	ThoiGian TG2(0,59,67);
	TG2.CaiDat();
	ThoiGian TG3;
	TG3=TG1+TG2;
	TG3.CaiDat();
}
