 	#include<iostream>

using namespace std;
main ()
{
	int edad;
	cout<<"Digite su edad: ";
	cin>>edad;
	if (edad<1)
	{
		cout<<"no haz nacido :C";
	}
	else
	{
		if ((edad>=1) and (edad<=2))
		{
			cout<<"eres un bebe we";
		}

		else
		{
			if (edad>=3 and(edad<=10))
			{
				cout<<"eres un niño";
			}

			else
			{
				if (edad>=11 and(edad<=17))
				{
					cout<<"eres un adoscelente";
				}

				else
				{
					if (edad>=18 and(edad<=28))
					{
						cout<<"eres un joven";
					}

					else
					{
						if (edad>=28 and(edad<=45))
						{
							cout<<"eres un adulto";
						}

						else
						{
							if (edad>=45 and(edad<=60))
								{
									cout<<"eres un maduro xd";
								}
							else
								{
									if (edad>=60 and(edad<=80))
										{
											cout<<"eres un adulto mayor";
										}
									else
										{
										
											if (edad>=81 and(edad<=100))
												{
													cout<<"eres abuelo";
												}
											else
												{
													cout<<"estas muerto";
												}
										}
								}
						}
					}
				}
			}
		}
	}
		
}

