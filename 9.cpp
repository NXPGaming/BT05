int rand_()
{
	srand(time(NULL));
	return rand()%100;
}