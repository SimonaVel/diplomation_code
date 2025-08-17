document.querySelector('button').addEventListener('click', function() {
    document.querySelector('img').src = 'https://cataas.com/cat?timestamp=' + new Date().getTime();
});