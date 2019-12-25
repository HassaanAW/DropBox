#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

class Subject{

private:
	vector<double> Quiz;
	vector<double> Assignment;
	double Mid;
	double Final;

	vector<double> T_Quiz;
	vector<double> T_Assignment;
	double T_Mid;
	double T_Final;

	double Quiz_Total;
	double T_Quiz_Total;

	double Assignment_Total;
	double T_Assignment_Total;
	
	double Percentage;
	double Total_Marks;
	double Out_of;

	int quiz_num;
	int assign_num;


public:
	
	Subject(){
		Mid = 0;
		Final = 0;
		T_Mid = 0;
		T_Final = 0;
		Quiz_Total = 0;
		T_Quiz_Total = 0;
		Assignment_Total = 0;
		T_Assignment_Total = 0;
		Percentage = 0;
		Total_Marks = 0;
		Out_of = 0;
		quiz_num = 0;
		assign_num = 0;
	}

	void Add_Quiz(){

		double quiz, total;
		cout << " Enter Quiz Marks: ";
		cin >> quiz;
		Quiz.push_back(quiz);
		cout << " Enter Total Marks: ";
		cin >> total;
		T_Quiz.push_back(total);
		cout << " Marks Enter Successfully " << endl;

		quiz_num = Quiz.size();

	}

	void Add_Assignment(){

		double assign, total;
		cout << " Enter Assignment Marks: ";
		cin >> assign;
		Assignment.push_back(assign);
		cout << " Enter Total Marks: ";
		cin >> total;
		T_Assignment.push_back(total);
		cout << " Marks Enter Successfully " << endl;

		assign_num = Assignment.size();


	}

	void Add_Mid(){

		cout << " Enter Mid Marks: ";
		cin >> Mid;
		cout << " Enter Total Marks: ";
		cin >> T_Mid;
		cout << " Marks Enter Successfully " << endl;

	}

	void Add_Final(){

		cout << " Enter Final Marks: ";
		cin >> Final;
		cout << " Enter Total Marks: ";
		cin >> T_Final;
		cout << " Marks Enter Successfully " << endl;

	}

	void Total(){

		for(int i = 0; i<quiz_num; i++)
		{
			Quiz_Total = Quiz_Total + Quiz[i];
			T_Quiz_Total = T_Quiz_Total + T_Quiz[i];
		}

		for(int i = 0; i<assign_num; i++)
		{
			Assignment_Total = Assignment_Total + Assignment[i];
			T_Assignment_Total = T_Assignment_Total + T_Assignment[i];
		}

	}

	void Save(Subject A, Subject B, Subject C, Subject D, Subject E){
		ofstream save("Save.txt");

		save << A.quiz_num << endl;
		save << A.assign_num << endl;
		save << B.quiz_num << endl;
		save << B.assign_num << endl;
		save << C.quiz_num << endl;
		save << C.assign_num << endl;
		save << D.quiz_num << endl;
		save << D.assign_num << endl;
		save << E.quiz_num << endl;
		save << E.assign_num << endl;

		for(int i=0; i< A.quiz_num; i++)
		{
			save << A.Quiz[i] << endl;
		}
		for(int i=0; i< A.quiz_num; i++)
		{
			save << A.T_Quiz[i] << endl;
		}

		for(int i=0; i< A.assign_num; i++)
		{
			save << A.Assignment[i] << endl;
		}
		for(int i=0; i< A.assign_num; i++)
		{
			save << A.T_Assignment[i] << endl;
		}

		save << A.Mid << endl;
		save << A.T_Mid << endl;
		save << A.Final << endl;
		save << A.T_Final << endl;

		// Second Class 

		for(int i=0; i< B.quiz_num; i++)
		{
			save << B.Quiz[i] << endl;
		}
		for(int i=0; i< B.quiz_num; i++)
		{
			save << B.T_Quiz[i] << endl;
		}

		for(int i=0; i< B.assign_num; i++)
		{
			save << B.Assignment[i] << endl;
		}
		for(int i=0; i< B.assign_num; i++)
		{
			save << B.T_Assignment[i] << endl;
		}

		save << B.Mid << endl;
		save << B.T_Mid << endl;
		save << B.Final << endl;
		save << B.T_Final << endl;

		// Third Class

		for(int i=0; i< C.quiz_num; i++)
		{
			save << C.Quiz[i] << endl;
		}
		for(int i=0; i< C.quiz_num; i++)
		{
			save << C.T_Quiz[i] << endl;
		}

		for(int i=0; i< C.assign_num; i++)
		{
			save << C.Assignment[i] << endl;
		}
		for(int i=0; i< C.assign_num; i++)
		{
			save << C.T_Assignment[i] << endl;
		}

		save << C.Mid << endl;
		save << C.T_Mid << endl;
		save << C.Final << endl;
		save << C.T_Final << endl;

		// Fourth Class

		for(int i=0; i< D.quiz_num; i++)
		{
			save << D.Quiz[i] << endl;
		}
		for(int i=0; i< D.quiz_num; i++)
		{
			save << D.T_Quiz[i] << endl;
		}

		for(int i=0; i< D.assign_num; i++)
		{
			save << D.Assignment[i] << endl;
		}
		for(int i=0; i< D.assign_num; i++)
		{
			save << D.T_Assignment[i] << endl;
		}

		save << D.Mid << endl;
		save << D.T_Mid << endl;
		save << D.Final << endl;
		save << D.T_Final << endl;

		// Fifth Class

		for(int i=0; i< E.quiz_num; i++)
		{
			save << E.Quiz[i] << endl;
		}
		for(int i=0; i< E.quiz_num; i++)
		{
			save << E.T_Quiz[i] << endl;
		}

		for(int i=0; i< E.assign_num; i++)
		{
			save << E.Assignment[i] << endl;
		}
		for(int i=0; i< E.assign_num; i++)
		{
			save << E.T_Assignment[i] << endl;
		}

		save << E.Mid << endl;
		save << E.T_Mid << endl;
		save << E.Final << endl;
		save << E.T_Final << endl;

	}

	void Loaded(Subject& A, Subject& B, Subject& C, Subject& D, Subject& E){
		ifstream Load("Save.txt");

		Load >> A.quiz_num;
		Load >> A.assign_num;
		Load >> B.quiz_num;
		Load >> B.assign_num;
		Load >> C.quiz_num;
		Load >> C.assign_num;
		Load >> D.quiz_num;
		Load >> D.assign_num;
		Load >> E.quiz_num;
		Load >> E.assign_num;

		for(int i = 0; i< A.quiz_num; i++)
		{	
			double num;
			Load >> num;
			A.Quiz.push_back(num);
		}
		for(int i = 0; i< A.quiz_num; i++)
		{
			double num;
			Load >> num;
			A.T_Quiz.push_back(num);
		}
		for(int i=0; i< A.assign_num; i++)
		{
			double num;
			Load >> num;
			A.Assignment.push_back(num);
		}
		for(int i=0; i< A.assign_num; i++)
		{
			double num;
			Load >> num;
			A.T_Assignment.push_back(num);
		}

		Load >> A.Mid;
		Load >> A.T_Mid;
		Load >> A.Final;
		Load >> A.T_Final;

		for(int i = 0; i< B.quiz_num; i++)
		{
			double num;
			Load >> num;
			B.Quiz.push_back(num);
		}
		for(int i = 0; i< B.quiz_num; i++)
		{
			double num;
			Load >> num;
			B.T_Quiz.push_back(num);
		}
		for(int i=0; i< B.assign_num; i++)
		{
			double num;
			Load >> num;
			B.Assignment.push_back(num);
		}
		for(int i=0; i< B.assign_num; i++)
		{
			double num;
			Load >> num;
			B.T_Assignment.push_back(num);
		}

		Load >> B.Mid;
		Load >> B.T_Mid;
		Load >> B.Final;
		Load >> B.T_Final;

		for(int i = 0; i< C.quiz_num; i++)
		{
			double num;
			Load >> num;
			C.Quiz.push_back(num);
		}
		for(int i = 0; i< C.quiz_num; i++)
		{
			double num;
			Load >> num;
			C.T_Quiz.push_back(num);
		}
		for(int i=0; i< C.assign_num; i++)
		{
			double num;
			Load >> num;
			C.Assignment.push_back(num);
		}
		for(int i=0; i< C.assign_num; i++)
		{
			double num;
			Load >> num;
			C.T_Assignment.push_back(num);
		}

		Load >> C.Mid;
		Load >> C.T_Mid;
		Load >> C.Final;
		Load >> C.T_Final;

		for(int i = 0; i< D.quiz_num; i++)
		{
			double num;
			Load >> num;
			D.Quiz.push_back(num);
		}
		for(int i = 0; i< D.quiz_num; i++)
		{
			double num;
			Load >> num;
			D.T_Quiz.push_back(num);
		}
		for(int i=0; i< D.assign_num; i++)
		{
			double num;
			Load >> num;
			D.Assignment.push_back(num);
		}
		for(int i=0; i< D.assign_num; i++)
		{
			double num;
			Load >> num;
			D.T_Assignment.push_back(num);
		}

		Load >> D.Mid;
		Load >> D.T_Mid;
		Load >> D.Final;
		Load >> D.T_Final;

		for(int i = 0; i< E.quiz_num; i++)
		{
			double num;
			Load >> num;
			E.Quiz.push_back(num);
		}
		for(int i = 0; i< E.quiz_num; i++)
		{
			double num;
			Load >> num;
			E.T_Quiz.push_back(num);
		}
		for(int i=0; i< E.assign_num; i++)
		{
			double num;
			Load >> num;
			E.Assignment.push_back(num);
		}
		for(int i=0; i< E.assign_num; i++)
		{
			double num;
			Load >> num;
			E.T_Assignment.push_back(num);
		}

		Load >> E.Mid;
		Load >> E.T_Mid;
		Load >> E.Final;
		Load >> E.T_Final;


	}

	int Menu(){

		int choice;
		cout << endl;
		cout << " 1. Add Quiz " << endl;
		cout << " 2. Add Assignment " << endl;
		cout << " 3. Add Mid-Term " << endl;
		cout << " 4. Add Final " << endl;
		cout << " 5. Back " << endl;
		cout << " Choice: " ;
		cin >> choice;
		return choice;
	
	}

	void Output(Subject A, Subject B, Subject C, Subject D, Subject E){

		system("CLS");
		cout << endl;
		cout << setw(75) << "-----------------------" << endl;
		cout << setw(75) << " SOPHOMORE SPRING 2020 " << endl;
		cout << setw(75) << "-----------------------" << endl;
		cout << " CS-202 DATA STRUCTURES " << endl;
		cout << "-----------------------" << endl;

		
		cout << " | Quiz | " << endl;
		if(A.Quiz.size() == 0)
		{
			cout << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<A.quiz_num; i++)
			{
				cout << " Quiz " << i+1 << ": " << A.Quiz[i] << "/" << A.T_Quiz[i] << endl; 
			}
		}

		cout << endl;
		cout << " | Assignments | " << endl;

		if(A.Assignment.size() == 0)
		{
			cout << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<A.assign_num; i++)
			{
				cout << " Assignment " << i+1 << ": " << A.Assignment[i] << "/" << A.T_Assignment[i] << endl; 
			}
		}
	
		cout << " Mid Term: ";
		if(A.Mid == 0)
		{
			cout << " None... " << endl;
		} 
		else{
			cout << A.Mid << "/" << A.T_Mid << endl;
		}

		cout << " Final: ";
		if(A.Final == 0)
		{
			cout << " None... " << endl;
		} 
		else{
			cout << A.Final << "/" << A.T_Final << endl;
		}

		// CS 331

		cout << endl;
		cout << " CS-331 NETWORK CENTRIC COMPUTING " << endl;
		cout << " -------------------------------- " << endl;
		cout << " | Quiz | " << endl;
		if(B.Quiz.size() == 0)
		{
			cout << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<B.quiz_num; i++)
			{
				cout << " Quiz " << i+1 << ": " << B.Quiz[i] << "/" << B.T_Quiz[i] << endl; 
			}
		}

		cout << endl;
		cout << " | Assignments | " << endl;

		if(B.Assignment.size() == 0)
		{
			cout << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<B.assign_num; i++)
			{
				cout << " Assignment " << i+1 << ": " << B.Assignment[i] << "/" << B.T_Assignment[i] << endl; 
			}
		}

		cout << " Mid Term: ";
		if(B.Mid == 0)
		{
			cout << " None... " << endl;
		} 
		else{
			cout << B.Mid << "/" << B.T_Mid << endl;
		}

		cout << " Final: ";
		if(B.Final == 0)
		{
			cout << " None... " << endl;
		} 
		else{
			cout << B.Final << "/" << B.T_Final << endl;
		}

		// CS382

		cout << endl;
		cout << " CS-382 ARTIFICIAL INTELLIGENCE" << endl;
		cout << " ------------------------------" << endl;
		cout << " | Quiz | " << endl;
		if(C.Quiz.size() == 0)
		{
			cout << " None..." << endl;
		} 
		else
		{
			for(int i=0; i<C.quiz_num; i++)
			{
				cout << " Quiz " << i+1 << ": " << C.Quiz[i] << "/" << C.T_Quiz[i] << endl; 
			}
		}

		cout << endl;
		cout << " | Assignments | " << endl;

		if(C.Assignment.size() == 0)
		{
			cout << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<C.assign_num; i++)
			{
				cout << " Assignment " << i+1 << ": " << C.Assignment[i] << "/" << C.T_Assignment[i] << endl; 
			}
		}
		cout << " Mid Term: ";
		if(C.Mid == 0)
		{
			cout << " None..." << endl;
		} 
		else{
			cout << C.Mid << "/" << C.T_Mid << endl;
		}

		cout << " Final: ";
		if(C.Final == 0)
		{
			cout << " None..." << endl;
		} 
		else{
			cout << C.Final << "/" << C.T_Final << endl;
		}

		// BIO-231

		cout << endl;
		cout << " BIO-231 COMPUTATIONAL BIOLOGY " << endl;
		cout << " ----------------------------- " << endl;
		cout << " | Quiz |" << endl;
		if(D.Quiz.size() == 0)
		{
			cout << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<D.quiz_num; i++)
			{
				cout << " Quiz " << i+1 << ": " << D.Quiz[i] << "/" << D.T_Quiz[i] << endl; 
			}
		}

		cout << endl;
		cout << " | Assignments |" << endl;

		if(D.Assignment.size() == 0)
		{
			cout << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<D.assign_num; i++)
			{
				cout << " Assignment " << i+1 << ": " << D.Assignment[i] << "/" << D.T_Assignment[i] << endl; 
			}
		}
		
		cout << " Mid Term: ";
		if(D.Mid == 0)
		{
			cout << " None... " << endl;
		} 
		else{
			cout << D.Mid << "/" << D.T_Mid << endl;
		}

		cout << " Final: ";
		if(D.Final == 0)
		{
			cout << " None..." << endl;
		} 
		else{
			cout << D.Final << "/" << D.T_Final << endl;
		}

		// MATH-230

		cout << endl;
		cout << " MATH-230 PROBABILITY " << endl;
		cout << " -------------------- " << endl;
		cout << " | Quiz | " << endl;
		if(E.Quiz.size() == 0)
		{
			cout << " None..." << endl;
		} 
		else
		{
			for(int i=0; i<E.quiz_num; i++)
			{
				cout << " Quiz " << i+1 << ": " << E.Quiz[i] << "/" << E.T_Quiz[i] << endl; 
			}
		}

		cout << endl;
		cout << " Assignments " << endl;
		if(E.Assignment.size() == 0)
		{
			cout << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<E.assign_num; i++)
			{
				cout << " Assignment " << i+1 << ": " << E.Assignment[i] << "/" << E.T_Assignment[i] << endl; 
			}
		}

		cout << " Mid Term: ";
		if(E.Mid == 0)
		{
			cout << " None... " << endl;
		} 
		else{
			cout << E.Mid << "/" << E.T_Mid << endl;
		}

		cout << " Final: ";
		if(E.Final == 0)
		{
			cout << " None... " << endl;
		} 
		else{
			cout << E.Final << "/" << E.T_Final << endl;
		}
	}

	// Generate Report

	void Report(Subject A, Subject B, Subject C, Subject D, Subject E){

		ofstream Gen("Report.txt");
		Gen << endl;
		Gen << setw(75) << "-----------------------" << endl;
		Gen << setw(75) << " SOPHOMORE SPRING 2020 " << endl;
		Gen << setw(75) << "-----------------------" << endl;
		Gen << " CS-202 DATA STRUCTURES " << endl;
		Gen << "-----------------------" << endl;

		
		Gen << " | Quiz | " << endl;
		if(A.Quiz.size() == 0)
		{
			Gen << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<A.quiz_num; i++)
			{
				Gen << " Quiz " << i+1 << ": " << A.Quiz[i] << "/" << A.T_Quiz[i] << endl; 
			}
		}

		Gen << endl;
		Gen << " | Assignments | " << endl;

		if(A.Assignment.size() == 0)
		{
			Gen << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<A.assign_num; i++)
			{
				Gen << " Assignment " << i+1 << ": " << A.Assignment[i] << "/" << A.T_Assignment[i] << endl; 
			}
		}
	
		Gen << " Mid Term: ";
		if(A.Mid == 0)
		{
			Gen << " None... " << endl;
		} 
		else{
			Gen << A.Mid << "/" << A.T_Mid << endl;
		}

		Gen << " Final: ";
		if(A.Final == 0)
		{
			Gen << " None... " << endl;
		} 
		else{
			Gen << A.Final << "/" << A.T_Final << endl;
		}

		// CS 331

		Gen << endl;
		Gen << " CS-331 NETWORK CENTRIC COMPUTING " << endl;
		Gen << " -------------------------------- " << endl;
		Gen << " | Quiz | " << endl;
		if(B.Quiz.size() == 0)
		{
			Gen << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<B.quiz_num; i++)
			{
				Gen << " Quiz " << i+1 << ": " << B.Quiz[i] << "/" << B.T_Quiz[i] << endl; 
			}
		}

		Gen << endl;
		Gen << " | Assignments | " << endl;

		if(B.Assignment.size() == 0)
		{
			Gen << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<B.assign_num; i++)
			{
				Gen << " Assignment " << i+1 << ": " << B.Assignment[i] << "/" << B.T_Assignment[i] << endl; 
			}
		}

		Gen << " Mid Term: ";
		if(B.Mid == 0)
		{
			Gen << " None... " << endl;
		} 
		else{
			Gen << B.Mid << "/" << B.T_Mid << endl;
		}

		Gen << " Final: ";
		if(B.Final == 0)
		{
			Gen << " None... " << endl;
		} 
		else{
			Gen << B.Final << "/" << B.T_Final << endl;
		}

		// CS382

		Gen << endl;
		Gen << " CS-382 ARTIFICIAL INTELLIGENCE" << endl;
		Gen << " ------------------------------" << endl;
		Gen << " | Quiz | " << endl;
		if(C.Quiz.size() == 0)
		{
			Gen << " None..." << endl;
		} 
		else
		{
			for(int i=0; i<C.quiz_num; i++)
			{
				Gen << " Quiz " << i+1 << ": " << C.Quiz[i] << "/" << C.T_Quiz[i] << endl; 
			}
		}

		Gen << endl;
		Gen << " | Assignments | " << endl;

		if(C.Assignment.size() == 0)
		{
			Gen << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<C.assign_num; i++)
			{
				Gen << " Assignment " << i+1 << ": " << C.Assignment[i] << "/" << C.T_Assignment[i] << endl; 
			}
		}
		Gen << " Mid Term: ";
		if(C.Mid == 0)
		{
			Gen << " None..." << endl;
		} 
		else{
			Gen << C.Mid << "/" << C.T_Mid << endl;
		}

		Gen << " Final: ";
		if(C.Final == 0)
		{
			Gen << " None..." << endl;
		} 
		else{
			Gen << C.Final << "/" << C.T_Final << endl;
		}

		// BIO-231

		Gen << endl;
		Gen << " BIO-231 COMPUTATIONAL BIOLOGY " << endl;
		Gen << " ----------------------------- " << endl;
		Gen << " | Quiz |" << endl;
		if(D.Quiz.size() == 0)
		{
			Gen << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<D.quiz_num; i++)
			{
				Gen << " Quiz " << i+1 << ": " << D.Quiz[i] << "/" << D.T_Quiz[i] << endl; 
			}
		}

		Gen << endl;
		Gen << " | Assignments |" << endl;

		if(D.Assignment.size() == 0)
		{
			Gen << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<D.assign_num; i++)
			{
				Gen << " Assignment " << i+1 << ": " << D.Assignment[i] << "/" << D.T_Assignment[i] << endl; 
			}
		}
		
		Gen << " Mid Term: ";
		if(D.Mid == 0)
		{
			Gen << " None... " << endl;
		} 
		else{
			Gen << D.Mid << "/" << D.T_Mid << endl;
		}

		Gen << " Final: ";
		if(D.Final == 0)
		{
			Gen << " None..." << endl;
		} 
		else{
			Gen << D.Final << "/" << D.T_Final << endl;
		}

		// MATH-230

		Gen << endl;
		Gen << " MATH-230 PROBABILITY " << endl;
		Gen << " -------------------- " << endl;
		Gen << " | Quiz | " << endl;
		if(E.Quiz.size() == 0)
		{
			Gen << " None..." << endl;
		} 
		else
		{
			for(int i=0; i<E.quiz_num; i++)
			{
				Gen << " Quiz " << i+1 << ": " << E.Quiz[i] << "/" << E.T_Quiz[i] << endl; 
			}
		}

		Gen << endl;
		Gen << " Assignments " << endl;
		if(E.Assignment.size() == 0)
		{
			Gen << " None... " << endl;
		} 
		else
		{
			for(int i=0; i<E.assign_num; i++)
			{
				Gen << " Assignment " << i+1 << ": " << E.Assignment[i] << "/" << E.T_Assignment[i] << endl; 
			}
		}

		Gen << " Mid Term: ";
		if(E.Mid == 0)
		{
			Gen << " None... " << endl;
		} 
		else{
			Gen << E.Mid << "/" << E.T_Mid << endl;
		}

		Gen << " Final: ";
		if(E.Final == 0)
		{
			Gen << " None... " << endl;
		} 
		else{
			Gen << E.Final << "/" << E.T_Final << endl;
		}
	}


};

int Home()
	{
		int choice;
		cout << endl;
		cout << " PERFORMANCE ANALYZER- SPRING 2020 " << endl;
		cout << endl;
		cout << " 1. Setup " << endl;
		cout << " 2. Load Progress " << endl;
		cout << " Choice: " ;
		cin >> choice;
		return choice;
	}

int Sub()
	{
		int choice;
		cout << endl;
		cout << " 1. CS 202-DATA STRUCTURES " << endl;
		cout << " 2. CS 331-NETWORK CENTRIC COMPUTING " << endl;
		cout << " 3. CS 382-ARTIFICIAL INTELLIGENCE "<< endl;
		cout << " 4. BIO 231-COMPUTATIONAL BIOLOGY " << endl;
		cout << " 5. MATH 230-PROBABILITY "<< endl;
		cout << " 6. REPORT " << endl;
		cout << " Choice: " ; 
		cin >> choice;
		return choice;
	}


int main(){

Subject CS202;
Subject CS331;
Subject CS382;
Subject BIO231;
Subject MATH230;
int mark = Home();

if(mark == 1 )
{	
back:
	switch( Sub() )
	{
		case 1: {
			system("CLS");
			int opt = CS202.Menu();
			while(opt != -1)
			{
			switch(opt){
			case 1:
			{	
				system("CLS");
				CS202.Add_Quiz();
				CS202.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS202.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS202.Menu();
				break;
			}
			case 2:
			{	system("CLS");
				CS202.Add_Assignment();
				CS202.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS202.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS202.Menu();
				break;
			}
			case 3:
			{	
				system("CLS");
				CS202.Add_Mid();
				CS202.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS202.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS202.Menu();
				break;
			}
			case 4:
			{	
				system("CLS");
				CS202.Add_Final();
				CS202.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS202.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS202.Menu();
				break;
			}
			case 5:
			{	system("CLS");
				goto back;
				break;
			}
		}

		}

		}

		case 2: {
			system("CLS");
			int opt = CS331.Menu();
			while(opt != -1)
			{
			switch(opt){
			case 1:
			{
				system("CLS");
				CS331.Add_Quiz();
				CS331.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS331.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS331.Menu();
				break;
			}
			case 2:
			{
				system("CLS");
				CS331.Add_Assignment();
				CS331.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS331.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS331.Menu();
				break;
			}
			case 3:
			{
				system("CLS");
				CS331.Add_Mid();
				CS331.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS331.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS331.Menu();
				break;
			}
			case 4:
			{
				system("CLS");
				CS331.Add_Final();
				CS331.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS331.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS331.Menu();
				break;
			}
			case 5:
			{
				system("CLS");
				goto back;
				break;
			}
		}

		}

		}

		case 3: {
			system("CLS");
			int opt = CS382.Menu();
			while(opt != -1)
			{
			switch(opt){
			case 1:
			{
				system("CLS");
				CS382.Add_Quiz();
				CS382.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS382.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS382.Menu();
				break;
			}
			case 2:
			{
				system("CLS");
				CS382.Add_Assignment();
				CS382.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS382.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS382.Menu();
				break;
			}
			case 3:
			{
				system("CLS");
				CS382.Add_Mid();
				CS382.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS382.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS382.Menu();
				break;
			}
			case 4:
			{
				system("CLS");
				CS382.Add_Final();
				CS382.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS382.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS382.Menu();
				break;
			}
			case 5:
			{
				system("CLS");
				goto back;
				break;
			}
		}

		}

		}

		case 4: {
			system("CLS");
			int opt = BIO231.Menu();
			while(opt != -1)
			{
			switch(opt){
			case 1:
			{
				system("CLS");
				BIO231.Add_Quiz();
				BIO231.Save(CS202, CS331, CS382, BIO231, MATH230);
				BIO231.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = BIO231.Menu();
				break;
			}
			case 2:
			{
				system("CLS");
				BIO231.Add_Assignment();
				BIO231.Save(CS202, CS331, CS382, BIO231, MATH230);
				BIO231.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = BIO231.Menu();
				break;
			}
			case 3:
			{
				system("CLS");
				BIO231.Add_Mid();
				BIO231.Save(CS202, CS331, CS382, BIO231, MATH230);
				BIO231.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = BIO231.Menu();
				break;
			}
			case 4:
			{
				system("CLS");
				BIO231.Add_Final();
				BIO231.Save(CS202, CS331, CS382, BIO231, MATH230);
				BIO231.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = BIO231.Menu();
				break;
			}
			case 5:
			{
				system("CLS");
				goto back;
				break;
			}
		}

		}

		}

		case 5: {
			system("CLS");
			int opt = MATH230.Menu();
			while(opt != -1)
			{
			switch(opt){
			case 1:
			{
				system("CLS");
				MATH230.Add_Quiz();
				MATH230.Save(CS202, CS331, CS382, BIO231, MATH230);
				MATH230.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = MATH230.Menu();
				break;
			}
			case 2:
			{
				system("CLS");
				MATH230.Add_Assignment();
				MATH230.Save(CS202, CS331, CS382, BIO231, MATH230);
				MATH230.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = MATH230.Menu();
				break;
			}
			case 3:
			{
				system("CLS");
				MATH230.Add_Mid();
				MATH230.Save(CS202, CS331, CS382, BIO231, MATH230);
				MATH230.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = MATH230.Menu();
				break;
			}
			case 4:
			{
				system("CLS");
				MATH230.Add_Final();
				MATH230.Save(CS202, CS331, CS382, BIO231, MATH230);
				MATH230.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = MATH230.Menu();
				break;
			}
			case 5:
			{
				system("CLS");
				goto back;
				break;
			}
		}

		}

		}

		case 6: {
			string key;
			CS202.Output(CS202, CS331, CS382, BIO231, MATH230);
			cout << endl;
			cout << " Press any key to go back " << endl;
			cin >> key;
			goto back;
			break;
		}

	} 
}

else if(mark == 2)
{

CS202.Loaded(CS202, CS331, CS382, BIO231, MATH230);
CS202.Save(CS202, CS331, CS382, BIO231, MATH230);

check:
	switch( Sub() )
	{	
		case 1: {
			system("CLS");
			int opt = CS202.Menu();
			while(opt != -1)
			{
			switch(opt){
			case 1:
			{
				system("CLS");
				CS202.Add_Quiz();
				CS202.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS202.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS202.Menu();
				break;
			}
			case 2:
			{
				system("CLS");
				CS202.Add_Assignment();
				CS202.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS202.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS202.Menu();
				break;
			}
			case 3:
			{
				system("CLS");
				CS202.Add_Mid();
				CS202.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS202.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS202.Menu();
				break;
			}
			case 4:
			{
				system("CLS");
				CS202.Add_Final();
				CS202.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS202.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS202.Menu();
				break;
			}
			case 5:
			{
				system("CLS");
				goto check;
				break;
			}
		}

		}

		}

		case 2: {
			system("CLS");
			int opt = CS331.Menu();
			while(opt != -1)
			{
			switch(opt){
			case 1:
			{
				system("CLS");
				CS331.Add_Quiz();
				CS331.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS331.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS331.Menu();
				break;
			}
			case 2:
			{
				system("CLS");
				CS331.Add_Assignment();
				CS331.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS331.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS331.Menu();
				break;
			}
			case 3:
			{
				system("CLS");
				CS331.Add_Mid();
				CS331.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS331.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS331.Menu();
				break;
			}
			case 4:
			{
				system("CLS");
				CS331.Add_Final();
				CS331.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS331.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS331.Menu();
				break;
			}
			case 5:
			{
				system("CLS");
				goto check;
				break;
			}
		}

		}

		}

		case 3: {
			system("CLS");
			int opt = CS382.Menu();
			while(opt != -1)
			{
			switch(opt){
			case 1:
			{
				system("CLS");
				CS382.Add_Quiz();
				CS382.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS382.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS382.Menu();
				break;
			}
			case 2:
			{
				system("CLS");
				CS382.Add_Assignment();
				CS382.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS382.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS382.Menu();
				break;
			}
			case 3:
			{
				system("CLS");
				CS382.Add_Mid();
				CS382.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS382.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS382.Menu();
				break;
			}
			case 4:
			{
				system("CLS");
				CS382.Add_Final();
				CS382.Save(CS202, CS331, CS382, BIO231, MATH230);
				CS382.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = CS382.Menu();
				break;
			}
			case 5:
			{
				system("CLS");
				goto check;
				break;
			}
		}

		}

		}

		case 4: {
			system("CLS");
			int opt = BIO231.Menu();
			while(opt != -1)
			{
			switch(opt){
			case 1:
			{
				system("CLS");
				BIO231.Add_Quiz();
				BIO231.Save(CS202, CS331, CS382, BIO231, MATH230);
				BIO231.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = BIO231.Menu();
				break;
			}
			case 2:
			{
				system("CLS");
				BIO231.Add_Assignment();
				BIO231.Save(CS202, CS331, CS382, BIO231, MATH230);
				BIO231.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = BIO231.Menu();
				break;
			}
			case 3:
			{
				system("CLS");
				BIO231.Add_Mid();
				BIO231.Save(CS202, CS331, CS382, BIO231, MATH230);
				BIO231.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = BIO231.Menu();
				break;
			}
			case 4:
			{
				system("CLS");
				BIO231.Add_Final();
				BIO231.Save(CS202, CS331, CS382, BIO231, MATH230);
				BIO231.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = BIO231.Menu();
				break;
			}
			case 5:
			{
				system("CLS");
				goto check;
				break;
			}
		}

		}

		}

		case 5: {
			system("CLS");
			int opt = MATH230.Menu();
			while(opt != -1)
			{
			switch(opt){
			case 1:
			{
				system("CLS");
				MATH230.Add_Quiz();
				MATH230.Save(CS202, CS331, CS382, BIO231, MATH230);
				MATH230.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = MATH230.Menu();
				break;
			}
			case 2:
			{
				system("CLS");
				MATH230.Add_Assignment();
				MATH230.Save(CS202, CS331, CS382, BIO231, MATH230);
				MATH230.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = MATH230.Menu();
				break;
			}
			case 3:
			{
				system("CLS");
				MATH230.Add_Mid();
				MATH230.Save(CS202, CS331, CS382, BIO231, MATH230);
				MATH230.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = MATH230.Menu();
				break;
			}
			case 4:
			{
				system("CLS");
				MATH230.Add_Final();
				MATH230.Save(CS202, CS331, CS382, BIO231, MATH230);
				MATH230.Report(CS202, CS331, CS382, BIO231, MATH230);
				opt = MATH230.Menu();
				break;
			}
			case 5:
			{
				system("CLS");
				goto check;
				break;
			}
		}

		}

		}

		case 6: {
			string key;
			CS202.Output(CS202, CS331, CS382, BIO231, MATH230);
			cout << endl;
			cout << " Press any key to go back " << endl;
			cin >> key;
			goto back;
			break;
		}

	}

} 

return 0;
}