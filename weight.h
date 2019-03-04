

bool check_weight();

int avg_weight;
int no_person;
int weight_allowed;


bool check_weight()
{
if((no_person*avg_weight)>weight_allowed)
return false;
else
return true;

}
