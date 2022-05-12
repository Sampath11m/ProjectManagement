//include necessory header files.

class ManageProject
{
   private:
   //map with task Id in priority and task name
      typedef std::map<int,string> TOTAL_TASKS_MAP;

       //map with origianal task id and ites dependent task id.
      typedef std::map<int,int> TASKS_ITS_DEPENDENTS_MAP;

       //list of active tasks
      typedef std::list<int> ACTIVE_TASKS_LIST;

       //list of pending tasks
      typedef std::list<int> PENDING_TASKS_LIST;

       //map with date and task Id
      typedef std::map<long,int> TASKS_COMPLETION_DATE_MAP;
   
      TOTAL_TASKS_MAP m_TotalTasks;
      TASKS_ITS_DEPENDENTS_MAP m_tasksAndDependents;
      ACTIVE_TASKS_LIST m_ActiveTasksList;
      PENDING_TASKS_LIST m_PendingTasksList;
      TASKS_COMPLETION_DATE_MAP m_CompletionDateofTasks;

     public:
        //Initialize total tasks ,its dependents, Completion Date of Tasks.
        ManageProject(File *fp)
        {
          // Parse the input file fp and fill TotalTasks map.
          {
            m_TotalTasks.insert(TOTAL_TASKS_MAP::value_type(id,taskname));
          }
          
          // Parse the input file fp and fill TotalTasks map tasks And Dependents
          {
            m_tasksAndDependents.insert(TOTAL_TASKS_MAP::value_type(id,id));
          }
          
          // Parse the input file fp and fill TotalTasks map Completion Date of Tasks
          {
            m_CompletionDateofTasks.insert(TOTAL_TASKS_MAP::value_type(date,id));
          }
        
        }

        //Check the status;
        bool GetTaskStatus(int id);
        //Used to get the chances to finish the functionality.
        bool Cangetbydate(long givenDate);
        //Get last task end date
        long GetlastTaskenddate();
        
 };
 
 //Get last task end date
 long ManageProject::getlastTaskenddate()
 {
    //itere through the m_CompletionDateofTasks map and get the date.
    return the date.
 }
 bool ManageProject::Cangetbydate(long givenDate);
  {
     bool retVal = false;
     date = getlastTaskenddate();
     if(date <= givenDate)
     {
        retVal= true;
     }
     return retVal;
  }
  
  
  int mai()
  {
    //This file will have all the task information with dates and priority to complete
    File *fp ;
    fp = fopen(path to the input file);
      string date;
      long converteddate;
      ManageProject *mp = new ManageProject(fp);
      cout<<"Enter the date format ddmmyyyy"<<endl;
      cin>>date;
      
      // write a code to conver date to long
      converteddate = date;
      
      
     bool isPossible =  mp->Cangetbydate(converteddate);
     if(isPossible)
      cout<"Yes, we can deliver the project by date :"<<date<<endl;
     else
      cout<"No, we can not deliver the project by date :"<<date<<endl;
    
      return 1;
  }
