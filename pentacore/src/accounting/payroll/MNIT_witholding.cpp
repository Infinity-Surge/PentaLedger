

struct MNIT_WH_table
{
    double  floor;
    double  ceiling;
    double  adjustment;
    double  factor_percent;
    double  add;
};

struct MNIT_WH_table MN_single_adjustment[] =
{
    {3800, 30760, 3800, 0.0535, 0},
    {30760, 92350, 30760, 0.0680, 1142.36},
    {92350,     168200, 92350, 0.0785, 5630.48},
    {168200,    0,      168200, 0.0985, 11584.71},
    {0,0,0,0,0},
};

double MNIT_Witholding_Adjustment(double a_amount, bool isMarried)
{
    double result = 0;

    if (isMarried)
    {
        if (a_amount <= 11900)
        {
            return 0;
        }
        if (a_amount > 168200)
        {
            return (a_amount - 168200) * 0.0985 + 11584.71;
        }
    }
    return result;
}