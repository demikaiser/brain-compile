let numbers = [3, 4, 1, 5, 2];

for (let i = 0; i < numbers.length; i++) {

    // Compare
    let currentIndex = i;
    for (let j = i + 1; j < numbers.length; j++) {
        if (numbers[currentIndex] > numbers[j]) {
            currentIndex = j;
        }
    }

    // Swap
    let tempNumber = numbers[i];
    numbers[i] = numbers[currentIndex];
    numbers[currentIndex] = tempNumber;
}

console.log(numbers);









