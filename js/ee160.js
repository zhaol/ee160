 (function( context, $, undefined ) {
 }( window.Ee160 = window.Ee160 || {}, jQuery ));

$(function() {
  $('.lecture .item').on('click', '.headline', function(){
    $(this).parent('.item').find('.content').slideToggle()});
  $('.lecture .point').on('click', '.topic', function(){
    $(this).parent('.point').find('.details').slideToggle()});
  $('header').on('click', '.expand-all', function(){
    $('.content').show('slow')});
  $('[data-toggle=tooltip]').tooltip();
});
