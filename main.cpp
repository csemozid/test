int main(){
    int choice,tasknumber;
    string description,duedate,taskname;
    while(1){
        cout<<"Enter -1 to terminate the program"<<endl;
        cout<<"Enter 1 to add a new item in the list"<<endl;
        cout<<"Enter 2 to delete a item from the list"<<endl;
        cout<<"Enter 3 to see the Remaining item in the list"<<endl;
        cin>>choice;
        if(choice==-1) break;
        if(choice==1){
            getchar();
            cin>>taskname;
            cin>>description;
            cin>>duedate;
            add(taskname,description,duedate);
        }
        else if(choice==2){
            cout<<"Enter tasknumber that you want to delete\n";
            cin>>tasknumber;
            deletetodo(tasknumber);
        }
        else if(choice==3){
            show();
        }
    }
    return 0;
}
