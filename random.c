char rand_char()
{
    random r = new random();
    char c = (char)(r.nextInt(26)+'a');
}