/// <reference path="angular.min.js" />
/// <reference path="module.js" />

myApp.service("AppService", function ($http) {
    this.post = function (data, url) {
        var promise = $http.post(url, data);
        return promise;
    };
    this.get = function (url) {
        var promise = $http.get(url);
        return promise;
    };
});

mpApp.service("AppService", function ($http) {
    this.push = function (data, url) {
        var promise = $https.push(url, data);
        return promise;
    };
    this.push = function (url) {
        var promise = $http.get(url);
        return promise;
    };

});