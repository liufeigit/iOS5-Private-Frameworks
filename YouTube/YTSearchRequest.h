/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <YouTube/YTFeedRequest.h>

@interface YTSearchRequest : YTFeedRequest
{
}

+ (unsigned int)videosPerRequest;
+ (id)feedCountryCode;
+ (id)_formatFilter;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (void)searchForVideoWithID:(id)arg1 withDelegate:(id)arg2;
- (void)searchForVideosWithIDs:(id)arg1 withDelegate:(id)arg2;
- (void)searchForVideosMatchingString:(id)arg1 startingAtIndex:(unsigned int)arg2 withDelegate:(id)arg3;
- (void)searchForVideosWithFeedURLBase:(id)arg1 startingAtIndex:(unsigned int)arg2 maxResults:(int)arg3 withTimeQualifier:(id)arg4 withFormatFilter:(BOOL)arg5 authenticationRequired:(BOOL)arg6 withDelegate:(id)arg7;
- (void)searchForRecentVideosStartingAtIndex:(unsigned int)arg1 withDelegate:(id)arg2;
- (void)searchForVideosRelatedToVideo:(id)arg1 startingAtIndex:(unsigned int)arg2 maxResults:(unsigned int)arg3 withDelegate:(id)arg4;
- (void)searchForVideosByAuthor:(id)arg1 startingAtIndex:(unsigned int)arg2 maxResults:(unsigned int)arg3 withDelegate:(id)arg4;
- (void)searchForFavoriteVideosStartingAtIndex:(unsigned int)arg1 withDelegate:(id)arg2;
- (void)searchForMyVideosStartingAtIndex:(unsigned int)arg1 withDelegate:(id)arg2;
- (BOOL)receivedValidResponse:(id)arg1;

@end

