#include <iostream>
#include <math.h>
#include <cstring>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <map>
#include <queue>
#include <vector>

using namespace std;

typedef long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 1e5 + 7;

struct NGAY {
  int ngay, thang, nam;
};

void nhapxuat(NGAY &ngay) {
  cin >> ngay.ngay >> ngay.thang >> ngay.nam;
  cout << ngay.ngay << "/" << ngay.thang << "/" << ngay.nam << endl;
}

bool namnhuan(int nam) {
  return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

void sothutu(NGAY &ngay) {
  int ngaythang[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (namnhuan(ngay.nam)) ngaythang[2] = 29;
  int sothutu = 0;
  for (int i = 1; i < ngay.thang; ++i) {
    sothutu += ngaythang[i];
  }
  sothutu += ngay.ngay;
  cout << sothutu << endl;
}

void sothutu1(NGAY &ngay) {
// so thu tu ke tu ngay 1/1/1
  int ngaythang[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (namnhuan(ngay.nam)) ngaythang[2] = 29;
  int sothutu = 0;
  for (int i = 1; i < ngay.thang; ++i) {
    sothutu += ngaythang[i];
  }
  sothutu += ngay.ngay;
  cout << sothutu << endl;
}

// tinh ngay truoc do k ngay
void ngaytruocdo(NGAY &ngay, int k) {
  ngay.ngay -= k;
  while (ngay.ngay <= 0) {
    ngay.thang--;
    if (ngay.thang == 0) {
      ngay.nam--;
      ngay.thang = 12;
    }
    int ngaythang[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (namnhuan(ngay.nam)) ngaythang[2] = 29;
    ngay.ngay += ngaythang[ngay.thang];
  }
  cout << ngay.ngay << "/" << ngay.thang << "/" << ngay.nam << endl;
}

void ngaysaudo(NGAY &ngay, int k) {
  ngay.ngay += k;
  while (ngay.ngay > 31) {
    ngay.thang++;
    if (ngay.thang == 13) {
      ngay.nam++;
      ngay.thang = 1;
    }
    int ngaythang[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (namnhuan(ngay.nam)) ngaythang[2] = 29;
    ngay.ngay -= ngaythang[ngay.thang];
  }
  cout << ngay.ngay << "/" << ngay.thang << "/" << ngay.nam << endl;
}

// tinh khoang cach 2 ngay
int khoangcach(NGAY &ngay1, NGAY &ngay2) {
  int kc = 0;
  while (ngay1.nam != ngay2.nam || ngay1.thang != ngay2.thang || ngay1.ngay != ngay2.ngay) {
    ngaytruocdo(ngay1, 1);
    kc++;
  }
  return kc;
}

// so sanh 2 ngay
void sosanh(NGAY &ngay1, NGAY &ngay2) {
  if (ngay1.nam > ngay2.nam) {
    cout << "Ngay 1 sau ngay 2" << endl;
  } else if (ngay1.nam < ngay2.nam) {
    cout << "Ngay 1 truoc ngay 2" << endl;
  } else {
    if (ngay1.thang > ngay2.thang) {
      cout << "Ngay 1 sau ngay 2" << endl;
    } else if (ngay1.thang < ngay2.thang) {
      cout << "Ngay 1 truoc ngay 2" << endl;
    } else {
      if (ngay1.ngay > ngay2.ngay) {
        cout << "Ngay 1 sau ngay 2" << endl;
      } else if (ngay1.ngay < ngay2.ngay) {
        cout << "Ngay 1 truoc ngay 2" << endl;
      } else {
        cout << "Ngay 1 bang ngay 2" << endl;
      }
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  return 0;
}
