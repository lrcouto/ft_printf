# ft_printf

This is a recoding of the printf function, made as an assignment at Escola 42 - São Paulo.

This is a work in progress. It doesn't fully work yet.

May 6th 2020 - Flags work for Ints. Norme is OK.

May 7th 2020 - Trying to handle exception when the program finds a '%' with no conversion afterwards. Works up to this point if there is other conversions on the main string, but if it's the last one of the string, it tends to grab random chars as if they were supposed to be conversions. Maybe try an "alphanumeric characters are not garbage" approach.

May 12th 2020 - Int and Percent tests work. Char is segfaulting and I don't know why.

May 13th 2020 - Char and Percent tests work. Need to fix hexa conversions from int to unsigned int.

May 14th 2020 - Char, String, Int, Percent and Unsigned conversions work with flags AFAIK. Having trouble with testers.

May 19th 2020 - Testing code on PFT_2019 tester (https://github.com/cclaude42/PFT_2019). Passed 622 out of 745 tests. Spent the day fixing problems with NULL parameters being input.

May 20th 2020 - Passing on all of the PFT_2019 tests. Tomorrow I will look for memory leaks and other problems of the sort.
