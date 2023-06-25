class Solution:
    def maxProfit(self, prices: List[int]) -> int:
      n=len(prices)
      min=2147483647
      profit=0
      for i in range(0,n,1):
        if(prices[i]<min):
          min=prices[i]
        if(prices[i]-min>profit):
          profit=prices[i]-min
      return profit
