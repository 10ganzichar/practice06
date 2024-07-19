#include <iostream>
int main()
{
    char cColumn{};
    int nRow{};
    // 나이트가 이동할 수 있는 8가지 방향 정의
    int arX[8]={-2,-1,1,2,2,1,-1,-2};
    int arY[8]={-1,-2,-2,-1,1,2,2,1};
    int nCount{};

    // 현재 나이트의 위치 입력받기
    scanf("%c%d", &cColumn, &nRow);
    int nColumn=cColumn-'a'+1;

    // 8가지 방향에 대하여 각 위치로 이동이 가능한지 확인
    for(int i=0;i<8;i++)
    {
        int nNextColumn{};
        int nNextRow{};
        // 이동하고자 하는 위치 확인
        nNextColumn=nColumn+arY[i];
        nNextRow=nRow+arX[i];
        // 해당 위치로 이동이 가능하다면 카운트 증가
        if(nNextColumn>=1&&nNextColumn<=8&&nNextRow>=1&&nNextRow<=8)
        {
            nCount++;
        }
    }
    printf("%d",nCount);
}