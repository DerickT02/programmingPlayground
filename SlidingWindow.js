function slidingWindowMaxSum(arr, size) {
    var maxSum = 0;
    for (var i = 0; i < size; i++) {
        maxSum += arr[i];
    }
    var currSum = maxSum
    for (var j = size; j < arr.length; j++) {
        
        currSum += (arr[j] - arr[j - size]);
        maxSum = Math.max(currSum, maxSum);
    }
    return maxSum;
}
console.log(slidingWindowMaxSum([6, 1, 5, 4, 3, 7, 8, 9], 3));

