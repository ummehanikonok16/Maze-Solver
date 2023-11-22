#include<stdio.h>
int main()
{
    int r,c,i,j;

    scanf("%d%d", &r, &c);

    int m[r][c],s1,s2,d1,d2;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    scanf("%d %d %d%d",&s1,&s2,&d1,&d2);

    int s[s1][s2],des[d1][d2];
    printf("\n");
   /** for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }**/

    int visited[r][c];
    int sum=m[s1][s2];

    int count=0;

    int row=s1,col=s2;
    printf("\n");

    for(i=row; i<r; i++)
    {

        for(j=col; j<c; j++)
        {
            count++;
            visited[i][j]=m[i][j];
            if(m[i+1][j]!=-1 && m[i+1][j]!=visited[i][j])
            {
                visited[i][j]= m[i+1][j];
                row=i+1;
                col=j;
                /** if(i+1==d1 && j==d2){
                     break;
                 }**/
            }
            else if((m[i+1][j]== -1 || m[i+1][j]==visited[i][j]) && (m[i][j+1]!= -1 && m[i][j+1]!=visited[i][j]))
            {
                visited[i][j]= m[i][j+1];
                row=i;
                col=j+1;
                /** if(i==d1 && j+1==d2){
                     break;
                 }**/
            }
            else if((m[i+1][j]==-1 || m[i+1][j]==visited[i][j])  && (m[i][j+1]==-1 || m[i][j+1]==visited[i][j]) && (m[i][j-1]!=-1 && m[i][j-1]!=visited[i][j]))
            {
                visited[i][j]= m[i][j-1];
                row=i;
                col=j-1;
                /**if(i==d1 && j-1==d2){
                     break;
                 }**/
            }
            else if((m[i+1][j]==-1 || m[i+1][j]==visited[i][j]) && (m[i][j+1]==-1 || m[i][j+1]==visited[i][j]) && (m[i][j-1]==-1 || m[i][j-1]==visited[i][j]) && (m[i-1][j]!=-1 && m[i-1][j]!=visited[i][j]))
            {
                visited[i][j]= m[i-1][j];
                row=i-1;
                col=j;
                /**if(i-1==d1 && j==d2){
                    break;
                }**/
            }
            if(i==d1 && j==d2)
            {
                break;
            }


            sum=sum+visited[i][j];
        }

    }
    printf("%d\n",sum);
    printf("%d\n",count);

     int row2=s1,col2=s2;
    for(i=row2; i<r; i++)
    {

        for(j=col2; j<c; j++)
        {
            printf("%d %d\n",row2,col2);
            visited[i][j]=m[i][j];
            if(m[i+1][j]!=-1 && m[i+1][j]!=visited[i][j])
            {
                visited[i][j]= m[i+1][j];
                row2=i+1;
                col2=j;
                /** if(i+1==d1 && j==d2){
                     break;
                 }**/
            }
            else if((m[i+1][j]== -1 || m[i+1][j]==visited[i][j]) && (m[i][j+1]!= -1 && m[i][j+1]!=visited[i][j]))
            {
                visited[i][j]= m[i][j+1];
                row2=i;
                col2=j+1;
                /** if(i==d1 && j+1==d2){
                     break;
                 }**/
            }
            else if((m[i+1][j]==-1 || m[i+1][j]==visited[i][j])  && (m[i][j+1]==-1 || m[i][j+1]==visited[i][j]) && (m[i][j-1]!=-1 && m[i][j-1]!=visited[i][j]))
            {
                visited[i][j]= m[i][j-1];
                row2=i;
                col2=j-1;
                /**if(i==d1 && j-1==d2){
                     break;
                 }**/
            }
            else if((m[i+1][j]==-1 || m[i+1][j]==visited[i][j]) && (m[i][j+1]==-1 || m[i][j+1]==visited[i][j]) && (m[i][j-1]==-1 || m[i][j-1]==visited[i][j]) && (m[i-1][j]!=-1 && m[i-1][j]!=visited[i][j]))
            {
                visited[i][j]= m[i-1][j];
                row2=i-1;
                col2=j;
                /**if(i-1==d1 && j==d2){
                    break;
                }**/
            }
            if(i==d1 && j==d2)
            {
                break;
            }
        }

    }




}
