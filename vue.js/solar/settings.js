window.wallpaperPropertyListener = {
    applyUserProperties: function(properties) {
        if (properties.stars1) {
            var stars1 = properties.stars1.value;
            var star1css = document.getElementById('stars');
            var conString1 = "animStar s linear infinite";
            star1css.style.animation = [conString1.slice(0, 9), stars1, conString1.slice(9)].join('');
        }

        if (properties.stars2) {
            var stars2 = properties.stars2.value;
            var star2css = document.getElementById('stars2');
            var conString2 = "animStar s linear infinite";
            star2css.style.animation = [conString2.slice(0, 9), stars2, conString2.slice(9)].join('');
        }

        if (properties.stars3) {
            var stars3 = properties.stars3.value;
            var star3css = document.getElementById('stars3');
            var conString3 = "animStar s linear infinite";
            star3css.style.animation = [conString3.slice(0, 9), stars3, conString3.slice(9)].join('');
        }
    }
};
