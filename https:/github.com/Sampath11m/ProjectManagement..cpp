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

                                //Initialize total tasks and its dependents.

                                ManageProject(TOTAL_TASKS_MAP inputdata, TASKS_ITS_DEPENDENTS_MAP dependents, TASKS_COMPLETION_DATE_MAP tasksAndDates):m_TotalTasks (inputdata),

                                m_tasksAndDependents(dependents),

                                m_CompletionDateofTasks(tasksAndDates)

                                {

                                }

                                //Check the status;

                                bool GetTaskStatus(int id);

                               

                                void GetlastTaskenddate();

                                 

 };
