class phuong_tien{
	private:
		int  ma_xe;
		string loai_xe;
		int gio_vao;
		int tg_do;
		
	public:
		phuong_tien();
		phuong_tien(int ma, string loai, int gio , int tg );
		int lay_ma_xe()const;
		string lay_loai_xe()const;
		double tinh_phi()const;
		void hien_thi()const;
	
	
};
phuong_tien::phuong_tien(){
		ma_xe = 0;
		loai_xe ="";
		gio_vao  = 0 ;
		tg_do =0;
	}
phuong_tien::phuong_tien(int ma,string loai,int gio,int tg){
	ma_xe = ma;
	loai_xe = loai;
	gio_vao=gio;
	tg_do = tg;
}
int phuong_tien::lay_ma_xe() const {
	return ma_xe;
	
}
string phuong_tien::lay_loai_xe() const{
	return loai_xe;
	}
double phuong_tien::tinh_phi()const {
	double phi_do = 0;
	double don_gia ;
	if(loai_xe=="car"){
		don_gia =6;
	}
	else if(loai_xe =="motorcycle"){
		don_gia =4 ;
		
	}
	else if(loai_xe == "bicycle"){
		don_gia = 2;
	}
	else {
		return 0 ;
	}
	bool gio_cao_diem = (gio_vao>=6&&gio_vao<10)||(gio_vao>=15&&gio_vao<19);
	for(int i =0 ;i<tg_do;i++){
		if(i<=2){
			if(gio_cao_diem){
				phi_do += don_gia*1.3;
				return phi_do;
				
			}
			else{
				phi_do += don_gia*0.95;
				return phi_do;
			}
		}
		else{
			phi_do = don_gia *0.9;
			return phi_do;
		}
	}
}
void phuong_tien::hienthi()const {
	cout<<"Ma xe: "<<ma_xe<<endl;
	cout<<"Loai xe: "<<loai_xe<<endl;
	cout<<"Gio vao: "<<gio_vao<<endl;
	cout<<"Thoi gian do: "<<tg_do;
}


class bai_xe{
	private:
		int ma_bai;
		char kick_ thuoc;
		phuong_tien pt1,pt2,pt3;
		bool co1,co2,co3;
		public:
			bai_xe();
			bai_xe(int ma,char kt);
			int lay_ma()const;
			bool them(phuong_Tien v);
			bool xoa(int ma_xe);
			bool chua(int ma_xe)const;
			void hien_Thi(const;
			bool co_loai(string loai,int&dem,double&tong)const;
			
};
class Systemlnterface{
	private:
		bai_xe bai1;bai2;bai3;
		bool co1,co2,co3;
		
		public:
			Systeminterfac();
			void runMenu();
			
};
