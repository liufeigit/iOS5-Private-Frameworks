/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDWorksheet.h>

@interface EDWorksheet (EDInternal)
- (void)setup;
- (void)teardown;
- (unsigned int)maxRowOutlineLevel;
- (void)setMaxRowOutlineLevel:(unsigned int)arg1;
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned int)arg1;
- (unsigned int)maxColumnOutlineLevel;
- (void)setMaxColumnOutlineLevel:(unsigned int)arg1;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned int)arg1;
- (void)setMergedRowsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)setMergedColsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (BOOL)hasMergedRow;
- (BOOL)isRowMerged:(unsigned int)arg1;
- (id)mergedRowRef:(unsigned int)arg1;
- (BOOL)hasMergedCol;
- (BOOL)isColMerged:(unsigned int)arg1;
- (id)mergedColRef:(unsigned int)arg1;
@end

