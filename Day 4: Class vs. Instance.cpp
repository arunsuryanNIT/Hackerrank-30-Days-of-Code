

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if (initialAge < 0)
    {
        cout << "Age is not valid, setting age to 0.\n"; 
        age = 0;
    }
    else 
    {
        age = initialAge;
    }

    }

    void Person::amIOld(){
        if (age < 13)
        {cout << "You are young.\n";}
    else if (age < 18)
        {cout << "You are a teenager.\n";}
    else
        {cout << "You are old.\n";}

    }

    void Person::yearPasses(){
        age++;
        // Increment the age of the person in here

    }

