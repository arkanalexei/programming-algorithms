
function createPassword(length) {
    var alpha = "abcdefghijklmnopqrstuvwxyz";
    var caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    var numeric = "0123456789";
    var special = "!$^&*-=+_?";

    var options = [alpha, caps, numeric, special];

    var password = "";
    var passwordArray = Array(length);

    for (i = 0; i < length; i++) {
        var currentOption = options[Math.floor(Math.random() * options.length)];
        var randomChar = currentOption.charAt(Math.floor(Math.random() * currentOption.length));
        password += randomChar;
        passwordArray.push(randomChar);
    }

    checkPassword();

    function checkPassword() {
        var missingValueArray = [];
        var containsAll = true;

        options.forEach(function (e, i, a) {
            var hasValue = false;
            passwordArray.forEach(function (e1, i1, a1) {
                if (e.indexOf(e1) > -1) {
                    hasValue = true;
                }
            });

            if (!hasValue) {
                missingValueArray = a;
                containsAll = false;
            }
        });

        if (!containsAll) {
            passwordArray[Math.floor(Math.random() * passwordArray.length)] = missingValueArray.charAt(Math.floor(Math.random() * missingValueArray.length));
            password = "";
            passwordArray.forEach(function (e, i, a) {
                password += e;
            });
            checkPassword();
        }
    }

    return password;
}
