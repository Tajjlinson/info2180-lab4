* {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}

body {
  font-family: "Roboto", Arial, sans-serif;
  background: #f0f0f0;
  color: #333;
}

header {
  background: #4f8ab8;
  padding: 1.5rem 1rem;
  text-align: center;
}

header h1 {
  font-family: "Roboto Condensed", Arial, sans-serif;
  font-weight: 700;
  text-transform: uppercase;
  color: #fff;
  font-size: 2rem;
  letter-spacing: 0.5px;
}

main {
  max-width: 760px;
  margin: 0 auto;
  padding: 1.5rem 1rem 3rem;
}

label {
  display: block;
  font-size: 0.85rem;
  margin-bottom: 0.5rem;
}

.search-row {
  display: flex;
  gap: 0.75rem;
}

#search {
  flex: 1;
  padding: 0.7rem 0.9rem;
  font-size: 0.95rem;
  border: 1px solid #ddd;
  border-radius: 3px;
  background: #fff;
}

#search:focus {
  outline: none;
  border-color: #4f8ab8;
}

button {
  padding: 0.7rem 1.4rem;
  font-size: 0.9rem;
  font-weight: 500;
  color: #fff;
  background: #c62828;
  border: none;
  border-radius: 3px;
  cursor: pointer;
}

button:hover {
  background: #a51f1f;
}

section {
  margin-top: 2rem;
}

h2 {
  font-family: "Roboto Condensed", Arial, sans-serif;
  text-transform: uppercase;
  color: #1c2b4a;
  font-size: 1.5rem;
  padding-bottom: 1rem;
  border-bottom: 1px solid #ddd;
  margin-bottom: 1.25rem;
}

#result ul {
  padding-left: 1.5rem;
  line-height: 1.6;
}

#result h3 {
  font-family: "Roboto Condensed", Arial, sans-serif;
  text-transform: uppercase;
  color: #1c2b4a;
  font-size: 1.3rem;
}

#result h4 {
  font-family: "Roboto Condensed", Arial, sans-serif;
  text-transform: uppercase;
  font-size: 0.9rem;
  margin-bottom: 1rem;
}

#result p {
  line-height: 1.5;
}

#result .not-found {
  color: #c62828;
  font-weight: 700;
  text-transform: uppercase;
  font-size: 0.85rem;
}

@media (max-width: 500px) {
  .search-row {
    flex-direction: column;
  }
}