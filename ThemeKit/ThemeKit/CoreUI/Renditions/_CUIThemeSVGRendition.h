/*
                       * This header is generated by classdump-dyld 0.7
                       * on Thursday, August 20, 2020 at 7:50:06 PM Eastern Daylight Time
                       * Operating System: Version 11.0 (Build 20A5354i)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
                       */


@class NSData, NSArray;

typedef struct CGSVGDocument* CGSVGDocumentRef;
extern void CGSVGDocumentRelease(CGSVGDocumentRef);

typedef struct {
    double top;
    double left;
    double bottom;
    double right;
} SCD_Struct_CU1;

@interface _CUIThemeSVGRendition : CUIThemeRendition <NSLocking> {

	CGSVGDocumentRef _svgDocument;
	NSData* _fileData;
	unsigned _standardPointSize;
	NSArray* _vectorSizes;
	double _baseline;
	double _capline;
	SCD_Struct_CU1 _alignmentRectInsets;
	char _isAlignmentRect;
	CGSize _canvasSize;
	float _templateVersion;

}
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(int)pixelFormat;
-(id)metrics;
-(id)rawData;
-(CGSize)canvasSize;
-(CGSVGDocumentRef)svgDocument;
-(id)_initWithCSIHeader:(const struct csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const struct renditionkeytoken*)arg2 ;
-(double)vectorGlyphBaseline;
-(double)vectorGlyphCapLine;
-(double)vectorGlyphReferencePointSize;
-(id)vectorGlyphAvailableSizes;
-(SCD_Struct_CU1)vectorGlyphAlignmentRectInsets;
-(float)vectorGlyphTemplateVersion;
-(void)_initalizeMetadataFromCSIData:(const struct csiheader*)arg1 ;
@end
