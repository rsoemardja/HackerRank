def select_arr(arr)
  # select and return all odd numbers from the Array variable `arr`
    return arr.select {|a| a % 2 != 0}
end

def reject_arr(arr)
  # reject all elements which are divisible by 3
    arr.reject {|a| a % 3 == 0}
end

def delete_arr(arr)
  # delete all negative elements
    arr.reject {|a| a < 0}
end

def keep_arr(arr)
  # keep all non negative elements ( >= 0)
    arr.select {|a| a >= 0}
end