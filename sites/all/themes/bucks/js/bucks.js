(function ($) {
    $(document).ready(function () {

        $('.form-search input').attr('placeholder', 'Keyword or Item #');

        /* Select last word to color for product search title */

        $('#block-views-exp-product-display-nodes-page h2.block-title').html(function (index, theText) {
            var text = theText.split(/[\s-]/),
                newText = '<span class="last-word">' + text.pop() + '</span>';
            return text.join(' ').concat(' ' + newText);
        });

        /* Name Default Make Model Year Select Fields */

        $('#views-exposed-form-product-display-nodes-page select > option:first-child').text('- Make -');

        /* Modify Category Menu links to redirect to product_search page */

        var categoryApiUrl = 'http://bucks4x4.com/api/categories';
        if ($('#block-superfish-1').length > 0) {
            $.ajax(categoryApiUrl, {
                success: function (data) {

                    $.each(data, function (k, v) {
                        var returnTermName = v.name,
                            cleanTermName = returnTermName.replace(/[^\w\s]/gi, ''),
                            cleanTermName = cleanTermName.replace(' ', '-'),
                            tid = v.tid;
                        matched = $(".block-superfish a[title='" + returnTermName + "']");
                        matched.attr('href', '/product_search/field_category/' + cleanTermName.toLowerCase() + '-' + tid);
                    });
                },
                error: function () {

                }
            });
        }

        /* Add Additional Images info on product page */
        $('.field-name-field-additional-images .field-label').html('<i class="fa fa-search-plus" aria-hidden="true"></i><span> Additional Images</span>');
        $('.form-type-textfield label').html('Qty:');

        /* Meet Me Mouse Over */
        $(window).bind('load', function () {
            var imageWidth = $('.meet-me-picture img').width(),
                imageHeight = $('.meet-me-picture img').height();
            $('.meet-me-info').css({
                'width': imageWidth,
                'height': imageHeight
            });

            $('.meetme').mouseenter(function () {
                $(this).find('.meet-me-info').addClass('meet-me-up');
            });
            $('.meetme').mouseleave(function () {
                $(this).find('.meet-me-info').removeClass('meet-me-up');
            });


            $(window).resize(function () {
                var imageWidth = $('.meet-me-picture img').width(),
                    imageHeight = $('.meet-me-picture img').height();
                $('.meet-me-info').css({
                    'width': imageWidth,
                    'height': imageHeight
                });

                $('.meetme').mouseenter(function () {
                    $(this).find('.meet-me-info').addClass('meet-me-up');
                });
                $('.meetme').mouseleave(function () {
                    $(this).find('.meet-me-info').removeClass('meet-me-up');
                });
            });
        });

    });
})(jQuery);





