int main()
{
	Vector *cities;
	vector_create(cities);
	readpop(cities);
	readair(cities);
	clean(cities);
	run(cities);
	vector_destroy(cities);
	
	return 0;
}

//void run(Vector *cities)
//{
//	
//}
