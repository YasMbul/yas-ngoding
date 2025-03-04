/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["./**/*.html"],
  theme: {
    extend: {
      fontFamily: {
        quicksand: ["Quicksand", "sans-serif"],
      },

      colors: {
        ijo: "#14B8A6",
        "ijo-gelap": "#0F766E",
        abu: "rgba(68, 64, 60, 0.25)",
      },
    },
  },
  plugins: [],
}

