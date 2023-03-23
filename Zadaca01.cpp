#include<iostream>
//Ovoj nacin na sortiranje raboti taka sto pocnuvajki od najniskiot indeks vo nizata, go sporeduva brojot koj se naogja na toj indeks
//so site broevi i dokolku e pogolem brojot na najniskiot indeks od bilo koj broj na drugite indeksi, vrsi zamena na nivnite pozicii
//koga veke brojot na najniskiot ne e pogolem od nitu eden drug, programata go zema sledniot indeks(pozicija) vo nizata(primer ako najnizok indeks e 0, pozavrsuvanjeto na taa proverka go zema indeksot 1 i nejziniot broj)
//isto kako i za pocetniot indeks taka i za sledniot, se dodeka brojot e pogolem od bilo koj broj na drugite indeksi gi zamenuva mestata na broevite, no ne pravi sporedba so prethodniot indeks kade sto veke e definiran brojot na taa pozicija
//ovoj proces se povtoruva za site indeksi i na krajot rezultira so sortirana niza.
using namespace std;
int findSmallest (int[],int);
int main ()
{
    int myarray[22] = {(int)'F', (int)'i', (int)'l', (int)'i', (int)'p', (int)' ', (int)'J', (int)'o', (int)'v', (int)'c', (int)'e', (int)'s',  (int)'k', (int)'i', (int)' ', (int)'I', (int)'N', (int)'K', (int)'I', (int)'9', (int)'8', (int)'1',};
    int pos,temp,pass=0;
    cout<<"\n Input list of elements to be Sorted\n";
    for(int i=0;i<22;i++)
    {
        cout<<myarray[i]<<"\t";
    }
    for(int i=0;i<22;i++)
    {
        pos = findSmallest (myarray,i);
        temp = myarray[i];
        myarray[i]=myarray[pos];
        myarray[pos] = temp;
        pass++;
    }
    cout<<"\n Sorted list of elements is\n";
    for(int i=0;i<22;i++)
    {
        cout<<myarray[i]<<"\t";
    }
    cout<<"\nNumber of passes required to sort the array: "<<pass;
    return 0;
}
int findSmallest(int myarray[],int i)
{
    int ele_small,position,j;
    ele_small = myarray[i];
    position = i;
    for(j=i+1;j<22;j++)
    {
        if(myarray[j]<ele_small)
        {
            ele_small = myarray[j];
            position=j;
        }
    }
    return position;
}