:root {
  --bg: #0b1020;
  --panel: #151b33;
  --panel-2: #1c2445;
  --text: #e8ebf7;
  --muted: #9aa3c7;
  --red: #e62429;
  --red-dark: #b81d22;
  --blue: #2f6bff;
  --gold: #ffc83d;
  --radius: 14px;
}

* {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}

body {
  font-family: "Roboto", Arial, sans-serif;
  background:
    radial-gradient(circle at 15% 0%, rgba(230, 36, 41, 0.25), transparent 40%),
    radial-gradient(circle at 85% 10%, rgba(47, 107, 255, 0.25), transparent 45%),
    var(--bg);
  color: var(--text);
  min-height: 100vh;
}

/* ---------- Header ---------- */
header {
  background: linear-gradient(120deg, var(--red) 0%, #8a1538 45%, var(--blue) 100%);
  padding: 2.5rem 1rem;
  text-align: center;
  box-shadow: 0 6px 30px rgba(0, 0, 0, 0.45);
}

header h1 {
  font-family: "Roboto Condensed", Arial, sans-serif;
  font-weight: 700;
  text-transform: uppercase;
  color: #fff;
  font-size: clamp(1.6rem, 4vw, 2.6rem);
  letter-spacing: 2px;
  text-shadow: 0 3px 12px rgba(0, 0, 0, 0.4);
}

/* ---------- Layout ---------- */
main {
  max-width: 820px;
  margin: 0 auto;
  padding: 2rem 1rem 4rem;
}

/* ---------- Search ---------- */
#search-form {
  background: var(--panel);
  padding: 1.5rem;
  border-radius: var(--radius);
  border: 1px solid rgba(255, 255, 255, 0.06);
  box-shadow: 0 10px 30px rgba(0, 0, 0, 0.3);
}

label {
  display: block;
  font-size: 0.8rem;
  text-transform: uppercase;
  letter-spacing: 1px;
  color: var(--gold);
  margin-bottom: 0.6rem;
}

.search-row {
  display: flex;
  gap: 0.75rem;
}

#search {
  flex: 1;
  padding: 0.85rem 1rem;
  font-size: 1rem;
  color: var(--text);
  background: var(--panel-2);
  border: 2px solid transparent;
  border-radius: 10px;
  transition: border-color 0.2s, box-shadow 0.2s;
}

#search::placeholder {
  color: var(--muted);
}

#search:focus {
  outline: none;
  border-color: var(--blue);
  box-shadow: 0 0 0 4px rgba(47, 107, 255, 0.25);
}

button {
  padding: 0.85rem 1.6rem;
  font-family: "Roboto Condensed", Arial, sans-serif;
  font-size: 1rem;
  font-weight: 700;
  text-transform: uppercase;
  letter-spacing: 1px;
  color: #fff;
  background: linear-gradient(135deg, var(--red), var(--red-dark));
  border: none;
  border-radius: 10px;
  cursor: pointer;
  box-shadow: 0 6px 18px rgba(230, 36, 41, 0.4);
  transition: transform 0.15s, box-shadow 0.15s;
}

button:hover {
  transform: translateY(-2px);
  box-shadow: 0 10px 24px rgba(230, 36, 41, 0.55);
}

button:active {
  transform: translateY(0);
}

/* ---------- Result section ---------- */
section {
  margin-top: 2.5rem;
}

h2 {
  font-family: "Roboto Condensed", Arial, sans-serif;
  text-transform: uppercase;
  letter-spacing: 2px;
  font-size: 1.4rem;
  color: #fff;
  padding-bottom: 0.75rem;
  margin-bottom: 1.5rem;
  border-bottom: 3px solid;
  border-image: linear-gradient(90deg, var(--red), var(--gold), var(--blue)) 1;
}

/* Full list shown as clickable chips */
.hero-list {
  list-style: none;
  display: flex;
  flex-wrap: wrap;
  gap: 0.6rem;
  animation: pop-in 0.35s ease-out;
}

.hero-list li {
  padding: 0.55rem 1rem;
  background: var(--panel-2);
  border: 1px solid rgba(255, 255, 255, 0.08);
  border-radius: 999px;
  font-size: 0.9rem;
  cursor: pointer;
  transition: background 0.2s, transform 0.15s, border-color 0.2s;
}

.hero-list li:hover {
  background: var(--blue);
  border-color: var(--blue);
  transform: translateY(-2px);
}

/* Single hero card */
.hero-card {
  display: flex;
  gap: 1.5rem;
  align-items: center;
  background: linear-gradient(145deg, var(--panel), var(--panel-2));
  border-radius: var(--radius);
  padding: 1.5rem;
  border: 1px solid rgba(255, 255, 255, 0.08);
  box-shadow: 0 15px 40px rgba(0, 0, 0, 0.45);
  animation: pop-in 0.4s cubic-bezier(0.2, 0.9, 0.3, 1.3);
}

.hero-photo {
  flex-shrink: 0;
  width: 160px;
  height: 160px;
  border-radius: 50%;
  object-fit: cover;
  border: 4px solid var(--gold);
  box-shadow: 0 0 0 6px rgba(255, 200, 61, 0.15), 0 10px 25px rgba(0, 0, 0, 0.5);
}

.hero-initials {
  display: flex;
  align-items: center;
  justify-content: center;
  font-family: "Roboto Condensed", Arial, sans-serif;
  font-size: 3rem;
  font-weight: 700;
  color: #fff;
  background: linear-gradient(135deg, var(--red), var(--blue));
}

.hero-info h3 {
  font-family: "Roboto Condensed", Arial, sans-serif;
  text-transform: uppercase;
  font-size: 1.8rem;
  letter-spacing: 1px;
  color: #fff;
}

.hero-info h4 {
  font-family: "Roboto Condensed", Arial, sans-serif;
  text-transform: uppercase;
  font-size: 0.9rem;
  letter-spacing: 1px;
  color: var(--gold);
  margin: 0.25rem 0 0.9rem;
}

.hero-info p {
  line-height: 1.65;
  color: var(--muted);
}

/* Not found */
.not-found {
  display: inline-block;
  padding: 0.8rem 1.2rem;
  background: rgba(230, 36, 41, 0.12);
  border: 1px solid rgba(230, 36, 41, 0.5);
  border-radius: 10px;
  color: #ff6b6f;
  font-weight: 700;
  text-transform: uppercase;
  letter-spacing: 1px;
  font-size: 0.85rem;
  animation: shake 0.4s;
}

/* ---------- Animations ---------- */
@keyframes pop-in {
  from {
    opacity: 0;
    transform: scale(0.92) translateY(10px);
  }
  to {
    opacity: 1;
    transform: scale(1) translateY(0);
  }
}

@keyframes shake {
  0%, 100% { transform: translateX(0); }
  25% { transform: translateX(-6px); }
  75% { transform: translateX(6px); }
}

/* ---------- Mobile ---------- */
@media (max-width: 600px) {
  .search-row {
    flex-direction: column;
  }

  .hero-card {
    flex-direction: column;
    text-align: center;
  }

  .hero-photo {
    width: 130px;
    height: 130px;
  }
}