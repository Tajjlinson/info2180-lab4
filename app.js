document.addEventListener('DOMContentLoaded', () => {
  const form = document.getElementById('search-form');
  const input = document.getElementById('search');
  const result = document.getElementById('result');

  function search(query) {
    // Basic client-side sanitizing; the PHP script also sanitizes and escapes
    const clean = query.trim().replace(/[<>]/g, '');
    const url = 'superheroes.php?query=' + encodeURIComponent(clean);

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
  }

  form.addEventListener('submit', (event) => {
    event.preventDefault();
    search(input.value);
  });

  // Clicking a hero in the full list searches for that hero
  result.addEventListener('click', (event) => {
    const item = event.target.closest('li[data-alias]');
    if (item) {
      input.value = item.dataset.alias;
      search(item.dataset.alias);
    }
  });
});