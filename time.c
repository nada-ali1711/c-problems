int main(){
struct {
    int hour;
    int minutes;
    int seconds;
    }time;
    int convert (long long split_seconds){
    time.hour = (split_seconds/3600);
	time.minutes = (split_seconds -(3600*time.hour))/60;

	time.seconds = (split_seconds -(3600*time.hour)-(time.minutes*60));

	printf("Hour:Mins:Seconds\n  %d:%d:%d\n",time.hour,time.minutes,time.seconds);

}

    long  long split_seconds;
	printf("\n total seconds: ");
	scanf("%lli", &split_seconds);
	split_seconds=split_seconds%86400;
	convert(split_seconds);
    return 0 ;
}


