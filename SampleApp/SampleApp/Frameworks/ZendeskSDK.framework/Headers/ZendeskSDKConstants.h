/*
 *
 *  ZendeskSDKConstants.h
 *  ZendeskSDK
 *
 *  Created by Zendesk on 08/10/2014.
 *
 *  Copyright (c) 2014 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Terms
 *  of Service https://www.zendesk.com/company/terms and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/application-developer-and-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

//! Project version number for ZendeskSDK.
FOUNDATION_EXPORT double ZendeskSDKVersionNumber;

//! Project version string for ZendeskSDK.
FOUNDATION_EXPORT NSString * const ZendeskSDKVersionString;


#pragma mark - ZDKToast

/**
 * Default toast animation time.
 */
extern NSTimeInterval const ZD_DefaultAnimationTime;


#pragma mark - ZDKAPI

/**
 * Notification that the SDK config has been updated from the server.
 * This notification will only be sent if a change has been detected.
 */
extern NSString * const ZDKAPI_ConfigUpdated;

/**
 * Notification that the SDK config failed to be fetched from server
 */
extern NSString * const ZDKAPI_ConfigUpdateFailed;

/**
 * Notification for triggering storage of requests.
 */
extern NSString * const ZDKAPI_RequestsUpdated;

/**
 * Notification for triggering storage of users.
 */
extern NSString * const ZDKAPI_UsersUpdated;

/**
 * Notification that the list is about to be retrieved.
 */
extern NSString * const ZDKAPI_CommentListStarting;

/**
 * Notification that the list has been retrieved.
 */
extern NSString * const ZDKAPI_CommentListSuccess;

/**
 * Notification that there was an error while retrieving the comment list.
 */
extern NSString * const ZDKAPI_CommentListError;

/**
 * Notification that a comment is about to be submitted.
 */
extern NSString * const ZDKAPI_CommentSubmissionStarting;

/**
 * Notification that a comment has been successfully submitted.
 */
extern NSString * const ZDKAPI_CommentSubmissionSuccess;

/**
 * Notification that there was an error during comment submission.
 */
extern NSString * const ZDKAPI_CommentSubmissionError;

/**
 * Notification that a request is about to be submitted.
 */
extern NSString * const ZDKAPI_RequestSubmissionStarting;

/**
 * Notification that a request has been successfully submitted.
 */
extern NSString * const ZDKAPI_RequestSubmissionSuccess;

/**
 * Notification that there was an error during request submission.
 */
extern NSString * const ZDKAPI_RequestSubmissionError;

/**
 * Notification that the request list is about to be retrieved.
 */
extern NSString * const ZDKAPI_RequestsStarting;

/**
 * Notification that the request list was successfulyl retrieved.
 */
extern NSString * const ZDKAPI_RequestsSuccess;

/**
 * Notification that there was an error while retrieving the request list.
 */
extern NSString * const ZDKAPI_RequestsError;

/**
 * Notification that the network status has changed.
 */
extern NSString * const ZDKAPI_ReachabilityChangedNotification;

/**
 *  Notification that an upload attachment request has started.
 */
extern NSString * const ZDKAPI_UploadAttachmentStarting;

/**
 *  Notification that an upload attachment request has succeded.
 */
extern NSString * const ZDKAPI_UploadAttachmentSuccess;

/**
 *  Notification that an upload attachment request faild.
 */
extern NSString * const ZDKAPI_UploadAttachmentError;

/**
 *  Notification that an upload deletion is starting.
 */
extern NSString * const ZDKAPI_DeleteUploadStarting;

/**
 *  Notification that an upload deletion succeeded.
 */
extern NSString * const ZDKAPI_DeleteUploadSuccess;

/**
 *  Notificaion that an upload deletion failed.
 */
extern NSString * const ZDKAPI_DeleteUploadError;


#pragma mark - Help Center


/**
 * Notification that help centre categories are being fetched.
 */
extern NSString * const ZD_HC_CategoriesStarting;

/**
 * Notification that help centre categories were updated.
 */
extern NSString * const ZD_HC_CategoriesUpdated;

/**
 * Notification that help centre sections are being fetched.
 */
extern NSString * const ZD_HC_SectionsStarting;

/**
 * Notification that help centre sections were updated.
 */
extern NSString * const ZD_HC_SectionsUpdated;

/**
 * Notification that help centre arcticles are being fetched.
 */
extern NSString * const ZD_HC_ArticlesStarting;

/**
 * Notification that help centre arcticles were updated.
 */
extern NSString * const ZD_HC_ArticlesUpdated;

/**
 * Notification that help centre attachments are being fetched.
 */
extern NSString * const ZD_HC_AttachmentsStarting;

/**
 * Notification that help centre attachments were updated.
 */
extern NSString * const ZD_HC_AttachmentsUpdated;

/**
 * Notification that help center article attachments failed to load.
 */
extern NSString * const ZD_HC_AttachmentsErrored;

/**
 *  Notification that help center search has started
 */
extern NSString * const ZD_HC_SearchStarting;

/**
 * Notification that help center search results have been successfully retrieved.
 */
extern NSString * const ZD_HC_SearchSuccess;


/**
 * Notification that a help centre category was selected.
 */
extern NSString * const ZD_HC_CategorySelected;


/**
 * Notification that a help centre category was selected.
 */
extern NSString * const ZD_HC_SectionSelected;


/**
 * Notification that a help centre article was selected.
 */
extern NSString * const ZD_HC_SectionArticle;


/**
 * Notification that a help centre request errored.
 */
extern NSString * const ZD_HC_RequestError;


/**
 * Notification for resigning first responder.
 */
extern NSString * const ZD_ResignFirstResponder;


#pragma mark - HTTP Header


// HTTP
extern NSString * const ZDD_HTTPPost;
extern NSString * const ZDD_HTTPGet;
extern NSString * const ZDD_HTTPPut;
extern NSString * const ZDD_HTTPDelete;

// HEADERS
extern NSString * const ZDD_ContentType;
extern NSString * const ZDD_ContentLength;
extern NSString * const ZDD_Accept;
extern NSString * const ZDD_TypeJSON;
extern NSString * const ZDD_UserAgent;
extern NSString * const ZDD_AcceptLanguage;
extern NSString * const ZDD_ClientIdentifier;

// MIME types
extern NSString * const ZDD_MIMETypeJPEG;
extern NSString * const ZDD_MIMETypePNG;
extern NSString * const ZDD_MIMETypeGIF;
extern NSString * const ZDD_MIMETypeTIFF;


#pragma mark - Error Domain


// ERRORS
/// error domain for any error reported by the API.
extern NSString * const ZDD_ERROR_Domain;
/// dictionary key for the API error message in the NSError user info dictionary.
extern NSString * const ZDD_ERROR_Key;


#pragma mark - ZDKRMA


// itunes link formats
extern NSString * const iOS7AppStoreURLFormat;
extern NSString * const iOSAppStoreURLFormat;


// zendesk request submission strings
extern NSString * const ZDKRMARequestFeedbackTag;
extern NSString * const ZDKRMARequestIOSTag;
extern NSString * const ZDKRMARequestBuildVariantTag;


// persistence keys
extern NSString * const ZDKRMAChosenAction;
extern NSString * const ZDKRMADateOfActionChosen;
extern NSString * const ZDKRMAAppVersion;
extern NSString * const ZDKRMAVisitCount;
extern NSString * const ZDKRMAInitialCheckDate;
extern NSString * const ZDKRMARequestText;

extern NSString * const ZDSDKUserDefaultsKey;

// default accessibility id
extern NSString * const ZDKRMAAccessibilityID;


// notifications

/** Posted immediately prior to the display of RMA dialog. */
extern NSString * const ZDKRMANotificationTriggered;

/** User tapped 'Yes rate'. */
extern NSString * const ZDKRMANotificationYes;

/** User tapped 'No, send feedback'. */
extern NSString * const ZDKRMANotificationNo;

/** User tapped 'Don't ask again' */
extern NSString * const ZDKRMANotificationDontAsk;

/** User tapped 'back' on send feedback modal. */
extern NSString * const ZDKRMANotificationBack;

/** User has tapped to send feedback. */
extern NSString * const ZDKRMANotificationSend;

/** Posted immediately prior to the dismissal of RMA dialog. User info is a dictionary with a reference to the Dialog */
extern NSString * const ZDKRMANotificationWillHideDialog;

/** Used internally to trigger state persistence. */
extern NSString * const ZDKRMANotificationShouldStore;

/** Posted immediately after a successful submission of RMA feedback. */
extern NSString * const ZDKRMANotificationFeedbackSuccess;

/** Posted immediately after an unsuccessful submission of RMA feedback. */
extern NSString * const ZDKRMANotificationFeedbackError;

#pragma mark - Authentication types
extern NSString * const ZDK_AUTHENTICATION_JWT;
extern NSString * const ZDK_AUTHENTICATION_ANONYMOUS;
