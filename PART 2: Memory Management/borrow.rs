fn main() {
    let vec = vec![1, 2, 3, 4];
    let sum: i32 = vec.iter().sum();  // Borrowing
    println!("Sum: {}", sum);
    // Memory is automatically freed when 'vec' goes out of scope
}
