Yes, there are a lot of css files.

Yes, that’s by intent.

“Why, oh why???” you ask.

Thanks for asking. Here’s why.

First, this is a base theme. Sure, it’s a sub-theme, too. It’s a sub-theme of Bootstrap so that means it modifies Bootstrap to really work with Drupal. 

But, it’s a base theme, first. It’s not meant to be adjusted or changed in anyway. After all, if you change it then you can’t update it from the GIT thingy. 

Second, you might want to override certain parts. For example, you may want to override just the typography or just the secondary menus. This means you can either copy the file you want to tweak to your own css or you can easily find and copy out the specific code you want to override.

So, with this in mind, when you are ready to get your website to it’s production environment, you’ll want to make sure you turn on CSS aggregation. If you don’t, it won’t be aggregated. You know what I mean.

***** Mobile First, Y’all ******

Remember that Bootstrap is a mobile first type of theme. That means that when you create something, the mobile elements are first in line and the media queries are meant to override as the screen gets larger.

So, when you design your sub-themes for Bento, you’ll want to make sure that you check in mobile devices before you adjust media queries. If you need to adjust for mobile, make sure you normal CSS works well on mobile devices (not just in your desktop browser shrunk down) then add necessary media queries using mobile.css for larger displays.

Make sense? 