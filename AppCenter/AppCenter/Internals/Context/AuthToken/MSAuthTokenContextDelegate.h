// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MSAuthTokenContext;

@protocol MSAuthTokenContextDelegate <NSObject>

@optional

/**
 * A callback that is called when an auth token is received.
 *
 * @param authTokenContext The auth token context.
 * @param authToken The auth token.
 */
- (void)authTokenContext:(MSAuthTokenContext *)authTokenContext didSetAuthToken:(nullable NSString *)authToken;

/**
 * A callback that is called when a new user signs in.
 *
 * @param authTokenContext The auth token context.
 * @param authToken The auth token.
 */
- (void)authTokenContext:(MSAuthTokenContext *)authTokenContext didUpdateAccountIdWithAuthToken:(nullable NSString *)authToken;

/**
 * A callback that is called when a token needs to be refreshed.
 *
 * @param authTokenContext The auth token context.
 * @param accountId The accountId of the auth token that expires soon and needs to be refreshed.
 */
- (void)authTokenContext:(MSAuthTokenContext *)authTokenContext refreshAuthTokenForAccountId:(nullable NSString *)accountId;

@end

NS_ASSUME_NONNULL_END
