/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoBoothEffects/PBOpenCLContext.h>

@class PBRuntimeWrapper;

@interface PBConcreteOpenCLContext : PBOpenCLContext
{
    PBRuntimeWrapper *rtWrapper;
}

- (id)init;
- (void)dealloc;
- (void)applyFilter:(id)arg1 toSurface:(struct __IOSurface *)arg2 mirrored:(BOOL)arg3 surfaceResultHandler:(id)arg4;

@end

