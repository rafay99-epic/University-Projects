/// <reference path="angular.min.js" />
/// <reference path="module.js" />


myApp.controller("myController", function ($scope, AppService) {
    var result = AppService.get("/api/CarController");
    result.then(function (response) {
        alert(JSON.stringify(response.data));
        $scope.data = response.data;
    },
        function (error) {
            alert("error occured");
        });
	
});