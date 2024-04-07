#include <iostream>
using namespace std;

class cricketer
 {
protected:
    string name;
    int age;

public:
    void input_data(const string& n, int a) 
	{
        name = n;
        age = a;
    }
};

class batsman : public cricketer
 {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void input_data(const string& n, int a, int tr, int bp)
	 {
        cricketer::input_data(n, a);
        totalRuns = tr;
        bestPerformance = bp;
        calculate_average_runs();
    }

    void calculate_average_runs()
	 {
        
        averageRuns = totalRuns / 50.0; 
    }

    void display_data() const
	 {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main()
 {
    batsman player;
    string name;
    int age, totalRuns, bestPerformance;

    cout << "Enter player's name: ";
    getline(cin, name);
    cout << "Enter player's age: ";
    cin >> age;
    cout << "Enter total runs scored: ";
    cin >> totalRuns;
    cout << "Enter best performance: ";
    cin >> bestPerformance;

    player.input_data(name, age, totalRuns, bestPerformance);
    player.display_data();

    return 0;
}

