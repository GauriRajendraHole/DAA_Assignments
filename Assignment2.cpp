#include<iostream>
#include<vector> 
using namespace std;
int maxProfit(vector<int>& prices)
{
	int n= prices.size();
	if(n ==0)
	{
		return 0;
	}
	
	int max_profit = 0;
	for(int i=1; i<n ; ++i)
	{
		if(prices[i] > prices[i-1])
		{
			max_profit += prices[i] - prices[i-1];
		}
	}
	return max_profit;
}
int main()
{
	vector<int> prices1 = {2,3,5};
	vector<int> prices2 = {8,5,1};
	
	int profit1 = maxProfit(prices1);
	int profit2 = maxProfit(prices2);
	cout<<"Maximum Profit for Price1 : "<<profit1<<endl;
	cout<<"Maximum Profit for Price2 : "<<profit2<<endl;
	
	return 0;
}

/* Output : 

Maximum Profit for Price1 : 3
Maximum Profit for Price2 : 0
*/