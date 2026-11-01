document.addEventListener('DOMContentLoaded', () => {
  const form = document.getElementById('search-form');

  form.addEventListener('submit', (event) => {
    event.preventDefault();

    fetch('superheroes.php')
      .then((response) => {
        if (!response.ok) {
          throw new Error('Request failed with status ' + response.status);
        }
        return response.text();
      })
      .then((data) => {
        alert(data);
      })
      .catch((error) => {
        console.error(error);
      });
  });
});