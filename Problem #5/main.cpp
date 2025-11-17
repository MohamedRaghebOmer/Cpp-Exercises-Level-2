




bool IsPalindrom(int number)
{
    int original = number;
    int reversed = 0;

    while (number > 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;

    return original == reversed;
}
