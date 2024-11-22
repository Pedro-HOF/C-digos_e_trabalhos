function pyFunction() {
    document.getElementById('demo').style.fontSize ='54px'
    document.getElementById('demo1').style.fontSize ='35px'
}
function nyFunction() {
    document.getElementById('demo').style.fontSize ='32px'
    document.getElementById('demo1').style.fontSize ='16px'
}
$(document).ready(function() {
    $('#name').keyup(function() {
        $(this).attr('size', $(this).val().length)
    });
});