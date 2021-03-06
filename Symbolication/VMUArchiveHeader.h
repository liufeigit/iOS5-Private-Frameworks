/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMUHeader.h>

@class NSMutableArray, NSString;

@interface VMUArchiveHeader : VMUHeader
{
    NSMutableArray *_headers;
    NSString *_path;
}

+ (id)archiveHeaderWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3;
- (id)initWithMemory:(id)arg1 path:(id)arg2 timestamp:(id)arg3;
- (void)dealloc;
- (BOOL)isArchive;
- (id)headers;
- (id)architecture;
- (id)description;

@end

