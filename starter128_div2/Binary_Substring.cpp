#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tits;
  cin >> tits;

  while (tits--)
  {
    int nnn;
    cin >> nnn;
    string s;
    cin >> s;

    vector<int> type(4, 0);

    int jjj = 0;
    while (jjj < nnn)
    {
      if (s[jjj] == '0' && s[jjj + 1] == '0')
      {
        type[0]++;
      }
      else if (s[jjj] == '0' && s[jjj + 1] == '1')
      {
        type[1]++;
      }
      else if (s[jjj] == '1' && s[jjj + 1] == '1')
      {
        type[2]++;
      }
      else
      {
        type[3]++;
      }
      jjj = jjj + 2;
    }
    int ans = 0;

    if (type[3])
    {
      ans = 1;
      type[3]--;
    }

    ans = ans + (2 * type[0]);

    if (type[1])
    {
      ans = ans + 2;
    }

    ans = ans + (2 * (type[2]));

    if (type[3])
    {
      ans++;
    }

    cout << ans << endl;
  }

  return 0;
}
