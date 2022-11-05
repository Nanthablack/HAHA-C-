#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int, int>p[1001], cur[1001];
	int nc, ns, i, j, inp, front = 0, rear = 0, tmp;
	char x;
	scanf("%d %d",&nc,&ns);
	for(i=0;i<ns;i++){
		scanf("%d %d",&p[i].first,&p[i].second);
	}
	while(1){
		scanf(" %c",&x);
		if(x == 'X'){
			printf("0\n");
			break;
		}
		else if(x == 'D'){
			if(front == rear){
				printf("empty\n");
			}
			else{
				printf("%d\n",cur[0].second);
				for(i=0;i<rear-1;i++){
					cur[i] = cur[i+1];
				}
				rear--;
			}
		}
		else if(x == 'E'){
			scanf("%d",&inp);
			for(i=0;i<ns;i++){
				if(inp==p[i].second){
					cur[rear].first = p[i].first;
					cur[rear++].second = p[i].second;
					break;
				}
			}
			for(i=rear-2;i>=0;i--){
				if(cur[i].first==cur[rear-1].first){
					int tmp = rear-1;
					while (tmp - 1 > i){
						swap(cur[tmp], cur[tmp-1]);
						tmp--;
					}
					break;
				}
			}
		}
	}
	return 0;
}