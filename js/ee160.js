 (function( context, $, undefined ) {
 }( window.Ee160 = window.Ee160 || {}, jQuery ));

$(function() {
  $('.lecture .item').on('click', '.headline', function(){
    $(this).parent('.item').find('.content').slideToggle()});
  $('.lecture .point').on('click', '.topic', function(){
    $(this).parent('.point').find('.details').slideToggle()});
  $('.answer.group').on('click', '.button', function(){
    $(this).parent('.group').find('.details').slideToggle()});
  $('header').on('click', '.expand-all', function(){
    $('.content').show('slow')});
  $('[data-toggle=tooltip]').tooltip();
  $('#wall-e').hover(
    function(){$(this).attr('src', 'http://www.warcrafthuntersunion.com/wp-content/uploads/2011/07/robot1.jpg')},
    function(){$(this).attr('src', 'http://i1056.photobucket.com/albums/t361/stevethegoose2/terminator_zps7206cd86.jpg')}
  );
});
