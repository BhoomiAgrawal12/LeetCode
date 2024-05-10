class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
    //     vector<float> fraction;
    //     for (int i = 0; i < arr.size(); i++) {
    //         for (int j = i + 1; j < arr.size(); j++) {
    //             float frac = static_cast<float>(arr[i]) / static_cast<float>(arr[j]);
    //             fraction.push_back(frac);
    //         }
    //     }
    //     sort(fraction.begin(), fraction.end());
    //     float temp = fraction[k - 1];
    //     vector<int>array;
        
    //     // Find the fraction that matches temp
    //     for (int i = 0; i < arr.size(); i++) {
    //         for (int j = i + 1; j < arr.size(); j++) {
    //             float frac = (float)arr[i] /(float) arr[j];
    //             if (frac == temp) {
    //                 array.push_back(arr[i]);
    //                 array.push_back(arr[j]);
                   
    //                 break;
    //             }
    //         }
    //     }
    //     return array;
    vector<pair<double, pair<int, int>>> fractions;

        for (int i = 0; i < arr.size(); ++i) {
            for (int j = i + 1; j < arr.size(); ++j) {
                fractions.push_back({static_cast<double>(arr[i]) / arr[j], {arr[i], arr[j]}});
            }
        }

        sort(fractions.begin(), fractions.end());
        int numerator = fractions[k - 1].second.first;
        int denominator = fractions[k - 1].second.second;

        return {numerator,denominator};
    }
};