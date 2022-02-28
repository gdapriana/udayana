#include <iostream>

using namespace std;

int main()
{
  cout<<"program matriks ketetanggan"<<endl<<"Diskrit 2"<<endl<<endl;
  int a[7][7];
  int hm[7];
  int T[7]={0,0,0,0,0,0,0};
  int jalan[7]={0,0,0,0,0,0,0};
  int sudah[7]={0,0,0,0,0,0,0};
  int kolom, baris, hitung,awal,akhir;
  cout<<"berapa jumlah vertex: ";
  cin>>baris;
  kolom=baris;
  for (int i=1;i<=baris;i++){ //baris
        for (int b=1;b<=kolom;b++){ //kolom
                if (i!=b) {
				cout<<"jika vertek "<<i<<" dan vertex "<<b<<" berhubungan ketikkan 1, 0 jika tidak : ";
                cin>>a[i][b];
            } else a[i][b]=0;
            }
      }
      
    cout<<endl<<"tampilan graph dalam matrik ketetanggan"<<endl<<endl;
    for (int i=1;i<=baris;i++){ //baris
        for (int b=1;b<=kolom;b++){ //kolom   
                cout<<a[i][b];
            }
            cout<<endl;
      }
     
	for (int i=2;i<=baris;i++){
		hm[i]=a[1][i];
	}
	cout<<endl<<"tampilan aray hm ";
    for (int i=2;i<=baris;i++){ //baris 
                cout<<hm[i];
    }
    cout<<"array T=";
	for (int i=2;i<=baris;i++){ //baris 
                cout<<T[i];
    }	
	for (int i=2;i<=baris;i++){
		for (int k=2;k<=baris;k++){
		if ((hm[k]==1)and(T[k]==0)){
			T[k]=1;
			for (int j=2;j<=baris;j++){
				if ((a[k][j]==1)and(hm[j]==0)) {
				hm[j]=1;
			}
			}
		cout<<endl<<"tampilan aray hm ";
    	for (int i=2;i<=baris;i++){ //baris 
                cout<<hm[i];
      	}
      	cout<<"aray T=";
		for (int i=2;i<=baris;i++){ //baris 
                cout<<T[i];
      	}	
		}
	}
	}
	cout<<endl<<"tampilan aray hm terakhir ->";
    for (int i=2;i<=baris;i++){ //baris 
                cout<<hm[i];
      }
	
	for(int i=2;i<=baris;i++){
		hitung=hitung + hm[i];
	}
	cout<<endl;
	if (hitung==baris-1){cout<<"terhubung";} else cout<<"tidak terhubung";
	
	cout<<endl<<"rute diantara 2 vertex"<<endl;
	cout<<"vertex awal=";
	cin>>awal; jalan[awal]=1;
	cout<<"vertex akhir=";
	cin>>akhir;
	cout<<endl<<"nilai array jalan awal"<<endl;
	 for (int i=1;i<=baris;i++){ //baris 
                cout<<jalan[i];
      }
	for(int i=1;i<=baris;i++){
		for(int j=1;j<=baris;j++){
			if((jalan[j]!=0) and (sudah[j]==0)){
				for (int k=1;k<=baris;k++){
					if(a[j][k]==1){
						if (jalan[k]==0) jalan[k]=j;
						sudah[j]=1;
						cout<<endl<<"masuk"<<j<<"-"<<k;
					}
				}
			}
		}
	}
	 cout<<endl<<"nilai array jalan"<<endl;
	 for (int i=1;i<=baris;i++){ //baris 
                cout<<jalan[i];
      }
    for (int i=1;i<=baris;i++){ //baris 
                sudah[i]=0;
      }
    cout<<endl<<"rute"<<endl;
    int n=akhir;
    cout<<endl<<akhir<<"<-";
	while (n!=awal){
		n=jalan[n];
		cout<<n<<"<-";
	} 
    return 0;
}