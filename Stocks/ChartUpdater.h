/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Stocks/XMLHTTPRequest.h>

@class NSString, StockChartData;

@interface ChartUpdater : XMLHTTPRequest
{
    id _delegate;
    NSString *_symbol;
    int _interval;
    StockChartData *_currentChartData;
}

+ (id)_rangeStringForInterval:(int)arg1;
- (id)init;
- (BOOL)updateChartForStock:(id)arg1 interval:(int)arg2;
- (int)parseData:(id)arg1;
- (void)didParseData;
- (void)cancel;
- (void)failWithError:(id)arg1;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;

@end
