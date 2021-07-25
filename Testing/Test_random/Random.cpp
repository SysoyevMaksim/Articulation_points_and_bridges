#include <random>     //random engine, random distribution
#include <iostream>   //cout
#include <functional> //to use bind
#include <ctime>

using namespace std;


void space() //for visibility reasons if you execute the stuff
{
    cout << "\n" << endl;
    for (int i = 0; i < 20; ++i)
        cout << "###";
    cout << "\n" << endl;
}

void uniform_default()
{
    // uniformly distributed from 0 to 6 inclusive
    uniform_int_distribution<size_t> u (0, 6);
    default_random_engine e;  // generates unsigned random integers

    for (size_t i = 0; i < 10; ++i)
        // u uses e as a source of numbers
        // each call returns a uniformly distributed value in the specified range
        cout << u(e) << " ";
}

void random_device_uniform()
{
    space();
    cout << "random device & uniform_int_distribution" << endl;

    random_device engn;
    uniform_int_distribution<size_t> dist(1, 6);

    for (int i=0; i<10; ++i)
        cout << dist(engn) << ' ';
}

void die_roll()
{
    space();
    cout << "default_random_engine and Uniform_int_distribution" << endl;

    using my_engine = default_random_engine;
    using my_distribution = uniform_int_distribution<size_t>;

    my_engine rd {};
    my_distribution one_to_six {1, 6};

    auto die = bind(one_to_six,rd); // the default engine    for (int i = 0; i<10; ++i)

    for (int i = 0; i <10; ++i)
        cout << die() << ' ';

}


void uniform_default_int()
{
    space();
    cout << "uniform default int" << endl;

    default_random_engine engn;
    uniform_int_distribution<size_t> dist(1, 6);

    for (int i = 0; i<10; ++i)
        cout << dist(engn) << ' ';
}

void mersenne_twister_engine_seed()
{
    space();
    cout << "mersenne twister engine with seed 1234" << endl;

    //mt19937 dist (1234);  //for 32 bit systems
    mt19937_64 dist (1234); //for 64 bit systems

    for (int i = 0; i<10; ++i)
        cout << dist() << ' ';
}


void random_seed_mt19937_2()
{
    space();
    cout << "mersenne twister split up in two with seed 1234" << endl;

    mt19937 dist(time(nullptr));
    mt19937 engn(dist);

    for (int i = 0; i < 10; ++i)
        cout << dist() << ' ';

    cout << endl;

    for (int j = 0; j < 10; ++j)
        cout << engn() << ' ';
}



int main()
{
    uniform_default();
    random_device_uniform();
    die_roll();
    random_device_uniform();
    mersenne_twister_engine_seed();
    random_seed_mt19937_2();
    return 0;
}