#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

struct Query {
    int L, R, index;
};

const int MAXN = 100005; /
const int SQRTN = 320;  

int arr[MAXN];
int freq[MAXN];   
int answer[MAXN];

bool compare(Query q1, Query q2) {
    if (q1.L / SQRTN != q2.L / SQRTN)
        return q1.L / SQRTN < q2.L / SQRTN;
    return (q1.L / SQRTN % 2) ? (q1.R < q2.R) : (q1.R > q2.R);
}

void add(int pos) {
    freq[arr[pos]]++;
}

void remove(int pos) {
    freq[arr[pos]]--;
}

int getAnswer() {
    int current_answer = 0;
    for (int i = 1; i < MAXN; i++) {
        if (freq[i] > 0) {
            current_answer = i;
            break;
        }
    }
    return current_answer;
}

void MOsAlgorithm(vector<Query>& queries, int n) {
    sort(queries.begin(), queries.end(), compare);

    int current_L = 0, current_R = -1; 
    int current_answer = 0;

    for (Query q : queries) {
        while (current_R < q.R) {
            current_R++;
            add(current_R);
        }
        while (current_R > q.R) {
            remove(current_R);
            current_R--;
        }
        while (current_L < q.L) {
            remove(current_L);
            current_L++;
        }
        while (current_L > q.L) {
            current_L--;
            add(current_L);
        }
        answer[q.index] = getAnswer();
    }
}

int main() {
    int n, q;

    cout << "Enter the size of the array (n): ";
    cin >> n;

    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of queries (q): ";
    cin >> q;

    vector<Query> queries(q);

    cout << "Enter " << q << " queries (L R):" << endl;
    for (int i = 0; i < q; i++) {
        cin >> queries[i].L >> queries[i].R;
        queries[i].index = i;
    }

    MOsAlgorithm(queries, n);

    // Output the answers for each query
    cout << "Answers for each query:" << endl;
    for (int i = 0; i < q; i++) {
        cout << "Query " << i + 1 << ": " << answer[i] << endl;
    }

    return 0;
}
