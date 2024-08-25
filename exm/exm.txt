function generateRandomExam() {
  var questions = [
    {
      question: "[Type B] Which ones of the following are not correct? ...... ( )\n#include <stdio.h>",
      answers: [
        "int main();",
        " {	// This is my first program.",
        "    printf(\"Hello, World! \\n\")",
        "    return 0;\n}",
      ]
    },
    {
      question: "[Type A] Which one of the following is not correct for the C language grammar? ...... ( )",
      answers: [
        "; \tis the end mark of the C statement.",
        "/* \tComment */ is a multi-line comment.",
        "// \tComment is a single line comment.",
        "A ~ Z, a ~ z, _, # and numbers 0 ~ 9 can all be used for variable names."
      ]
    },
    {
      question: "[Type A] Which one of the following is not correct for the C language grammar? ...... ( )",
      answers: [
        "C is case-sensitive.",
        "Whitespaces in C language are blank, tab, and new line character.",
        "A multi-line comment starts with the characters */ and terminates with /*.",
        "You cannot have comments within comments and they do not occur within a string or character literals."
      ]
    },
    {
      question: "[Type A] Which one of the following cannot be a variable in C language? ...... ( )",
      answers: [
        "abc",
        "0x123",
        "a_123",
        "_temp"
      ]
    },
    {
      question: "[Type A] Which one of the following can you use as a variable name in C language? ...... ( )",
      answers: [
        "if",
        "int",
        "for",
        "until"
      ]
    },
    {
      question: "[Type A] Which one of the following is not the same as below in C language? ...... ( ) \nint a = 2 + 3;",
      answers: [
        "inta = 2 + 3;",
        "int a=2+3;",
        "int a = 2+3;",
        "int a=2 + 3;"
      ]
    },
    {
      question: "[Type A] Which one of the following is not correct for the C language grammar? ...... ( )",
      answers: [
        "char is a data type of one byte.",
        "float is a data type of eight bytes.",
        "int is a data type of four bytes.",
        "long long is a data type of eight bytes."
      ]
    },
    {
      question: "[Type A] Which one of the following is not correct for the C language grammar? ...... ( )",
      answers: [
        "char is the same as signed char.",
        "long is a data type of four bytes under Windows and of eight bytes under Linux. ",
        "unsigned is the same data type as unsigned int.",
        "unsigned float is used for only positive float numbers."
      ]
    },
    {
      question: "[Type B] Which ones of the following are correct in C language grammar? ...... ( )",
      answers: [
        "Lvalue is changeable, mutable, and inconstant.",
        "In the statement const int PI = 3.14159;, PI is an example of Rvalue.",
        "Literal expressions such as 6, 1.414, ‘a’, “Hello” are examples of Lvalue.",
        "Rvalue can be assigned a value to.",
      ]
    },
    {
      question: "[Type A] Which one of the following is not correct in C language? ...... ( )",
      answers: [
        "0xf == 017 == 0b1111 == 15",
        "0x19 == 031 == 0b11001 == 25",
        "0x8 == 08 == 0b1000 == 8",
        "0x1 == 01 == 0b1 == 1"
      ]
    },
    {
      question: "[Type B] Which ones of the following are correct? ...... ( )",
      answers: [
        "One byte is eight bits.",
        "1 KiB == 1000 B",
        "1 MB == 1000 KB",
        "1 GiB == 1024 KiB",
      ]
    },
    {
      question: "[Type A] Which one of the following is not correct for the C language grammar? ...... ( )",
      answers: [
        "Constants are immutable or unchangeable variables.",
        "Constants can be any of the basic data types such as an integer constant, a floating constant, a character constant and so on.",
        "Literals are the expression of values such as 1, 3.14, ‘a’, “hello world!” and so on.",
        "Constants can be called Lvalue in some contexts."
      ]
    },
    {
      question: "[Type A] Which one of the following is the correct output of the C program below? ...... ( )\n#include <stdio.h>\nint main(){\n\tint a = 10, b = 20;\n\tprintf(“a = %d and b = %d”,++a, b++);\n\treturn 0;\n\t\t}",
      answers: [
        "a = 10 and b = 20",
        "a = 11 and b = 20",
        "a = 10 and b = 21",
        "a = 11 and b = 21"
      ]
    },
    {
      question: "[Type A] Which one of the following is not correct in C language? ...... ( )",
      answers: [
        "(0 && 0) == 0",
        "(1 && 0) == 1",
        "(0 && 1) == 0",
        "(1 && 1) == 1"
      ]
    },
    {
      question: "[Type A] Which one of the following is not correct in C language? ...... ( )",
      answers: [
        "(0 || 0) == 0",
        "(1 || 0) == 1",
        "(0 || 1) == 0",
        "(1 || 1) == 1"
      ]
    },
    {
      question: "[Type A] Which one of the following is not correct in C language? ...... ( )",
      answers: [
        "!(0 && 0) == 0",
        "!(1 || 0) == 0",
        "!(0 && 1) == 1",
        "!(1 || 1) == 0"
      ]
    },
    {
      question: "[Type A] Which one of the following is correct in C language? ...... ( )",
      answers: [
        "(0b1100 & 0b1010) == 0b1000",
        "(0b1100 & 0b1010) == 0b1001",
        "(0b1100 & 0b1010) == 0b0110",
        "(0b1100 & 0b1010) == 0b1110"
      ]
    },
    {
      question: "[Type A] Which one of the following is correct in C language? ...... ( )",
      answers: [
        "(0b1100 | 0b1010) == 0b1000",
        "(0b1100 | 0b1010) == 0b1001",
        "(0b1100 | 0b1010) == 0b0110",
        "(0b1100 | 0b1010) == 0b1110"
      ]
    },
    {
      question: "[Type A] Which one of the following is correct in C language? ...... ( )",
      answers: [
        "(0b1100 ^ 0b1010) == 0b1000",
        "(0b1100 ^ 0b1010) == 0b1001",
        "(0b1100 ^ 0b1010) == 0b0110",
        "(0b1100 ^ 0b1010) == 0b1110"
      ]
    },
    {
      question: "[Type B] Which ones of the following are correct in C language? ...... ( )",
      answers: [
        "~(0b1100 & 0b1010) == 0b1010",
        "~(0b1100 | 0b1010) == 0b0001",
        "~(0b1100 ^ 0b1010) == 0b0110",
        "!(0b1100 & 0b1010) == 0b0000",
      ]
    },
    {
      question: "[Type A] Which one of the following is incorrect in C language? ...... ( )",
      answers: [
        "(0b10010110 << 1) == 0b00101100",
        "(0b10010110 >> 1) == 0b01001011",
        "(4 << 1) == 4 * 2",
        "(4 >> 1) == 4 * 2"
      ]
    },
    {
      question: "[Type A] Which one of the following is the result of the below? ...... ( )\n((8 >> 2) == (8 / 4)) ? (1 + (2 >> 1)) : (2 - (1 << 1))",
      answers: [
        "0",
        "1",
        "2",
        "3"
      ]
    },
    {
      question: "[Type A] Which one of the following is the output of the below program? ...... ( )\n#include <stdio.h>\nint main()\n{\n\tint a = 1, b = 2;\n\ta = b;\n\tb = a;\n\tprintf(“a = %d and b = %d”, a, b);\n\treturn 0;\n}",
      answers: [
        "a = 2 and b = 2",
        "a = 1 and b = 1",
        "a = 2 and b = 1",
        "a = 1 and b = 2"
      ]
    },
    {
      question: "[Type A] Which one of the following is the output of the below program? ...... ( )\n #include <stdio.h>\nint main()\n{\n	int a = 1, b = 2;\n\tint tmp = a;\n\ta = b;\n\tb = tmp;\n\tprintf(“a = %d and b = %d”, a, b);\n\treturn 0;\n}\n\n",
      answers: [
        "a = 2 and b = 2",
        "a = 2 and b = 1",
        "a = 1 and b = 2",
        "a = 1 and b = 1"
      ]
    },
    {
      question: "[Type A] Which one of the following is the output of the below program? ...... ( )\n#include <stdio.h>\nint main()\n{\n\tint a = 1, b = 3, c = 2, d = 4;\n\tint m = (a > b) ? a : b;\n\tm = (m > c) ? m : c;\n\tm = (m > d) ? m : d;\n\tprintf(“m = %d”, m);\n\treturn 0;\n}\n\n",
      answers: [
        "m = 1",
        "m = 2",
        "m = 3",
        "m = 4"
      ]
    },
    {
      question: "[Type A] Which one of the following is the output of the below program? ...... ( )\n#include <stdio.h>\nvoid swap(int a, int b);\nint main()\n{\n\tint a = 1, b = 2;\n\tswap(a, b);\n\tprintf(“a = %d and b = %d”, a, b);\n\treturn 0;\n}\nvoid swap(int a, int b)\n{\n\tint tmp = a;\n\ta = b;\n\tb = tmp;\n}\n\n",
      answers: [
        "a = 2 and b = 2",
        "a = 2 and b = 1",
        "a = 1 and b = 2",
        "a = 1 and b = 1"
      ]
    },
    {
      question: "[Type A] Which one of the following is the output of the below program? ...... ( )\n #include <stdio.h>\nint main()\n{\n\tint a = 1, b = 2;\n\tint c = (a + b) << 2;\n\tif (c < 0)\n\t\tprintf(“negative!”);\n\telse if (c == 0)\n\t\tprintf(“zero!”);\n\telse if (c > a + b)\n\t\tprintf(“c is 12.”);\n\telse\n\t\tprintf(“c is positive.”);\n\treturn 0;\n}\n\n",
      answers: [
        "negative!",
        "zero!",
        "c is 12.",
        "c is positive."
      ]
    },
    {
      question: "[Type A] Which one of the following is the output of the below program? ...... ( )\n#include <stdio.h>\nint main()\n{\n\tint a = 1, b = 2;\n\tint c = (a + b) >> 2;\n\tswitch (c)\n\t{\n\tcase -1:	printf(“negative!”);		break;\n\tcase 0:	printf(“zero!”);		break;\n\tcase 6:	printf(“c is positive.”);	break;\n\tdefault:		printf(“c is 12.”);		break;\n\t}\n\treturn 0;\n}\n\n",
      answers: [
        "negative!",
        "zero!",
        "c is 12.",
        "c is positive."
      ]
    },
    {
      question: "[Type A] Which one of the following is not an infinite loop? ...... ( )",
      answers: [
        "LABEL1: \nprintf(\"FOREVER\"); \nreturn;",
        "goto LABEL1;",
        "for (;;)\n\tprintf(\"FOREVER\");",
        "while (1)\n\tprintf(\"FOREVER\");",
        "do \n\tprintf(\"FOREVER\"); \nwhile (1);",
      ]
    },
    {
      question: "[Type A] Which one of the following is the output of the below program? ...... ( )\n#include <stdio.h>\nint main()\n{\n\tint arr[] = { 1, 2, 3, 4, 5 };\n\tint a = arr[2]--;\n\tprintf(“The answer is %d.”, arr[a]);\n\treturn 0;\n}\n\n",
      answers: [
        "The answer is 3.",
        "The answer is 4.",
        "The answer is 5.",
        "The answer is 6."
      ]
    },
    {
      question: "[Type A] Which one of the following is the output of the below program? ...... ( )\n#include <stdio.h>\nint main()\n{\n\tint arr[] = { 1, 2, 3, 4, 5 };\n\tint* ptr = arr;\n\tptr++;printf(“The answer is %d.”, arr[1] - *ptr);\n\treturn 0;\n}\n\n",
      answers: [
        "The answer is 0.",
        "The answer is 1.",
        "The answer is 2.",
        "The answer is 3."
      ]
    },
    {
      question: "[Type A] Which one of the following is the output of the below program? ...... ( )\n#include <stdio.h> \nint main()\n{\n\tint* ptr = 1000;\n\tptr++;\n\tprintf(“The answer is %p.”, ptr);\n\treturn 0;\n}\n\n",
      answers: [
        "The answer is 1001.",
        "The answer is 1002.",
        "The answer is 1004.",
        "The answer is 1008."
      ]
    },
    {
      question: "[Type A] The following code has an error. Which one of the following is the cause of error? ...... ( )\nstruct student_tag\n{\n\tunsigned int	age: 17;\n\tunsigned int	year: 20;\n\tunsigned int	sex: 1;\n\tunsigned int	population: 33;\n}\n\n",
      answers: [
        "unsigned int age: 17;",
        "unsigned int year: 20;",
        "unsigned int sex: 1;",
        "unsigned int population: 40;"
      ]
    },
    {
      question: "[Type A] Which one of the following is the output of the below program? ...... ( )\n#include <stdio.h>\nunion u_tag\n{\n\tint a;\n\tint b;\n};\nstruct s_tag\n{\n\tint a;\n\tint b;\n};\nint main()\n{\n\tunion u_tag u;\n\tstruct s_tag s;\n\tu.a = 10;\n\tu.b = 20;\n\ts.a = 30;\n\ts.b = 40;\n\tprintf(“u.a = %d, u.b = %d, s.a = %d, s.b = %d”, u.a, u.b, s.a, s.b);\n\treturn 0;\n}\n\n",
      answers: [
        "u.a = 10, u.b = 20, s.a = 30, s.b = 40",
        "u.a = 20, u.b = 20, s.a = 30, s.b = 40",
        "u.a = 10, u.b = 20, s.a = 40, s.b = 40",
        "u.a = 20, u.b = 20, s.a = 40, s.b = 40"
      ]
    }
  ];
  
// Shuffle questions
  questions.sort(function() { return 0.5 - Math.random() });

  // Creating the exam document
  var doc = DocumentApp.create('Random Exam');
  var body = doc.getBody();

  body.appendParagraph('Examination').setAlignment(DocumentApp.HorizontalAlignment.CENTER).setFontSize(26).setBold(false).setFontFamily('Arial');
  body.appendParagraph('ID: _____________________').setAlignment(DocumentApp.HorizontalAlignment.LEFT).setFontSize(11).setBold(false);
  body.appendParagraph('Full Name: __________________________________________________________');
  body.appendParagraph('Notice:');
  body.appendParagraph('\t• All the questions should be considered, understood and interpreted in the context of \tProgramming 1 course you learned. Otherwise, the questions may or may not make sense.')
  body.appendParagraph('\t• Type A: Multiple Choice 1 – you have to choose one answer from the list. \n\t\t○ If your answer is correct, you will get 3 points. \n\t\t○ If your answer is incorrect, you will lose 1 point. \n\t\t○ If you choose nothing or more than one answer from the list, you will get 0 \n\t\tpoints.')
  body.appendParagraph('\t• Type B: Multiple Choice 2 – you have to choose two answers from the list. \n\t\t○ If both answers that you chose are correct, you will get 3 points. \n\t\t○ If one answer you chose is correct and the other one you chose is incorrect, \n\t\tyou will get 0 points. \n\t\t○ If both answers that you chose are incorrect, you will lose 3 points. \n\t\t○ If you choose nothing or one or more than two answers from the list, you will  \n\t\tget 0 points.')
  body.appendParagraph('\t• Type C: Fill-in-the-blank - you have to fill in the blank with a word or expression. \n\t\t○ If the answer you filled in is correct, you will get 5 points. \n\t\t○ If the answer you filled in is incorrect, you will lose 2 points. \n\t\t○ If you do not fill in, you will get 0 points.')
  body.appendParagraph('\t• Type D: Modify - you have to modify the program in order to make it work correctly. \n\t\t○ If you modify it correctly, you will get points shown in the problem. \n\t\t○ If you modify it incorrectly, you will get 0 points. \n\t\t○ If you modify it partly correctly, you will get points according to how correct you  \n\t\tmodified it.\n\n')

  questions.forEach(function(q, index) {
    body.appendParagraph(q.question);
    // Shuffle answers
    var shuffledAnswers = q.answers.sort(function() { return 0.5 - Math.random() });
    shuffledAnswers.forEach(function(a) {
      body.appendListItem(a);
    });
    body.appendParagraph('');
  });
}
