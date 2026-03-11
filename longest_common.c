#include <stdio.h>
#include <string.h>

int max(int a,int b){
    return a>b?a:b;
}

int main(){

    char s1[]="heap";
    char s2[]="pea";

    int m=strlen(s1);
    int n=strlen(s2);

    int dp[m+1][n+1];

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)
                dp[i][j]=0;

            else if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];

            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }

    int lcs=dp[m][n];

    printf("Insertions: %d\n", n-lcs);
    printf("Deletions: %d\n", m-lcs);
}
