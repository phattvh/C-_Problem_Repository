//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<iostream>
#include<queue>
#include<math.h>

using namespace std;

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); // Thêm fastio để chạy nhanh hơn
    queue<int> q;
    int n; 
    cin >> n;

    // Bước 1: Đẩy các số nguyên tố có 1 chữ số vào queue
    // Sửa lại điều kiện vòng lặp cho đúng cú pháp chuẩn: i <= n && i < 10
    for (int i = 2; i <= n && i < 10; i++){
        if (isPrime(i)){
            q.push(i);
        }
    }

    // Bước 2: Duyệt Queue để sinh các số tiếp theo
    while (!q.empty()){
        int top = q.front(); // Lấy giá trị đầu hàng đợi ra một biến riêng biệt
        cout << top << " ";  // In ra ngay tại đây
        q.pop();             // Pop luôn để giải phóng đầu hàng đợi

        // Chỉ cần duyệt qua các chữ số lẻ {1, 3, 7, 9} để tối ưu thời gian chạy
        int chu_so_le[] = {1, 3, 7, 9};
        for (int i = 0; i < 4; i++){
            int k = top * 10 + chu_so_le[i];
            if (k <= n && isPrime(k)){
                q.push(k);
            }
        }
    }

    return 0;
}
