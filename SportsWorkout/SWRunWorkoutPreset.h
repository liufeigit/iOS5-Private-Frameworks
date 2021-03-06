/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SWRunWorkoutObserver-Protocol.h"

@class NSDecimalNumber, NSMutableArray, NSString, SWVoicePromptController;

@interface SWRunWorkoutPreset : NSObject <SWRunWorkoutObserver>
{
    NSString *_presetGoal;
    unsigned int _templateId;
    NSString *_templateName;
    NSString *_workoutName;
    float _goal;
    NSDecimalNumber *_goalInDisplayUnits;
    NSString *_goalType;
    SWVoicePromptController *_promptController;
    NSMutableArray *_timeObservationTargets;
    NSMutableArray *_distanceObservationTargets;
    NSMutableArray *_calorieObservationTargets;
    NSMutableArray *_stateObservationTargets;
    NSMutableArray *_userEventObservationTargets;
}

+ (id)presetForGoal:(id)arg1;
+ (id)presetForCustomGoalWithAmount:(id)arg1 units:(id)arg2;
@property(readonly, nonatomic) NSString *workoutName; // @synthesize workoutName=_workoutName;
@property(readonly, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(readonly, nonatomic) unsigned int templateId; // @synthesize templateId=_templateId;
@property(readonly, nonatomic) NSString *goalType; // @synthesize goalType=_goalType;
@property(readonly, nonatomic) float goal; // @synthesize goal=_goal;
@property(readonly, nonatomic) NSString *presetGoal; // @synthesize presetGoal=_presetGoal;
- (id)_paceInDisplayUnits:(id)arg1 forWorkoutData:(id)arg2;
- (id)_paceDisplayUnitsForWorkoutData:(id)arg1;
- (id)_distanceInDisplayUnits:(id)arg1 forWorkoutData:(id)arg2;
- (id)_distanceDisplayUnitsForWorkoutData:(id)arg1;
- (void)_setUpGoalCompletedTargetWithUnits:(id)arg1;
- (void)_setUpGoalCompletedTarget;
- (void)_setUpFinalRushTargets;
- (void)_setUpHalfwayTargetWithUnits:(id)arg1;
- (void)_setUpHalfwayTarget;
- (void)_setUpBenchmarkTargetsForKilometerDistanceWorkout;
- (void)_setUpBenchmarkTargets;
- (void)_fireAttaboysForWorkoutController:(id)arg1;
- (void)_fireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_stopAllPromptsOrFireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_workoutController:(id)arg1 observeUserEvent:(id)arg2 targets:(id)arg3;
- (void)_observeStateChangeForWorkoutController:(id)arg1 oldState:(id)arg2 newState:(id)arg3 targets:(id)arg4;
- (void)_observeSteadilyIncreasingValueForRunWorkoutController:(id)arg1 withCurrentWorkoutValue:(id)arg2 targets:(id)arg3;
- (void)_addUserEventObservationTarget:(id)arg1;
- (void)_addStateObservationTarget:(id)arg1;
- (void)_addCalorieObservationTarget:(id)arg1;
- (void)_addDistanceObservationTarget:(id)arg1;
- (void)_addTimeObservationTarget:(id)arg1;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned int)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
@property(readonly, nonatomic) NSString *distanceDisplayUnits; // @dynamic distanceDisplayUnits;
- (void)dealloc;
- (id)initWithPresetGoal:(id)arg1 goal:(float)arg2 goalType:(id)arg3 goalInDisplayUnits:(id)arg4 templateId:(unsigned int)arg5 templateName:(id)arg6 workoutName:(id)arg7;

@end

