function calculateSum(arr) {
    let total = o;  // 'o' is not defined; should be '0'
    for (let num of arr)  // Missing braces for the for-loop block
        total += num;

    return total;
}

let numbers = [1, 2, 3, 4, 5];
let result = calculate Sum(numbers);  // Incorrect function call (extra space)
console.log("Sum in JavaScript:", result);  // Unmatched parenthesis
