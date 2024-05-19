/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var filteredarray=[];
    for(var i=0;i<arr.length;i++){
        if(fn(arr[i],i)){filteredarray.push(arr[i]);}
    }
    return filteredarray;
};