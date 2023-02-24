void ft_radix(t_var *vars, int x)
{
    int s;  // number of integers in the input
    int i;  // current bit being sorted (from right to left)
    int j;  // index of the current integer in the input

    s = vars->a;  // initialize s to the number of integers in stack a
    i = 0;        // start with the rightmost (least significant) bit
    while (i < x) // repeat for each bit, from right to left
    {  
        j = 0;        // start with the first integer in the input
        while (j < s) // repeat for each integer in the input
        {  
            if (ft_atoi(vars->alist[0]) >> i & 1) // if the current bit is 1
            {  
                ft_ra(vars);  // rotate the stack a (move top element to bottom)
            }
            else // if the current bit is 0
            {
                ft_pb(vars);  // move the top element from a to b
            }
            j++;  // move to the next integer in the input
        }
        while (vars->b != 0) // move all elements from b back to a
        {  
            ft_pa(vars);  // move the top element from b to a
        }
        i++;  // move to the next bit
    }
}

