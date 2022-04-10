/*
There was a test in your class and you passed it. Congratulations!
But you're an ambitious person. You want to know if you're better than the average student in your class.

You receive an array with your peers' test scores. Now calculate the average and compare your score!

Return True if you're better, else False!
*/

int better_than_average(int class_points[], int class_size, int your_points){ 
 int sum = 0, avg,i;
  for (int i = 0; i < class_size; i++)
    {
    sum += class_points[i];
    avg = sum / class_size;
    }
  if (your_points > avg){
    return 1;
  }
  else{
    return 0;
  }
}
