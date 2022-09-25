#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

#define MAX 100

class car
{
    public:
        std::string brandname, model, dis_apply, y, n;
        int price, year;
        float discount = 0;
    
};

int main()
{
     std::string brandname, model, dis_apply, y, n;
        int price, year;
        float discount = 0;
        
   std::ifstream inputFile("input.txt");
   std::string line;
   std::vector<car> myVec;//create a vector of car objects
   if(inputFile)
   {
       while(std::getline(inputFile, line))
       {
           car carObject;
           std::istringstream ss(line);
           //read the brand name 
           ss >> carObject.brandname;
           
           //read the model 
           ss >> carObject.model;
           
           //read the price
           ss >> carObject.price;
           
           //read the year
           ss >> carObject.year;
           
           //read the discount applicable
           ss >> carObject.dis_apply;   
		   if(dis_apply==n && price<=200000)
    {
    	cout<<" Discount is not applicable";
    	}
    	else
    	{
    	if (price<=400000)
    	{
    		cout<<"Congrats!  You will get 10% discount";
    		discount=400000-(0.1*400000) ;
    		
    		}
    	else if(price>400000 & price<800000) 
    	{
    		cout<<"Congrats!  You will get 20% discount";
    		discount=400000-(0.2*400000) ;
    		}
           else if(price>800000 & price<1500000) 
    	{
    		cout<<"Congrats!  You will get 30% discount";
    		discount=400000-(0.3*400000) ;
    		}
    		else if(price>1500000 & price<2500000) 
    		{
          cout<<"Congrats!  You will get 40% discount";
    	discount=400000-(0.4*400000) ;
    	}
    	  
   }
           
           if(ss)//check if input succeded
           {
               myVec.emplace_back(carObject);//add the carObject into the vector
           }
       }
   }
   else 
   {
       std::cout<<"File cannot be opened"<<std::endl;
   }
   
   //lets print out the elements of the vecotr to confirm that all the students were correctly read 
   for(const car &elem: myVec)
   {
       std::cout << elem.brandname << ": "<<elem.model<<" "<<elem.price<<" "<<elem.year<<" "<<elem.dis_apply<<" "<<discount <<std::endl;
   };
    return 0;
}
