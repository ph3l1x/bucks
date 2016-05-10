(function ($) {
    $(document).ready(function () {

        $('.form-search input').attr('placeholder', 'Keyword or Item #');

        /* Select last word to color for product search title */

        $('#block-views-exp-product-display-nodes-page h2.block-title').html(function(index, theText) {
            var text = theText.split(/[\s-]/),
                newText = '<span class="last-word">' + text.pop() + '</span>';
            return text.join(' ').concat(' ' + newText);
        });

        /* Name Default Make Model Year Select Fields */

        $('#views-exposed-form-product-display-nodes-page select > option:first-child').text('- Make -');

        /* Modify Category Menu links to redirect to product_search page */

        var categoryApiUrl = 'http://bucks.mindimage.net/api/categories';
        if($('#block-superfish-1').length > 0) {
            $.ajax(categoryApiUrl, {
                success: function (data) {

                    $.each(data, function(k, v) {
                        var returnTermName = v.name,
                            cleanTermName = returnTermName.replace(/[^\w\s]/gi, ''),
                            cleanTermName = cleanTermName.replace(' ', '-'),
                            tid = v.tid;
                            matched = $(".block-superfish a[title='" + returnTermName + "']");
                        matched.attr('href', '/product_search/field_category/' + cleanTermName.toLowerCase() + '-' + tid);
                      console.log(matched);
                        // if(matched == returnTermName) {
                        //     console.log("THIS: ", matched);
                        //     $(this).attr('href', 'xxxx' + returnTermName);
                        //     console.log('MATCHED: ' + returnTermName);
                        // }

                    });
//                     console.log(data);
//                     $('.block-superfish').find('a').each(function() {
//                         console.log("XXX");
//                         var linkTermName = $(this).attr('title');
//                             //returnTermName = data->name,
//                            // returnTID = data->tid;
//
// console.log(data);
//                        // console.log(returnTID);
//                        // console.log(linkTermName);

 //                   })
                },
                error: function () {

                }
            });
        }
    });
})(jQuery);





