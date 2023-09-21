#includestring.h
#includestdio.h
#includestdlib.h
#includemath.h
#define max(a,b) ((a)  (b)  (a)  (b))
#define min(a,b) ((a)  (b)  (a)  (b))

int n;
long long N;

int i,j;

int A[10000];






int main()
{
    scanf(%d %d,&n,&N);
    A[0]=0;
    for(i=1;i=n;i++)scanf(%d,&A[i]);
    long long sum=0;
    for(i=0;in;i++)
    {
        for(j=A[i];jA[i+1];j++)
        {
            sum+=i;
        }
        
        
    }
    sum+=i(N-j);
    printf(%d,sum);
    
    return 0;
}
