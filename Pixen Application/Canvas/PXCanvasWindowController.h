//  PXCanvasWindowController.h
//  Pixen
//
//  Created by Joe Osborn on Sat Sep 13 2003.
//  Copyright (c) 2003 Open Sword Group. All rights reserved.
//
#import <AppKit/AppKit.h>

@class PXCanvasController, PXCanvas, PXCanvasView, PXBackground, PXPaletteRestrictor, RBSplitView, RBSplitSubview;

@interface PXCanvasWindowController : NSWindowController
{
	PXCanvas *canvas;

	IBOutlet id zoomPercentageBox;
	IBOutlet id zoomStepper;
	IBOutlet id zoomView;
	id previewController;
	id resizePrompter;
	id scaleController;
	id layerController;
	id toolbar;
	IBOutlet PXCanvasController *canvasController;
	PXPaletteRestrictor *paletteRestrictor;
	IBOutlet RBSplitView *splitView;
	IBOutlet RBSplitSubview *layerSplit, *canvasSplit;
}
- canvasController;
- (PXCanvasView *)view;
- (id) initWithWindowNibName:name;
- (void)awakeFromNib;
- (RBSplitSubview*)layerSplit;
- (RBSplitSubview*)canvasSplit;
- (void)dealloc;
- (PXCanvas *) canvas;
- (void)windowWillClose:note;
- (void)setCanvas:(PXCanvas *) aCanvas;
- (void)setDocument:(NSDocument *)doc;
- (void)windowDidResignMain:note;
- (void)windowDidBecomeMain:(NSNotification *) aNotification;
- (void)prepare;
- (void)updatePreview;
- (void)updateCanvasSize;
- (void)updateFrameSizes;
@end
