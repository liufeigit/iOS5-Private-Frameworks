/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

@class NSArray, NSIndexSet;

@interface GQDTNumberFormat : NSObject <GQDNameMappable>
{
    char *mUid;
    struct __CFString *mFormatString;
    struct __CFString *mCurrencyCode;
    long mDecimalPlaces;
    BOOL mUseAccountingStyle;
    BOOL mShowThousandsSeparator;
    int mValueType;
    int mNegativeStyle;
    int mFractionAccuracy;
    BOOL mFormatStringRequiresSuppressionOfMinusSign;
    double mScaleFactor;
    BOOL mIsCustom;
    BOOL mRequiresFractionReplacement;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    unsigned char mBase;
    unsigned short mBasePlaces;
    BOOL mBaseUsesMinusSign;
    BOOL mUseScientificFormattingAutomatically;
    BOOL mIgnoreDecimalPlacesForZeroValue;
    BOOL mIsTextFormat;
    BOOL mFormatContainsSpecialTokens;
    BOOL mFormatContainsIntegerToken;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    struct __CFString *mSuffixString;
}

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (BOOL)hasValidDecimalPlaces;
- (id)stringFromDouble:(double)arg1;
- (struct __CFString *)createStringFromDouble:(double)arg1;
- (int)valueType;
- (BOOL)useAccountingStyle;

@end

