/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var returnedarray=[];
    for(var i=0;i<arr.length;i++){
        returnedarray.push(fn(arr[i],i));
    }
    return returnedarray;
};