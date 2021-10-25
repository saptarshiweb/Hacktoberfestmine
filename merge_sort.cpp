#include <bits/stdc++.h>        //Time complexity :  O(nlogn)
using namespace std;
typedef long long ll;
void Merge(vector<ll> &vec, ll low, ll mid, ll high)
{
    ll n1 = mid - low + 1;
    ll n2 = high - mid;
    vector<ll> arr1(n1), arr2(n2);

    for (ll i = 0; i < n1; i++)
    {
        arr1[i] = vec[low + i];
    }

    for (ll i = 0; i < n2; i++)
    {
        arr2[i] = vec[mid + 1 + i];
    }

    ll i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (arr1[i] > arr2[j])
        {
            vec[low] = arr2[j];
            j++;
            low++;
        }

        else if (arr1[i] <= arr2[j])
        {
            vec[low] = arr1[i];
            i++;
            low++;
        }
    }
    while (i < n1)
    {
        vec[low] = arr1[i];
        i++;
        low++;
    }
    while (j < n2)
    {
        vec[low] = arr2[j];
        j++;
        low++;
    }
}
void MergeSort(vector<ll> &vec, ll low, ll high)
{
    if (low < high)
    {
        ll mid = (low + high) / 2;
        MergeSort(vec, low, mid);
        MergeSort(vec, mid + 1, high);

        Merge(vec, low, mid, high);
    }
}
void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void output_time()
{
#ifndef ONLINE_JUDGE
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#endif
}
int main(int argc, char const *argv[])
{
    input();
    output_time();
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (auto &x : vec)
        cin >> x;

    MergeSort(vec, 0, n - 1);
    for (auto x : vec)
        cout << x << " ";
    return 0;


}
