namespace Calc
{
    public static class Calc
    {
        static Random rand = new();
        public static int calc()
        {
            return rand.Next(100) + 1;
        }
    }
}
