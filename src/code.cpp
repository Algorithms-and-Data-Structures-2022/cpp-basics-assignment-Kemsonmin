#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return (left - right) * (left - right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0 || bit_pos < 0) {
      return false;
    } else {
      return ((mask >> bit_pos) == 1);;
    }
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left >= middle and left >= right) {
      return left;
    } else if (middle >= left and middle >= right) {
      return middle;
    }
    return right;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr && right != nullptr) {
      int a, b;
      a = *left;
      b = *right;
      *left = b;
      *right = a;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr == nullptr || length <= 0) {
      return 0;
    }
    else {
      int s = 0;
      for (int i = 0; i < length; i++) {
        s += *(arr + i);
      }
      return s;
    }
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if(arr != nullptr && length > 0) {
      int* max = &arr[0];
      int i = 0;
      while(i < length){
        if(arr[i] > *max){
          max = &arr[i];
        }
        i++;
      }
      return max;
    }
    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if(length > 0) {
      int *arr = new int[length];
      std::fill(arr,arr + length,init_value);
      return arr;
    }
    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in != nullptr and length > 0) {
      int* new_arr = new int[length]{};
      std::copy(arr_in, arr_in + length, new_arr);
      return new_arr;
    }
    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    } else if (length <= 0) {
      os << "Invalid argument: length\n";
    } else if (k <= 0) {
      os << "Invalid argument: k\n";
    } else {
      for (int i = 0; i < length; i++) {
        if (i % k == 0) {
          os << arr[i] << "\t";
        }
      }
    }
  }

}  // namespace assignment
