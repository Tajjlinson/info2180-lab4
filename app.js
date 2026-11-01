document.addEventListener('DOMContentLoaded', () => {
  const form = document.getElementById('search-form');
  const input = document.getElementById('search');
  const result = document.getElementById('result');

  form.addEventListener('submit', (event) => {
    event.preventDefault();

    // Basic client-side sanitizing; the PHP script also sanitizes and escapes
    const query = input.value.trim().replace(/[<>]/g, '');
    const url = 'superheroes.php?query=' + encodeURIComponent(query);

    fetch(url)
      .then((response) => {
        if (!response.ok) {
          throw new Error('Request failed with status ' + response.status);
        }
        return response.text();
      })
      .then((data) => {
        result.innerHTML = data;
      })
      .catch((error) => {
        result.innerHTML = '<p class="not-found">Something went wrong. Try again.</p>';
        console.error(error);
      });
  });
});