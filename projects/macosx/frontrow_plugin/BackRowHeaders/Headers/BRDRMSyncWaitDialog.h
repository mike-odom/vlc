/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRTextWithSpinnerController.h>

@class BRController, BRMediaPlayer;

@interface BRDRMSyncWaitDialog : BRTextWithSpinnerController
{
    unsigned int _timerSatisfied:1;
    unsigned int _waitingForExistingSyncToComplete:1;
    BRController *_layerController;
    BRMediaPlayer *_player;
}

- (id)initWithLayerController:(id)fp8;
- (id)initWithLayerController:(id)fp8 player:(id)fp12;
- (void)dealloc;
- (BOOL)brEventAction:(id)fp8;
- (void)willBePushed;

@end
