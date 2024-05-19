/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    if(nums.length==0)
        return init;
        let consti=fn(init,nums[0]);
        for(var i=1;i<nums.length;i++){consti=fn(consti,nums[i]);}
        return consti; };