// See LICENSE for license details.

#ifndef __DATASET_H
#define __DATASET_H

#define DATA_SIZE 1000 

typedef double data_t;

static data_t input1_data[DATA_SIZE] = 
{
  0.00, 15.00, 10.00, 3.00, 14.00, 6.00, 2.00, 18.00, 11.00, 15.00, 11.00, 0.00, 17.00, 16.00, 7.00, 13.00, 18.00, 2.00, 2.00, 5.00, 
  8.00, 5.00, 12.00, 14.00, 6.00, 12.00, 16.00, 7.00, 9.00, 17.00, 10.00, 10.00, 3.00, 5.00, 14.00, 11.00, 9.00, 12.00, 3.00, 1.00, 
  5.00, 4.00, 6.00, 17.00, 17.00, 4.00, 17.00, 15.00, 17.00, 18.00, 3.00, 18.00, 10.00, 6.00, 12.00, 12.00, 3.00, 2.00, 16.00, 1.00, 
  5.00, 6.00, 2.00, 17.00, 16.00, 5.00, 10.00, 18.00, 14.00, 4.00, 9.00, 9.00, 7.00, 4.00, 8.00, 13.00, 12.00, 6.00, 4.00, 17.00, 
  5.00, 2.00, 11.00, 11.00, 7.00, 6.00, 8.00, 5.00, 6.00, 6.00, 11.00, 1.00, 18.00, 7.00, 6.00, 9.00, 10.00, 17.00, 14.00, 4.00, 
  14.00, 11.00, 2.00, 0.00, 2.00, 17.00, 17.00, 15.00, 10.00, 8.00, 12.00, 18.00, 5.00, 0.00, 0.00, 1.00, 1.00, 8.00, 11.00, 11.00, 
  7.00, 5.00, 15.00, 18.00, 15.00, 6.00, 8.00, 9.00, 18.00, 6.00, 15.00, 16.00, 10.00, 18.00, 13.00, 6.00, 10.00, 16.00, 0.00, 10.00, 
  12.00, 8.00, 8.00, 3.00, 0.00, 1.00, 4.00, 0.00, 8.00, 15.00, 16.00, 9.00, 7.00, 7.00, 10.00, 9.00, 16.00, 12.00, 5.00, 5.00, 
  9.00, 5.00, 17.00, 4.00, 13.00, 13.00, 4.00, 14.00, 10.00, 5.00, 10.00, 10.00, 6.00, 18.00, 5.00, 15.00, 5.00, 15.00, 13.00, 18.00, 
  6.00, 13.00, 5.00, 18.00, 12.00, 14.00, 1.00, 7.00, 2.00, 1.00, 7.00, 12.00, 15.00, 15.00, 6.00, 2.00, 1.00, 2.00, 18.00, 6.00, 
  10.00, 14.00, 9.00, 15.00, 11.00, 0.00, 3.00, 1.00, 2.00, 2.00, 14.00, 7.00, 18.00, 0.00, 2.00, 2.00, 16.00, 8.00, 4.00, 5.00, 
  7.00, 11.00, 7.00, 10.00, 14.00, 10.00, 3.00, 0.00, 13.00, 9.00, 14.00, 0.00, 14.00, 1.00, 3.00, 16.00, 2.00, 14.00, 6.00, 17.00, 
  17.00, 6.00, 9.00, 8.00, 9.00, 12.00, 5.00, 14.00, 2.00, 16.00, 17.00, 5.00, 4.00, 0.00, 14.00, 10.00, 6.00, 15.00, 15.00, 14.00, 
  5.00, 1.00, 8.00, 8.00, 13.00, 8.00, 0.00, 4.00, 7.00, 9.00, 13.00, 16.00, 9.00, 14.00, 9.00, 13.00, 0.00, 7.00, 16.00, 17.00, 
  18.00, 10.00, 13.00, 8.00, 4.00, 9.00, 13.00, 0.00, 6.00, 4.00, 6.00, 4.00, 10.00, 14.00, 14.00, 9.00, 15.00, 15.00, 3.00, 3.00, 
  12.00, 0.00, 3.00, 2.00, 16.00, 1.00, 7.00, 2.00, 16.00, 2.00, 2.00, 0.00, 14.00, 3.00, 3.00, 10.00, 4.00, 10.00, 3.00, 4.00, 
  13.00, 14.00, 13.00, 0.00, 1.00, 15.00, 16.00, 9.00, 7.00, 9.00, 0.00, 11.00, 1.00, 1.00, 15.00, 17.00, 12.00, 16.00, 15.00, 4.00, 
  8.00, 2.00, 10.00, 10.00, 0.00, 18.00, 17.00, 7.00, 7.00, 2.00, 10.00, 17.00, 9.00, 7.00, 5.00, 3.00, 8.00, 11.00, 6.00, 9.00, 
  13.00, 0.00, 3.00, 5.00, 2.00, 5.00, 7.00, 4.00, 9.00, 2.00, 13.00, 17.00, 14.00, 12.00, 1.00, 3.00, 7.00, 17.00, 0.00, 14.00, 
  16.00, 2.00, 2.00, 1.00, 2.00, 15.00, 16.00, 8.00, 2.00, 4.00, 15.00, 15.00, 10.00, 6.00, 11.00, 9.00, 15.00, 17.00, 3.00, 8.00, 
  15.00, 3.00, 10.00, 15.00, 8.00, 14.00, 16.00, 15.00, 15.00, 14.00, 1.00, 7.00, 4.00, 18.00, 2.00, 13.00, 11.00, 15.00, 7.00, 10.00, 
  13.00, 10.00, 7.00, 14.00, 18.00, 4.00, 18.00, 4.00, 3.00, 9.00, 1.00, 13.00, 15.00, 2.00, 5.00, 15.00, 12.00, 10.00, 2.00, 0.00, 
  10.00, 15.00, 0.00, 11.00, 14.00, 11.00, 14.00, 9.00, 1.00, 18.00, 14.00, 18.00, 15.00, 5.00, 1.00, 15.00, 18.00, 14.00, 3.00, 15.00, 
  11.00, 2.00, 15.00, 0.00, 13.00, 1.00, 4.00, 14.00, 14.00, 5.00, 2.00, 13.00, 17.00, 8.00, 7.00, 6.00, 5.00, 10.00, 14.00, 14.00, 
  17.00, 0.00, 0.00, 17.00, 18.00, 15.00, 10.00, 16.00, 18.00, 5.00, 9.00, 10.00, 18.00, 7.00, 11.00, 5.00, 4.00, 16.00, 2.00, 8.00, 
  13.00, 1.00, 12.00, 3.00, 4.00, 6.00, 15.00, 12.00, 0.00, 6.00, 18.00, 12.00, 14.00, 18.00, 3.00, 2.00, 3.00, 5.00, 3.00, 14.00, 
  18.00, 12.00, 10.00, 11.00, 8.00, 4.00, 10.00, 10.00, 9.00, 18.00, 14.00, 3.00, 7.00, 17.00, 12.00, 0.00, 10.00, 9.00, 17.00, 3.00, 
  0.00, 4.00, 6.00, 16.00, 14.00, 12.00, 13.00, 13.00, 18.00, 7.00, 0.00, 1.00, 9.00, 7.00, 12.00, 6.00, 18.00, 8.00, 9.00, 13.00, 
  13.00, 17.00, 10.00, 16.00, 1.00, 10.00, 17.00, 16.00, 2.00, 18.00, 4.00, 2.00, 6.00, 1.00, 1.00, 1.00, 8.00, 14.00, 6.00, 6.00, 
  13.00, 14.00, 13.00, 6.00, 5.00, 10.00, 11.00, 11.00, 16.00, 1.00, 5.00, 9.00, 13.00, 8.00, 10.00, 2.00, 12.00, 15.00, 5.00, 14.00, 
  3.00, 7.00, 9.00, 18.00, 2.00, 11.00, 16.00, 4.00, 5.00, 10.00, 17.00, 10.00, 3.00, 4.00, 14.00, 18.00, 13.00, 6.00, 8.00, 11.00, 
  14.00, 3.00, 5.00, 6.00, 6.00, 5.00, 13.00, 0.00, 9.00, 9.00, 1.00, 7.00, 5.00, 5.00, 1.00, 6.00, 18.00, 11.00, 17.00, 7.00, 
  1.00, 10.00, 5.00, 12.00, 6.00, 16.00, 16.00, 5.00, 1.00, 10.00, 10.00, 15.00, 7.00, 18.00, 8.00, 17.00, 3.00, 5.00, 3.00, 14.00, 
  0.00, 16.00, 12.00, 0.00, 14.00, 17.00, 16.00, 2.00, 18.00, 13.00, 10.00, 13.00, 4.00, 14.00, 2.00, 3.00, 4.00, 8.00, 17.00, 0.00, 
  6.00, 11.00, 5.00, 3.00, 3.00, 2.00, 15.00, 13.00, 10.00, 4.00, 1.00, 11.00, 6.00, 17.00, 1.00, 0.00, 18.00, 3.00, 3.00, 11.00, 
  7.00, 7.00, 11.00, 14.00, 7.00, 16.00, 11.00, 10.00, 8.00, 6.00, 11.00, 5.00, 17.00, 10.00, 7.00, 8.00, 14.00, 2.00, 9.00, 17.00, 
  15.00, 13.00, 10.00, 6.00, 0.00, 15.00, 11.00, 10.00, 11.00, 18.00, 2.00, 5.00, 17.00, 18.00, 11.00, 15.00, 3.00, 17.00, 9.00, 17.00, 
  8.00, 6.00, 2.00, 4.00, 2.00, 11.00, 15.00, 2.00, 18.00, 3.00, 9.00, 7.00, 15.00, 9.00, 14.00, 10.00, 9.00, 6.00, 13.00, 8.00, 
  15.00, 14.00, 0.00, 11.00, 5.00, 2.00, 12.00, 14.00, 10.00, 16.00, 9.00, 7.00, 9.00, 17.00, 4.00, 4.00, 7.00, 8.00, 4.00, 4.00, 
  9.00, 7.00, 3.00, 5.00, 11.00, 11.00, 10.00, 13.00, 3.00, 14.00, 15.00, 8.00, 1.00, 1.00, 3.00, 0.00, 16.00, 9.00, 6.00, 1.00, 
  0.00, 2.00, 0.00, 6.00, 13.00, 12.00, 5.00, 18.00, 1.00, 11.00, 17.00, 11.00, 16.00, 14.00, 14.00, 9.00, 11.00, 9.00, 17.00, 15.00, 
  5.00, 18.00, 2.00, 11.00, 10.00, 16.00, 18.00, 5.00, 11.00, 12.00, 11.00, 18.00, 7.00, 6.00, 8.00, 3.00, 4.00, 3.00, 16.00, 4.00, 
  6.00, 2.00, 15.00, 6.00, 7.00, 16.00, 0.00, 7.00, 11.00, 10.00, 3.00, 0.00, 14.00, 16.00, 15.00, 15.00, 12.00, 7.00, 1.00, 4.00, 
  8.00, 4.00, 12.00, 0.00, 7.00, 8.00, 1.00, 1.00, 14.00, 15.00, 9.00, 8.00, 6.00, 6.00, 4.00, 7.00, 8.00, 13.00, 10.00, 5.00, 
  8.00, 11.00, 2.00, 16.00, 7.00, 17.00, 5.00, 2.00, 17.00, 0.00, 18.00, 6.00, 7.00, 4.00, 4.00, 12.00, 0.00, 18.00, 8.00, 4.00, 
  7.00, 0.00, 11.00, 1.00, 11.00, 17.00, 18.00, 15.00, 8.00, 11.00, 15.00, 9.00, 12.00, 1.00, 5.00, 6.00, 1.00, 18.00, 14.00, 7.00, 
  16.00, 16.00, 10.00, 3.00, 13.00, 0.00, 12.00, 9.00, 18.00, 14.00, 15.00, 4.00, 11.00, 15.00, 15.00, 8.00, 16.00, 11.00, 13.00, 12.00, 
  1.00, 13.00, 14.00, 2.00, 11.00, 0.00, 17.00, 11.00, 12.00, 6.00, 4.00, 4.00, 11.00, 13.00, 10.00, 2.00, 10.00, 14.00, 0.00, 6.00, 
  18.00, 10.00, 7.00, 14.00, 12.00, 9.00, 4.00, 16.00, 17.00, 8.00, 14.00, 9.00, 0.00, 4.00, 15.00, 13.00, 8.00, 13.00, 13.00, 8.00, 
  15.00, 6.00, 11.00, 4.00, 2.00, 6.00, 5.00, 14.00, 5.00, 17.00, 12.00, 11.00, 17.00, 4.00, 13.00, 7.00, 16.00, 12.00, 7.00, 18.00
};

static data_t input2_data[DATA_SIZE] = 
{
  8.00, 6.00, 0.00, 18.00, 6.00, 10.00, 1.00, 2.00, 4.00, 2.00, 4.00, 10.00, 6.00, 11.00, 17.00, 4.00, 0.00, 16.00, 14.00, 12.00, 
  9.00, 8.00, 13.00, 15.00, 18.00, 2.00, 13.00, 10.00, 5.00, 4.00, 12.00, 9.00, 1.00, 13.00, 12.00, 7.00, 10.00, 17.00, 11.00, 10.00, 
  18.00, 15.00, 11.00, 12.00, 7.00, 9.00, 6.00, 5.00, 11.00, 7.00, 10.00, 12.00, 18.00, 18.00, 15.00, 1.00, 3.00, 18.00, 11.00, 16.00, 
  13.00, 18.00, 4.00, 13.00, 8.00, 7.00, 10.00, 13.00, 0.00, 9.00, 1.00, 16.00, 13.00, 7.00, 5.00, 5.00, 11.00, 1.00, 6.00, 10.00, 
  12.00, 3.00, 10.00, 5.00, 15.00, 15.00, 13.00, 14.00, 14.00, 1.00, 18.00, 5.00, 16.00, 14.00, 10.00, 4.00, 8.00, 4.00, 6.00, 6.00, 
  13.00, 14.00, 8.00, 5.00, 14.00, 10.00, 9.00, 10.00, 17.00, 15.00, 6.00, 16.00, 12.00, 9.00, 10.00, 16.00, 16.00, 8.00, 1.00, 12.00, 
  7.00, 0.00, 0.00, 3.00, 5.00, 7.00, 10.00, 3.00, 17.00, 10.00, 18.00, 16.00, 1.00, 11.00, 18.00, 9.00, 2.00, 0.00, 12.00, 6.00, 
  13.00, 1.00, 13.00, 5.00, 7.00, 13.00, 17.00, 9.00, 15.00, 13.00, 5.00, 2.00, 4.00, 4.00, 3.00, 0.00, 9.00, 11.00, 3.00, 12.00, 
  6.00, 11.00, 1.00, 16.00, 12.00, 11.00, 2.00, 2.00, 15.00, 12.00, 8.00, 9.00, 14.00, 2.00, 11.00, 0.00, 0.00, 7.00, 2.00, 13.00, 
  15.00, 18.00, 7.00, 16.00, 16.00, 1.00, 1.00, 12.00, 12.00, 2.00, 2.00, 1.00, 7.00, 4.00, 0.00, 8.00, 18.00, 4.00, 11.00, 6.00, 
  17.00, 13.00, 12.00, 5.00, 16.00, 12.00, 0.00, 9.00, 10.00, 10.00, 18.00, 12.00, 8.00, 7.00, 5.00, 8.00, 16.00, 3.00, 9.00, 18.00, 
  12.00, 13.00, 18.00, 6.00, 8.00, 12.00, 2.00, 12.00, 8.00, 8.00, 9.00, 18.00, 8.00, 0.00, 9.00, 2.00, 6.00, 7.00, 0.00, 3.00, 
  11.00, 2.00, 18.00, 2.00, 16.00, 1.00, 16.00, 11.00, 11.00, 16.00, 16.00, 11.00, 7.00, 4.00, 14.00, 10.00, 5.00, 8.00, 4.00, 14.00, 
  17.00, 13.00, 13.00, 3.00, 1.00, 14.00, 1.00, 7.00, 0.00, 2.00, 7.00, 14.00, 4.00, 9.00, 14.00, 3.00, 9.00, 13.00, 13.00, 3.00, 
  3.00, 17.00, 0.00, 18.00, 4.00, 8.00, 6.00, 9.00, 4.00, 2.00, 0.00, 14.00, 3.00, 3.00, 14.00, 8.00, 6.00, 7.00, 2.00, 12.00, 
  5.00, 14.00, 6.00, 12.00, 2.00, 16.00, 1.00, 15.00, 7.00, 18.00, 0.00, 0.00, 13.00, 13.00, 12.00, 11.00, 16.00, 15.00, 14.00, 8.00, 
  9.00, 10.00, 8.00, 8.00, 13.00, 13.00, 13.00, 10.00, 1.00, 15.00, 4.00, 0.00, 12.00, 1.00, 8.00, 12.00, 1.00, 18.00, 12.00, 18.00, 
  9.00, 1.00, 11.00, 5.00, 13.00, 7.00, 1.00, 13.00, 5.00, 8.00, 17.00, 11.00, 13.00, 15.00, 9.00, 3.00, 17.00, 18.00, 9.00, 3.00, 
  15.00, 11.00, 12.00, 0.00, 2.00, 15.00, 3.00, 0.00, 13.00, 1.00, 14.00, 14.00, 15.00, 8.00, 6.00, 0.00, 0.00, 11.00, 17.00, 0.00, 
  1.00, 8.00, 6.00, 6.00, 10.00, 6.00, 18.00, 12.00, 7.00, 18.00, 4.00, 6.00, 15.00, 18.00, 7.00, 5.00, 8.00, 6.00, 6.00, 7.00, 
  4.00, 4.00, 10.00, 17.00, 12.00, 13.00, 11.00, 15.00, 12.00, 18.00, 7.00, 12.00, 17.00, 10.00, 14.00, 12.00, 2.00, 7.00, 17.00, 3.00, 
  8.00, 6.00, 3.00, 9.00, 3.00, 7.00, 7.00, 15.00, 18.00, 5.00, 13.00, 13.00, 15.00, 10.00, 0.00, 11.00, 10.00, 1.00, 5.00, 16.00, 
  2.00, 7.00, 14.00, 12.00, 7.00, 17.00, 17.00, 11.00, 0.00, 5.00, 16.00, 14.00, 1.00, 9.00, 8.00, 8.00, 3.00, 17.00, 0.00, 8.00, 
  6.00, 5.00, 7.00, 6.00, 17.00, 3.00, 3.00, 8.00, 3.00, 12.00, 17.00, 5.00, 14.00, 3.00, 11.00, 5.00, 17.00, 2.00, 15.00, 1.00, 
  18.00, 11.00, 12.00, 0.00, 0.00, 14.00, 7.00, 17.00, 15.00, 10.00, 18.00, 10.00, 11.00, 7.00, 12.00, 10.00, 17.00, 2.00, 18.00, 9.00, 
  11.00, 4.00, 17.00, 10.00, 15.00, 12.00, 4.00, 1.00, 5.00, 10.00, 4.00, 2.00, 11.00, 3.00, 4.00, 15.00, 16.00, 10.00, 2.00, 2.00, 
  15.00, 16.00, 0.00, 13.00, 16.00, 9.00, 1.00, 7.00, 3.00, 10.00, 7.00, 2.00, 12.00, 8.00, 1.00, 5.00, 0.00, 16.00, 4.00, 14.00, 
  13.00, 16.00, 3.00, 0.00, 10.00, 6.00, 3.00, 9.00, 1.00, 3.00, 0.00, 13.00, 12.00, 17.00, 11.00, 4.00, 15.00, 15.00, 12.00, 4.00, 
  4.00, 2.00, 16.00, 6.00, 11.00, 17.00, 14.00, 7.00, 4.00, 14.00, 8.00, 8.00, 3.00, 18.00, 17.00, 17.00, 12.00, 10.00, 11.00, 1.00, 
  8.00, 13.00, 1.00, 14.00, 0.00, 9.00, 0.00, 7.00, 9.00, 0.00, 7.00, 12.00, 0.00, 18.00, 10.00, 1.00, 5.00, 13.00, 13.00, 2.00, 
  10.00, 4.00, 2.00, 6.00, 0.00, 16.00, 2.00, 15.00, 13.00, 6.00, 8.00, 5.00, 6.00, 15.00, 12.00, 6.00, 6.00, 7.00, 8.00, 1.00, 
  11.00, 9.00, 7.00, 18.00, 14.00, 4.00, 9.00, 6.00, 4.00, 2.00, 10.00, 13.00, 6.00, 17.00, 2.00, 11.00, 7.00, 3.00, 8.00, 9.00, 
  2.00, 6.00, 18.00, 12.00, 18.00, 13.00, 8.00, 1.00, 11.00, 4.00, 13.00, 14.00, 16.00, 8.00, 6.00, 18.00, 14.00, 15.00, 9.00, 11.00, 
  2.00, 13.00, 4.00, 3.00, 3.00, 15.00, 14.00, 3.00, 13.00, 12.00, 14.00, 16.00, 18.00, 12.00, 5.00, 11.00, 2.00, 3.00, 15.00, 1.00, 
  12.00, 1.00, 15.00, 13.00, 12.00, 18.00, 4.00, 17.00, 13.00, 7.00, 11.00, 13.00, 7.00, 10.00, 1.00, 3.00, 18.00, 6.00, 10.00, 3.00, 
  9.00, 16.00, 12.00, 10.00, 6.00, 6.00, 7.00, 16.00, 16.00, 16.00, 17.00, 18.00, 8.00, 18.00, 0.00, 6.00, 17.00, 13.00, 14.00, 8.00, 
  0.00, 7.00, 5.00, 13.00, 8.00, 12.00, 14.00, 9.00, 10.00, 10.00, 9.00, 9.00, 8.00, 6.00, 0.00, 14.00, 16.00, 8.00, 7.00, 16.00, 
  10.00, 3.00, 1.00, 9.00, 11.00, 2.00, 6.00, 18.00, 5.00, 4.00, 2.00, 11.00, 10.00, 17.00, 16.00, 2.00, 12.00, 15.00, 14.00, 6.00, 
  6.00, 17.00, 3.00, 10.00, 9.00, 18.00, 18.00, 6.00, 11.00, 16.00, 18.00, 17.00, 7.00, 14.00, 1.00, 16.00, 7.00, 9.00, 11.00, 12.00, 
  10.00, 6.00, 1.00, 16.00, 9.00, 18.00, 0.00, 9.00, 16.00, 10.00, 14.00, 6.00, 9.00, 14.00, 15.00, 7.00, 12.00, 8.00, 1.00, 1.00, 
  1.00, 17.00, 17.00, 17.00, 18.00, 1.00, 15.00, 18.00, 16.00, 16.00, 11.00, 7.00, 4.00, 15.00, 3.00, 14.00, 13.00, 14.00, 9.00, 2.00, 
  4.00, 8.00, 14.00, 7.00, 0.00, 12.00, 14.00, 15.00, 8.00, 2.00, 11.00, 5.00, 6.00, 16.00, 6.00, 4.00, 16.00, 7.00, 9.00, 5.00, 
  1.00, 0.00, 16.00, 10.00, 9.00, 6.00, 5.00, 8.00, 15.00, 13.00, 7.00, 18.00, 18.00, 8.00, 0.00, 15.00, 4.00, 6.00, 14.00, 3.00, 
  3.00, 2.00, 9.00, 14.00, 18.00, 13.00, 10.00, 15.00, 0.00, 11.00, 16.00, 7.00, 16.00, 18.00, 0.00, 12.00, 6.00, 13.00, 12.00, 12.00, 
  5.00, 3.00, 5.00, 16.00, 13.00, 16.00, 8.00, 5.00, 12.00, 8.00, 8.00, 0.00, 2.00, 9.00, 18.00, 11.00, 8.00, 4.00, 14.00, 6.00, 
  17.00, 2.00, 6.00, 8.00, 11.00, 13.00, 6.00, 18.00, 17.00, 6.00, 8.00, 0.00, 1.00, 14.00, 18.00, 4.00, 0.00, 4.00, 3.00, 3.00, 
  16.00, 8.00, 16.00, 1.00, 2.00, 0.00, 15.00, 14.00, 10.00, 9.00, 15.00, 3.00, 5.00, 18.00, 5.00, 6.00, 7.00, 3.00, 7.00, 2.00, 
  6.00, 12.00, 10.00, 10.00, 18.00, 16.00, 0.00, 9.00, 17.00, 10.00, 9.00, 14.00, 15.00, 5.00, 8.00, 15.00, 3.00, 15.00, 14.00, 11.00, 
  6.00, 6.00, 14.00, 0.00, 14.00, 0.00, 7.00, 12.00, 8.00, 7.00, 1.00, 3.00, 6.00, 10.00, 12.00, 1.00, 16.00, 5.00, 5.00, 6.00, 
  17.00, 15.00, 15.00, 9.00, 4.00, 18.00, 17.00, 13.00, 12.00, 9.00, 7.00, 10.00, 2.00, 5.00, 8.00, 18.00, 1.00, 15.00, 8.00, 0.00
};

static data_t verify_data[DATA_SIZE] = 
{
  8.00, 21.00, 10.00, 21.00, 20.00, 16.00, 3.00, 20.00, 15.00, 17.00, 15.00, 10.00, 23.00, 27.00, 24.00, 17.00, 18.00, 18.00, 16.00, 17.00, 
  17.00, 13.00, 25.00, 29.00, 24.00, 14.00, 29.00, 17.00, 14.00, 21.00, 22.00, 19.00, 4.00, 18.00, 26.00, 18.00, 19.00, 29.00, 14.00, 11.00, 
  23.00, 19.00, 17.00, 29.00, 24.00, 13.00, 23.00, 20.00, 28.00, 25.00, 13.00, 30.00, 28.00, 24.00, 27.00, 13.00, 6.00, 20.00, 27.00, 17.00, 
  18.00, 24.00, 6.00, 30.00, 24.00, 12.00, 20.00, 31.00, 14.00, 13.00, 10.00, 25.00, 20.00, 11.00, 13.00, 18.00, 23.00, 7.00, 10.00, 27.00, 
  17.00, 5.00, 21.00, 16.00, 22.00, 21.00, 21.00, 19.00, 20.00, 7.00, 29.00, 6.00, 34.00, 21.00, 16.00, 13.00, 18.00, 21.00, 20.00, 10.00, 
  27.00, 25.00, 10.00, 5.00, 16.00, 27.00, 26.00, 25.00, 27.00, 23.00, 18.00, 34.00, 17.00, 9.00, 10.00, 17.00, 17.00, 16.00, 12.00, 23.00, 
  14.00, 5.00, 15.00, 21.00, 20.00, 13.00, 18.00, 12.00, 35.00, 16.00, 33.00, 32.00, 11.00, 29.00, 31.00, 15.00, 12.00, 16.00, 12.00, 16.00, 
  25.00, 9.00, 21.00, 8.00, 7.00, 14.00, 21.00, 9.00, 23.00, 28.00, 21.00, 11.00, 11.00, 11.00, 13.00, 9.00, 25.00, 23.00, 8.00, 17.00, 
  15.00, 16.00, 18.00, 20.00, 25.00, 24.00, 6.00, 16.00, 25.00, 17.00, 18.00, 19.00, 20.00, 20.00, 16.00, 15.00, 5.00, 22.00, 15.00, 31.00, 
  21.00, 31.00, 12.00, 34.00, 28.00, 15.00, 2.00, 19.00, 14.00, 3.00, 9.00, 13.00, 22.00, 19.00, 6.00, 10.00, 19.00, 6.00, 29.00, 12.00, 
  27.00, 27.00, 21.00, 20.00, 27.00, 12.00, 3.00, 10.00, 12.00, 12.00, 32.00, 19.00, 26.00, 7.00, 7.00, 10.00, 32.00, 11.00, 13.00, 23.00, 
  19.00, 24.00, 25.00, 16.00, 22.00, 22.00, 5.00, 12.00, 21.00, 17.00, 23.00, 18.00, 22.00, 1.00, 12.00, 18.00, 8.00, 21.00, 6.00, 20.00, 
  28.00, 8.00, 27.00, 10.00, 25.00, 13.00, 21.00, 25.00, 13.00, 32.00, 33.00, 16.00, 11.00, 4.00, 28.00, 20.00, 11.00, 23.00, 19.00, 28.00, 
  22.00, 14.00, 21.00, 11.00, 14.00, 22.00, 1.00, 11.00, 7.00, 11.00, 20.00, 30.00, 13.00, 23.00, 23.00, 16.00, 9.00, 20.00, 29.00, 20.00, 
  21.00, 27.00, 13.00, 26.00, 8.00, 17.00, 19.00, 9.00, 10.00, 6.00, 6.00, 18.00, 13.00, 17.00, 28.00, 17.00, 21.00, 22.00, 5.00, 15.00, 
  17.00, 14.00, 9.00, 14.00, 18.00, 17.00, 8.00, 17.00, 23.00, 20.00, 2.00, 0.00, 27.00, 16.00, 15.00, 21.00, 20.00, 25.00, 17.00, 12.00, 
  22.00, 24.00, 21.00, 8.00, 14.00, 28.00, 29.00, 19.00, 8.00, 24.00, 4.00, 11.00, 13.00, 2.00, 23.00, 29.00, 13.00, 34.00, 27.00, 22.00, 
  17.00, 3.00, 21.00, 15.00, 13.00, 25.00, 18.00, 20.00, 12.00, 10.00, 27.00, 28.00, 22.00, 22.00, 14.00, 6.00, 25.00, 29.00, 15.00, 12.00, 
  28.00, 11.00, 15.00, 5.00, 4.00, 20.00, 10.00, 4.00, 22.00, 3.00, 27.00, 31.00, 29.00, 20.00, 7.00, 3.00, 7.00, 28.00, 17.00, 14.00, 
  17.00, 10.00, 8.00, 7.00, 12.00, 21.00, 34.00, 20.00, 9.00, 22.00, 19.00, 21.00, 25.00, 24.00, 18.00, 14.00, 23.00, 23.00, 9.00, 15.00, 
  19.00, 7.00, 20.00, 32.00, 20.00, 27.00, 27.00, 30.00, 27.00, 32.00, 8.00, 19.00, 21.00, 28.00, 16.00, 25.00, 13.00, 22.00, 24.00, 13.00, 
  21.00, 16.00, 10.00, 23.00, 21.00, 11.00, 25.00, 19.00, 21.00, 14.00, 14.00, 26.00, 30.00, 12.00, 5.00, 26.00, 22.00, 11.00, 7.00, 16.00, 
  12.00, 22.00, 14.00, 23.00, 21.00, 28.00, 31.00, 20.00, 1.00, 23.00, 30.00, 32.00, 16.00, 14.00, 9.00, 23.00, 21.00, 31.00, 3.00, 23.00, 
  17.00, 7.00, 22.00, 6.00, 30.00, 4.00, 7.00, 22.00, 17.00, 17.00, 19.00, 18.00, 31.00, 11.00, 18.00, 11.00, 22.00, 12.00, 29.00, 15.00, 
  35.00, 11.00, 12.00, 17.00, 18.00, 29.00, 17.00, 33.00, 33.00, 15.00, 27.00, 20.00, 29.00, 14.00, 23.00, 15.00, 21.00, 18.00, 20.00, 17.00, 
  24.00, 5.00, 29.00, 13.00, 19.00, 18.00, 19.00, 13.00, 5.00, 16.00, 22.00, 14.00, 25.00, 21.00, 7.00, 17.00, 19.00, 15.00, 5.00, 16.00, 
  33.00, 28.00, 10.00, 24.00, 24.00, 13.00, 11.00, 17.00, 12.00, 28.00, 21.00, 5.00, 19.00, 25.00, 13.00, 5.00, 10.00, 25.00, 21.00, 17.00, 
  13.00, 20.00, 9.00, 16.00, 24.00, 18.00, 16.00, 22.00, 19.00, 10.00, 0.00, 14.00, 21.00, 24.00, 23.00, 10.00, 33.00, 23.00, 21.00, 17.00, 
  17.00, 19.00, 26.00, 22.00, 12.00, 27.00, 31.00, 23.00, 6.00, 32.00, 12.00, 10.00, 9.00, 19.00, 18.00, 18.00, 20.00, 24.00, 17.00, 7.00, 
  21.00, 27.00, 14.00, 20.00, 5.00, 19.00, 11.00, 18.00, 25.00, 1.00, 12.00, 21.00, 13.00, 26.00, 20.00, 3.00, 17.00, 28.00, 18.00, 16.00, 
  13.00, 11.00, 11.00, 24.00, 2.00, 27.00, 18.00, 19.00, 18.00, 16.00, 25.00, 15.00, 9.00, 19.00, 26.00, 24.00, 19.00, 13.00, 16.00, 12.00, 
  25.00, 12.00, 12.00, 24.00, 20.00, 9.00, 22.00, 6.00, 13.00, 11.00, 11.00, 20.00, 11.00, 22.00, 3.00, 17.00, 25.00, 14.00, 25.00, 16.00, 
  3.00, 16.00, 23.00, 24.00, 24.00, 29.00, 24.00, 6.00, 12.00, 14.00, 23.00, 29.00, 23.00, 26.00, 14.00, 35.00, 17.00, 20.00, 12.00, 25.00, 
  2.00, 29.00, 16.00, 3.00, 17.00, 32.00, 30.00, 5.00, 31.00, 25.00, 24.00, 29.00, 22.00, 26.00, 7.00, 14.00, 6.00, 11.00, 32.00, 1.00, 
  18.00, 12.00, 20.00, 16.00, 15.00, 20.00, 19.00, 30.00, 23.00, 11.00, 12.00, 24.00, 13.00, 27.00, 2.00, 3.00, 36.00, 9.00, 13.00, 14.00, 
  16.00, 23.00, 23.00, 24.00, 13.00, 22.00, 18.00, 26.00, 24.00, 22.00, 28.00, 23.00, 25.00, 28.00, 7.00, 14.00, 31.00, 15.00, 23.00, 25.00, 
  15.00, 20.00, 15.00, 19.00, 8.00, 27.00, 25.00, 19.00, 21.00, 28.00, 11.00, 14.00, 25.00, 24.00, 11.00, 29.00, 19.00, 25.00, 16.00, 33.00, 
  18.00, 9.00, 3.00, 13.00, 13.00, 13.00, 21.00, 20.00, 23.00, 7.00, 11.00, 18.00, 25.00, 26.00, 30.00, 12.00, 21.00, 21.00, 27.00, 14.00, 
  21.00, 31.00, 3.00, 21.00, 14.00, 20.00, 30.00, 20.00, 21.00, 32.00, 27.00, 24.00, 16.00, 31.00, 5.00, 20.00, 14.00, 17.00, 15.00, 16.00, 
  19.00, 13.00, 4.00, 21.00, 20.00, 29.00, 10.00, 22.00, 19.00, 24.00, 29.00, 14.00, 10.00, 15.00, 18.00, 7.00, 28.00, 17.00, 7.00, 2.00, 
  1.00, 19.00, 17.00, 23.00, 31.00, 13.00, 20.00, 36.00, 17.00, 27.00, 28.00, 18.00, 20.00, 29.00, 17.00, 23.00, 24.00, 23.00, 26.00, 17.00, 
  9.00, 26.00, 16.00, 18.00, 10.00, 28.00, 32.00, 20.00, 19.00, 14.00, 22.00, 23.00, 13.00, 22.00, 14.00, 7.00, 20.00, 10.00, 25.00, 9.00, 
  7.00, 2.00, 31.00, 16.00, 16.00, 22.00, 5.00, 15.00, 26.00, 23.00, 10.00, 18.00, 32.00, 24.00, 15.00, 30.00, 16.00, 13.00, 15.00, 7.00, 
  11.00, 6.00, 21.00, 14.00, 25.00, 21.00, 11.00, 16.00, 14.00, 26.00, 25.00, 15.00, 22.00, 24.00, 4.00, 19.00, 14.00, 26.00, 22.00, 17.00, 
  13.00, 14.00, 7.00, 32.00, 20.00, 33.00, 13.00, 7.00, 29.00, 8.00, 26.00, 6.00, 9.00, 13.00, 22.00, 23.00, 8.00, 22.00, 22.00, 10.00, 
  24.00, 2.00, 17.00, 9.00, 22.00, 30.00, 24.00, 33.00, 25.00, 17.00, 23.00, 9.00, 13.00, 15.00, 23.00, 10.00, 1.00, 22.00, 17.00, 10.00, 
  32.00, 24.00, 26.00, 4.00, 15.00, 0.00, 27.00, 23.00, 28.00, 23.00, 30.00, 7.00, 16.00, 33.00, 20.00, 14.00, 23.00, 14.00, 20.00, 14.00, 
  7.00, 25.00, 24.00, 12.00, 29.00, 16.00, 17.00, 20.00, 29.00, 16.00, 13.00, 18.00, 26.00, 18.00, 18.00, 17.00, 13.00, 29.00, 14.00, 17.00, 
  24.00, 16.00, 21.00, 14.00, 26.00, 9.00, 11.00, 28.00, 25.00, 15.00, 15.00, 12.00, 6.00, 14.00, 27.00, 14.00, 24.00, 18.00, 18.00, 14.00, 
  32.00, 21.00, 26.00, 13.00, 6.00, 24.00, 22.00, 27.00, 17.00, 26.00, 19.00, 21.00, 19.00, 9.00, 21.00, 25.00, 17.00, 27.00, 15.00, 18.00
};


#endif //__DATASET_H