//
//  FKFlickrPeopleGetLimits.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPeopleGetLimitsError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPeopleGetLimitsError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPeopleGetLimitsError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPeopleGetLimitsError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPeopleGetLimitsError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPeopleGetLimitsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPeopleGetLimitsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPeopleGetLimitsError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPeopleGetLimitsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPeopleGetLimitsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPeopleGetLimitsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPeopleGetLimitsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPeopleGetLimitsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPeopleGetLimitsError;

/*

Returns the photo and video limits that apply to the calling user account.

<ul>
<li>photos/@maxdisplaypx: maximum size in pixels for photos displayed on the site (0 means that no limit is in place). No limit is placed on the dimension of photos uploaded.</li>
<li>photos/@maxupload: maximum file size in bytes for photo uploads.</li>
<li>videos/@maxduration: maximum duration in seconds of a video.</li>
<li>videos/@maxupload: maximum file size in bytes for video uploads.</li>
</ul>

<p>For more details, see the documentation about <a href="http://www.flickr.com/help/limits/">limits</a>.</p>

Response:

<person nsid="30135021@N05">
	<photos maxdisplaypx="1024" maxupload="15728640" />
	<videos maxduration="90" maxupload="157286400" />
</person>

*/
@interface FKFlickrPeopleGetLimits : NSObject <FKFlickrAPIMethod>


@end
