#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> scores(n);
    for (int &s : scores) cin >> s;
    
    // 1. Sort scores descending
    sort(scores.begin(), scores.end(), greater<int>());  
    
    // 2. max_element, min_element
    int maxScore = *max_element(scores.begin(), scores.end());
    int minScore = *min_element(scores.begin(), scores.end());
    
    // 3. sum using accumulate
    int total = accumulate(scores.begin(), scores.end(), 0);
    
    // 4. binary_search for existence of x
    int x; cin >> x;
    bool found = binary_search(scores.begin(), scores.end(), x, greater<int>());
    
    // 5. count_if for threshold t
    int t; cin >> t;
    int countAbove = count_if(scores.begin(), scores.end(), [&](int val){ return val > t; });
    
    // 6. lower_bound and upper_bound for range of x (descending order)
    auto lb = lower_bound(scores.begin(), scores.end(), x, greater<int>());
    auto ub = upper_bound(scores.begin(), scores.end(), x, greater<int>());
    int occurrences = ub - lb;
    
    // 7. Unique scores
    vector<int> uniqueScores = scores;
    uniqueScores.erase(unique(uniqueScores.begin(), uniqueScores.end()), uniqueScores.end());
    
    // Output results
    cout << "Sorted scores: ";
    for(int s : scores) cout << s << " ";
    cout << "\n";
    cout << "Max: " << maxScore << ", Min: " << minScore << "\n";
    cout << "Sum: " << total << "\n";
    cout << x << (found ? " found\n" : " not found\n");
    cout << "Scores above " << t << ": " << countAbove << "\n";
    cout << "Occurrences of " << x << ": " << occurrences << "\n";
    cout << "Unique scores: ";
    for(int u : uniqueScores) cout << u << " ";
    cout << "\n";
    
    // 8 Optional: next_permutation example (for top 3 scores)
    vector<int> top3(scores.begin(), scores.begin() + min(3, n));
    cout << "Permutations of top 3 scores:\n";
    sort(top3.begin(), top3.end()); // next_permutation requires sorted input ascending
    do {
        for(int v : top3) cout << v << " ";
        cout << "\n";
    } while(next_permutation(top3.begin(), top3.end()));
    
    return 0;
}
