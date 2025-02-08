#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequest)
namespace System::Text {
class Encoding;
}
namespace System {
struct IntPtr;
}
namespace System {
class Uri;
}
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::Networking {
class DownloadHandler;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
struct UnityWebRequest_Result;
}
namespace UnityEngine::Networking {
struct UnityWebRequest_UnityWebRequestError;
}
namespace UnityEngine::Networking {
struct UnityWebRequest_UnityWebRequestMethod;
}
namespace UnityEngine::Networking {
class UploadHandler;
}
// Forward declare root types
namespace UnityEngine::Networking {
struct UnityWebRequest_Result;
}
namespace UnityEngine::Networking {
struct UnityWebRequest_UnityWebRequestError;
}
namespace UnityEngine::Networking {
struct UnityWebRequest_UnityWebRequestMethod;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Networking::UnityWebRequest_Result);
MARK_VAL_T(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError);
MARK_VAL_T(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod);
MARK_REF_PTR_T(::UnityEngine::Networking::UnityWebRequest);
// Dependencies
namespace UnityEngine::Networking {
// Is value type: true
// CS Name: UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod
struct CORDL_TYPE UnityWebRequest_UnityWebRequestMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnityWebRequest_UnityWebRequestMethod_Unwrapped
  enum struct __UnityWebRequest_UnityWebRequestMethod_Unwrapped : int32_t {
    __E_Get = static_cast<int32_t>(0x0),
    __E_Post = static_cast<int32_t>(0x1),
    __E_Put = static_cast<int32_t>(0x2),
    __E_Head = static_cast<int32_t>(0x3),
    __E_Custom = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnityWebRequest_UnityWebRequestMethod_Unwrapped() const noexcept {
    return static_cast<__UnityWebRequest_UnityWebRequestMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequest_UnityWebRequestMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnityWebRequest_UnityWebRequestMethod(int32_t value__) noexcept;

  /// @brief Field Custom value: I32(4)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod const Custom;

  /// @brief Field Get value: I32(0)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod const Get;

  /// @brief Field Head value: I32(3)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod const Head;

  /// @brief Field Post value: I32(1)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod const Post;

  /// @brief Field Put value: I32(2)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod const Put;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18239 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Networking
// Dependencies
namespace UnityEngine::Networking {
// Is value type: true
// CS Name: UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
struct CORDL_TYPE UnityWebRequest_UnityWebRequestError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnityWebRequest_UnityWebRequestError_Unwrapped
  enum struct __UnityWebRequest_UnityWebRequestError_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_OKCached = static_cast<int32_t>(0x1),
    __E_Unknown = static_cast<int32_t>(0x2),
    __E_SDKError = static_cast<int32_t>(0x3),
    __E_UnsupportedProtocol = static_cast<int32_t>(0x4),
    __E_MalformattedUrl = static_cast<int32_t>(0x5),
    __E_CannotResolveProxy = static_cast<int32_t>(0x6),
    __E_CannotResolveHost = static_cast<int32_t>(0x7),
    __E_CannotConnectToHost = static_cast<int32_t>(0x8),
    __E_AccessDenied = static_cast<int32_t>(0x9),
    __E_GenericHttpError = static_cast<int32_t>(0xa),
    __E_WriteError = static_cast<int32_t>(0xb),
    __E_ReadError = static_cast<int32_t>(0xc),
    __E_OutOfMemory = static_cast<int32_t>(0xd),
    __E_Timeout = static_cast<int32_t>(0xe),
    __E_HTTPPostError = static_cast<int32_t>(0xf),
    __E_SSLCannotConnect = static_cast<int32_t>(0x10),
    __E_Aborted = static_cast<int32_t>(0x11),
    __E_TooManyRedirects = static_cast<int32_t>(0x12),
    __E_ReceivedNoData = static_cast<int32_t>(0x13),
    __E_SSLNotSupported = static_cast<int32_t>(0x14),
    __E_FailedToSendData = static_cast<int32_t>(0x15),
    __E_FailedToReceiveData = static_cast<int32_t>(0x16),
    __E_SSLCertificateError = static_cast<int32_t>(0x17),
    __E_SSLCipherNotAvailable = static_cast<int32_t>(0x18),
    __E_SSLCACertError = static_cast<int32_t>(0x19),
    __E_UnrecognizedContentEncoding = static_cast<int32_t>(0x1a),
    __E_LoginFailed = static_cast<int32_t>(0x1b),
    __E_SSLShutdownFailed = static_cast<int32_t>(0x1c),
    __E_RedirectLimitInvalid = static_cast<int32_t>(0x1d),
    __E_InvalidRedirect = static_cast<int32_t>(0x1e),
    __E_CannotModifyRequest = static_cast<int32_t>(0x1f),
    __E_HeaderNameContainsInvalidCharacters = static_cast<int32_t>(0x20),
    __E_HeaderValueContainsInvalidCharacters = static_cast<int32_t>(0x21),
    __E_CannotOverrideSystemHeaders = static_cast<int32_t>(0x22),
    __E_AlreadySent = static_cast<int32_t>(0x23),
    __E_InvalidMethod = static_cast<int32_t>(0x24),
    __E_NotImplemented = static_cast<int32_t>(0x25),
    __E_NoInternetConnection = static_cast<int32_t>(0x26),
    __E_DataProcessingError = static_cast<int32_t>(0x27),
    __E_InsecureConnectionNotAllowed = static_cast<int32_t>(0x28),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnityWebRequest_UnityWebRequestError_Unwrapped() const noexcept {
    return static_cast<__UnityWebRequest_UnityWebRequestError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequest_UnityWebRequestError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnityWebRequest_UnityWebRequestError(int32_t value__) noexcept;

  /// @brief Field Aborted value: I32(17)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const Aborted;

  /// @brief Field AccessDenied value: I32(9)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const AccessDenied;

  /// @brief Field AlreadySent value: I32(35)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const AlreadySent;

  /// @brief Field CannotConnectToHost value: I32(8)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const CannotConnectToHost;

  /// @brief Field CannotModifyRequest value: I32(31)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const CannotModifyRequest;

  /// @brief Field CannotOverrideSystemHeaders value: I32(34)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const CannotOverrideSystemHeaders;

  /// @brief Field CannotResolveHost value: I32(7)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const CannotResolveHost;

  /// @brief Field CannotResolveProxy value: I32(6)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const CannotResolveProxy;

  /// @brief Field DataProcessingError value: I32(39)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const DataProcessingError;

  /// @brief Field FailedToReceiveData value: I32(22)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const FailedToReceiveData;

  /// @brief Field FailedToSendData value: I32(21)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const FailedToSendData;

  /// @brief Field GenericHttpError value: I32(10)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const GenericHttpError;

  /// @brief Field HTTPPostError value: I32(15)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const HTTPPostError;

  /// @brief Field HeaderNameContainsInvalidCharacters value: I32(32)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const HeaderNameContainsInvalidCharacters;

  /// @brief Field HeaderValueContainsInvalidCharacters value: I32(33)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const HeaderValueContainsInvalidCharacters;

  /// @brief Field InsecureConnectionNotAllowed value: I32(40)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const InsecureConnectionNotAllowed;

  /// @brief Field InvalidMethod value: I32(36)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const InvalidMethod;

  /// @brief Field InvalidRedirect value: I32(30)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const InvalidRedirect;

  /// @brief Field LoginFailed value: I32(27)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const LoginFailed;

  /// @brief Field MalformattedUrl value: I32(5)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const MalformattedUrl;

  /// @brief Field NoInternetConnection value: I32(38)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const NoInternetConnection;

  /// @brief Field NotImplemented value: I32(37)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const NotImplemented;

  /// @brief Field OK value: I32(0)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const OK;

  /// @brief Field OKCached value: I32(1)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const OKCached;

  /// @brief Field OutOfMemory value: I32(13)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const OutOfMemory;

  /// @brief Field ReadError value: I32(12)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const ReadError;

  /// @brief Field ReceivedNoData value: I32(19)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const ReceivedNoData;

  /// @brief Field RedirectLimitInvalid value: I32(29)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const RedirectLimitInvalid;

  /// @brief Field SDKError value: I32(3)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const SDKError;

  /// @brief Field SSLCACertError value: I32(25)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const SSLCACertError;

  /// @brief Field SSLCannotConnect value: I32(16)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const SSLCannotConnect;

  /// @brief Field SSLCertificateError value: I32(23)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const SSLCertificateError;

  /// @brief Field SSLCipherNotAvailable value: I32(24)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const SSLCipherNotAvailable;

  /// @brief Field SSLNotSupported value: I32(20)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const SSLNotSupported;

  /// @brief Field SSLShutdownFailed value: I32(28)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const SSLShutdownFailed;

  /// @brief Field Timeout value: I32(14)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const Timeout;

  /// @brief Field TooManyRedirects value: I32(18)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const TooManyRedirects;

  /// @brief Field Unknown value: I32(2)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const Unknown;

  /// @brief Field UnrecognizedContentEncoding value: I32(26)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const UnrecognizedContentEncoding;

  /// @brief Field UnsupportedProtocol value: I32(4)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const UnsupportedProtocol;

  /// @brief Field WriteError value: I32(11)
  static ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError const WriteError;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18240 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Networking
// Dependencies
namespace UnityEngine::Networking {
// Is value type: true
// CS Name: UnityEngine.Networking.UnityWebRequest/Result
struct CORDL_TYPE UnityWebRequest_Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnityWebRequest_Result_Unwrapped
  enum struct __UnityWebRequest_Result_Unwrapped : int32_t {
    __E_InProgress = static_cast<int32_t>(0x0),
    __E_Success = static_cast<int32_t>(0x1),
    __E_ConnectionError = static_cast<int32_t>(0x2),
    __E_ProtocolError = static_cast<int32_t>(0x3),
    __E_DataProcessingError = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnityWebRequest_Result_Unwrapped() const noexcept {
    return static_cast<__UnityWebRequest_Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequest_Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnityWebRequest_Result(int32_t value__) noexcept;

  /// @brief Field ConnectionError value: I32(2)
  static ::UnityEngine::Networking::UnityWebRequest_Result const ConnectionError;

  /// @brief Field DataProcessingError value: I32(4)
  static ::UnityEngine::Networking::UnityWebRequest_Result const DataProcessingError;

  /// @brief Field InProgress value: I32(0)
  static ::UnityEngine::Networking::UnityWebRequest_Result const InProgress;

  /// @brief Field ProtocolError value: I32(3)
  static ::UnityEngine::Networking::UnityWebRequest_Result const ProtocolError;

  /// @brief Field Success value: I32(1)
  static ::UnityEngine::Networking::UnityWebRequest_Result const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18241 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest_Result, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequest_Result, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Networking
// Dependencies System.IDisposable, System.IntPtr, System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UnityWebRequest
class CORDL_TYPE UnityWebRequest : public ::System::Object {
public:
  // Declarations
  using Result = ::UnityEngine::Networking::UnityWebRequest_Result;

  using UnityWebRequestError = ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError;

  using UnityWebRequestMethod = ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod;

  /// @brief Field <disposeCertificateHandlerOnDispose>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField,
                      put = __cordl_internal_set__disposeCertificateHandlerOnDispose_k__BackingField)) bool _disposeCertificateHandlerOnDispose_k__BackingField;

  /// @brief Field <disposeDownloadHandlerOnDispose>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField,
                      put = __cordl_internal_set__disposeDownloadHandlerOnDispose_k__BackingField)) bool _disposeDownloadHandlerOnDispose_k__BackingField;

  /// @brief Field <disposeUploadHandlerOnDispose>k__BackingField, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField,
                      put = __cordl_internal_set__disposeUploadHandlerOnDispose_k__BackingField)) bool _disposeUploadHandlerOnDispose_k__BackingField;

  __declspec(property(get = get_certificateHandler, put = set_certificateHandler)) ::UnityEngine::Networking::CertificateHandler* certificateHandler;

  __declspec(property(get = get_disposeCertificateHandlerOnDispose, put = set_disposeCertificateHandlerOnDispose)) bool disposeCertificateHandlerOnDispose;

  __declspec(property(get = get_disposeDownloadHandlerOnDispose, put = set_disposeDownloadHandlerOnDispose)) bool disposeDownloadHandlerOnDispose;

  __declspec(property(get = get_disposeUploadHandlerOnDispose, put = set_disposeUploadHandlerOnDispose)) bool disposeUploadHandlerOnDispose;

  __declspec(property(get = get_downloadHandler, put = set_downloadHandler)) ::UnityEngine::Networking::DownloadHandler* downloadHandler;

  __declspec(property(get = get_downloadedBytes)) uint64_t downloadedBytes;

  __declspec(property(get = get_error)) ::StringW error;

  __declspec(property(get = get_isDone)) bool isDone;

  __declspec(property(get = get_isModifiable)) bool isModifiable;

  /// @brief Field m_CertificateHandler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CertificateHandler, put = __cordl_internal_set_m_CertificateHandler)) ::UnityEngine::Networking::CertificateHandler* m_CertificateHandler;

  /// @brief Field m_DownloadHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DownloadHandler, put = __cordl_internal_set_m_DownloadHandler)) ::UnityEngine::Networking::DownloadHandler* m_DownloadHandler;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_UploadHandler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UploadHandler, put = __cordl_internal_set_m_UploadHandler)) ::UnityEngine::Networking::UploadHandler* m_UploadHandler;

  /// @brief Field m_Uri, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Uri, put = __cordl_internal_set_m_Uri)) ::System::Uri* m_Uri;

  __declspec(property(get = get_method, put = set_method)) ::StringW method;

  __declspec(property(put = set_redirectLimit)) int32_t redirectLimit;

  __declspec(property(get = get_responseCode)) int64_t responseCode;

  __declspec(property(get = get_result)) ::UnityEngine::Networking::UnityWebRequest_Result result;

  __declspec(property(put = set_timeout)) int32_t timeout;

  __declspec(property(get = get_uploadHandler, put = set_uploadHandler)) ::UnityEngine::Networking::UploadHandler* uploadHandler;

  __declspec(property(put = set_uri)) ::System::Uri* uri;

  __declspec(property(get = get_url, put = set_url)) ::StringW url;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Abort, addr 0x4ae95fc, size 0x3c, virtual false, abstract: false, final false
  inline void Abort();

  /// @brief Method BeginWebRequest, addr 0x4ae9e84, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* BeginWebRequest();

  /// @brief Method Create, addr 0x4ae9518, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create();

  /// @brief Method Dispose, addr 0x4ae9e04, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeHandlers, addr 0x4ae9da4, size 0x60, virtual false, abstract: false, final false
  inline void DisposeHandlers();

  /// @brief Method EscapeURL, addr 0x4aeacb8, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW EscapeURL(::StringW s);

  /// @brief Method EscapeURL, addr 0x4aeacd8, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW EscapeURL(::StringW s, ::System::Text::Encoding* e);

  /// @brief Method Finalize, addr 0x4ae9d08, size 0x9c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Get, addr 0x4aeac14, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::UnityWebRequest* Get(::StringW uri);

  /// @brief Method GetCustomMethod, addr 0x4aea208, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetCustomMethod();

  /// @brief Method GetError, addr 0x4aea34c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError GetError();

  /// @brief Method GetHTTPStatusString, addr 0x4ae94a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetHTTPStatusString(int64_t responseCode);

  /// @brief Method GetMethod, addr 0x4aea1cc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod GetMethod();

  /// @brief Method GetResponseHeader, addr 0x4aea86c, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetResponseHeader(::StringW name);

  /// @brief Method GetUrl, addr 0x4aea5e0, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetUrl();

  /// @brief Method GetWebErrorString, addr 0x4ae9464, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetWebErrorString(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError err);

  /// @brief Method InternalDestroy, addr 0x4ae957c, size 0x80, virtual false, abstract: false, final false
  inline void InternalDestroy();

  /// @brief Method InternalSetCustomMethod, addr 0x4aea0cc, size 0x100, virtual false, abstract: false, final false
  inline void InternalSetCustomMethod(::StringW customMethodName);

  /// @brief Method InternalSetDefaults, addr 0x4ae9638, size 0x14, virtual false, abstract: false, final false
  inline void InternalSetDefaults();

  /// @brief Method InternalSetMethod, addr 0x4ae9f4c, size 0x100, virtual false, abstract: false, final false
  inline void InternalSetMethod(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType);

  /// @brief Method InternalSetUrl, addr 0x4aea61c, size 0x100, virtual false, abstract: false, final false
  inline void InternalSetUrl(::StringW url);

  static inline ::UnityEngine::Networking::UnityWebRequest* New_ctor(::System::Uri* uri, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler,
                                                                     ::UnityEngine::Networking::UploadHandler* uploadHandler);

  static inline ::UnityEngine::Networking::UnityWebRequest* New_ctor(::StringW url, ::StringW method);

  static inline ::UnityEngine::Networking::UnityWebRequest* New_ctor(::StringW url, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler,
                                                                     ::UnityEngine::Networking::UploadHandler* uploadHandler);

  /// @brief Method Release, addr 0x4ae9540, size 0x3c, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SendWebRequest, addr 0x4ae9ec0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequest();

  /// @brief Method SetCertificateHandler, addr 0x4aea938, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetCertificateHandler(::UnityEngine::Networking::CertificateHandler* ch);

  /// @brief Method SetCustomMethod, addr 0x4aea088, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetCustomMethod(::StringW customMethodName);

  /// @brief Method SetDownloadHandler, addr 0x4aea8f4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetDownloadHandler(::UnityEngine::Networking::DownloadHandler* dh);

  /// @brief Method SetMethod, addr 0x4ae9f08, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetMethod(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType);

  /// @brief Method SetRedirectLimitFromScripting, addr 0x4aea7e4, size 0x44, virtual false, abstract: false, final false
  inline void SetRedirectLimitFromScripting(int32_t limit);

  /// @brief Method SetTimeoutMsec, addr 0x4aeaa80, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetTimeoutMsec(int32_t timeout);

  /// @brief Method SetUploadHandler, addr 0x4aea8b0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetUploadHandler(::UnityEngine::Networking::UploadHandler* uh);

  /// @brief Method SetUrl, addr 0x4aea71c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError SetUrl(::StringW url);

  constexpr bool const& __cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField();

  constexpr ::UnityEngine::Networking::CertificateHandler* const& __cordl_internal_get_m_CertificateHandler() const;

  constexpr ::UnityEngine::Networking::CertificateHandler*& __cordl_internal_get_m_CertificateHandler();

  constexpr ::UnityEngine::Networking::DownloadHandler* const& __cordl_internal_get_m_DownloadHandler() const;

  constexpr ::UnityEngine::Networking::DownloadHandler*& __cordl_internal_get_m_DownloadHandler();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::UnityEngine::Networking::UploadHandler* const& __cordl_internal_get_m_UploadHandler() const;

  constexpr ::UnityEngine::Networking::UploadHandler*& __cordl_internal_get_m_UploadHandler();

  constexpr ::System::Uri* const& __cordl_internal_get_m_Uri() const;

  constexpr ::System::Uri*& __cordl_internal_get_m_Uri();

  constexpr void __cordl_internal_set__disposeCertificateHandlerOnDispose_k__BackingField(bool value);

  constexpr void __cordl_internal_set__disposeDownloadHandlerOnDispose_k__BackingField(bool value);

  constexpr void __cordl_internal_set__disposeUploadHandlerOnDispose_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_CertificateHandler(::UnityEngine::Networking::CertificateHandler* value);

  constexpr void __cordl_internal_set_m_DownloadHandler(::UnityEngine::Networking::DownloadHandler* value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_UploadHandler(::UnityEngine::Networking::UploadHandler* value);

  constexpr void __cordl_internal_set_m_Uri(::System::Uri* value);

  /// @brief Method .ctor, addr 0x4ae9b7c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* uri, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler, ::UnityEngine::Networking::UploadHandler* uploadHandler);

  /// @brief Method .ctor, addr 0x4ae964c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::StringW method);

  /// @brief Method .ctor, addr 0x4ae98d0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler, ::UnityEngine::Networking::UploadHandler* uploadHandler);

  /// @brief Method get_certificateHandler, addr 0x4ae9e7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::CertificateHandler* get_certificateHandler();

  /// @brief Method get_disposeCertificateHandlerOnDispose, addr 0x4ae94dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposeCertificateHandlerOnDispose();

  /// @brief Method get_disposeDownloadHandlerOnDispose, addr 0x4ae94f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposeDownloadHandlerOnDispose();

  /// @brief Method get_disposeUploadHandlerOnDispose, addr 0x4ae9504, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposeUploadHandlerOnDispose();

  /// @brief Method get_downloadHandler, addr 0x4ae9e6c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::DownloadHandler* get_downloadHandler();

  /// @brief Method get_downloadedBytes, addr 0x4aea7a8, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_downloadedBytes();

  /// @brief Method get_error, addr 0x4aea388, size 0x1a4, virtual false, abstract: false, final false
  inline ::StringW get_error();

  /// @brief Method get_isDone, addr 0x4aea760, size 0x48, virtual false, abstract: false, final false
  inline bool get_isDone();

  /// @brief Method get_isModifiable, addr 0x4aea04c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isModifiable();

  /// @brief Method get_method, addr 0x4aea244, size 0x108, virtual false, abstract: false, final false
  inline ::StringW get_method();

  /// @brief Method get_responseCode, addr 0x4aea568, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_responseCode();

  /// @brief Method get_result, addr 0x4aea52c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequest_Result get_result();

  /// @brief Method get_uploadHandler, addr 0x4ae9e74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UploadHandler* get_uploadHandler();

  /// @brief Method get_url, addr 0x4aea5a4, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_url();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_certificateHandler, addr 0x4aea97c, size 0x104, virtual false, abstract: false, final false
  inline void set_certificateHandler(::UnityEngine::Networking::CertificateHandler* value);

  /// @brief Method set_disposeCertificateHandlerOnDispose, addr 0x4ae94e4, size 0xc, virtual false, abstract: false, final false
  inline void set_disposeCertificateHandlerOnDispose(bool value);

  /// @brief Method set_disposeDownloadHandlerOnDispose, addr 0x4ae94f8, size 0xc, virtual false, abstract: false, final false
  inline void set_disposeDownloadHandlerOnDispose(bool value);

  /// @brief Method set_disposeUploadHandlerOnDispose, addr 0x4ae950c, size 0xc, virtual false, abstract: false, final false
  inline void set_disposeUploadHandlerOnDispose(bool value);

  /// @brief Method set_downloadHandler, addr 0x4ae9974, size 0x104, virtual false, abstract: false, final false
  inline void set_downloadHandler(::UnityEngine::Networking::DownloadHandler* value);

  /// @brief Method set_method, addr 0x4ae9750, size 0x180, virtual false, abstract: false, final false
  inline void set_method(::StringW value);

  /// @brief Method set_redirectLimit, addr 0x4aea828, size 0x44, virtual false, abstract: false, final false
  inline void set_redirectLimit(int32_t value);

  /// @brief Method set_timeout, addr 0x4aeaac4, size 0x150, virtual false, abstract: false, final false
  inline void set_timeout(int32_t value);

  /// @brief Method set_uploadHandler, addr 0x4ae9a78, size 0x104, virtual false, abstract: false, final false
  inline void set_uploadHandler(::UnityEngine::Networking::UploadHandler* value);

  /// @brief Method set_uri, addr 0x4ae9c20, size 0xe8, virtual false, abstract: false, final false
  inline void set_uri(::System::Uri* value);

  /// @brief Method set_url, addr 0x4ae96c8, size 0x88, virtual false, abstract: false, final false
  inline void set_url(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequest(UnityWebRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequest(UnityWebRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18242 };

  /// @brief Field kHttpVerbCREATE offset 0xffffffff size 0x8
  static constexpr ::ConstString kHttpVerbCREATE{ u"CREATE" };

  /// @brief Field kHttpVerbDELETE offset 0xffffffff size 0x8
  static constexpr ::ConstString kHttpVerbDELETE{ u"DELETE" };

  /// @brief Field kHttpVerbGET offset 0xffffffff size 0x8
  static constexpr ::ConstString kHttpVerbGET{ u"GET" };

  /// @brief Field kHttpVerbHEAD offset 0xffffffff size 0x8
  static constexpr ::ConstString kHttpVerbHEAD{ u"HEAD" };

  /// @brief Field kHttpVerbPOST offset 0xffffffff size 0x8
  static constexpr ::ConstString kHttpVerbPOST{ u"POST" };

  /// @brief Field kHttpVerbPUT offset 0xffffffff size 0x8
  static constexpr ::ConstString kHttpVerbPUT{ u"PUT" };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_DownloadHandler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Networking::DownloadHandler* ___m_DownloadHandler;

  /// @brief Field m_UploadHandler, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Networking::UploadHandler* ___m_UploadHandler;

  /// @brief Field m_CertificateHandler, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Networking::CertificateHandler* ___m_CertificateHandler;

  /// @brief Field m_Uri, offset: 0x30, size: 0x8, def value: None
  ::System::Uri* ___m_Uri;

  /// @brief Field <disposeCertificateHandlerOnDispose>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____disposeCertificateHandlerOnDispose_k__BackingField;

  /// @brief Field <disposeDownloadHandlerOnDispose>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____disposeDownloadHandlerOnDispose_k__BackingField;

  /// @brief Field <disposeUploadHandlerOnDispose>k__BackingField, offset: 0x3a, size: 0x1, def value: None
  bool ____disposeUploadHandlerOnDispose_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_DownloadHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_UploadHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_CertificateHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ___m_Uri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ____disposeCertificateHandlerOnDispose_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ____disposeDownloadHandlerOnDispose_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequest, ____disposeUploadHandlerOnDispose_k__BackingField) == 0x3a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequest, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Networking
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequest_Result, "UnityEngine.Networking", "UnityWebRequest/Result");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError, "UnityEngine.Networking", "UnityWebRequest/UnityWebRequestError");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod, "UnityEngine.Networking", "UnityWebRequest/UnityWebRequestMethod");
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequest*, "UnityEngine.Networking", "UnityWebRequest");
