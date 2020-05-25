int criba[Msize+1];
void buildCriba(){
	int w[]={4,2,4,2,4,6,2,6};
	for(int p=25;p<=MAXP;p+=10) criba[p]=5;
	for(int p=9;p<=MAXP;p+=6)criba[p]=3;
	for(int p=4;p<=MAXP;p+=2)criba[p]=2;
	for(int p=7,cur=0;p*p<=MAXP;p+=w[cur++&7]) if(!criba[p])
	for(int j=p*p;j<=MAXP;j+=(p<<1)) if(!criba[j]) criba[j]=p;
}
vector<int> prime;
void bP()
{
	buildCriba();
	for(int i = 2;i<MAXP+1;++i)if (!criba[i]) prime.push_back(i);
}
void fact(int n,map<int,int> &f) //O (cant primos)
{
	for(int p:prime){
		while(!(n %p))
		{
			f[p]++;
			n/=p;
		}
	}
	if(n>1) f[n]++;
}