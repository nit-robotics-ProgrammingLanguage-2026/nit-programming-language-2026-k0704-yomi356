#include <stdio.h>

int calculate_sum(int input_number)
{
    static int total_sum = 0;

    // static変数は関数が終了しても値を保持する
    total_sum += input_number * 2;

    // 次に関数を呼び出したときも前回の値から計算する
    return total_sum;
}

int main(void)
{
    int input_number;

    scanf("%d", &input_number);

    if (input_number < 1 || input_number > 10)
    {
        printf("NG");
        return 0;
    }

    int result = 0;

    for (int count = 1; count <= input_number; count++)
    {
        result = calculate_sum(count);
    }

    printf("%d", result);

    return 0;
}