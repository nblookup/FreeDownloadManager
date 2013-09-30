/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-beta-xr_w32_bld-00000000/build/security/manager/boot/public/nsISecurityUITelemetry.idl
 */

#ifndef __gen_nsISecurityUITelemetry_h__
#define __gen_nsISecurityUITelemetry_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISecurityUITelemetry */
#define NS_ISECURITYUITELEMETRY_IID_STR "8c1b56c3-b76b-4180-a59a-fb2586db765d"

#define NS_ISECURITYUITELEMETRY_IID \
  {0x8c1b56c3, 0xb76b, 0x4180, \
    { 0xa5, 0x9a, 0xfb, 0x25, 0x86, 0xdb, 0x76, 0x5d }}

class NS_NO_VTABLE nsISecurityUITelemetry : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISECURITYUITELEMETRY_IID)

  enum {
    WARNING_ADDON_ASKING_PREVENTED = 1U,
    WARNING_ADDON_ASKING_PREVENTED_CLICK_THROUGH = 2U,
    WARNING_CONFIRM_ADDON_INSTALL = 3U,
    WARNING_CONFIRM_ADDON_INSTALL_CLICK_THROUGH = 4U,
    WARNING_CONFIRM_POST_TO_INSECURE_FROM_SECURE = 9U,
    WARNING_CONFIRM_POST_TO_INSECURE_FROM_SECURE_CLICK_THROUGH = 10U,
    WARNING_MALWARE_PAGE = 13U,
    WARNING_MALWARE_PAGE_WHY_BLOCKED = 14U,
    WARNING_MALWARE_PAGE_GET_ME_OUT_OF_HERE = 15U,
    WARNING_MALWARE_PAGE_IGNORE_WARNING = 16U,
    WARNING_PHISHING_PAGE = 17U,
    WARNING_PHISHING_PAGE_WHY_BLOCKED = 18U,
    WARNING_PHISHING_PAGE_GET_ME_OUT_OF_HERE = 19U,
    WARNING_PHISHING_PAGE_IGNORE_WARNING = 20U,
    WARNING_BAD_CERT = 21U,
    WARNING_BAD_CERT_STS = 22U,
    WARNING_BAD_CERT_CLICK_ADD_EXCEPTION = 23U,
    WARNING_BAD_CERT_CLICK_VIEW_CERT = 24U,
    WARNING_BAD_CERT_DONT_REMEMBER_EXCEPTION = 25U,
    WARNING_BAD_CERT_GET_ME_OUT_OF_HERE = 27U,
    WARNING_BAD_CERT_UNDERSTAND_RISKS = 28U,
    WARNING_BAD_CERT_TECHINICAL_DETAILS = 29U,
    WARNING_BAD_CERT_ADD_EXCEPTION_BASE = 30U,
    WARNING_BAD_CERT_ADD_EXCEPTION_FLAG_UNTRUSTED = 1U,
    WARNING_BAD_CERT_ADD_EXCEPTION_FLAG_DOMAIN = 2U,
    WARNING_BAD_CERT_ADD_EXCEPTION_FLAG_TIME = 4U,
    WARNING_BAD_CERT_CONFIRM_ADD_EXCEPTION_BASE = 38U,
    WARNING_BAD_CERT_CONFIRM_ADD_EXCEPTION_FLAG_UNTRUSTED = 1U,
    WARNING_BAD_CERT_CONFIRM_ADD_EXCEPTION_FLAG_DOMAIN = 2U,
    WARNING_BAD_CERT_CONFIRM_ADD_EXCEPTION_FLAG_TIME = 4U,
    WARNING_GEOLOCATION_REQUEST = 46U,
    WARNING_GEOLOCATION_REQUEST_SHARE_LOCATION = 47U,
    WARNING_GEOLOCATION_REQUEST_ALWAYS_SHARE = 48U,
    WARNING_GEOLOCATION_REQUEST_NEVER_SHARE = 49U,
    WARNING_INSECURE_UPDATE = 50U,
    WARNING_NO_SECURE_UPDATE = 51U,
    WARNING_MALWARE_PAGE_TOP = 52U,
    WARNING_MALWARE_PAGE_TOP_WHY_BLOCKED = 53U,
    WARNING_MALWARE_PAGE_TOP_GET_ME_OUT_OF_HERE = 54U,
    WARNING_MALWARE_PAGE_TOP_IGNORE_WARNING = 55U,
    WARNING_PHISHING_PAGE_TOP = 56U,
    WARNING_PHISHING_PAGE_TOP_WHY_BLOCKED = 57U,
    WARNING_PHISHING_PAGE_TOP_GET_ME_OUT_OF_HERE = 58U,
    WARNING_PHISHING_PAGE_TOP_IGNORE_WARNING = 59U,
    WARNING_MALWARE_PAGE_FRAME = 60U,
    WARNING_MALWARE_PAGE_FRAME_WHY_BLOCKED = 61U,
    WARNING_MALWARE_PAGE_FRAME_GET_ME_OUT_OF_HERE = 62U,
    WARNING_MALWARE_PAGE_FRAME_IGNORE_WARNING = 63U,
    WARNING_PHISHING_PAGE_FRAME = 64U,
    WARNING_PHISHING_PAGE_FRAME_WHY_BLOCKED = 65U,
    WARNING_PHISHING_PAGE_FRAME_GET_ME_OUT_OF_HERE = 66U,
    WARNING_PHISHING_PAGE_FRAME_IGNORE_WARNING = 67U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISecurityUITelemetry, NS_ISECURITYUITELEMETRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISECURITYUITELEMETRY \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISECURITYUITELEMETRY(_to) \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISECURITYUITELEMETRY(_to) \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSecurityUITelemetry : public nsISecurityUITelemetry
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISECURITYUITELEMETRY

  nsSecurityUITelemetry();

private:
  ~nsSecurityUITelemetry();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSecurityUITelemetry, nsISecurityUITelemetry)

nsSecurityUITelemetry::nsSecurityUITelemetry()
{
  /* member initializers and constructor code */
}

nsSecurityUITelemetry::~nsSecurityUITelemetry()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISecurityUITelemetry_h__ */
