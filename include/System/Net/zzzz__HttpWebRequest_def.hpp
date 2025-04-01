#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__DecompressionMethods_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebRequest)
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class CookieContainer;
}
namespace System::Net {
struct DecompressionMethods;
}
namespace System::Net {
class HttpContinueDelegate;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
struct HttpWebRequest_AuthorizationState;
}
namespace System::Net {
struct HttpWebRequest_NtlmAuthState;
}
namespace System::Net {
struct HttpWebRequest__GetResponseFromData_d__244;
}
namespace System::Net {
struct HttpWebRequest__MyGetResponseAsync_d__243;
}
namespace System::Net {
template <typename T> struct HttpWebRequest__RunWithTimeoutWorker_d__241_1;
}
namespace System::Net {
struct HttpWebRequest___GetRewriteHandler_b__271_0_d;
}
namespace System::Net {
template <typename T> class HttpWebRequest___c__241_1;
}
namespace System::Net {
class HttpWebResponse;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
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
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> struct ValueTuple_4;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5> struct ValueTuple_5;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
struct HttpWebRequest_NtlmAuthState;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
template <typename T> class HttpWebRequest___c__241_1;
}
namespace System::Net {
struct HttpWebRequest_AuthorizationState;
}
namespace System::Net {
struct HttpWebRequest__GetResponseFromData_d__244;
}
namespace System::Net {
struct HttpWebRequest__MyGetResponseAsync_d__243;
}
namespace System::Net {
template <typename T> struct HttpWebRequest__RunWithTimeoutWorker_d__241_1;
}
namespace System::Net {
struct HttpWebRequest___GetRewriteHandler_b__271_0_d;
}
// Write type traits
MARK_VAL_T(::System::Net::HttpWebRequest_NtlmAuthState);
MARK_REF_PTR_T(::System::Net::HttpWebRequest);
MARK_GEN_REF_PTR_T(::System::Net::HttpWebRequest___c__241_1);
MARK_VAL_T(::System::Net::HttpWebRequest_AuthorizationState);
MARK_VAL_T(::System::Net::HttpWebRequest__GetResponseFromData_d__244);
MARK_VAL_T(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243);
MARK_GEN_VAL_T(::System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1);
MARK_VAL_T(::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpWebRequest/NtlmAuthState
struct CORDL_TYPE HttpWebRequest_NtlmAuthState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpWebRequest_NtlmAuthState_Unwrapped
  enum struct __HttpWebRequest_NtlmAuthState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Challenge = static_cast<int32_t>(0x1),
    __E_Response = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpWebRequest_NtlmAuthState_Unwrapped() const noexcept {
    return static_cast<__HttpWebRequest_NtlmAuthState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequest_NtlmAuthState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpWebRequest_NtlmAuthState(int32_t value__) noexcept;

  /// @brief Field Challenge value: I32(1)
  static ::System::Net::HttpWebRequest_NtlmAuthState const Challenge;

  /// @brief Field None value: I32(0)
  static ::System::Net::HttpWebRequest_NtlmAuthState const None;

  /// @brief Field Response value: I32(2)
  static ::System::Net::HttpWebRequest_NtlmAuthState const Response;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9700 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpWebRequest_NtlmAuthState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpWebRequest_NtlmAuthState, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.HttpWebRequest::NtlmAuthState
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpWebRequest/AuthorizationState
struct CORDL_TYPE HttpWebRequest_AuthorizationState {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_IsNtlmAuthenticated)) bool IsNtlmAuthenticated;

  __declspec(property(get = get_NtlmAuthState)) ::System::Net::HttpWebRequest_NtlmAuthState NtlmAuthState;

  /// @brief Method CheckAuthorization, addr 0x43c8418, size 0x31c, virtual false, abstract: false, final false
  inline bool CheckAuthorization(::System::Net::WebResponse* response, ::System::Net::HttpStatusCode code);

  /// @brief Method Reset, addr 0x43c8dd8, size 0x84, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x43c8fa0, size 0x100, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x43c46c8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::HttpWebRequest* request, bool isProxy);

  /// @brief Method get_IsCompleted, addr 0x43c8f70, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method get_IsNtlmAuthenticated, addr 0x43c8f80, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsNtlmAuthenticated();

  /// @brief Method get_NtlmAuthState, addr 0x43c8f78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpWebRequest_NtlmAuthState get_NtlmAuthState();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequest_AuthorizationState();

  // Ctor Parameters [CppParam { name: "request", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: None }, CppParam { name: "isProxy", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "isCompleted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ntlm_auth_state", ty: "::System::Net::HttpWebRequest_NtlmAuthState", modifiers: "", def_value: None
  // }]
  constexpr HttpWebRequest_AuthorizationState(::System::Net::HttpWebRequest* request, bool isProxy, bool isCompleted, ::System::Net::HttpWebRequest_NtlmAuthState ntlm_auth_state) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9701 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field request, offset: 0x0, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* request;

  /// @brief Field isProxy, offset: 0x8, size: 0x1, def value: None
  bool isProxy;

  /// @brief Field isCompleted, offset: 0x9, size: 0x1, def value: None
  bool isCompleted;

  /// @brief Field ntlm_auth_state, offset: 0xc, size: 0x4, def value: None
  ::System::Net::HttpWebRequest_NtlmAuthState ntlm_auth_state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpWebRequest_AuthorizationState, request) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest_AuthorizationState, isProxy) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest_AuthorizationState, isCompleted) == 0x9, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest_AuthorizationState, ntlm_auth_state) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpWebRequest_AuthorizationState, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Net.HttpWebRequest/<>c__241`1<T>
class CORDL_TYPE HttpWebRequest___c__241_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Net::HttpWebRequest___c__241_1<T>* __9;

  /// @brief Field <>9__241_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__241_0, put = setStaticF___9__241_0)) ::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>* __9__241_0;

  static inline ::System::Net::HttpWebRequest___c__241_1<T>* New_ctor();

  /// @brief Method <RunWithTimeoutWorker>b__241_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> _RunWithTimeoutWorker_b__241_0(::System::Threading::Tasks::Task_1<T>* t);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::HttpWebRequest___c__241_1<T>* getStaticF___9();

  static inline ::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>* getStaticF___9__241_0();

  static inline void setStaticF___9(::System::Net::HttpWebRequest___c__241_1<T>* value);

  static inline void setStaticF___9__241_0(::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequest___c__241_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest___c__241_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpWebRequest___c__241_1(HttpWebRequest___c__241_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest___c__241_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpWebRequest___c__241_1(HttpWebRequest___c__241_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9702 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::Net {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Net.HttpWebRequest/<RunWithTimeoutWorker>d__241`1<T>
struct CORDL_TYPE HttpWebRequest__RunWithTimeoutWorker_d__241_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequest__RunWithTimeoutWorker_d__241_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "",
  // def_value: None }, CppParam { name: "timeout", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cts", ty: "::System::Threading::CancellationTokenSource*", modifiers: "",
  // def_value: None }, CppParam { name: "abort", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "aborted", ty: "::System::Func_1<bool>*", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr HttpWebRequest__RunWithTimeoutWorker_d__241_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                          ::System::Threading::Tasks::Task_1<T>* workerTask, int32_t timeout, ::System::Threading::CancellationTokenSource* cts,
                                                          ::System::Action* abort, ::System::Func_1<bool>* aborted,
                                                          ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9703 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field workerTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<T>* workerTask;

  /// @brief Field timeout, offset: 0x28, size: 0x4, def value: None
  int32_t timeout;

  /// @brief Field cts, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* cts;

  /// @brief Field abort, offset: 0x38, size: 0x8, def value: None
  ::System::Action* abort;

  /// @brief Field aborted, offset: 0x40, size: 0x8, def value: None
  ::System::Func_1<bool>* aborted;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, System.ValueTuple`5<T1, T2, T3, T4, T5>
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpWebRequest/<MyGetResponseAsync>d__243
struct CORDL_TYPE HttpWebRequest__MyGetResponseAsync_d__243 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43c90a0, size 0xed8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43c9fc4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequest__MyGetResponseAsync_d__243();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::System::Net::HttpWebRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam
  // { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None }, CppParam { name: "_operation_5__3", ty: "::System::Net::WebOperation*", modifiers: "",
  // def_value: None }, CppParam { name: "_throwMe_5__4", ty: "::System::Net::WebException*", modifiers: "", def_value: None }, CppParam { name: "_response_5__5", ty:
  // "::System::Net::HttpWebResponse*", modifiers: "", def_value: None }, CppParam { name: "_stream_5__6", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam { name:
  // "_redirect_5__7", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_mustReadAll_5__8", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ntlm_5__9", ty:
  // "::System::Net::WebOperation*", modifiers: "", def_value: None }, CppParam { name: "_writeBuffer_5__10", ty: "::System::Net::BufferOffsetSize*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>",
  // modifiers: "", def_value: None }]
  constexpr HttpWebRequest__MyGetResponseAsync_d__243(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*> __t__builder,
                                                      ::System::Net::HttpWebRequest* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                      ::System::Net::WebCompletionSource* _completion_5__2, ::System::Net::WebOperation* _operation_5__3, ::System::Net::WebException* _throwMe_5__4,
                                                      ::System::Net::HttpWebResponse* _response_5__5, ::System::Net::WebResponseStream* _stream_5__6, bool _redirect_5__7, bool _mustReadAll_5__8,
                                                      ::System::Net::WebOperation* _ntlm_5__9, ::System::Net::BufferOffsetSize* _writeBuffer_5__10,
                                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1,
                                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*> __u__3,
                                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<
                                                          ::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>
                                                          __u__4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9704 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <completion>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::WebCompletionSource* _completion_5__2;

  /// @brief Field <operation>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebOperation* _operation_5__3;

  /// @brief Field <throwMe>5__4, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebException* _throwMe_5__4;

  /// @brief Field <response>5__5, offset: 0x48, size: 0x8, def value: None
  ::System::Net::HttpWebResponse* _response_5__5;

  /// @brief Field <stream>5__6, offset: 0x50, size: 0x8, def value: None
  ::System::Net::WebResponseStream* _stream_5__6;

  /// @brief Field <redirect>5__7, offset: 0x58, size: 0x1, def value: None
  bool _redirect_5__7;

  /// @brief Field <mustReadAll>5__8, offset: 0x59, size: 0x1, def value: None
  bool _mustReadAll_5__8;

  /// @brief Field <ntlm>5__9, offset: 0x60, size: 0x8, def value: None
  ::System::Net::WebOperation* _ntlm_5__9;

  /// @brief Field <writeBuffer>5__10, offset: 0x68, size: 0x8, def value: None
  ::System::Net::BufferOffsetSize* _writeBuffer_5__10;

  /// @brief Field <>u__1, offset: 0x70, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1;

  /// @brief Field <>u__2, offset: 0x80, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x90, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*> __u__3;

  /// @brief Field <>u__4, offset: 0x98, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<
      ::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>
      __u__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, _completion_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, _operation_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, _throwMe_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, _response_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, _stream_5__6) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, _redirect_5__7) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, _mustReadAll_5__8) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, _ntlm_5__9) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, _writeBuffer_5__10) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, __u__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, __u__3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, __u__4) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, 0xa8>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken,
// System.ValueTuple`5<T1, T2, T3, T4, T5>
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpWebRequest/<GetResponseFromData>d__244
struct CORDL_TYPE HttpWebRequest__GetResponseFromData_d__244 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43ca040, size 0x7d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43caaf4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequest__GetResponseFromData_d__244();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: None }, CppParam { name: "stream", ty:
  // "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "_response_5__2", ty: "::System::Net::HttpWebResponse*", modifiers: "", def_value: None }, CppParam { name: "_throwMe_5__3", ty: "::System::Net::WebException*", modifiers: "",
  // def_value: None }, CppParam { name: "_redirect_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_mustReadAll_5__5", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*>", modifiers: "", def_value: None }]
  constexpr HttpWebRequest__GetResponseFromData_d__244(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>
          __t__builder,
      ::System::Net::HttpWebRequest* __4__this, ::System::Net::WebResponseStream* stream, ::System::Threading::CancellationToken cancellationToken, ::System::Net::HttpWebResponse* _response_5__2,
      ::System::Net::WebException* _throwMe_5__3, bool _redirect_5__4, bool _mustReadAll_5__5, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9705 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>
      __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* __4__this;

  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::Net::WebResponseStream* stream;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <response>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Net::HttpWebResponse* _response_5__2;

  /// @brief Field <throwMe>5__3, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebException* _throwMe_5__3;

  /// @brief Field <redirect>5__4, offset: 0x48, size: 0x1, def value: None
  bool _redirect_5__4;

  /// @brief Field <mustReadAll>5__5, offset: 0x49, size: 0x1, def value: None
  bool _mustReadAll_5__5;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, _response_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, _throwMe_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, _redirect_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, _mustReadAll_5__5) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest__GetResponseFromData_d__244, __u__2) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpWebRequest__GetResponseFromData_d__244, 0x70>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpWebRequest/<<GetRewriteHandler>b__271_0>d
struct CORDL_TYPE HttpWebRequest___GetRewriteHandler_b__271_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43cab70, size 0x458, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43cafc8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequest___GetRewriteHandler_b__271_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::System::Net::HttpWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_ms_5__2", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr HttpWebRequest___GetRewriteHandler_b__271_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*> __t__builder,
                                                          ::System::Net::HttpWebRequest* __4__this, ::System::IO::MemoryStream* _ms_5__2,
                                                          ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9706 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* __4__this;

  /// @brief Field <ms>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::IO::MemoryStream* _ms_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d, _ms_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d, 0x40>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Net.DecompressionMethods, System.Net.HttpWebRequest::AuthorizationState, System.Net.WebRequest, System.Runtime.Serialization.ISerializable
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpWebRequest
class CORDL_TYPE HttpWebRequest : public ::System::Net::WebRequest {
public:
  // Declarations
  using AuthorizationState = ::System::Net::HttpWebRequest_AuthorizationState;

  using NtlmAuthState = ::System::Net::HttpWebRequest_NtlmAuthState;

  using _GetResponseFromData_d__244 = ::System::Net::HttpWebRequest__GetResponseFromData_d__244;

  using _MyGetResponseAsync_d__243 = ::System::Net::HttpWebRequest__MyGetResponseAsync_d__243;

  template <typename T> using _RunWithTimeoutWorker_d__241_1 = ::System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>;

  using __GetRewriteHandler_b__271_0_d = ::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d;

  template <typename T> using __c__241_1 = ::System::Net::HttpWebRequest___c__241_1<T>;

  __declspec(property(get = get_Aborted)) bool Aborted;

  __declspec(property(get = get_Address)) ::System::Uri* Address;

  __declspec(property(put = set_AllowAutoRedirect)) bool AllowAutoRedirect;

  __declspec(property(get = get_AllowWriteStreamBuffering, put = set_AllowWriteStreamBuffering)) bool AllowWriteStreamBuffering;

  __declspec(property(get = get_AuthUri)) ::System::Uri* AuthUri;

  __declspec(property(get = get_AutomaticDecompression, put = set_AutomaticDecompression)) ::System::Net::DecompressionMethods AutomaticDecompression;

  __declspec(property(get = get_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  __declspec(property(put = set_ConnectionGroupName)) ::StringW ConnectionGroupName;

  __declspec(property(get = get_ContentLength, put = set_ContentLength)) int64_t ContentLength;

  __declspec(property(put = set_CookieContainer)) ::System::Net::CookieContainer* CookieContainer;

  __declspec(property(get = get_Credentials, put = set_Credentials)) ::System::Net::ICredentials* Credentials;

  __declspec(property(get = get_ExpectContinue, put = set_ExpectContinue)) bool ExpectContinue;

  __declspec(property(put = set_FinishedReading)) bool FinishedReading;

  __declspec(property(get = get_Headers)) ::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_Host, put = set_Host)) ::StringW Host;

  __declspec(property(get = get_InternalAllowBuffering)) bool InternalAllowBuffering;

  __declspec(property(put = set_InternalContentLength)) int64_t InternalContentLength;

  __declspec(property(get = get_KeepAlive, put = set_KeepAlive)) bool KeepAlive;

  __declspec(property(put = set_MaximumAutomaticRedirections)) int32_t MaximumAutomaticRedirections;

  __declspec(property(get = get_Method, put = set_Method)) ::StringW Method;

  __declspec(property(get = get_MethodWithBuffer)) bool MethodWithBuffer;

  __declspec(property(put = set_PreAuthenticate)) bool PreAuthenticate;

  __declspec(property(get = get_ProtocolVersion, put = set_ProtocolVersion)) ::System::Version* ProtocolVersion;

  __declspec(property(get = get_Proxy, put = set_Proxy)) ::System::Net::IWebProxy* Proxy;

  __declspec(property(get = get_ProxyQuery)) bool ProxyQuery;

  __declspec(property(get = get_ReadWriteTimeout)) int32_t ReadWriteTimeout;

  __declspec(property(get = get_RequestUri)) ::System::Uri* RequestUri;

  /// @brief Field ResendContentFactory, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_ResendContentFactory,
                      put = __cordl_internal_set_ResendContentFactory)) ::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>* ResendContentFactory;

  __declspec(property(get = get_SendChunked, put = set_SendChunked)) bool SendChunked;

  __declspec(property(get = get_ServerCertValidationCallback)) ::System::Net::ServerCertValidationCallback* ServerCertValidationCallback;

  __declspec(property(get = get_ServerCertificateValidationCallback,
                      put = set_ServerCertificateValidationCallback)) ::System::Net::Security::RemoteCertificateValidationCallback* ServerCertificateValidationCallback;

  __declspec(property(get = get_ServicePoint)) ::System::Net::ServicePoint* ServicePoint;

  __declspec(property(get = get_ServicePointNoLock)) ::System::Net::ServicePoint* ServicePointNoLock;

  __declspec(property(get = get_ThrowOnError, put = set_ThrowOnError)) bool ThrowOnError;

  __declspec(property(get = get_Timeout, put = set_Timeout)) int32_t Timeout;

  __declspec(property(get = get_TlsProvider)) ::Mono::Net::Security::MobileTlsProvider* TlsProvider;

  __declspec(property(get = get_TlsSettings)) ::Mono::Security::Interface::MonoTlsSettings* TlsSettings;

  __declspec(property(get = get_TransferEncoding)) ::StringW TransferEncoding;

  __declspec(property(get = get_UnsafeAuthenticatedConnectionSharing)) bool UnsafeAuthenticatedConnectionSharing;

  __declspec(property(get = get_UseDefaultCredentials)) bool UseDefaultCredentials;

  /// @brief Field <ThrowOnError>k__BackingField, offset 0x190, size 0x1
  __declspec(property(get = __cordl_internal_get__ThrowOnError_k__BackingField, put = __cordl_internal_set__ThrowOnError_k__BackingField)) bool _ThrowOnError_k__BackingField;

  /// @brief Field aborted, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_aborted, put = __cordl_internal_set_aborted)) int32_t aborted;

  /// @brief Field actualUri, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_actualUri, put = __cordl_internal_set_actualUri)) ::System::Uri* actualUri;

  /// @brief Field actualVersion, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_actualVersion, put = __cordl_internal_set_actualVersion)) ::System::Version* actualVersion;

  /// @brief Field allowAutoRedirect, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_allowAutoRedirect, put = __cordl_internal_set_allowAutoRedirect)) bool allowAutoRedirect;

  /// @brief Field allowBuffering, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get_allowBuffering, put = __cordl_internal_set_allowBuffering)) bool allowBuffering;

  /// @brief Field auth_state, offset 0x168, size 0x10
  __declspec(property(get = __cordl_internal_get_auth_state, put = __cordl_internal_set_auth_state)) ::System::Net::HttpWebRequest_AuthorizationState auth_state;

  /// @brief Field auto_decomp, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_auto_decomp, put = __cordl_internal_set_auto_decomp)) ::System::Net::DecompressionMethods auto_decomp;

  /// @brief Field certValidationCallback, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_certValidationCallback, put = __cordl_internal_set_certValidationCallback)) ::System::Net::ServerCertValidationCallback* certValidationCallback;

  /// @brief Field certificates, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_certificates, put = __cordl_internal_set_certificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates;

  /// @brief Field connectionGroup, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_connectionGroup, put = __cordl_internal_set_connectionGroup)) ::StringW connectionGroup;

  /// @brief Field contentLength, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_contentLength, put = __cordl_internal_set_contentLength)) int64_t contentLength;

  /// @brief Field continueDelegate, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_continueDelegate, put = __cordl_internal_set_continueDelegate)) ::System::Net::HttpContinueDelegate* continueDelegate;

  /// @brief Field continueTimeout, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_continueTimeout, put = __cordl_internal_set_continueTimeout)) int32_t continueTimeout;

  /// @brief Field cookieContainer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_cookieContainer, put = __cordl_internal_set_cookieContainer)) ::System::Net::CookieContainer* cookieContainer;

  /// @brief Field credentials, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_credentials, put = __cordl_internal_set_credentials)) ::System::Net::ICredentials* credentials;

  /// @brief Field currentOperation, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_currentOperation, put = __cordl_internal_set_currentOperation)) ::System::Net::WebOperation* currentOperation;

  /// @brief Field defaultCachePolicy, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultCachePolicy, put = setStaticF_defaultCachePolicy)) ::System::Net::Cache::RequestCachePolicy* defaultCachePolicy;

  /// @brief Field defaultMaxResponseHeadersLength, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_defaultMaxResponseHeadersLength, put = setStaticF_defaultMaxResponseHeadersLength)) int32_t defaultMaxResponseHeadersLength;

  /// @brief Field defaultMaximumErrorResponseLength, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_defaultMaximumErrorResponseLength, put = setStaticF_defaultMaximumErrorResponseLength)) int32_t defaultMaximumErrorResponseLength;

  /// @brief Field expectContinue, offset 0x124, size 0x1
  __declspec(property(get = __cordl_internal_get_expectContinue, put = __cordl_internal_set_expectContinue)) bool expectContinue;

  /// @brief Field finished_reading, offset 0x130, size 0x1
  __declspec(property(get = __cordl_internal_get_finished_reading, put = __cordl_internal_set_finished_reading)) bool finished_reading;

  /// @brief Field force_version, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_force_version, put = __cordl_internal_set_force_version)) bool force_version;

  /// @brief Field getResponseCalled, offset 0x125, size 0x1
  __declspec(property(get = __cordl_internal_get_getResponseCalled, put = __cordl_internal_set_getResponseCalled)) bool getResponseCalled;

  /// @brief Field gotRequestStream, offset 0x11c, size 0x1
  __declspec(property(get = __cordl_internal_get_gotRequestStream, put = __cordl_internal_set_gotRequestStream)) bool gotRequestStream;

  /// @brief Field haveContentLength, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_haveContentLength, put = __cordl_internal_set_haveContentLength)) bool haveContentLength;

  /// @brief Field haveResponse, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_haveResponse, put = __cordl_internal_set_haveResponse)) bool haveResponse;

  /// @brief Field hostChanged, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_hostChanged, put = __cordl_internal_set_hostChanged)) bool hostChanged;

  /// @brief Field hostHasPort, offset 0x158, size 0x1
  __declspec(property(get = __cordl_internal_get_hostHasPort, put = __cordl_internal_set_hostHasPort)) bool hostHasPort;

  /// @brief Field hostUri, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_hostUri, put = __cordl_internal_set_hostUri)) ::System::Uri* hostUri;

  /// @brief Field initialMethod, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_initialMethod, put = __cordl_internal_set_initialMethod)) ::StringW initialMethod;

  /// @brief Field keepAlive, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_keepAlive, put = __cordl_internal_set_keepAlive)) bool keepAlive;

  /// @brief Field locker, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_locker, put = __cordl_internal_set_locker)) ::System::Object* locker;

  /// @brief Field maxAutoRedirect, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAutoRedirect, put = __cordl_internal_set_maxAutoRedirect)) int32_t maxAutoRedirect;

  /// @brief Field mediaType, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_mediaType, put = __cordl_internal_set_mediaType)) ::StringW mediaType;

  /// @brief Field method, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::StringW method;

  /// @brief Field pipelined, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_pipelined, put = __cordl_internal_set_pipelined)) bool pipelined;

  /// @brief Field preAuthenticate, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get_preAuthenticate, put = __cordl_internal_set_preAuthenticate)) bool preAuthenticate;

  /// @brief Field proxy, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_proxy, put = __cordl_internal_set_proxy)) ::System::Net::IWebProxy* proxy;

  /// @brief Field proxy_auth_state, offset 0x178, size 0x10
  __declspec(property(get = __cordl_internal_get_proxy_auth_state, put = __cordl_internal_set_proxy_auth_state)) ::System::Net::HttpWebRequest_AuthorizationState proxy_auth_state;

  /// @brief Field readWriteTimeout, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_readWriteTimeout, put = __cordl_internal_set_readWriteTimeout)) int32_t readWriteTimeout;

  /// @brief Field redirects, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_redirects, put = __cordl_internal_set_redirects)) int32_t redirects;

  /// @brief Field requestSent, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get_requestSent, put = __cordl_internal_set_requestSent)) bool requestSent;

  /// @brief Field requestUri, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_requestUri, put = __cordl_internal_set_requestUri)) ::System::Uri* requestUri;

  /// @brief Field responseTask, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_responseTask, put = __cordl_internal_set_responseTask)) ::System::Net::WebCompletionSource* responseTask;

  /// @brief Field sendChunked, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_sendChunked, put = __cordl_internal_set_sendChunked)) bool sendChunked;

  /// @brief Field servicePoint, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_servicePoint, put = __cordl_internal_set_servicePoint)) ::System::Net::ServicePoint* servicePoint;

  /// @brief Field timeout, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_timeout, put = __cordl_internal_set_timeout)) int32_t timeout;

  /// @brief Field tlsProvider, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_tlsProvider, put = __cordl_internal_set_tlsProvider)) ::Mono::Net::Security::MobileTlsProvider* tlsProvider;

  /// @brief Field tlsSettings, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_tlsSettings, put = __cordl_internal_set_tlsSettings)) ::Mono::Security::Interface::MonoTlsSettings* tlsSettings;

  /// @brief Field unsafe_auth_blah, offset 0x191, size 0x1
  __declspec(property(get = __cordl_internal_get_unsafe_auth_blah, put = __cordl_internal_set_unsafe_auth_blah)) bool unsafe_auth_blah;

  /// @brief Field usedPreAuth, offset 0xba, size 0x1
  __declspec(property(get = __cordl_internal_get_usedPreAuth, put = __cordl_internal_set_usedPreAuth)) bool usedPreAuth;

  /// @brief Field version, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::System::Version* version;

  /// @brief Field webHeaders, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_webHeaders, put = __cordl_internal_set_webHeaders)) ::System::Net::WebHeaderCollection* webHeaders;

  /// @brief Field webResponse, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_webResponse, put = __cordl_internal_set_webResponse)) ::System::Net::HttpWebResponse* webResponse;

  /// @brief Field writeStream, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_writeStream, put = __cordl_internal_set_writeStream)) ::System::Net::WebRequestStream* writeStream;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Abort, addr 0x43c6e9c, size 0x110, virtual true, abstract: false, final false
  inline void Abort();

  /// @brief Method BeginGetRequestStream, addr 0x43c63c0, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginGetResponse, addr 0x43c6b00, size 0x170, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method CheckAuthorization, addr 0x43c8400, size 0x18, virtual false, abstract: false, final false
  inline bool CheckAuthorization(::System::Net::WebResponse* response, ::System::Net::HttpStatusCode code);

  /// @brief Method CheckFinalStatus, addr 0x43c8934, size 0x4a4, virtual false, abstract: false, final false
  inline ::System::ValueTuple_4<bool, bool, ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, ::System::Net::WebException*>
  CheckFinalStatus(::System::Net::HttpWebResponse* response);

  /// @brief Method CheckRequestStarted, addr 0x43c4734, size 0x5c, virtual false, abstract: false, final false
  inline void CheckRequestStarted();

  /// @brief Method CreateRequestAbortedException, addr 0x43c6304, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Net::WebException* CreateRequestAbortedException();

  /// @brief Method DoContinueDelegate, addr 0x43c701c, size 0x1c, virtual false, abstract: false, final false
  inline void DoContinueDelegate(int32_t statusCode, ::System::Net::WebHeaderCollection* headers);

  /// @brief Method DoPreAuthenticate, addr 0x43c7c68, size 0x200, virtual false, abstract: false, final false
  inline void DoPreAuthenticate();

  /// @brief Method EndGetRequestStream, addr 0x43c6478, size 0x120, virtual true, abstract: false, final false
  inline ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult);

  /// @brief Method EndGetResponse, addr 0x43c6c70, size 0x120, virtual true, abstract: false, final false
  inline ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult);

  /// @brief Method FlattenException, addr 0x43c68a0, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Exception* FlattenException(::System::Exception* e);

  /// @brief Method GetHeaders, addr 0x43c7578, size 0x654, virtual false, abstract: false, final false
  inline ::StringW GetHeaders();

  /// @brief Method GetObjectData, addr 0x43c6fe4, size 0x38, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetRequestHeaders, addr 0x43c7e68, size 0x30c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRequestHeaders();

  /// @brief Method GetRequestStreamAsync, addr 0x43c661c, size 0x98, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetRequestStreamAsync();

  /// @brief Method GetResponse, addr 0x43c6d90, size 0x100, virtual true, abstract: false, final false
  inline ::System::Net::WebResponse* GetResponse();

  /// @brief Method GetResponseFromData, addr 0x43c67a8, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>*
  GetResponseFromData(::System::Net::WebResponseStream* stream, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRewriteHandler, addr 0x43c8734, size 0x200, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, ::System::Net::WebException*> GetRewriteHandler(::System::Net::HttpWebResponse* response,
                                                                                                                                                       bool redirect);

  /// @brief Method GetServicePoint, addr 0x43c51f8, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* GetServicePoint();

  /// @brief Method GetWebException, addr 0x43c6598, size 0x84, virtual false, abstract: false, final false
  inline ::System::Net::WebException* GetWebException(::System::Exception* e);

  /// @brief Method GetWebException, addr 0x43c695c, size 0x1a4, virtual false, abstract: false, final false
  static inline ::System::Net::WebException* GetWebException(::System::Exception* e, bool aborted);

  /// @brief Method HandleNtlmAuth, addr 0x43c8174, size 0x28c, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::System::Net::WebOperation*, bool> HandleNtlmAuth(::System::Net::WebResponseStream* stream, ::System::Net::HttpWebResponse* response,
                                                                                   ::System::Net::BufferOffsetSize* writeBuffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MyGetRequestStreamAsync, addr 0x43c5f7c, size 0x360, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* MyGetRequestStreamAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MyGetResponseAsync, addr 0x43c66b4, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse*>* MyGetResponseAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Net::HttpWebRequest* New_ctor();

  static inline ::System::Net::HttpWebRequest* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Net::HttpWebRequest* New_ctor(::System::Uri* uri);

  static inline ::System::Net::HttpWebRequest* New_ctor(::System::Uri* uri, ::Mono::Net::Security::MobileTlsProvider* tlsProvider, ::Mono::Security::Interface::MonoTlsSettings* settings);

  /// @brief Method Redirect, addr 0x43c70b0, size 0x4c8, virtual false, abstract: false, final false
  inline bool Redirect(::System::Net::HttpStatusCode code, ::System::Net::WebResponse* response);

  /// @brief Method ResetAuthorization, addr 0x43c4568, size 0x10, virtual false, abstract: false, final false
  inline void ResetAuthorization();

  /// @brief Method RewriteRedirectToGet, addr 0x43c7038, size 0x78, virtual false, abstract: false, final false
  inline void RewriteRedirectToGet();

  /// @brief Method RunWithTimeout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>* func);

  /// @brief Method RunWithTimeout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Threading::Tasks::Task_1<T>* RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>* func, int32_t timeout,
                                                                      ::System::Action* abort, ::System::Func_1<bool>* aborted, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RunWithTimeoutWorker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Threading::Tasks::Task_1<T>* RunWithTimeoutWorker(::System::Threading::Tasks::Task_1<T>* workerTask, int32_t timeout, ::System::Action* abort,
                                                                            ::System::Func_1<bool>* aborted, ::System::Threading::CancellationTokenSource* cts);

  /// @brief Method SendRequest, addr 0x43c5bf0, size 0x21c, virtual false, abstract: false, final false
  inline ::System::Net::WebOperation* SendRequest(bool redirecting, ::System::Net::BufferOffsetSize* writeBuffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x43c6fac, size 0x38, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method TryGetHostUri, addr 0x43c4cb4, size 0xd0, virtual false, abstract: false, final false
  inline bool TryGetHostUri(::StringW hostName, ::ByRef<::System::Uri*> hostUri);

  /// @brief Method <GetRewriteHandler>b__271_0, addr 0x43c8e5c, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>* _GetRewriteHandler_b__271_0();

  /// @brief Method <RunWithTimeout>b__242_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool _RunWithTimeout_b__242_0();

  constexpr ::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>* const& __cordl_internal_get_ResendContentFactory() const;

  constexpr ::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>*& __cordl_internal_get_ResendContentFactory();

  constexpr bool const& __cordl_internal_get__ThrowOnError_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ThrowOnError_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_aborted() const;

  constexpr int32_t& __cordl_internal_get_aborted();

  constexpr ::System::Uri* const& __cordl_internal_get_actualUri() const;

  constexpr ::System::Uri*& __cordl_internal_get_actualUri();

  constexpr ::System::Version* const& __cordl_internal_get_actualVersion() const;

  constexpr ::System::Version*& __cordl_internal_get_actualVersion();

  constexpr bool const& __cordl_internal_get_allowAutoRedirect() const;

  constexpr bool& __cordl_internal_get_allowAutoRedirect();

  constexpr bool const& __cordl_internal_get_allowBuffering() const;

  constexpr bool& __cordl_internal_get_allowBuffering();

  constexpr ::System::Net::HttpWebRequest_AuthorizationState const& __cordl_internal_get_auth_state() const;

  constexpr ::System::Net::HttpWebRequest_AuthorizationState& __cordl_internal_get_auth_state();

  constexpr ::System::Net::DecompressionMethods const& __cordl_internal_get_auto_decomp() const;

  constexpr ::System::Net::DecompressionMethods& __cordl_internal_get_auto_decomp();

  constexpr ::System::Net::ServerCertValidationCallback* const& __cordl_internal_get_certValidationCallback() const;

  constexpr ::System::Net::ServerCertValidationCallback*& __cordl_internal_get_certValidationCallback();

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& __cordl_internal_get_certificates() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get_certificates();

  constexpr ::StringW const& __cordl_internal_get_connectionGroup() const;

  constexpr ::StringW& __cordl_internal_get_connectionGroup();

  constexpr int64_t const& __cordl_internal_get_contentLength() const;

  constexpr int64_t& __cordl_internal_get_contentLength();

  constexpr ::System::Net::HttpContinueDelegate* const& __cordl_internal_get_continueDelegate() const;

  constexpr ::System::Net::HttpContinueDelegate*& __cordl_internal_get_continueDelegate();

  constexpr int32_t const& __cordl_internal_get_continueTimeout() const;

  constexpr int32_t& __cordl_internal_get_continueTimeout();

  constexpr ::System::Net::CookieContainer* const& __cordl_internal_get_cookieContainer() const;

  constexpr ::System::Net::CookieContainer*& __cordl_internal_get_cookieContainer();

  constexpr ::System::Net::ICredentials* const& __cordl_internal_get_credentials() const;

  constexpr ::System::Net::ICredentials*& __cordl_internal_get_credentials();

  constexpr ::System::Net::WebOperation* const& __cordl_internal_get_currentOperation() const;

  constexpr ::System::Net::WebOperation*& __cordl_internal_get_currentOperation();

  constexpr bool const& __cordl_internal_get_expectContinue() const;

  constexpr bool& __cordl_internal_get_expectContinue();

  constexpr bool const& __cordl_internal_get_finished_reading() const;

  constexpr bool& __cordl_internal_get_finished_reading();

  constexpr bool const& __cordl_internal_get_force_version() const;

  constexpr bool& __cordl_internal_get_force_version();

  constexpr bool const& __cordl_internal_get_getResponseCalled() const;

  constexpr bool& __cordl_internal_get_getResponseCalled();

  constexpr bool const& __cordl_internal_get_gotRequestStream() const;

  constexpr bool& __cordl_internal_get_gotRequestStream();

  constexpr bool const& __cordl_internal_get_haveContentLength() const;

  constexpr bool& __cordl_internal_get_haveContentLength();

  constexpr bool const& __cordl_internal_get_haveResponse() const;

  constexpr bool& __cordl_internal_get_haveResponse();

  constexpr bool const& __cordl_internal_get_hostChanged() const;

  constexpr bool& __cordl_internal_get_hostChanged();

  constexpr bool const& __cordl_internal_get_hostHasPort() const;

  constexpr bool& __cordl_internal_get_hostHasPort();

  constexpr ::System::Uri* const& __cordl_internal_get_hostUri() const;

  constexpr ::System::Uri*& __cordl_internal_get_hostUri();

  constexpr ::StringW const& __cordl_internal_get_initialMethod() const;

  constexpr ::StringW& __cordl_internal_get_initialMethod();

  constexpr bool const& __cordl_internal_get_keepAlive() const;

  constexpr bool& __cordl_internal_get_keepAlive();

  constexpr ::System::Object* const& __cordl_internal_get_locker() const;

  constexpr ::System::Object*& __cordl_internal_get_locker();

  constexpr int32_t const& __cordl_internal_get_maxAutoRedirect() const;

  constexpr int32_t& __cordl_internal_get_maxAutoRedirect();

  constexpr ::StringW const& __cordl_internal_get_mediaType() const;

  constexpr ::StringW& __cordl_internal_get_mediaType();

  constexpr ::StringW const& __cordl_internal_get_method() const;

  constexpr ::StringW& __cordl_internal_get_method();

  constexpr bool const& __cordl_internal_get_pipelined() const;

  constexpr bool& __cordl_internal_get_pipelined();

  constexpr bool const& __cordl_internal_get_preAuthenticate() const;

  constexpr bool& __cordl_internal_get_preAuthenticate();

  constexpr ::System::Net::IWebProxy* const& __cordl_internal_get_proxy() const;

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get_proxy();

  constexpr ::System::Net::HttpWebRequest_AuthorizationState const& __cordl_internal_get_proxy_auth_state() const;

  constexpr ::System::Net::HttpWebRequest_AuthorizationState& __cordl_internal_get_proxy_auth_state();

  constexpr int32_t const& __cordl_internal_get_readWriteTimeout() const;

  constexpr int32_t& __cordl_internal_get_readWriteTimeout();

  constexpr int32_t const& __cordl_internal_get_redirects() const;

  constexpr int32_t& __cordl_internal_get_redirects();

  constexpr bool const& __cordl_internal_get_requestSent() const;

  constexpr bool& __cordl_internal_get_requestSent();

  constexpr ::System::Uri* const& __cordl_internal_get_requestUri() const;

  constexpr ::System::Uri*& __cordl_internal_get_requestUri();

  constexpr ::System::Net::WebCompletionSource* const& __cordl_internal_get_responseTask() const;

  constexpr ::System::Net::WebCompletionSource*& __cordl_internal_get_responseTask();

  constexpr bool const& __cordl_internal_get_sendChunked() const;

  constexpr bool& __cordl_internal_get_sendChunked();

  constexpr ::System::Net::ServicePoint* const& __cordl_internal_get_servicePoint() const;

  constexpr ::System::Net::ServicePoint*& __cordl_internal_get_servicePoint();

  constexpr int32_t const& __cordl_internal_get_timeout() const;

  constexpr int32_t& __cordl_internal_get_timeout();

  constexpr ::Mono::Net::Security::MobileTlsProvider* const& __cordl_internal_get_tlsProvider() const;

  constexpr ::Mono::Net::Security::MobileTlsProvider*& __cordl_internal_get_tlsProvider();

  constexpr ::Mono::Security::Interface::MonoTlsSettings* const& __cordl_internal_get_tlsSettings() const;

  constexpr ::Mono::Security::Interface::MonoTlsSettings*& __cordl_internal_get_tlsSettings();

  constexpr bool const& __cordl_internal_get_unsafe_auth_blah() const;

  constexpr bool& __cordl_internal_get_unsafe_auth_blah();

  constexpr bool const& __cordl_internal_get_usedPreAuth() const;

  constexpr bool& __cordl_internal_get_usedPreAuth();

  constexpr ::System::Version* const& __cordl_internal_get_version() const;

  constexpr ::System::Version*& __cordl_internal_get_version();

  constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get_webHeaders() const;

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get_webHeaders();

  constexpr ::System::Net::HttpWebResponse* const& __cordl_internal_get_webResponse() const;

  constexpr ::System::Net::HttpWebResponse*& __cordl_internal_get_webResponse();

  constexpr ::System::Net::WebRequestStream* const& __cordl_internal_get_writeStream() const;

  constexpr ::System::Net::WebRequestStream*& __cordl_internal_get_writeStream();

  constexpr void __cordl_internal_set_ResendContentFactory(::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>* value);

  constexpr void __cordl_internal_set__ThrowOnError_k__BackingField(bool value);

  constexpr void __cordl_internal_set_aborted(int32_t value);

  constexpr void __cordl_internal_set_actualUri(::System::Uri* value);

  constexpr void __cordl_internal_set_actualVersion(::System::Version* value);

  constexpr void __cordl_internal_set_allowAutoRedirect(bool value);

  constexpr void __cordl_internal_set_allowBuffering(bool value);

  constexpr void __cordl_internal_set_auth_state(::System::Net::HttpWebRequest_AuthorizationState value);

  constexpr void __cordl_internal_set_auto_decomp(::System::Net::DecompressionMethods value);

  constexpr void __cordl_internal_set_certValidationCallback(::System::Net::ServerCertValidationCallback* value);

  constexpr void __cordl_internal_set_certificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  constexpr void __cordl_internal_set_connectionGroup(::StringW value);

  constexpr void __cordl_internal_set_contentLength(int64_t value);

  constexpr void __cordl_internal_set_continueDelegate(::System::Net::HttpContinueDelegate* value);

  constexpr void __cordl_internal_set_continueTimeout(int32_t value);

  constexpr void __cordl_internal_set_cookieContainer(::System::Net::CookieContainer* value);

  constexpr void __cordl_internal_set_credentials(::System::Net::ICredentials* value);

  constexpr void __cordl_internal_set_currentOperation(::System::Net::WebOperation* value);

  constexpr void __cordl_internal_set_expectContinue(bool value);

  constexpr void __cordl_internal_set_finished_reading(bool value);

  constexpr void __cordl_internal_set_force_version(bool value);

  constexpr void __cordl_internal_set_getResponseCalled(bool value);

  constexpr void __cordl_internal_set_gotRequestStream(bool value);

  constexpr void __cordl_internal_set_haveContentLength(bool value);

  constexpr void __cordl_internal_set_haveResponse(bool value);

  constexpr void __cordl_internal_set_hostChanged(bool value);

  constexpr void __cordl_internal_set_hostHasPort(bool value);

  constexpr void __cordl_internal_set_hostUri(::System::Uri* value);

  constexpr void __cordl_internal_set_initialMethod(::StringW value);

  constexpr void __cordl_internal_set_keepAlive(bool value);

  constexpr void __cordl_internal_set_locker(::System::Object* value);

  constexpr void __cordl_internal_set_maxAutoRedirect(int32_t value);

  constexpr void __cordl_internal_set_mediaType(::StringW value);

  constexpr void __cordl_internal_set_method(::StringW value);

  constexpr void __cordl_internal_set_pipelined(bool value);

  constexpr void __cordl_internal_set_preAuthenticate(bool value);

  constexpr void __cordl_internal_set_proxy(::System::Net::IWebProxy* value);

  constexpr void __cordl_internal_set_proxy_auth_state(::System::Net::HttpWebRequest_AuthorizationState value);

  constexpr void __cordl_internal_set_readWriteTimeout(int32_t value);

  constexpr void __cordl_internal_set_redirects(int32_t value);

  constexpr void __cordl_internal_set_requestSent(bool value);

  constexpr void __cordl_internal_set_requestUri(::System::Uri* value);

  constexpr void __cordl_internal_set_responseTask(::System::Net::WebCompletionSource* value);

  constexpr void __cordl_internal_set_sendChunked(bool value);

  constexpr void __cordl_internal_set_servicePoint(::System::Net::ServicePoint* value);

  constexpr void __cordl_internal_set_timeout(int32_t value);

  constexpr void __cordl_internal_set_tlsProvider(::Mono::Net::Security::MobileTlsProvider* value);

  constexpr void __cordl_internal_set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings* value);

  constexpr void __cordl_internal_set_unsafe_auth_blah(bool value);

  constexpr void __cordl_internal_set_usedPreAuth(bool value);

  constexpr void __cordl_internal_set_version(::System::Version* value);

  constexpr void __cordl_internal_set_webHeaders(::System::Net::WebHeaderCollection* value);

  constexpr void __cordl_internal_set_webResponse(::System::Net::HttpWebResponse* value);

  constexpr void __cordl_internal_set_writeStream(::System::Net::WebRequestStream* value);

  /// @brief Method .ctor, addr 0x43c8f38, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x43c45a0, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x43c3fcc, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* uri);

  /// @brief Method .ctor, addr 0x43c4578, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* uri, ::Mono::Net::Security::MobileTlsProvider* tlsProvider, ::Mono::Security::Interface::MonoTlsSettings* settings);

  static inline ::System::Net::Cache::RequestCachePolicy* getStaticF_defaultCachePolicy();

  static inline int32_t getStaticF_defaultMaxResponseHeadersLength();

  static inline int32_t getStaticF_defaultMaximumErrorResponseLength();

  /// @brief Method get_Aborted, addr 0x43c62dc, size 0x28, virtual false, abstract: false, final false
  inline bool get_Aborted();

  /// @brief Method get_Address, addr 0x43c46e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_Address();

  /// @brief Method get_AllowWriteStreamBuffering, addr 0x43c46f4, size 0x8, virtual true, abstract: false, final false
  inline bool get_AllowWriteStreamBuffering();

  /// @brief Method get_AuthUri, addr 0x43c54b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_AuthUri();

  /// @brief Method get_AutomaticDecompression, addr 0x43c4708, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::DecompressionMethods get_AutomaticDecompression();

  /// @brief Method get_ClientCertificates, addr 0x43c48b0, size 0x64, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method get_ContentLength, addr 0x43c491c, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_ContentLength();

  /// @brief Method get_Credentials, addr 0x43c49d4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::ICredentials* get_Credentials();

  /// @brief Method get_DefaultMaximumErrorResponseLength, addr 0x43c49e4, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_DefaultMaximumErrorResponseLength();

  /// @brief Method get_DefaultMaximumResponseHeadersLength, addr 0x43c4e14, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_DefaultMaximumResponseHeadersLength();

  /// @brief Method get_ExpectContinue, addr 0x43c54a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ExpectContinue();

  /// @brief Method get_Headers, addr 0x43c4a3c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_Host, addr 0x43c4a44, size 0x108, virtual false, abstract: false, final false
  inline ::StringW get_Host();

  /// @brief Method get_InternalAllowBuffering, addr 0x43c4790, size 0x14, virtual false, abstract: false, final false
  inline bool get_InternalAllowBuffering();

  /// @brief Method get_KeepAlive, addr 0x43c4d84, size 0x8, virtual false, abstract: false, final false
  inline bool get_KeepAlive();

  /// @brief Method get_Method, addr 0x43c4e74, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Method();

  /// @brief Method get_MethodWithBuffer, addr 0x43c47a4, size 0xfc, virtual false, abstract: false, final false
  inline bool get_MethodWithBuffer();

  /// @brief Method get_ProtocolVersion, addr 0x43c50b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Version* get_ProtocolVersion();

  /// @brief Method get_Proxy, addr 0x43c51c4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::IWebProxy* get_Proxy();

  /// @brief Method get_ProxyQuery, addr 0x43c54bc, size 0x34, virtual false, abstract: false, final false
  inline bool get_ProxyQuery();

  /// @brief Method get_ReadWriteTimeout, addr 0x43c4e6c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ReadWriteTimeout();

  /// @brief Method get_RequestUri, addr 0x43c5324, size 0x8, virtual true, abstract: false, final false
  inline ::System::Uri* get_RequestUri();

  /// @brief Method get_SendChunked, addr 0x43c532c, size 0x8, virtual false, abstract: false, final false
  inline bool get_SendChunked();

  /// @brief Method get_ServerCertValidationCallback, addr 0x43c54f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback();

  /// @brief Method get_ServerCertificateValidationCallback, addr 0x43c54f8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Net::Security::RemoteCertificateValidationCallback* get_ServerCertificateValidationCallback();

  /// @brief Method get_ServicePoint, addr 0x43c5358, size 0x4, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* get_ServicePoint();

  /// @brief Method get_ServicePointNoLock, addr 0x43c535c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* get_ServicePointNoLock();

  /// @brief Method get_ThrowOnError, addr 0x43c49b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_ThrowOnError();

  /// @brief Method get_Timeout, addr 0x43c5364, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Timeout();

  /// @brief Method get_TlsProvider, addr 0x43c48a0, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Net::Security::MobileTlsProvider* get_TlsProvider();

  /// @brief Method get_TlsSettings, addr 0x43c48a8, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoTlsSettings* get_TlsSettings();

  /// @brief Method get_TransferEncoding, addr 0x43c53cc, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_TransferEncoding();

  /// @brief Method get_UnsafeAuthenticatedConnectionSharing, addr 0x43c5498, size 0x8, virtual false, abstract: false, final false
  inline bool get_UnsafeAuthenticatedConnectionSharing();

  /// @brief Method get_UseDefaultCredentials, addr 0x43c5420, size 0x78, virtual true, abstract: false, final false
  inline bool get_UseDefaultCredentials();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_defaultCachePolicy(::System::Net::Cache::RequestCachePolicy* value);

  static inline void setStaticF_defaultMaxResponseHeadersLength(int32_t value);

  static inline void setStaticF_defaultMaximumErrorResponseLength(int32_t value);

  /// @brief Method set_AllowAutoRedirect, addr 0x43c46e8, size 0xc, virtual true, abstract: false, final false
  inline void set_AllowAutoRedirect(bool value);

  /// @brief Method set_AllowWriteStreamBuffering, addr 0x43c46fc, size 0xc, virtual true, abstract: false, final false
  inline void set_AllowWriteStreamBuffering(bool value);

  /// @brief Method set_AutomaticDecompression, addr 0x43c4710, size 0x24, virtual false, abstract: false, final false
  inline void set_AutomaticDecompression(::System::Net::DecompressionMethods value);

  /// @brief Method set_ConnectionGroupName, addr 0x43c4914, size 0x8, virtual true, abstract: false, final false
  inline void set_ConnectionGroupName(::StringW value);

  /// @brief Method set_ContentLength, addr 0x43c4924, size 0x8c, virtual true, abstract: false, final false
  inline void set_ContentLength(int64_t value);

  /// @brief Method set_CookieContainer, addr 0x43c49cc, size 0x8, virtual true, abstract: false, final false
  inline void set_CookieContainer(::System::Net::CookieContainer* value);

  /// @brief Method set_Credentials, addr 0x43c49dc, size 0x8, virtual true, abstract: false, final false
  inline void set_Credentials(::System::Net::ICredentials* value);

  /// @brief Method set_ExpectContinue, addr 0x43c54a8, size 0xc, virtual false, abstract: false, final false
  inline void set_ExpectContinue(bool value);

  /// @brief Method set_FinishedReading, addr 0x43c6e90, size 0xc, virtual false, abstract: false, final false
  inline void set_FinishedReading(bool value);

  /// @brief Method set_Host, addr 0x43c4b4c, size 0x168, virtual false, abstract: false, final false
  inline void set_Host(::StringW value);

  /// @brief Method set_InternalContentLength, addr 0x43c49b0, size 0x8, virtual false, abstract: false, final false
  inline void set_InternalContentLength(int64_t value);

  /// @brief Method set_KeepAlive, addr 0x43c4d8c, size 0xc, virtual false, abstract: false, final false
  inline void set_KeepAlive(bool value);

  /// @brief Method set_MaximumAutomaticRedirections, addr 0x43c4d98, size 0x7c, virtual false, abstract: false, final false
  inline void set_MaximumAutomaticRedirections(int32_t value);

  /// @brief Method set_Method, addr 0x43c4e7c, size 0x228, virtual true, abstract: false, final false
  inline void set_Method(::StringW value);

  /// @brief Method set_PreAuthenticate, addr 0x43c50a4, size 0xc, virtual true, abstract: false, final false
  inline void set_PreAuthenticate(bool value);

  /// @brief Method set_ProtocolVersion, addr 0x43c50b8, size 0x10c, virtual false, abstract: false, final false
  inline void set_ProtocolVersion(::System::Version* value);

  /// @brief Method set_Proxy, addr 0x43c51cc, size 0x2c, virtual true, abstract: false, final false
  inline void set_Proxy(::System::Net::IWebProxy* value);

  /// @brief Method set_SendChunked, addr 0x43c5334, size 0x24, virtual false, abstract: false, final false
  inline void set_SendChunked(bool value);

  /// @brief Method set_ServerCertificateValidationCallback, addr 0x43c5510, size 0x6c, virtual false, abstract: false, final false
  inline void set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value);

  /// @brief Method set_ThrowOnError, addr 0x43c49c0, size 0xc, virtual false, abstract: false, final false
  inline void set_ThrowOnError(bool value);

  /// @brief Method set_Timeout, addr 0x43c536c, size 0x60, virtual true, abstract: false, final false
  inline void set_Timeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpWebRequest(HttpWebRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpWebRequest(HttpWebRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9707 };

  /// @brief Field requestUri, offset: 0x38, size: 0x8, def value: None
  ::System::Uri* ___requestUri;

  /// @brief Field actualUri, offset: 0x40, size: 0x8, def value: None
  ::System::Uri* ___actualUri;

  /// @brief Field hostChanged, offset: 0x48, size: 0x1, def value: None
  bool ___hostChanged;

  /// @brief Field allowAutoRedirect, offset: 0x49, size: 0x1, def value: None
  bool ___allowAutoRedirect;

  /// @brief Field allowBuffering, offset: 0x4a, size: 0x1, def value: None
  bool ___allowBuffering;

  /// @brief Field certificates, offset: 0x50, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ___certificates;

  /// @brief Field connectionGroup, offset: 0x58, size: 0x8, def value: None
  ::StringW ___connectionGroup;

  /// @brief Field haveContentLength, offset: 0x60, size: 0x1, def value: None
  bool ___haveContentLength;

  /// @brief Field contentLength, offset: 0x68, size: 0x8, def value: None
  int64_t ___contentLength;

  /// @brief Field continueDelegate, offset: 0x70, size: 0x8, def value: None
  ::System::Net::HttpContinueDelegate* ___continueDelegate;

  /// @brief Field cookieContainer, offset: 0x78, size: 0x8, def value: None
  ::System::Net::CookieContainer* ___cookieContainer;

  /// @brief Field credentials, offset: 0x80, size: 0x8, def value: None
  ::System::Net::ICredentials* ___credentials;

  /// @brief Field haveResponse, offset: 0x88, size: 0x1, def value: None
  bool ___haveResponse;

  /// @brief Field requestSent, offset: 0x89, size: 0x1, def value: None
  bool ___requestSent;

  /// @brief Field webHeaders, offset: 0x90, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ___webHeaders;

  /// @brief Field keepAlive, offset: 0x98, size: 0x1, def value: None
  bool ___keepAlive;

  /// @brief Field maxAutoRedirect, offset: 0x9c, size: 0x4, def value: None
  int32_t ___maxAutoRedirect;

  /// @brief Field mediaType, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___mediaType;

  /// @brief Field method, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___method;

  /// @brief Field initialMethod, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___initialMethod;

  /// @brief Field pipelined, offset: 0xb8, size: 0x1, def value: None
  bool ___pipelined;

  /// @brief Field preAuthenticate, offset: 0xb9, size: 0x1, def value: None
  bool ___preAuthenticate;

  /// @brief Field usedPreAuth, offset: 0xba, size: 0x1, def value: None
  bool ___usedPreAuth;

  /// @brief Field version, offset: 0xc0, size: 0x8, def value: None
  ::System::Version* ___version;

  /// @brief Field force_version, offset: 0xc8, size: 0x1, def value: None
  bool ___force_version;

  /// @brief Field actualVersion, offset: 0xd0, size: 0x8, def value: None
  ::System::Version* ___actualVersion;

  /// @brief Field proxy, offset: 0xd8, size: 0x8, def value: None
  ::System::Net::IWebProxy* ___proxy;

  /// @brief Field sendChunked, offset: 0xe0, size: 0x1, def value: None
  bool ___sendChunked;

  /// @brief Field servicePoint, offset: 0xe8, size: 0x8, def value: None
  ::System::Net::ServicePoint* ___servicePoint;

  /// @brief Field timeout, offset: 0xf0, size: 0x4, def value: None
  int32_t ___timeout;

  /// @brief Field continueTimeout, offset: 0xf4, size: 0x4, def value: None
  int32_t ___continueTimeout;

  /// @brief Field writeStream, offset: 0xf8, size: 0x8, def value: None
  ::System::Net::WebRequestStream* ___writeStream;

  /// @brief Field webResponse, offset: 0x100, size: 0x8, def value: None
  ::System::Net::HttpWebResponse* ___webResponse;

  /// @brief Field responseTask, offset: 0x108, size: 0x8, def value: None
  ::System::Net::WebCompletionSource* ___responseTask;

  /// @brief Field currentOperation, offset: 0x110, size: 0x8, def value: None
  ::System::Net::WebOperation* ___currentOperation;

  /// @brief Field aborted, offset: 0x118, size: 0x4, def value: None
  int32_t ___aborted;

  /// @brief Field gotRequestStream, offset: 0x11c, size: 0x1, def value: None
  bool ___gotRequestStream;

  /// @brief Field redirects, offset: 0x120, size: 0x4, def value: None
  int32_t ___redirects;

  /// @brief Field expectContinue, offset: 0x124, size: 0x1, def value: None
  bool ___expectContinue;

  /// @brief Field getResponseCalled, offset: 0x125, size: 0x1, def value: None
  bool ___getResponseCalled;

  /// @brief Field locker, offset: 0x128, size: 0x8, def value: None
  ::System::Object* ___locker;

  /// @brief Field finished_reading, offset: 0x130, size: 0x1, def value: None
  bool ___finished_reading;

  /// @brief Field auto_decomp, offset: 0x134, size: 0x4, def value: None
  ::System::Net::DecompressionMethods ___auto_decomp;

  /// @brief Field readWriteTimeout, offset: 0x138, size: 0x4, def value: None
  int32_t ___readWriteTimeout;

  /// @brief Field tlsProvider, offset: 0x140, size: 0x8, def value: None
  ::Mono::Net::Security::MobileTlsProvider* ___tlsProvider;

  /// @brief Field tlsSettings, offset: 0x148, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoTlsSettings* ___tlsSettings;

  /// @brief Field certValidationCallback, offset: 0x150, size: 0x8, def value: None
  ::System::Net::ServerCertValidationCallback* ___certValidationCallback;

  /// @brief Field hostHasPort, offset: 0x158, size: 0x1, def value: None
  bool ___hostHasPort;

  /// @brief Field hostUri, offset: 0x160, size: 0x8, def value: None
  ::System::Uri* ___hostUri;

  /// @brief Field auth_state, offset: 0x168, size: 0x10, def value: None
  ::System::Net::HttpWebRequest_AuthorizationState ___auth_state;

  /// @brief Field proxy_auth_state, offset: 0x178, size: 0x10, def value: None
  ::System::Net::HttpWebRequest_AuthorizationState ___proxy_auth_state;

  /// @brief Field ResendContentFactory, offset: 0x188, size: 0x8, def value: None
  ::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>* ___ResendContentFactory;

  /// @brief Field <ThrowOnError>k__BackingField, offset: 0x190, size: 0x1, def value: None
  bool ____ThrowOnError_k__BackingField;

  /// @brief Field unsafe_auth_blah, offset: 0x191, size: 0x1, def value: None
  bool ___unsafe_auth_blah;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpWebRequest, ___requestUri) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___actualUri) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___hostChanged) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___allowAutoRedirect) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___allowBuffering) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___certificates) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___connectionGroup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___haveContentLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___contentLength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___continueDelegate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___cookieContainer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___credentials) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___haveResponse) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___requestSent) == 0x89, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___webHeaders) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___keepAlive) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___maxAutoRedirect) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___mediaType) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___method) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___initialMethod) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___pipelined) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___preAuthenticate) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___usedPreAuth) == 0xba, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___version) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___force_version) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___actualVersion) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___proxy) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___sendChunked) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___servicePoint) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___timeout) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___continueTimeout) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___writeStream) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___webResponse) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___responseTask) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___currentOperation) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___aborted) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___gotRequestStream) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___redirects) == 0x120, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___expectContinue) == 0x124, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___getResponseCalled) == 0x125, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___locker) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___finished_reading) == 0x130, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___auto_decomp) == 0x134, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___readWriteTimeout) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___tlsProvider) == 0x140, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___tlsSettings) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___certValidationCallback) == 0x150, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___hostHasPort) == 0x158, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___hostUri) == 0x160, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___auth_state) == 0x168, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___proxy_auth_state) == 0x178, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___ResendContentFactory) == 0x188, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ____ThrowOnError_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpWebRequest, ___unsafe_auth_blah) == 0x191, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpWebRequest, 0x198>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebRequest_NtlmAuthState, "System.Net", "HttpWebRequest/NtlmAuthState");
NEED_NO_BOX(::System::Net::HttpWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebRequest*, "System.Net", "HttpWebRequest");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::HttpWebRequest___c__241_1, "System.Net", "HttpWebRequest/<>c__241`1");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebRequest_AuthorizationState, "System.Net", "HttpWebRequest/AuthorizationState");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebRequest__GetResponseFromData_d__244, "System.Net", "HttpWebRequest/<GetResponseFromData>d__244");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebRequest__MyGetResponseAsync_d__243, "System.Net", "HttpWebRequest/<MyGetResponseAsync>d__243");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::HttpWebRequest__RunWithTimeoutWorker_d__241_1, "System.Net", "HttpWebRequest/<RunWithTimeoutWorker>d__241`1");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebRequest___GetRewriteHandler_b__271_0_d, "System.Net", "HttpWebRequest/<<GetRewriteHandler>b__271_0>d");
