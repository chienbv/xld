/* XLDController */
// Access to AccurateRip is regulated, see  http://www.accuraterip.com/3rdparty-access.htm for details.

#import <Cocoa/Cocoa.h>
#import "XLDCDDBUtil.h"
#import <sys/param.h>
#import <sys/mount.h>

@interface XLDController : NSObject
{
    IBOutlet id o_formatList;
    IBOutlet id o_outputDir;
    IBOutlet id o_outputSelectRadio;
	IBOutlet id o_formatOptionButton;
	IBOutlet id o_pluginPrefPane;
	IBOutlet id o_pluginOptionContentView;
	IBOutlet id o_prefPane;
	IBOutlet id o_autoTagging;
	IBOutlet id o_filenameFormat;
	IBOutlet id o_filenameFormatRadio;
	IBOutlet id o_cddbServer;
	IBOutlet id o_cddbServerPort;
	IBOutlet id o_cddbServerPath;
	IBOutlet id o_cddbProxyServer;
	IBOutlet id o_cddbProxyUser;
	IBOutlet id o_cddbProxyPassword;
	IBOutlet id o_cddbProxyServerPort;
	IBOutlet id o_cddbProxyEnabled;
	IBOutlet id o_queryResultPane;
	IBOutlet id o_queryResultList;
	IBOutlet id o_cddbUseCache;
	IBOutlet id o_rawFormatView;
	IBOutlet id o_rawBitDepth;
	IBOutlet id o_rawChannels;
	IBOutlet id o_rawSamplerate;
	IBOutlet id o_rawEndian;
	IBOutlet id o_rawFormatPane;
	IBOutlet id o_rawFormatPaneContent;
	IBOutlet id o_correctOffset;
	IBOutlet id o_cuesheetEncodings;
	IBOutlet id o_cddbQueryItem;
	IBOutlet id o_maxThreads;
	IBOutlet id o_scaleImage;
	IBOutlet id o_scaleType;
	IBOutlet id o_scalePixel;
	IBOutlet id o_compressionQuality;
	IBOutlet id o_editTags;
	IBOutlet id o_addiTunes;
	IBOutlet id o_libraryType;
	IBOutlet id o_libraryName;
	IBOutlet id o_openCDDA;
	IBOutlet id o_maxRetryCount;
	IBOutlet id o_offsetCorrectionValue;
	IBOutlet id o_detectPregapPane;
	IBOutlet id o_detectPregapProgress;
	IBOutlet id o_detectPregapMessage;
	IBOutlet id o_detectPregapPaneButton;
	IBOutlet id o_logWindow;
	IBOutlet id o_logView;
	IBOutlet id o_queryAccurateRip;
	IBOutlet id o_verifySuspiciousSector;
	IBOutlet id o_testBeforeCopy;
	IBOutlet id o_testType;
	IBOutlet id o_cuesheetTypeView;
	IBOutlet id o_cuesheetType;
	IBOutlet id o_arLogControl;
	IBOutlet id o_offsetValue;
	IBOutlet id o_offsetView;
	IBOutlet id o_offsetCorrectionPanel;
	IBOutlet id o_offsetCorrectionPopup;
	IBOutlet id o_scanReplayGain;
	IBOutlet id o_offsetList;
	IBOutlet id o_useC2Pointer;
	IBOutlet id o_autoSetOffsetValue;
	IBOutlet id o_subdirectoryDepth;
	IBOutlet id o_autoMountDisc;
	IBOutlet id o_autoStartRipping;
	IBOutlet id o_ejectWhenDone;
	IBOutlet id o_autoQueryCDDB;
	IBOutlet id o_limitExtension;
	IBOutlet id o_extensionFilter;
	IBOutlet id o_preserveDirectoryStructure;
	IBOutlet id o_dontPromptForCDDB;
	IBOutlet id o_forceReadCuesheet;
	IBOutlet id o_appendBOM;
	IBOutlet id o_existingFile;
	IBOutlet id o_quitWhenDone;
	IBOutlet id o_expandImage;
	IBOutlet id o_autoLoadCoverArt;
	IBOutlet id o_autoLoadCoverArtName;
	IBOutlet id o_autoLoadCoverArtDontOverwrite;
	IBOutlet id o_embedCoverArts;
	IBOutlet id o_preferencesTab;
	IBOutlet id o_dontReadSubchannel;
	IBOutlet id o_moveAfterFinish;
	IBOutlet id o_autoSetCompilation;
	IBOutlet id o_preserveUnknownMetadata;
	IBOutlet id o_keepTimeStamp;
	IBOutlet id o_removeOriginalFile;
	IBOutlet id o_warnBeforeConversion;
	IBOutlet id o_ripperMode;
	IBOutlet id o_defaultCommentValue;
	IBOutlet id o_preferredService;
	IBOutlet id o_profileMenu;
	IBOutlet id o_addProfileMenu;
	IBOutlet id o_manageProfileMenu;
	IBOutlet id o_saveLogMode;
	IBOutlet id o_saveCueMode;
	IBOutlet id o_writeOffset;
	IBOutlet id o_readOffsetForVerify;
	IBOutlet id o_readOffsetUseRipperValue;
	IBOutlet id o_useAWS;
	IBOutlet id o_AWSKey;
	IBOutlet id o_AWSSecretKey;
	IBOutlet id o_AWSDomain;
	IBOutlet id o_textGroup_1_1;
	IBOutlet id o_textGroup_1_2;
	IBOutlet id o_textGroup_1_3;
	IBOutlet id o_textGroup_1_4;
	IBOutlet id o_textGroup_1_5;
	IBOutlet id o_htoaView;
	IBOutlet id o_htoaLengthM;
	IBOutlet id o_htoaLengthS;
	IBOutlet id o_htoaLengthF;
	IBOutlet id o_htoaStyle;
	IBOutlet id o_resourceURLPane;
	IBOutlet id o_resourceURL;
	IBOutlet id o_driveSpeedControl;
	IBOutlet id o_renamer;
	IBOutlet id o_priority;
	IBOutlet id o_autoStartCondition;
	id multipleOutputFormatMatrix;
	//id decoder;
	id decoderCenter;
	//id cueParser;
	id player;
	XLDCDDBUtil *util;
	id taskQueue;
	id metadataEditor;
	NSMutableArray *serverList;
	//BOOL decoding;
	NSMutableArray *outputArr;
	BOOL launched;
	//NSString *queuedFile;
	NSMutableArray *queue;
	BOOL firstDrag;
	BOOL ejected;
	NSString *tempOutputDir;
	id updater;
	BOOL driveIsBusy;
	BOOL openingFiles;
	BOOL cancelScan;
	NSTimeInterval launchDate;
	id customFormatManager;
	id profileManager;
	id discView;
	id coverArtSearcher;
	int currentNice;
}
- (IBAction)beginDecode:(id)sender;
- (IBAction)setOutputDir:(id)sender;
- (IBAction)openFile:(id)sender;
- (IBAction)openRawFile:(id)sender;
- (IBAction)formatChanged:(id)sender;
- (IBAction)showOption:(id)sender;
- (IBAction)hideOption:(id)sender;
- (IBAction)cddbGetTracks:(id)sender;
- (IBAction)closeQueryResult:(id)sender;
- (IBAction)addServerList:(id)sender;
- (IBAction)rawFormatSelected:(id)sender;
- (IBAction)toggleSenderItem:(id)sender;
- (IBAction)editMetadata:(id)sender;
- (IBAction)statusChanged:(id)sender;
- (IBAction)updateCDDAList:(id)sender;
- (IBAction)saveCuesheet:(id)sender;
- (IBAction)showWindow:(id)sender;
- (IBAction)checkAccurateRip:(id)sender;
- (IBAction)saveOffsetCorrectedFile:(id)sender;
- (IBAction)checkForUpdates:(id)sender;
- (IBAction)stopModal:(id)sender;
- (IBAction)analyzeCache:(id)sendor;
- (IBAction)cancelScan:(id)sender;
- (IBAction)inputTagsFromText:(id)sender;
- (IBAction)donate:(id)sender;
- (IBAction)openFolderAsDisc:(id)sender;
- (IBAction)searchCoverArt:(id)sender;
- (IBAction)associateMBDiscID:(id)sender;
- (IBAction)reportBug:(id)sender;
- (IBAction)getMetadataFromURL:(id)sender;
- (IBAction)gotoMBReleasePage:(id)sender;
- (IBAction)renice:(id)sender;
//- (void)finishedDecoding;
//- (void)updateProgress:(double)val restTracks:(int)n;
//- (BOOL)ignoreGap;
//- (BOOL)tagging;
- (id)decoderCenter;
//- (BOOL)canOverwriteFile;
- (void)processSingleFile:(NSString *)filename alwaysOpenAsDisc:(BOOL)discMode;
- (void)processQueue;
- (void)processMultipleFiles;
- (void)processRawFile:(NSString *)filename withFormat:(XLDFormat)fmt endian:(XLDEndian)e;
- (int)offset;
- (unsigned int)cddbQueryFlag;
- (NSStringEncoding)encoding;
- (int)maxThreads;
- (void)discRippedWithResult:(id)result;
- (void)accurateRipCheckDidFinish:(id)result;
- (void)updateCDDAListAndMount:(NSString *)device;
- (BOOL)canSetCompilationFlag;
- (BOOL)checkUpdateStatus;
- (void)setCheckUpdateStatus:(BOOL)flag;
- (void)tagEditDidFinishForTracks:(NSArray *)tracks albumRanges:(NSArray *)ranges tasks:(NSArray *)tasks;
- (void)updateFormatDescriptionMenu;
- (void)updateProfileMenuFromNames:(NSArray *)arr;
- (NSMutableDictionary *)currentConfiguration;
- (void)loadProfileFromDictionary:(NSDictionary *)dic;
- (id)discView;
- (id)metadataEditor;
- (id)player;
- (void)showLogStr:(NSString *)logStr;
- (int)writeOffset;
- (int)readOffsetForVerify;
- (NSDictionary *)awsKeys;
- (const char *)awsDomain;
- (id)imageView;
- (void)imageDataDownloaded:(NSData *)imageData;
- (void)openFolder:(NSString *)dir offset:(xldoffset_t)offset prepended:(BOOL)prepended;
@end
