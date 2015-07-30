//
//  FKFlickrGroupsBrowse.m
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrGroupsBrowse.h" 

@implementation FKFlickrGroupsBrowse



- (BOOL) needsLogin {
    return YES;
}

- (BOOL) needsSigning {
    return YES;
}

- (FKPermission) requiredPerms {
    return 0;
}

- (NSString *) name {
    return @"flickr.groups.browse";
}

- (BOOL) isValid:(NSError **)error {
    BOOL valid = YES;
	NSMutableString *errorDescription = [[NSMutableString alloc] initWithString:@"You are missing required params: "];

	if(error != NULL) {
		if(!valid) {	
			NSDictionary *userInfo = @{NSLocalizedDescriptionKey: errorDescription};
			*error = [NSError errorWithDomain:FKFlickrKitErrorDomain code:FKErrorInvalidArgs userInfo:userInfo];
		}
	}
    return valid;
}

- (NSDictionary *) args {
    NSMutableDictionary *args = [NSMutableDictionary dictionary];
	if(self.cat_id) {
		[args setValue:self.cat_id forKey:@"cat_id"];
	}

    return [args copy];
}

- (NSString *) descriptionForError:(NSInteger)error {
    switch(error) {
		case FKFlickrGroupsBrowseError_CategoryNotFound:
			return @"Category not found";
		case FKFlickrGroupsBrowseError_SSLIsRequired:
			return @"SSL is required";
		case FKFlickrGroupsBrowseError_InvalidSignature:
			return @"Invalid signature";
		case FKFlickrGroupsBrowseError_MissingSignature:
			return @"Missing signature";
		case FKFlickrGroupsBrowseError_LoginFailedOrInvalidAuthToken:
			return @"Login failed / Invalid auth token";
		case FKFlickrGroupsBrowseError_UserNotLoggedInOrInsufficientPermissions:
			return @"User not logged in / Insufficient permissions";
		case FKFlickrGroupsBrowseError_InvalidAPIKey:
			return @"Invalid API Key";
		case FKFlickrGroupsBrowseError_ServiceCurrentlyUnavailable:
			return @"Service currently unavailable";
		case FKFlickrGroupsBrowseError_WriteOperationFailed:
			return @"Write operation failed";
		case FKFlickrGroupsBrowseError_FormatXXXNotFound:
			return @"Format \"xxx\" not found";
		case FKFlickrGroupsBrowseError_MethodXXXNotFound:
			return @"Method \"xxx\" not found";
		case FKFlickrGroupsBrowseError_InvalidSOAPEnvelope:
			return @"Invalid SOAP envelope";
		case FKFlickrGroupsBrowseError_InvalidXMLRPCMethodCall:
			return @"Invalid XML-RPC Method Call";
		case FKFlickrGroupsBrowseError_BadURLFound:
			return @"Bad URL found";
  
		default:
			return @"Unknown error code";
    }
}

@end
