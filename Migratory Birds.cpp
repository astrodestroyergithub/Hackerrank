#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

template<typename KeyType,typename ValueType>
std::pair<KeyType,ValueType> get_max(const std::map<KeyType,ValueType>&x) 
{
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(),x.end(),[](const pairtype &p1,const pairtype &p2){
        return p1.second < p2.second;
  }); 
}

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {
    int size=arr.size();
    set<int> unique_elements;
    map<int,int> elements_freq;
    for(int i=0;i<size;i++)
    {
        unique_elements.insert(arr.at(i));
    }
    for(int i:unique_elements)
    {
        int freq=0;
        for(int j:arr)
        {
            if(i==j)
            {
                freq++;
            }
        }
        elements_freq.insert({i,freq});
    }
    auto max=get_max(elements_freq);
    int res=max.first;
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
