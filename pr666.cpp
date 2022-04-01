// We will consider the numbers a and b as adjacent if they differ by exactly one, that is, |a−b|=1.

// We will consider cells of a square matrix n×n as adjacent if they have a common side, that is, for cell (r,c) cells (r,c−1), (r,c+1),
//(r−1,c) and (r+1,c) are adjacent to it.

// For a given number n, construct a square matrix n×n such that:

// Each integer from 1 to n2 occurs in this matrix exactly once;
// If (r1,c1) and (r2,c2) are adjacent cells, then the numbers written in them must not be adjacent.
// Input
// The first line contains one integer t (1≤t≤100). Then t test cases follow.

// Each test case is characterized by one integer n (1≤n≤100).

// Output
// For each test case, output:

// -1, if the required matrix does not exist;
// the required matrix, otherwise (any such matrix if many of them exist).
// The matrix should be outputted as n lines, where each line contains n integers.

// Example
// inputCopy
// 3
// 1
// 2
// 3
// outputCopy
// 1
// -1
// 2 9 7
// 4 6 3
// 1 8 5

//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMHBYYYWMMMM#BYYTTTYWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMB9O1==?????zzCC111>>;;;;;;;;;;;<?TMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM9Olll=l======??????????>>>>>>;;;;;;;;;:;?TMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMMMM9ttlllllllll=l=======?????????>>>>>>;;;;;;;;;;?TMMMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMMMBOttOtttttltlllllllll=======??????????>>>>>>>;;;;;;?TMMMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMMMBttwOtttttttttttttlllllllll========?????????>>>>>>;;;;;<TMMMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMMBrwZrttttttttttttttttttlllllllllll======???????????>>>>>>;;?HMMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMMSw0trtrrtrtrttrtttttttttttttlllOllllll========????<<zz??>>>>>>ZMMMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMMMX0ttrtrOOttrttrttOOttttttttttttltwllllllllll========??wy?????>>>vZMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMM0ttrI+wV1rtttttttwZtttttttltttOwylOXOllllllllllll=l====1dkz???????vZdMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMSrrwrtwZCjttttttttwSttOlllltllllwtXOlZkOlllllllllllllll==z+dk===?????X2JMMMMMMMMMMMMM
//  MMMMMMMMMMMMMBrtwwtrw0<jttttttttOXllOttltllttllOZwHOtXkyltlllllllllllllll<+XZ======?dk?JMMMMMMMMMMMM
//  MMMMMMMMMMMMStwdZtwXC<+ttttttOOOd6ltZlltllllttllStWWOOHWytttttltltOllltllz:zHllll===zX=?dMMMMMMMMMMM
//  MMMMMMMMMMBrwdKOtwW3;;zrttttwZwXRlldOllltltlltttwlXvktdXWytltttttttOttlttl<<dklllllllZ===dMMMMMMMMMM
//  MMMMMMMMM8tQM#ttwW3;;;1trttwSwfUOlORltllltlllllldtX>dktDOWOtlttltttOOttltO<;+WOllllllXlllzMMMMMMMMMM
//  MMMMMMMM9OdM#Ottd$;;;;;<?1z0OKjRltd0llltOllllllldZX>?WOw_WWOtttttttttOttI<;;<dkttttllllllldMMMMMMMMM
//  MMMMMMM9wMMMSttwS<;;;;>;;;J<j>(I<?U111zltllllllld0X>~dkwl(WkttlttlOOwWk<;;:;;zHttttttwOllllMMMMMMMMM
//  MMMMMMBdMMM8tttdI+zttttttdSXt~dlzXwlllzzOzzzzzlldkW<~?kOk~?sx++++jdHmH6+++<;;jdZtttttdkOtlldMMMMMMMM
//  MMMMM#dMMM#tttw0+tttttttdKdf((RsdfRllllldZllltlldWK~~_W0w_~OWOlOdgg9ZtOWOtttz+wktttttdpktttwMMMMMMMM
//  MMMMMWMMMMSlttdIttttttOdWHH>~(IzWDRll=llzRlllzlldk$>++dkd<~_XkdgH9tttttdktttt+OkrttrtdfpkttOMMMMMMMM
//  MMMMNWMMM#Zttlk=tttttOXWWd$_.(IdW1R=llll=SlllzOldK<_._(kd6+-(MM9lltttttrWktttztWZttrwXppWttrMMMMMMMM
//  MMMMNMMMM#lltwDzttllOXyW0X:..(OXk<Rl=ll=lwOlllOld3<``.(Rd>~?CdklllltttttXdXttzOWktrwwWpfpkrtMMMMMMMM
//  MMMMMMMMM@ltldIzlttOXyW$w$```(OyD(Rl==llldZ=llIlw;~```-Xd:~~~~UkylltttAyHdgSrzObRtOXwpfppWrrMMMMMMMM
//  MMMMMMMMM@llldtlllldVyW+d>```.wZ$ wl==lI=wRl=ll=w<```` dd_..~~(RZXOQdggHH9ZwrzwHWrdXXppfppkrMMMMMMMM
//  MMMMMMMMM#llldlltlwyyyD(S-...,Wk] zI=l=llzWzl=l=P~```` jZ``...~zQkH@MBUtrZtrtldHRdSdpfpffpkwMMMMMMMM
//  MMMMNMMMMNZllXtllldVyW3(Mf=<ONMHP~(k===l=zdk=lld3```...(C````..(M96lttttrrtrrtdHWHXpfpppfpRwMMMMMMMM
//  MMMMMMMMMMNzzWZllzyyyy(W@`  =~MWK6 jz=lzlzvRz=lZ`.I+JgkWm&-. `..(ZltlttttrtttrWWHppfppfpppSdMMMMMMMM
//  MMMMMMMMMMMkAWRllzVyyS_(b    .MNHU-(Uz=lI={XkzO>.dVT7<TMHMNHHx-.(kwZyltttrtrrdHHpfppfpffpp0dMMMMMMMM
//  MMMMMMMMMMMMKyWzOzyyyk.`<!  hdWMH]``(S==t=l(kX2 ?_`    WMMHH#HH+.XwkwOttttrwrZ~(HfpfpppfpWwXMMMMMMMM
//  MMMMMMMMMMMMMHWROOyyyW;` `. (WVM#b```(0=zzz wX!```  a.dM#NM@N(4WhXkXkWtttttwd3O_(HpffpfpfWwSMMMMMMMM
//  MMMMMMMMMMMMNZvWzXXyyXP```-_ ?o+?!````.4=Z=`(:````  HpbNNMHHH (C=XXyWZWttrdwf:(>.dfppffppSXSMMMMMMMM
//  MMMMMMMMMMMMMRzuHzXyZXH.``````````````` ?zz ``````` ZKvTHHbWt `` XZyyHZWOdSZ<::~`(fpfpfffXp0WMMMMMMM
//  MMMMMMMMMMMMMKzyyHvyZZW____.`````````````.I_```````` ?nJzX7^````.WXWyyHyWKZ<:::_`Jffpfpfpfp0WMMMMMMM
//  MMMMMMMMMMMMM@zZyZWwWyXo-_~(~ ```````````` `````````````` _`````.WXkyyVWmWc::<~ .HffppfffffkXMMMMMMM
//  MMMMMMMMMMMMMKzZZZZXkUXr~....```````....```````````` ...  ````..JXWWyyW83vXx~..WfffVfWVffffkdMMMMMMM
//  MMMMMMMMMMMMMRzZZZZZZZZb````````````<````````````./<~._<_.____`(WfdyW3<:~~(XWkVVVVVVVHVVVVV0dMMMMMMM
//  MMMMMMMMMMMMMSzZZZZZZZWX-```````````````````````````.......~~._j9jX=_~~_(XZyVHHkyyyyWHyyykykOMMMMMMM
//  MMMMMMMMMMMMMSzuuuuuZXWZW,```````````````````````````````.``..(3<! ...JWyyXWyyyWHkyyWHyyyHyklMMMMMMM
//  MMMMMMMMMMMMNXzuuuXXuXSuuXh,```````` .... ```````````````````_~ .JWyyyyZyy0HyyZyyZyZXWZZZWHZIdMMMMMM
//  MMMMMMMMMMMMNwtuuuXkuXXuuuuXh,``````(:::~<?71(,``````````````.(UMNUkZZZZZZZHZZ0ZZZZZWWZZZWNXIdMMMMMM
//  MMMMMMMMMMMMNKOzuzXkuXuuuuuXuXW, ```` _~~~:~~(}```````````.(YC;::<kCfZZZZXO#ZZVZZZZZMZZuuMMNXzMMMMMM
//  MMMMMMMMMMMMHKOzzuXkzdzzzzuXXzuuU&.``````````````````` .JY>::::;;J=:dZuZuZd#uuruuuud#uuuXMMMNXdMMMMM
//  MMMMMMMMMMMMMNOvzzXkvMRzzzzXKzuzzzXh, `````````````..JC<;:;;:;;+7<:~(HHuXIdNuuzuuuXMSuuuWMMMMROMMMMM
//  MMMMMMMMMMMMMNvvvrdkvM#vzzzzHzzzzzuzzUG. ``` ...JdY<:;:;:::;;+v<~~~:(HpHmzMNXZzuzzd#zzzdMMMMMMRdMMMM
//  MMMMMMMMMMMMMNwrrvdRrMNwvvvvdRvvvzwkzzzzXWWHY=~~O+::::::::<+<~~~~~~~dppppWMMkZzzzwM#zzdMMMMMMMMNMMMM
//  MMMMMMMMMMMMMM#rrrwRrMMbOrrOZNkrvvvXwvvvvvwX;.~._W_:::::(?!~~~~~~~~(HpppppppHWdvwM#XwdMMMMMMMMMMNMMM
//  MMMMMMMMMMMMMMNyrrrRrWMMmzOrzdNyrrrZNvrwQWWfb....(r~~_J>_.....~.~~-dpfpffpfpppWHHMNdMMMMMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMNrtrStdMMMNxzrzMNmrrrdNWfVfffP._-.(~_J!............JpfpffpfpfffpppWNppppHMMMMMMMMMMMM
//  MMMMMMMMMMMMMMMMNOtXtdMMMMMNxzZMMNmgHyVVVVVW%..?/(.,(x-..........(HfffpffpffpffWHHffpffppfVyyWMMMMMM*/

#pragma comment(linker, "/stack:20000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <cstdint>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>
#include <bitset>
#include <map>
#include <queue>
#include <ctime>
#include <stack>
#include <set>
#include <list>
#include <random>
#include <deque>
#include <functional>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <complex>
#include <numeric>
#include <immintrin.h>
#include <cassert>
#include <array>

using namespace std;

#ifdef LOCAL
#define CURTIME() cerr << clock() * 1.0 / CLOCKS_PER_SEC << endl
#else
#define CURTIME() ;
#endif
double __begin;
#define DTIME(ccc)     \
    __begin = clock(); \
    ccc;               \
    cerr << "Time of work = " << (clock() - __begin) / CLOCKS_PER_SEC << endl;

#define mp make_pair
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef int itn;

template <class T1, class T2, class T3>
struct triple
{
    T1 a;
    T2 b;
    T3 c;
    triple() : a(T1()), b(T2()), c(T3()){};
    triple(T1 _a, T2 _b, T3 _c) : a(_a), b(_b), c(_c) {}
};
template <class T1, class T2, class T3>
bool operator<(const triple<T1, T2, T3> &t1, const triple<T1, T2, T3> &t2)
{
    if (t1.a != t2.a)
        return t1.a < t2.a;
    else if (t1.b != t2.b)
        return t1.b < t2.b;
    else
        return t1.c < t2.c;
}
template <class T1, class T2, class T3>
bool operator>(const triple<T1, T2, T3> &t1, const triple<T1, T2, T3> &t2)
{
    if (t1.a != t2.a)
        return t1.a > t2.a;
    else if (t1.b != t2.b)
        return t1.b > t2.b;
    else
        return t1.c > t2.c;
}
#define tri triple<int, int, int>
#define trll triple<ll, ll, ll>

#define FI(n) for (int i = 0; i < (n); ++i)
#define FJ(n) for (int j = 0; j < (n); ++j)
#define FK(n) for (int k = 0; k < (n); ++k)
#define FL(n) for (int l = 0; l < (n); ++l)
#define FQ(n) for (int q = 0; q < (n); ++q)
#define FOR(i, a, b) for (int i = (a), __e = (int)(b); i < __e; ++i)
#define all(a) std::begin(a), std::end(a)
#define reunique(v) v.resize(unique(v.begin(), v.end()) - v.begin())

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << "1\n";
        else if (n == 2)
            cout << "-1\n";
        else
        {
            int mat[70][70];
            int c = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((i + j) % 2 == 0)
                    {
                        mat[i][j] = c;
                        c += 1;
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((i + j) % 2 == 1)
                    {
                        mat[i][j] = c;
                        c += 1;
                    }
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << mat[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
        }
    }

    return 0;
}