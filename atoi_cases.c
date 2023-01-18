int main(void)
{
        printf ("\n our atoi : %d  ", ft_atoi("-92233720368547758010"));
	printf("\n original atoi : %d ", atoi("-92233720368547758010"));
	printf ("\n our atoi : %d  ", ft_atoi("9223372036854775808"));
	printf("\n original atoi : %d ", atoi("9223372036854775808"));
	printf ("\n our atoi : %d  ", ft_atoi("9223372036854775800"));
	printf("\n original atoi : %d", atoi("9223372036854775800"));
	printf ("\n our atoi : %d  ", ft_atoi("-2147483649000000000000000"));
	printf("\n original atoi : %d", atoi("-2147483649000000000000000"));
	printf ("\n our atoi : %d  ", ft_atoi("-2147483649"));
	printf("\n original atoi : %d", atoi("-2147483649"));
	printf ("\n our atoi : %d  ", ft_atoi("-0000000000000000000007827666777"));
	printf("\n original atoi : %d", atoi("-0000000000000000000007827666777"));
	printf ("\n our atoi : %d  ", ft_atoi("/t/t/t0000000000000000000007827666777"));
	printf("\n original atoi : %d", atoi("/t/t/t0000000000000000000007827666777"));

	return(0);
}
