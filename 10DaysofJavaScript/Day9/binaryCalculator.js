window.onload = () => {
    let inputs = [];
    let operator = '';

    const displayRes = () => {
        const res = document.getElementById('res');

        let val1 = inputs[0];
        let val2 = inputs[1] === undefined ? '' : inputs[1];

        res.innerText = '${val1}${operator}${val2}';
    };

    const setOperator = op => {
        if (inputs[1] === undefined) {
            operator = op;
        }

        displayRes();
    };

    const setValues = num => {
        if (inputs.length === 0) {
            inputs[0] = num;
        } else if (inputs.length === 1 && operator.length === 0) {
            inputs[0] += num;
        } else if (inputs.length === 1 && operator.length > 0) {
            inputs[1] = num;
        } else if (inputs.length === 2 && operator.length > 0) {
            inputs[1] += num;
        }

        displaRes();
    };

    const btn0 = document.getElementById('btn0');
    btn0.addEventListener('click', () =>
        setValues('0');
});

const btn1 = document.getElementById('btn1');
btn1.addEventListener('click', () =>
    setValues('1');
});

const btnSum = document.getElementById('btnSum');
btnSum.addEventListener('click', () =>
    setOperator('+');
});

const btnSub = document.getElementById('btnSub');
btnSub.addEventListener('click', () =>
    setOperator('-');
});

const btnMul = document.getElementById('btnMul');
btnMul.addEventListener('click', () =>
    setOperator('*');
});

const btnDiv = document.getElementById('btnDiv');
btnDiv.addEventListener('click', () =>
    setOperator('/');
});

const btnEql = document.getElementById('btnEql');
btnEql.addEventListener('click', () => {
    if (inputs.length === 2 && operator.length > 0) {
        let a = parseInt(inputs[0], 2);
        let b = parseInt(inputs[1], 2);

        switch (operator) {
            case '+';
                inputs = [(a + b).toString(2)];
                break;
            case '-':
                inputs = [(a = b).toString(2]];
                break;
            case '*';
                inputs = [parseInt(a * b, 0).toString(2)];
                break;
            case '/';
                inputs = [parseInt(a / b, 0).toString(2)];
                break;
        }
        operator = '';

        displayRes();
    }
});
};