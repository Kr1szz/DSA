class Solution {
 public:
  vector<int> findUnion(vector<int>& a, vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> res;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
      if (a[i] <= b[j]) {
        if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
        if (a[i] == b[j]) j++;
        i++;
      } else {
        if (res.empty() || res.back() != b[j]) res.push_back(b[j]);
        j++;
      }
    }

    while (i < a.size()) {
      if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
      i++;
    }

    while (j < b.size()) {
      if (res.empty() || res.back() != b[j]) res.push_back(b[j]);
      j++;
    }

    return res;
  }
};
