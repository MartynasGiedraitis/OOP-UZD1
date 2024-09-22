#include "studentas.h"
#include "mylib.h"

void ivedimas(stud &lok)
{
  cout<<"Iveskite studento varda, pavarde, egzamino pazymi: "<<endl;
  cin>>lok.vardas>>lok.pavarde>>lok.egz;
}
void output(stud &lok)
{
  cout<<setw(15)<<left<<lok.pavarde<<setw(10)<<left<<lok.vardas<<setw(3)<<left<<fixed<<setprecision(2)<<lok.vid<<endl;
}
void valymas(stud &lok){
    lok.vardas.clear();
    lok.pavarde.clear();
    lok.ND.clear();
}
void vidurkis(stud &lok)
{
    double sum=0;
    for(int n:lok.ND)
        sum+=n;
    double ndAvg;
    if (lok.ND.size()>0)
        ndAvg=sum/lok.ND.size();
    else
        ndAvg=0;
    lok.vid=0.4*ndAvg+0.6*lok.egz;
}
void mediana(stud &lok)
{
    double med;
    if (lok.ND.size()==0)
        med=0;
    else if (lok.ND.size()%2==0)
        med=(lok.ND[lok.ND.size()/2-1]+lok.ND[lok.ND.size()/2])/2.0;
    else
        med=lok.ND[lok.ND.size()/2];
    lok.vid=0.4*med+0.6*lok.egz;
}