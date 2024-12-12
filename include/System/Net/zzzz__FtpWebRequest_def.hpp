#pragma once
// IWYU pragma private; include "System/Net/FtpWebRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpWebRequest)
namespace System::IO {
class Stream;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net {
struct CloseExState;
}
namespace System::Net {
class ContextAwareResult;
}
namespace System::Net {
class FtpControlStream;
}
namespace System::Net {
class FtpMethodInfo;
}
namespace System::Net {
struct FtpWebRequest_RequestStage;
}
namespace System::Net {
struct FtpWebRequest__CreateConnectionAsync_d__86;
}
namespace System::Net {
class FtpWebRequest___c;
}
namespace System::Net {
class FtpWebResponse;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class LazyAsyncResult;
}
namespace System::Net {
class NetworkCredential;
}
namespace System::Net {
class TimerThread_Callback;
}
namespace System::Net {
class TimerThread_Queue;
}
namespace System::Net {
class TimerThread_Timer;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
struct FtpWebRequest_RequestStage;
}
namespace System::Net {
class FtpWebRequest;
}
namespace System::Net {
class FtpWebRequest___c;
}
namespace System::Net {
struct FtpWebRequest__CreateConnectionAsync_d__86;
}
// Write type traits
MARK_VAL_T(::System::Net::FtpWebRequest_RequestStage);
MARK_REF_PTR_T(::System::Net::FtpWebRequest);
MARK_REF_PTR_T(::System::Net::FtpWebRequest___c);
MARK_VAL_T(::System::Net::FtpWebRequest__CreateConnectionAsync_d__86);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.FtpWebRequest/RequestStage
struct CORDL_TYPE FtpWebRequest_RequestStage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FtpWebRequest_RequestStage_Unwrapped
  enum struct __FtpWebRequest_RequestStage_Unwrapped : int32_t {
    __E_CheckForError = static_cast<int32_t>(0x0),
    __E_RequestStarted = static_cast<int32_t>(0x1),
    __E_WriteReady = static_cast<int32_t>(0x2),
    __E_ReadReady = static_cast<int32_t>(0x3),
    __E_ReleaseConnection = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FtpWebRequest_RequestStage_Unwrapped() const noexcept {
    return static_cast<__FtpWebRequest_RequestStage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpWebRequest_RequestStage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FtpWebRequest_RequestStage(int32_t value__) noexcept;

  /// @brief Field CheckForError value: I32(0)
  static ::System::Net::FtpWebRequest_RequestStage const CheckForError;

  /// @brief Field ReadReady value: I32(3)
  static ::System::Net::FtpWebRequest_RequestStage const ReadReady;

  /// @brief Field ReleaseConnection value: I32(4)
  static ::System::Net::FtpWebRequest_RequestStage const ReleaseConnection;

  /// @brief Field RequestStarted value: I32(1)
  static ::System::Net::FtpWebRequest_RequestStage const RequestStarted;

  /// @brief Field WriteReady value: I32(2)
  static ::System::Net::FtpWebRequest_RequestStage const WriteReady;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9563 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpWebRequest_RequestStage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpWebRequest_RequestStage, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::Net {
// Is value type: true
// CS Name: System.Net.FtpWebRequest/<CreateConnectionAsync>d__86
struct CORDL_TYPE FtpWebRequest__CreateConnectionAsync_d__86 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x449c430, size 0x304, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x449c734, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpWebRequest__CreateConnectionAsync_d__86();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::FtpWebRequest*", modifiers: "", def_value: None
  // }, CppParam { name: "_client_5__2", ty: "::System::Net::Sockets::TcpClient*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr FtpWebRequest__CreateConnectionAsync_d__86(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Net::FtpWebRequest* __4__this,
                                                       ::System::Net::Sockets::TcpClient* _client_5__2,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9564 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::FtpWebRequest* __4__this;

  /// @brief Field <client>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Sockets::TcpClient* _client_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpWebRequest__CreateConnectionAsync_d__86, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest__CreateConnectionAsync_d__86, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest__CreateConnectionAsync_d__86, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest__CreateConnectionAsync_d__86, _client_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest__CreateConnectionAsync_d__86, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpWebRequest__CreateConnectionAsync_d__86, 0x48>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FtpWebRequest/<>c
class CORDL_TYPE FtpWebRequest___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Net::FtpWebRequest___c* __9;

  /// @brief Field <>9__114_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__114_0, put = setStaticF___9__114_0)) ::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>* __9__114_0;

  static inline ::System::Net::FtpWebRequest___c* New_ctor();

  /// @brief Method .ctor, addr 0x449c79c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_ClientCertificates>b__114_0, addr 0x449c7a4, size 0x54, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _get_ClientCertificates_b__114_0();

  static inline ::System::Net::FtpWebRequest___c* getStaticF___9();

  static inline ::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>* getStaticF___9__114_0();

  static inline void setStaticF___9(::System::Net::FtpWebRequest___c* value);

  static inline void setStaticF___9__114_0(::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpWebRequest___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FtpWebRequest___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpWebRequest___c(FtpWebRequest___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpWebRequest___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpWebRequest___c(FtpWebRequest___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9565 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpWebRequest___c, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.DateTime, System.Net.FtpWebRequest::RequestStage, System.Net.WebRequest
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FtpWebRequest
class CORDL_TYPE FtpWebRequest : public ::System::Net::WebRequest {
public:
  // Declarations
  using RequestStage = ::System::Net::FtpWebRequest_RequestStage;

  using _CreateConnectionAsync_d__86 = ::System::Net::FtpWebRequest__CreateConnectionAsync_d__86;

  using __c = ::System::Net::FtpWebRequest___c;

  __declspec(property(get = get_Aborted)) bool Aborted;

  __declspec(property(put = set_CachePolicy)) ::System::Net::Cache::RequestCachePolicy* CachePolicy;

  __declspec(property(get = get_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  __declspec(property(put = set_ConnectionGroupName)) ::StringW ConnectionGroupName;

  __declspec(property(get = get_ContentLength, put = set_ContentLength)) int64_t ContentLength;

  __declspec(property(get = get_ContentOffset)) int64_t ContentOffset;

  __declspec(property(get = get_Credentials, put = set_Credentials)) ::System::Net::ICredentials* Credentials;

  __declspec(property(get = get_EnableSsl)) bool EnableSsl;

  __declspec(property(get = get_Headers)) ::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_InUse)) bool InUse;

  __declspec(property(get = get_Method, put = set_Method)) ::StringW Method;

  __declspec(property(get = get_MethodInfo)) ::System::Net::FtpMethodInfo* MethodInfo;

  __declspec(property(put = set_PreAuthenticate)) bool PreAuthenticate;

  __declspec(property(get = get_Proxy, put = set_Proxy)) ::System::Net::IWebProxy* Proxy;

  __declspec(property(get = get_ReadWriteTimeout)) int32_t ReadWriteTimeout;

  __declspec(property(get = get_RemainingTimeout)) int32_t RemainingTimeout;

  __declspec(property(get = get_RenameTo)) ::StringW RenameTo;

  __declspec(property(get = get_RequestUri)) ::System::Uri* RequestUri;

  __declspec(property(get = get_Timeout, put = set_Timeout)) int32_t Timeout;

  __declspec(property(get = get_TimerQueue)) ::System::Net::TimerThread_Queue* TimerQueue;

  __declspec(property(get = get_UseBinary)) bool UseBinary;

  __declspec(property(get = get_UseDefaultCredentials)) bool UseDefaultCredentials;

  __declspec(property(get = get_UsePassive)) bool UsePassive;

  /// @brief Field _aborted, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__aborted, put = __cordl_internal_set__aborted)) bool _aborted;

  /// @brief Field _async, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__async, put = __cordl_internal_set__async)) bool _async;

  /// @brief Field _authInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__authInfo, put = __cordl_internal_set__authInfo)) ::System::Net::ICredentials* _authInfo;

  /// @brief Field _binary, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get__binary, put = __cordl_internal_set__binary)) bool _binary;

  /// @brief Field _clientCertificates, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__clientCertificates,
                      put = __cordl_internal_set__clientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _clientCertificates;

  /// @brief Field _connection, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__connection, put = __cordl_internal_set__connection)) ::System::Net::FtpControlStream* _connection;

  /// @brief Field _connectionGroupName, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__connectionGroupName, put = __cordl_internal_set__connectionGroupName)) ::StringW _connectionGroupName;

  /// @brief Field _contentLength, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__contentLength, put = __cordl_internal_set__contentLength)) int64_t _contentLength;

  /// @brief Field _contentOffset, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__contentOffset, put = __cordl_internal_set__contentOffset)) int64_t _contentOffset;

  /// @brief Field _enableSsl, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__enableSsl, put = __cordl_internal_set__enableSsl)) bool _enableSsl;

  /// @brief Field _exception, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__exception, put = __cordl_internal_set__exception)) ::System::Exception* _exception;

  /// @brief Field _ftpRequestHeaders, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__ftpRequestHeaders, put = __cordl_internal_set__ftpRequestHeaders)) ::System::Net::WebHeaderCollection* _ftpRequestHeaders;

  /// @brief Field _ftpWebResponse, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__ftpWebResponse, put = __cordl_internal_set__ftpWebResponse)) ::System::Net::FtpWebResponse* _ftpWebResponse;

  /// @brief Field _getRequestStreamStarted, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__getRequestStreamStarted, put = __cordl_internal_set__getRequestStreamStarted)) bool _getRequestStreamStarted;

  /// @brief Field _getResponseStarted, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get__getResponseStarted, put = __cordl_internal_set__getResponseStarted)) bool _getResponseStarted;

  /// @brief Field _methodInfo, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__methodInfo, put = __cordl_internal_set__methodInfo)) ::System::Net::FtpMethodInfo* _methodInfo;

  /// @brief Field _onceFailed, offset 0xdc, size 0x1
  __declspec(property(get = __cordl_internal_get__onceFailed, put = __cordl_internal_set__onceFailed)) bool _onceFailed;

  /// @brief Field _passive, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__passive, put = __cordl_internal_set__passive)) bool _passive;

  /// @brief Field _readAsyncResult, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__readAsyncResult, put = __cordl_internal_set__readAsyncResult)) ::System::Net::LazyAsyncResult* _readAsyncResult;

  /// @brief Field _readWriteTimeout, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get__readWriteTimeout, put = __cordl_internal_set__readWriteTimeout)) int32_t _readWriteTimeout;

  /// @brief Field _remainingTimeout, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__remainingTimeout, put = __cordl_internal_set__remainingTimeout)) int32_t _remainingTimeout;

  /// @brief Field _renameTo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__renameTo, put = __cordl_internal_set__renameTo)) ::StringW _renameTo;

  /// @brief Field _requestCompleteAsyncResult, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__requestCompleteAsyncResult, put = __cordl_internal_set__requestCompleteAsyncResult)) ::System::Net::LazyAsyncResult* _requestCompleteAsyncResult;

  /// @brief Field _requestStage, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get__requestStage, put = __cordl_internal_set__requestStage)) ::System::Net::FtpWebRequest_RequestStage _requestStage;

  /// @brief Field _startTime, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__startTime, put = __cordl_internal_set__startTime)) ::System::DateTime _startTime;

  /// @brief Field _stream, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__stream, put = __cordl_internal_set__stream)) ::System::IO::Stream* _stream;

  /// @brief Field _syncObject, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__syncObject, put = __cordl_internal_set__syncObject)) ::System::Object* _syncObject;

  /// @brief Field _timedOut, offset 0xa2, size 0x1
  __declspec(property(get = __cordl_internal_get__timedOut, put = __cordl_internal_set__timedOut)) bool _timedOut;

  /// @brief Field _timeout, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__timeout, put = __cordl_internal_set__timeout)) int32_t _timeout;

  /// @brief Field _timerCallback, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__timerCallback, put = __cordl_internal_set__timerCallback)) ::System::Net::TimerThread_Callback* _timerCallback;

  /// @brief Field _timerQueue, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__timerQueue, put = __cordl_internal_set__timerQueue)) ::System::Net::TimerThread_Queue* _timerQueue;

  /// @brief Field _uri, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__uri, put = __cordl_internal_set__uri)) ::System::Uri* _uri;

  /// @brief Field _writeAsyncResult, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__writeAsyncResult, put = __cordl_internal_set__writeAsyncResult)) ::System::Net::ContextAwareResult* _writeAsyncResult;

  /// @brief Field s_DefaultTimerQueue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultTimerQueue, put = setStaticF_s_DefaultTimerQueue)) ::System::Net::TimerThread_Queue* s_DefaultTimerQueue;

  /// @brief Field s_defaultFtpNetworkCredential, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultFtpNetworkCredential, put = setStaticF_s_defaultFtpNetworkCredential)) ::System::Net::NetworkCredential* s_defaultFtpNetworkCredential;

  /// @brief Method Abort, addr 0x449b7f0, size 0x4b8, virtual true, abstract: false, final false
  inline void Abort();

  /// @brief Method AsyncRequestCallback, addr 0x449a9e4, size 0xa44, virtual false, abstract: false, final false
  inline void AsyncRequestCallback(::System::Object* obj);

  /// @brief Method AttemptedRecovery, addr 0x4499b04, size 0x278, virtual false, abstract: false, final false
  inline bool AttemptedRecovery(::System::Exception* e);

  /// @brief Method BeginGetRequestStream, addr 0x4498aac, size 0x56c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginGetResponse, addr 0x4497f70, size 0x6f8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method CheckError, addr 0x4496cac, size 0x14, virtual false, abstract: false, final false
  inline void CheckError();

  /// @brief Method CreateConnection, addr 0x4499538, size 0x168, virtual false, abstract: false, final false
  inline ::System::Net::FtpControlStream* CreateConnection();

  /// @brief Method CreateConnectionAsync, addr 0x44994a8, size 0x90, virtual false, abstract: false, final false
  inline void CreateConnectionAsync();

  /// @brief Method DataStreamClosed, addr 0x449c1e8, size 0x80, virtual false, abstract: false, final false
  inline void DataStreamClosed(::System::Net::CloseExState closeState);

  /// @brief Method EndGetRequestStream, addr 0x4499020, size 0x488, virtual true, abstract: false, final false
  inline ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult);

  /// @brief Method EndGetResponse, addr 0x449868c, size 0x420, virtual true, abstract: false, final false
  inline ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult);

  /// @brief Method EnsureFtpWebResponse, addr 0x449774c, size 0x4c0, virtual false, abstract: false, final false
  inline void EnsureFtpWebResponse(::System::Exception* exception);

  /// @brief Method FinishRequestStage, addr 0x4496d38, size 0x448, virtual false, abstract: false, final false
  inline ::System::Net::FtpWebRequest_RequestStage FinishRequestStage(::System::Net::FtpWebRequest_RequestStage stage);

  /// @brief Method GetResponse, addr 0x44964ec, size 0x7c0, virtual true, abstract: false, final false
  inline ::System::Net::WebResponse* GetResponse();

  static inline ::System::Net::FtpWebRequest* New_ctor(::System::Uri* uri);

  /// @brief Method RequestCallback, addr 0x449a9d4, size 0x10, virtual false, abstract: false, final false
  inline void RequestCallback(::System::Object* obj);

  /// @brief Method SetException, addr 0x4497c0c, size 0x364, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* exception);

  /// @brief Method SubmitRequest, addr 0x4497218, size 0x534, virtual false, abstract: false, final false
  inline void SubmitRequest(bool isAsync);

  /// @brief Method SyncRequestCallback, addr 0x449b428, size 0x3c8, virtual false, abstract: false, final false
  inline void SyncRequestCallback(::System::Object* obj);

  /// @brief Method TimedSubmitRequestHelper, addr 0x44996f0, size 0x414, virtual false, abstract: false, final false
  inline ::System::IO::Stream* TimedSubmitRequestHelper(bool isAsync);

  /// @brief Method TimerCallback, addr 0x4499f00, size 0x110, virtual false, abstract: false, final false
  inline void TimerCallback(::System::Net::TimerThread_Timer* timer, int32_t timeNoticed, ::System::Object* context);

  /// @brief Method TranslateConnectException, addr 0x4499d90, size 0x100, virtual false, abstract: false, final false
  inline ::System::Exception* TranslateConnectException(::System::Exception* e);

  constexpr bool const& __cordl_internal_get__aborted() const;

  constexpr bool& __cordl_internal_get__aborted();

  constexpr bool const& __cordl_internal_get__async() const;

  constexpr bool& __cordl_internal_get__async();

  constexpr ::System::Net::ICredentials* const& __cordl_internal_get__authInfo() const;

  constexpr ::System::Net::ICredentials*& __cordl_internal_get__authInfo();

  constexpr bool const& __cordl_internal_get__binary() const;

  constexpr bool& __cordl_internal_get__binary();

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& __cordl_internal_get__clientCertificates() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get__clientCertificates();

  constexpr ::System::Net::FtpControlStream* const& __cordl_internal_get__connection() const;

  constexpr ::System::Net::FtpControlStream*& __cordl_internal_get__connection();

  constexpr ::StringW const& __cordl_internal_get__connectionGroupName() const;

  constexpr ::StringW& __cordl_internal_get__connectionGroupName();

  constexpr int64_t const& __cordl_internal_get__contentLength() const;

  constexpr int64_t& __cordl_internal_get__contentLength();

  constexpr int64_t const& __cordl_internal_get__contentOffset() const;

  constexpr int64_t& __cordl_internal_get__contentOffset();

  constexpr bool const& __cordl_internal_get__enableSsl() const;

  constexpr bool& __cordl_internal_get__enableSsl();

  constexpr ::System::Exception* const& __cordl_internal_get__exception() const;

  constexpr ::System::Exception*& __cordl_internal_get__exception();

  constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__ftpRequestHeaders() const;

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__ftpRequestHeaders();

  constexpr ::System::Net::FtpWebResponse* const& __cordl_internal_get__ftpWebResponse() const;

  constexpr ::System::Net::FtpWebResponse*& __cordl_internal_get__ftpWebResponse();

  constexpr bool const& __cordl_internal_get__getRequestStreamStarted() const;

  constexpr bool& __cordl_internal_get__getRequestStreamStarted();

  constexpr bool const& __cordl_internal_get__getResponseStarted() const;

  constexpr bool& __cordl_internal_get__getResponseStarted();

  constexpr ::System::Net::FtpMethodInfo* const& __cordl_internal_get__methodInfo() const;

  constexpr ::System::Net::FtpMethodInfo*& __cordl_internal_get__methodInfo();

  constexpr bool const& __cordl_internal_get__onceFailed() const;

  constexpr bool& __cordl_internal_get__onceFailed();

  constexpr bool const& __cordl_internal_get__passive() const;

  constexpr bool& __cordl_internal_get__passive();

  constexpr ::System::Net::LazyAsyncResult* const& __cordl_internal_get__readAsyncResult() const;

  constexpr ::System::Net::LazyAsyncResult*& __cordl_internal_get__readAsyncResult();

  constexpr int32_t const& __cordl_internal_get__readWriteTimeout() const;

  constexpr int32_t& __cordl_internal_get__readWriteTimeout();

  constexpr int32_t const& __cordl_internal_get__remainingTimeout() const;

  constexpr int32_t& __cordl_internal_get__remainingTimeout();

  constexpr ::StringW const& __cordl_internal_get__renameTo() const;

  constexpr ::StringW& __cordl_internal_get__renameTo();

  constexpr ::System::Net::LazyAsyncResult* const& __cordl_internal_get__requestCompleteAsyncResult() const;

  constexpr ::System::Net::LazyAsyncResult*& __cordl_internal_get__requestCompleteAsyncResult();

  constexpr ::System::Net::FtpWebRequest_RequestStage const& __cordl_internal_get__requestStage() const;

  constexpr ::System::Net::FtpWebRequest_RequestStage& __cordl_internal_get__requestStage();

  constexpr ::System::DateTime const& __cordl_internal_get__startTime() const;

  constexpr ::System::DateTime& __cordl_internal_get__startTime();

  constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__stream();

  constexpr ::System::Object* const& __cordl_internal_get__syncObject() const;

  constexpr ::System::Object*& __cordl_internal_get__syncObject();

  constexpr bool const& __cordl_internal_get__timedOut() const;

  constexpr bool& __cordl_internal_get__timedOut();

  constexpr int32_t const& __cordl_internal_get__timeout() const;

  constexpr int32_t& __cordl_internal_get__timeout();

  constexpr ::System::Net::TimerThread_Callback* const& __cordl_internal_get__timerCallback() const;

  constexpr ::System::Net::TimerThread_Callback*& __cordl_internal_get__timerCallback();

  constexpr ::System::Net::TimerThread_Queue* const& __cordl_internal_get__timerQueue() const;

  constexpr ::System::Net::TimerThread_Queue*& __cordl_internal_get__timerQueue();

  constexpr ::System::Uri* const& __cordl_internal_get__uri() const;

  constexpr ::System::Uri*& __cordl_internal_get__uri();

  constexpr ::System::Net::ContextAwareResult* const& __cordl_internal_get__writeAsyncResult() const;

  constexpr ::System::Net::ContextAwareResult*& __cordl_internal_get__writeAsyncResult();

  constexpr void __cordl_internal_set__aborted(bool value);

  constexpr void __cordl_internal_set__async(bool value);

  constexpr void __cordl_internal_set__authInfo(::System::Net::ICredentials* value);

  constexpr void __cordl_internal_set__binary(bool value);

  constexpr void __cordl_internal_set__clientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  constexpr void __cordl_internal_set__connection(::System::Net::FtpControlStream* value);

  constexpr void __cordl_internal_set__connectionGroupName(::StringW value);

  constexpr void __cordl_internal_set__contentLength(int64_t value);

  constexpr void __cordl_internal_set__contentOffset(int64_t value);

  constexpr void __cordl_internal_set__enableSsl(bool value);

  constexpr void __cordl_internal_set__exception(::System::Exception* value);

  constexpr void __cordl_internal_set__ftpRequestHeaders(::System::Net::WebHeaderCollection* value);

  constexpr void __cordl_internal_set__ftpWebResponse(::System::Net::FtpWebResponse* value);

  constexpr void __cordl_internal_set__getRequestStreamStarted(bool value);

  constexpr void __cordl_internal_set__getResponseStarted(bool value);

  constexpr void __cordl_internal_set__methodInfo(::System::Net::FtpMethodInfo* value);

  constexpr void __cordl_internal_set__onceFailed(bool value);

  constexpr void __cordl_internal_set__passive(bool value);

  constexpr void __cordl_internal_set__readAsyncResult(::System::Net::LazyAsyncResult* value);

  constexpr void __cordl_internal_set__readWriteTimeout(int32_t value);

  constexpr void __cordl_internal_set__remainingTimeout(int32_t value);

  constexpr void __cordl_internal_set__renameTo(::StringW value);

  constexpr void __cordl_internal_set__requestCompleteAsyncResult(::System::Net::LazyAsyncResult* value);

  constexpr void __cordl_internal_set__requestStage(::System::Net::FtpWebRequest_RequestStage value);

  constexpr void __cordl_internal_set__startTime(::System::DateTime value);

  constexpr void __cordl_internal_set__stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__syncObject(::System::Object* value);

  constexpr void __cordl_internal_set__timedOut(bool value);

  constexpr void __cordl_internal_set__timeout(int32_t value);

  constexpr void __cordl_internal_set__timerCallback(::System::Net::TimerThread_Callback* value);

  constexpr void __cordl_internal_set__timerQueue(::System::Net::TimerThread_Queue* value);

  constexpr void __cordl_internal_set__uri(::System::Uri* value);

  constexpr void __cordl_internal_set__writeAsyncResult(::System::Net::ContextAwareResult* value);

  /// @brief Method .ctor, addr 0x4495f94, size 0x3c8, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* uri);

  static inline ::System::Net::TimerThread_Queue* getStaticF_s_DefaultTimerQueue();

  static inline ::System::Net::NetworkCredential* getStaticF_s_defaultFtpNetworkCredential();

  /// @brief Method get_Aborted, addr 0x4495f8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Aborted();

  /// @brief Method get_ClientCertificates, addr 0x449bda8, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method get_ContentLength, addr 0x4495ea8, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_ContentLength();

  /// @brief Method get_ContentOffset, addr 0x4495ea0, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_ContentOffset();

  /// @brief Method get_Credentials, addr 0x4495c64, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::ICredentials* get_Credentials();

  /// @brief Method get_EnableSsl, addr 0x449be9c, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableSsl();

  /// @brief Method get_Headers, addr 0x449bea4, size 0x60, virtual true, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_InUse, addr 0x4495c44, size 0x18, virtual false, abstract: false, final false
  inline bool get_InUse();

  /// @brief Method get_Method, addr 0x4495a84, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Method();

  /// @brief Method get_MethodInfo, addr 0x4495a7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::FtpMethodInfo* get_MethodInfo();

  /// @brief Method get_Proxy, addr 0x4495eb8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::IWebProxy* get_Proxy();

  /// @brief Method get_ReadWriteTimeout, addr 0x4495e98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ReadWriteTimeout();

  /// @brief Method get_RemainingTimeout, addr 0x4495e90, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RemainingTimeout();

  /// @brief Method get_RenameTo, addr 0x4495c5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RenameTo();

  /// @brief Method get_RequestUri, addr 0x4495db0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Uri* get_RequestUri();

  /// @brief Method get_Timeout, addr 0x4495db8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Timeout();

  /// @brief Method get_TimerQueue, addr 0x4499e90, size 0x68, virtual false, abstract: false, final false
  inline ::System::Net::TimerThread_Queue* get_TimerQueue();

  /// @brief Method get_UseBinary, addr 0x449bd98, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseBinary();

  /// @brief Method get_UseDefaultCredentials, addr 0x449bf68, size 0x24, virtual true, abstract: false, final false
  inline bool get_UseDefaultCredentials();

  /// @brief Method get_UsePassive, addr 0x449bda0, size 0x8, virtual false, abstract: false, final false
  inline bool get_UsePassive();

  static inline void setStaticF_s_DefaultTimerQueue(::System::Net::TimerThread_Queue* value);

  static inline void setStaticF_s_defaultFtpNetworkCredential(::System::Net::NetworkCredential* value);

  /// @brief Method set_CachePolicy, addr 0x449bd34, size 0x64, virtual true, abstract: false, final false
  inline void set_CachePolicy(::System::Net::Cache::RequestCachePolicy* value);

  /// @brief Method set_ConnectionGroupName, addr 0x4495f24, size 0x68, virtual true, abstract: false, final false
  inline void set_ConnectionGroupName(::StringW value);

  /// @brief Method set_ContentLength, addr 0x4495eb0, size 0x8, virtual true, abstract: false, final false
  inline void set_ContentLength(int64_t value);

  /// @brief Method set_Credentials, addr 0x4495c6c, size 0x144, virtual true, abstract: false, final false
  inline void set_Credentials(::System::Net::ICredentials* value);

  /// @brief Method set_Method, addr 0x4495aa0, size 0x1a4, virtual true, abstract: false, final false
  inline void set_Method(::StringW value);

  /// @brief Method set_PreAuthenticate, addr 0x449c00c, size 0x24, virtual true, abstract: false, final false
  inline void set_PreAuthenticate(bool value);

  /// @brief Method set_Proxy, addr 0x4495ec0, size 0x64, virtual true, abstract: false, final false
  inline void set_Proxy(::System::Net::IWebProxy* value);

  /// @brief Method set_Timeout, addr 0x4495dc0, size 0xd0, virtual true, abstract: false, final false
  inline void set_Timeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpWebRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FtpWebRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpWebRequest(FtpWebRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpWebRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpWebRequest(FtpWebRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9566 };

  /// @brief Field _syncObject, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____syncObject;

  /// @brief Field _authInfo, offset: 0x40, size: 0x8, def value: None
  ::System::Net::ICredentials* ____authInfo;

  /// @brief Field _uri, offset: 0x48, size: 0x8, def value: None
  ::System::Uri* ____uri;

  /// @brief Field _methodInfo, offset: 0x50, size: 0x8, def value: None
  ::System::Net::FtpMethodInfo* ____methodInfo;

  /// @brief Field _renameTo, offset: 0x58, size: 0x8, def value: None
  ::StringW ____renameTo;

  /// @brief Field _getRequestStreamStarted, offset: 0x60, size: 0x1, def value: None
  bool ____getRequestStreamStarted;

  /// @brief Field _getResponseStarted, offset: 0x61, size: 0x1, def value: None
  bool ____getResponseStarted;

  /// @brief Field _startTime, offset: 0x68, size: 0x8, def value: None
  ::System::DateTime ____startTime;

  /// @brief Field _timeout, offset: 0x70, size: 0x4, def value: None
  int32_t ____timeout;

  /// @brief Field _remainingTimeout, offset: 0x74, size: 0x4, def value: None
  int32_t ____remainingTimeout;

  /// @brief Field _contentLength, offset: 0x78, size: 0x8, def value: None
  int64_t ____contentLength;

  /// @brief Field _contentOffset, offset: 0x80, size: 0x8, def value: None
  int64_t ____contentOffset;

  /// @brief Field _clientCertificates, offset: 0x88, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ____clientCertificates;

  /// @brief Field _passive, offset: 0x90, size: 0x1, def value: None
  bool ____passive;

  /// @brief Field _binary, offset: 0x91, size: 0x1, def value: None
  bool ____binary;

  /// @brief Field _connectionGroupName, offset: 0x98, size: 0x8, def value: None
  ::StringW ____connectionGroupName;

  /// @brief Field _async, offset: 0xa0, size: 0x1, def value: None
  bool ____async;

  /// @brief Field _aborted, offset: 0xa1, size: 0x1, def value: None
  bool ____aborted;

  /// @brief Field _timedOut, offset: 0xa2, size: 0x1, def value: None
  bool ____timedOut;

  /// @brief Field _exception, offset: 0xa8, size: 0x8, def value: None
  ::System::Exception* ____exception;

  /// @brief Field _timerQueue, offset: 0xb0, size: 0x8, def value: None
  ::System::Net::TimerThread_Queue* ____timerQueue;

  /// @brief Field _timerCallback, offset: 0xb8, size: 0x8, def value: None
  ::System::Net::TimerThread_Callback* ____timerCallback;

  /// @brief Field _enableSsl, offset: 0xc0, size: 0x1, def value: None
  bool ____enableSsl;

  /// @brief Field _connection, offset: 0xc8, size: 0x8, def value: None
  ::System::Net::FtpControlStream* ____connection;

  /// @brief Field _stream, offset: 0xd0, size: 0x8, def value: None
  ::System::IO::Stream* ____stream;

  /// @brief Field _requestStage, offset: 0xd8, size: 0x4, def value: None
  ::System::Net::FtpWebRequest_RequestStage ____requestStage;

  /// @brief Field _onceFailed, offset: 0xdc, size: 0x1, def value: None
  bool ____onceFailed;

  /// @brief Field _ftpRequestHeaders, offset: 0xe0, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ____ftpRequestHeaders;

  /// @brief Field _ftpWebResponse, offset: 0xe8, size: 0x8, def value: None
  ::System::Net::FtpWebResponse* ____ftpWebResponse;

  /// @brief Field _readWriteTimeout, offset: 0xf0, size: 0x4, def value: None
  int32_t ____readWriteTimeout;

  /// @brief Field _writeAsyncResult, offset: 0xf8, size: 0x8, def value: None
  ::System::Net::ContextAwareResult* ____writeAsyncResult;

  /// @brief Field _readAsyncResult, offset: 0x100, size: 0x8, def value: None
  ::System::Net::LazyAsyncResult* ____readAsyncResult;

  /// @brief Field _requestCompleteAsyncResult, offset: 0x108, size: 0x8, def value: None
  ::System::Net::LazyAsyncResult* ____requestCompleteAsyncResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpWebRequest, ____syncObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____authInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____uri) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____methodInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____renameTo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____getRequestStreamStarted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____getResponseStarted) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____startTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____timeout) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____remainingTimeout) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____contentLength) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____contentOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____clientCertificates) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____passive) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____binary) == 0x91, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____connectionGroupName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____async) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____aborted) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____timedOut) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____exception) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____timerQueue) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____timerCallback) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____enableSsl) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____connection) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____stream) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____requestStage) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____onceFailed) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____ftpRequestHeaders) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____ftpWebResponse) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____readWriteTimeout) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____writeAsyncResult) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____readAsyncResult) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpWebRequest, ____requestCompleteAsyncResult) == 0x108, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpWebRequest, 0x110>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebRequest_RequestStage, "System.Net", "FtpWebRequest/RequestStage");
NEED_NO_BOX(::System::Net::FtpWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebRequest*, "System.Net", "FtpWebRequest");
NEED_NO_BOX(::System::Net::FtpWebRequest___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebRequest___c*, "System.Net", "FtpWebRequest/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebRequest__CreateConnectionAsync_d__86, "System.Net", "FtpWebRequest/<CreateConnectionAsync>d__86");
