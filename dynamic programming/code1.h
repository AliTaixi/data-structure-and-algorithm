/**
三步问题。有个小孩正在上楼梯，楼梯有n阶台阶，小孩一次可以上1阶、2阶或3阶。实现一种方法，计算小孩有多少种上楼梯的方式。结果可能很大，你需要对结果模1000000007。

示例1:

 输入：n = 3 
 输出：4
 说明: 有四种走法
示例2:

 输入：n = 5
 输出：13
提示:

n范围在[1, 1000000]之间
*/

// f(0) = 0, f(1) = 1, f(2) = 2, f(3) = 4; f(n) = f(n-1)+f(n-2)+f(n-3)



class Solution {
public:
    int waysToStep(int n) {
     
        int* ways = new int[n + 1];
        int mod = 1000000007;      
        for(int i = 0; i <= n; i++){
            if(i == 0){
                ways[i] = 0;
            }else if(i == 1){
                ways[i] = 1;
            }else if(i == 2){
                ways[i] = 2;
            }else if(i == 3){
                ways[i] = 4;
            }else {
                ways[i] = (ways[i - 1] % mod +  ways[i - 2] % mod +  ways[i - 3] % mod) % mod;
            }               
        }        
        return ways[n]; 
    }
};