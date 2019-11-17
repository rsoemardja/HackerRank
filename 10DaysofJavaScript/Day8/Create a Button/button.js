window.onload = () => {
    const button = document.getElementById('btn');

    button.addEventListener('click', (e) => {
        const clicks = parseInt(e.currentTarget.innerText, 0) + 1;
        e.currentTarget.innterText = clicks;
    });
}}
}