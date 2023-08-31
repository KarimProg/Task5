#ifndef headers_h
#define headers_h

/* Function Declarations */
/**
 * @brief allows user to add a task
 */
void addTask();
/**
 * @brief allows user to view tasks
 */
void viewTask();
/**
 * @brief allows user to remove a task
 */
void removeTask();
/**
 * @brief extends array size once it reaches full capacity
 */
void extendSize();
/**
 * @brief allows user to mark completion/incompletion of a task
 */
void completeTask();
/**
 * @brief allows user to view tasks in a table format
 */
void viewTable();



struct job {
  int id;
  char description[101];
  int complete;
};
extern int size;
extern struct job task[10];


extern int last;

#endif
