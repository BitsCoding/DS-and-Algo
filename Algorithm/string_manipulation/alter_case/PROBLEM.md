# Alter Case

Vaibhav is a creative "TECHY-boy". One day while surfing on the web he finds an interesting way of writing the sentences with alternate uppercases. Since there is no key or key-combination on the keyboard to do so, he thinks to create a program that converts the normal strings to strings with alternate uppercases. Your task is to help Vaibhav with his program.

Your task is to convert the normal strings to strings with alternate uppercases. The alphabets at odd places should be in uppercase, while the alphabets at even places should be in lowercase.

## Input Format

- First line of input contains `N`, that denotes total number of strings.
- Then next `N` lines follow, each containing a string, `S` that needs to be converted.

## Output Format

Print all the converted strings on seperate lines.

## Sample Input 0
```
1
coding_bits
```

## Sample Output 0
```
CoDiNg_bItS
```

## Explanation 0

Since alphabets `c, d, n, i` and `s` (including underscore) are at odd places, hence they are converted to uppercase and remaining alphabets are in lowercase. So string becomes `CoDiNg_bItS`

> **NOTE:** All the spaces are replaced by underscores '_', hence there is no space in any of the strings.
There's no effect of case functions on the underscores but still their places will be included in the string.

## Sample Input 1
```
4
Programmer
Dennis_Ritchie
Capitalization_is_Simple
Stay_HOME_Stay_SAFE
```
## Sample Output 1
```
PrOgRaMmEr
DeNnIs_rItChIe
CaPiTaLiZaTiOn_iS_SiMpLe
StAy_hOmE_StAy_sAfE
```