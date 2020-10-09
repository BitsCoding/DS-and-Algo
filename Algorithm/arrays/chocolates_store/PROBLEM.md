# Chocolates Store

In a town there is a chocolate shop. In the shop there are different boxes of chocolates and its prices are labelled. Each box contains infinite chocolates. Boxes are numbered from `1` to `N`. Shopkeeper gives a `10%` discount on the chocolate if the price is more than `P`. Many customers buy chocolates from the shop. Shopkeeper is weak in counting so he gave you the duty of finding the total price a customer has to pay.

For example a man buy chocolates from box no. `1` and `3` and its prices are `50` and `45`. So the total cost is `95`.

## Input Format

- The first line contain two space seperated integers `N` and `P`.
- Next `N` lines contain two space seperated integers ![formula](https://render.githubusercontent.com/render/math?math=b_i,C_i), where ![formula](https://render.githubusercontent.com/render/math?math=b_i) denotes the box no. and ![formula](https://render.githubusercontent.com/render/math?math=C_i) denotes the cost of the chocolate.
- Next line contains an integer `Q`, number of customer visiting the shop.
- For each `Q` first line contains an integer `M` denoting number of chocolates purchased by customer and next line contain `M` space-separated integer ![formula](https://render.githubusercontent.com/render/math?math=b_i) denoting box number of chocolates.

## Output Format

For each test case, print total cost the costumer spends on the chocolates upto `1` decimal place.

## Sample Input 0
```
4 105
3 90
1 63
4 56
2 10
4
3
4 2 3
3
1 3 2
1
2
1
3
```

## Sample Output 0
```
140.4
146.7
10
90
```
