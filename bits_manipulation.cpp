#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool GET_BIT(ll n, ll pos)
{
    return ((n & (1<<pos))!=0);
}
ll SET_BIT(ll n, ll pos)
{
    return (n | (1<<pos));
}
ll CLEAR_BIT(ll n , ll pos)
{
    return (n & ~(1<<pos));
}
ll Update_Bit(ll n , ll pos, ll value)
{
    ll mask = ~(1<<pos);
    n = (n & mask);

    return (n | (value<<pos)); 
}
int main()
{
    ll  n , i;
    cin>>n>>i;

    // here i take counting from 0 , 1 , 2 , 3 ........


    /* GET BIT
    yhana get bit ka matlab  ki hmhe batana hoga ki us particular position pe  kaun sa bit hai 0 or 1 iske
    liye ham   1<<i      1 me i postions left shift karate hain aur phr (n & (1<<i)) karate hain , if it is 1 then there is a bit and if 0  then it is unset bit i.e 0
    */
   //bool ans = GET_BIT(n,i);
   
   //# cout<< GET_BIT(n,i)<<endl ;



    /* # SET BIT
    yahan set bit ka mean hai jahan given position par zero ho , wahan 1 kar do . Isme ham  1<<i ka n ke sath OR operation Karate hain 
    */

   //# cout<<SET_BIT(n,i);



   /* CLEAR BIT
   yahan hm set bit ko unset karte hain given positionn pe means ... 1 ->0
   */

  //# cout<<CLEAR_BIT(n,i);

  /* UPDATE BIT
    change the bit from (0-->1)   OR (1 -->0)
    1. Follow clear bit procedure 
    2. Follow set bit procedure 
  */
    ll value ;
    cin>>value;
    cout<<Update_Bit(n,i,value);
   return 0;
}