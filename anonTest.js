const grade = lookupGrade("A");
const grades = ["A", "B", "C"];
const gpa = calculateGpa(grades);
console.log(grade);
console.log(gpa);

function lookupGrade(grade) {
  // converts the letter grade to it's GPA point value and returns it
  let points = 0;
  if (grade === "A") {
    points = 4;
  } else if (grade === "B") {
    points = 3;
  } else if (grade === "C") {
    points = 2;
  } else if (grade === "D") {
    points = 1;
  }
  return points;
}

function calculateGpa(grades) {

  // gets a list of grades passed in

  // convert the letter grades to gpa points
  // this:
  // const gradePoints = grades.map((grade) => lookupGrade(grade));

  // is the same as this:
  // const gradePoints = grades.map(lookupGrade);

  /* is the same as this (if you DON't store the result of map
  into gradePoints)
    for (const grade of grades) {
        lookupGrade(grade);
    }
  */

    // is the same this (if you DO store the result of map
    //into gradePoints)
  let gradePoints = [];
  for (const grade of grades) {
    const gradePoint = lookupGrade(grade);
    gradePoints.push(gradePoint);
  }
  // calculates the GPA
  const gpa =
    gradePoints.reduce((total, num) => total + num) / gradePoints.length;
  // return the GPA
  return gpa.toFixed(2);
}