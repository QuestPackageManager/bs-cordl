#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__DecompressionMethods_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__HttpWebResponse_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebRequest)
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5> struct ValueTuple_5;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
struct __HttpWebRequest___MyGetResponseAsync_d__243;
}
namespace System::Net {
class HttpWebResponse;
}
namespace System {
class Version;
}
namespace System::Net {
template <typename T> class __HttpWebRequest____c__241_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net {
class HttpContinueDelegate;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
struct __HttpWebRequest___GetResponseFromData_d__244;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
class WebOperation;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
class Uri;
}
namespace System::Net {
class CookieContainer;
}
namespace System::Net {
struct __HttpWebRequest____GetRewriteHandler_b__271_0_d;
}
namespace System::Net {
struct DecompressionMethods;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System::Net {
struct __HttpWebRequest__AuthorizationState;
}
namespace System::Net {
template <typename T> struct __HttpWebRequest___RunWithTimeoutWorker_d__241_1;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebResponseStream;
}
namespace System {
class Action;
}
namespace System::Net {
class WebResponse;
}
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
struct __HttpWebRequest__NtlmAuthState;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class ServicePoint;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> struct ValueTuple_4;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace System::Net {
struct __HttpWebRequest__NtlmAuthState;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
template <typename T> class __HttpWebRequest____c__241_1;
}
namespace System::Net {
struct __HttpWebRequest__AuthorizationState;
}
namespace System::Net {
struct __HttpWebRequest___GetResponseFromData_d__244;
}
namespace System::Net {
struct __HttpWebRequest___MyGetResponseAsync_d__243;
}
namespace System::Net {
template <typename T> struct __HttpWebRequest___RunWithTimeoutWorker_d__241_1;
}
namespace System::Net {
struct __HttpWebRequest____GetRewriteHandler_b__271_0_d;
}
// Write type traits
MARK_VAL_T(::System::Net::__HttpWebRequest__NtlmAuthState);
MARK_REF_PTR_T(::System::Net::HttpWebRequest);
MARK_GEN_REF_PTR_T(::System::Net::__HttpWebRequest____c__241_1);
MARK_VAL_T(::System::Net::__HttpWebRequest__AuthorizationState);
MARK_VAL_T(::System::Net::__HttpWebRequest___GetResponseFromData_d__244);
MARK_VAL_T(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243);
MARK_GEN_VAL_T(::System::Net::__HttpWebRequest___RunWithTimeoutWorker_d__241_1);
MARK_VAL_T(::System::Net::__HttpWebRequest____GetRewriteHandler_b__271_0_d);
// Type: ::NtlmAuthState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9179))
// CS Name: ::HttpWebRequest::NtlmAuthState
struct CORDL_TYPE __HttpWebRequest__NtlmAuthState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HttpWebRequest__NtlmAuthState_Unwrapped
  enum struct ____HttpWebRequest__NtlmAuthState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Challenge = static_cast<int32_t>(0x1),
    __E_Response = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HttpWebRequest__NtlmAuthState_Unwrapped() const noexcept {
    return static_cast<____HttpWebRequest__NtlmAuthState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HttpWebRequest__NtlmAuthState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpWebRequest__NtlmAuthState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Net::__HttpWebRequest__NtlmAuthState const None;

  /// @brief Field Challenge value: static_cast<int32_t>(0x1)
  static ::System::Net::__HttpWebRequest__NtlmAuthState const Challenge;

  /// @brief Field Response value: static_cast<int32_t>(0x2)
  static ::System::Net::__HttpWebRequest__NtlmAuthState const Response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__HttpWebRequest__NtlmAuthState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest__NtlmAuthState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: ::AuthorizationState
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9180))
// CS Name: ::HttpWebRequest::AuthorizationState
struct CORDL_TYPE __HttpWebRequest__AuthorizationState {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_NtlmAuthState))::System::Net::__HttpWebRequest__NtlmAuthState NtlmAuthState;

  __declspec(property(get = get_IsNtlmAuthenticated)) bool IsNtlmAuthenticated;

  /// @brief Method get_IsCompleted, addr 0x29cfe2c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method get_NtlmAuthState, addr 0x29cfe34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::__HttpWebRequest__NtlmAuthState get_NtlmAuthState();

  /// @brief Method get_IsNtlmAuthenticated, addr 0x29cfe3c, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsNtlmAuthenticated();

  /// @brief Method .ctor, addr 0x29cbdbc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::HttpWebRequest* request, bool isProxy);

  /// @brief Method CheckAuthorization, addr 0x29cf2f4, size 0x318, virtual false, abstract: false, final false
  inline bool CheckAuthorization(::System::Net::WebResponse* response, ::System::Net::HttpStatusCode code);

  /// @brief Method Reset, addr 0x29cfc84, size 0x84, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x29cfe5c, size 0x100, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "request", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: None }, CppParam { name: "isProxy", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "isCompleted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ntlm_auth_state", ty: "::System::Net::__HttpWebRequest__NtlmAuthState", modifiers: "", def_value:
  // None }]
  constexpr __HttpWebRequest__AuthorizationState(::System::Net::HttpWebRequest* request, bool isProxy, bool isCompleted, ::System::Net::__HttpWebRequest__NtlmAuthState ntlm_auth_state) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpWebRequest__AuthorizationState();

  /// @brief Field request, offset: 0x0, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* request;

  /// @brief Field isProxy, offset: 0x8, size: 0x1, def value: None
  bool isProxy;

  /// @brief Field isCompleted, offset: 0x9, size: 0x1, def value: None
  bool isCompleted;

  /// @brief Field ntlm_auth_state, offset: 0xc, size: 0x4, def value: None
  ::System::Net::__HttpWebRequest__NtlmAuthState ntlm_auth_state;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__HttpWebRequest__AuthorizationState, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest__AuthorizationState, request) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest__AuthorizationState, isProxy) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest__AuthorizationState, isCompleted) == 0x9, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest__AuthorizationState, ntlm_auth_state) == 0xc, "Offset mismatch!");

} // namespace System::Net
// Type: ::<>c__241`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9181))
// CS Name: ::HttpWebRequest::<>c__241`1<T>*
class CORDL_TYPE __HttpWebRequest____c__241_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::__HttpWebRequest____c__241_1<T>* __9;

  /// @brief Field <>9__241_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__241_0, put = setStaticF___9__241_0))::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>* __9__241_0;

  static inline void setStaticF___9(::System::Net::__HttpWebRequest____c__241_1<T>* value);

  static inline ::System::Net::__HttpWebRequest____c__241_1<T>* getStaticF___9();

  static inline void setStaticF___9__241_0(::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>* value);

  static inline ::System::Func_2<::System::Threading::Tasks::Task_1<T>*, ::System::Nullable_1<int32_t>>* getStaticF___9__241_0();

  static inline ::System::Net::__HttpWebRequest____c__241_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <RunWithTimeoutWorker>b__241_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> _RunWithTimeoutWorker_b__241_0(::System::Threading::Tasks::Task_1<T>* t);

  // Ctor Parameters [CppParam { name: "", ty: "__HttpWebRequest____c__241_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HttpWebRequest____c__241_1(__HttpWebRequest____c__241_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HttpWebRequest____c__241_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HttpWebRequest____c__241_1(__HttpWebRequest____c__241_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpWebRequest____c__241_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
// Type: ::<RunWithTimeoutWorker>d__241`1
// SizeInfo { instance_size: 88, native_size: 104, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 97 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 105 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9182)) CS Name:
// ::HttpWebRequest::<RunWithTimeoutWorker>d__241`1<T>
struct CORDL_TYPE __HttpWebRequest___RunWithTimeoutWorker_d__241_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "",
  // def_value: None }, CppParam { name: "timeout", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cts", ty: "::System::Threading::CancellationTokenSource*", modifiers: "",
  // def_value: None }, CppParam { name: "abort", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "aborted", ty: "::System::Func_1<bool>*", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __HttpWebRequest___RunWithTimeoutWorker_d__241_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                             ::System::Threading::Tasks::Task_1<T>* workerTask, int32_t timeout, ::System::Threading::CancellationTokenSource* cts,
                                                             ::System::Action* abort, ::System::Func_1<bool>* aborted,
                                                             ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpWebRequest___RunWithTimeoutWorker_d__241_1();

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
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Net
// Type: ::<MyGetResponseAsync>d__243
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 872 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// TypeDefinitionIndex(TypeDefinitionIndex(9227)), TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(9187)), TypeDefinitionIndex(TypeDefinitionIndex(9244)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2510), inst: 5337 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(9238)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5068 }), TypeDefinitionIndex(TypeDefinitionIndex(9100)), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 901 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 884 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2510)), TypeDefinitionIndex(TypeDefinitionIndex(2677))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9183)) CS Name:
// ::HttpWebRequest::<MyGetResponseAsync>d__243
struct CORDL_TYPE __HttpWebRequest___MyGetResponseAsync_d__243 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x29cff5c, size 0xdf4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x29d0d50, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::System::Net::HttpWebRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam
  // { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: None }, CppParam { name: "_operation_5__3", ty: "::System::Net::WebOperation*", modifiers: "",
  // def_value: None }, CppParam { name: "_throwMe_5__4", ty: "::System::Net::WebException*", modifiers: "", def_value: None }, CppParam { name: "_response_5__5", ty:
  // "::System::Net::HttpWebResponse*", modifiers: "", def_value: None }, CppParam { name: "_stream_5__6", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam { name:
  // "_redirect_5__7", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_mustReadAll_5__8", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ntlm_5__9", ty:
  // "::System::Net::WebOperation*", modifiers: "", def_value: None }, CppParam { name: "_writeBuffer_5__10", ty: "::System::Net::BufferOffsetSize*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>",
  // modifiers: "", def_value: None }]
  constexpr __HttpWebRequest___MyGetResponseAsync_d__243(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*> __t__builder,
                                                         ::System::Net::HttpWebRequest* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                         ::System::Net::WebCompletionSource* _completion_5__2, ::System::Net::WebOperation* _operation_5__3, ::System::Net::WebException* _throwMe_5__4,
                                                         ::System::Net::HttpWebResponse* _response_5__5, ::System::Net::WebResponseStream* _stream_5__6, bool _redirect_5__7, bool _mustReadAll_5__8,
                                                         ::System::Net::WebOperation* _ntlm_5__9, ::System::Net::BufferOffsetSize* _writeBuffer_5__10,
                                                         ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1,
                                                         ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*> __u__3,
                                                         ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<
                                                             ::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>
                                                             __u__4) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpWebRequest___MyGetResponseAsync_d__243();

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
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream*> __u__1;

  /// @brief Field <>u__2, offset: 0x80, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x90, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*> __u__3;

  /// @brief Field <>u__4, offset: 0x98, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<
      ::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>
      __u__4;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, 0xa8>, "Size mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, _completion_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, _operation_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, _throwMe_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, _response_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, _stream_5__6) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, _redirect_5__7) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, _mustReadAll_5__8) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, _ntlm_5__9) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, _writeBuffer_5__10) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, __u__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, __u__3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, __u__4) == 0x98, "Offset mismatch!");

} // namespace System::Net
// Type: ::<GetResponseFromData>d__244
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9100)), TypeDefinitionIndex(TypeDefinitionIndex(9187)), TypeDefinitionIndex(TypeDefinitionIndex(9227)),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3395)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 879 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2510), inst: 5337 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3402), inst: 872 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2510))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9184)) CS
// Name: ::HttpWebRequest::<GetResponseFromData>d__244
struct CORDL_TYPE __HttpWebRequest___GetResponseFromData_d__244 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x29d0da8, size 0x76c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x29d1808, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: None }, CppParam { name: "stream", ty:
  // "::System::Net::WebResponseStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "_response_5__2", ty: "::System::Net::HttpWebResponse*", modifiers: "", def_value: None }, CppParam { name: "_throwMe_5__3", ty: "::System::Net::WebException*", modifiers: "",
  // def_value: None }, CppParam { name: "_redirect_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_mustReadAll_5__5", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*>", modifiers: "", def_value: None }]
  constexpr __HttpWebRequest___GetResponseFromData_d__244(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>
          __t__builder,
      ::System::Net::HttpWebRequest* __4__this, ::System::Net::WebResponseStream* stream, ::System::Threading::CancellationToken cancellationToken, ::System::Net::HttpWebResponse* _response_5__2,
      ::System::Net::WebException* _throwMe_5__3, bool _redirect_5__4, bool _mustReadAll_5__5, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpWebRequest___GetResponseFromData_d__244();

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
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__HttpWebRequest___GetResponseFromData_d__244, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, _response_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, _throwMe_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, _redirect_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, _mustReadAll_5__5) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, __u__2) == 0x60, "Offset mismatch!");

} // namespace System::Net
// Type: ::<<GetRewriteHandler>b__271_0>d
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 879 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(9100))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9185)) CS Name:
// ::HttpWebRequest::<<GetRewriteHandler>b__271_0>d
struct CORDL_TYPE __HttpWebRequest____GetRewriteHandler_b__271_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x29d1860, size 0x418, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x29d1c78, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::System::Net::HttpWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_ms_5__2", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __HttpWebRequest____GetRewriteHandler_b__271_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*> __t__builder,
                                                             ::System::Net::HttpWebRequest* __4__this, ::System::IO::MemoryStream* _ms_5__2,
                                                             ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpWebRequest____GetRewriteHandler_b__271_0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* __4__this;

  /// @brief Field <ms>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::IO::MemoryStream* _ms_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__HttpWebRequest____GetRewriteHandler_b__271_0_d, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest____GetRewriteHandler_b__271_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest____GetRewriteHandler_b__271_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest____GetRewriteHandler_b__271_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest____GetRewriteHandler_b__271_0_d, _ms_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__HttpWebRequest____GetRewriteHandler_b__271_0_d, __u__1) == 0x30, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::HttpWebRequest
// SizeInfo { instance_size: 408, native_size: -1, calculated_instance_size: 408, calculated_native_size: 402, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9180)), TypeDefinitionIndex(TypeDefinitionIndex(9157)), TypeDefinitionIndex(TypeDefinitionIndex(9096))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9186))
// CS Name: ::System.Net::HttpWebRequest*
class CORDL_TYPE HttpWebRequest : public ::System::Net::WebRequest {
public:
  // Declarations
  using __GetRewriteHandler_b__271_0_d = ::System::Net::__HttpWebRequest____GetRewriteHandler_b__271_0_d;

  using _GetResponseFromData_d__244 = ::System::Net::__HttpWebRequest___GetResponseFromData_d__244;

  using _MyGetResponseAsync_d__243 = ::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243;

  template <typename T> using _RunWithTimeoutWorker_d__241_1 = ::System::Net::__HttpWebRequest___RunWithTimeoutWorker_d__241_1<T>;

  template <typename T> using __c__241_1 = ::System::Net::__HttpWebRequest____c__241_1<T>;

  using AuthorizationState = ::System::Net::__HttpWebRequest__AuthorizationState;

  using NtlmAuthState = ::System::Net::__HttpWebRequest__NtlmAuthState;

  /// @brief Field requestUri, offset 0x38, size 0x8
  __declspec(property(get = __get_requestUri, put = __set_requestUri))::System::Uri* requestUri;

  /// @brief Field actualUri, offset 0x40, size 0x8
  __declspec(property(get = __get_actualUri, put = __set_actualUri))::System::Uri* actualUri;

  /// @brief Field hostChanged, offset 0x48, size 0x1
  __declspec(property(get = __get_hostChanged, put = __set_hostChanged)) bool hostChanged;

  /// @brief Field allowAutoRedirect, offset 0x49, size 0x1
  __declspec(property(get = __get_allowAutoRedirect, put = __set_allowAutoRedirect)) bool allowAutoRedirect;

  /// @brief Field allowBuffering, offset 0x4a, size 0x1
  __declspec(property(get = __get_allowBuffering, put = __set_allowBuffering)) bool allowBuffering;

  /// @brief Field certificates, offset 0x50, size 0x8
  __declspec(property(get = __get_certificates, put = __set_certificates))::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates;

  /// @brief Field connectionGroup, offset 0x58, size 0x8
  __declspec(property(get = __get_connectionGroup, put = __set_connectionGroup))::StringW connectionGroup;

  /// @brief Field haveContentLength, offset 0x60, size 0x1
  __declspec(property(get = __get_haveContentLength, put = __set_haveContentLength)) bool haveContentLength;

  /// @brief Field contentLength, offset 0x68, size 0x8
  __declspec(property(get = __get_contentLength, put = __set_contentLength)) int64_t contentLength;

  /// @brief Field continueDelegate, offset 0x70, size 0x8
  __declspec(property(get = __get_continueDelegate, put = __set_continueDelegate))::System::Net::HttpContinueDelegate* continueDelegate;

  /// @brief Field cookieContainer, offset 0x78, size 0x8
  __declspec(property(get = __get_cookieContainer, put = __set_cookieContainer))::System::Net::CookieContainer* cookieContainer;

  /// @brief Field credentials, offset 0x80, size 0x8
  __declspec(property(get = __get_credentials, put = __set_credentials))::System::Net::ICredentials* credentials;

  /// @brief Field haveResponse, offset 0x88, size 0x1
  __declspec(property(get = __get_haveResponse, put = __set_haveResponse)) bool haveResponse;

  /// @brief Field requestSent, offset 0x89, size 0x1
  __declspec(property(get = __get_requestSent, put = __set_requestSent)) bool requestSent;

  /// @brief Field webHeaders, offset 0x90, size 0x8
  __declspec(property(get = __get_webHeaders, put = __set_webHeaders))::System::Net::WebHeaderCollection* webHeaders;

  /// @brief Field keepAlive, offset 0x98, size 0x1
  __declspec(property(get = __get_keepAlive, put = __set_keepAlive)) bool keepAlive;

  /// @brief Field maxAutoRedirect, offset 0x9c, size 0x4
  __declspec(property(get = __get_maxAutoRedirect, put = __set_maxAutoRedirect)) int32_t maxAutoRedirect;

  /// @brief Field mediaType, offset 0xa0, size 0x8
  __declspec(property(get = __get_mediaType, put = __set_mediaType))::StringW mediaType;

  /// @brief Field method, offset 0xa8, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::StringW method;

  /// @brief Field initialMethod, offset 0xb0, size 0x8
  __declspec(property(get = __get_initialMethod, put = __set_initialMethod))::StringW initialMethod;

  /// @brief Field pipelined, offset 0xb8, size 0x1
  __declspec(property(get = __get_pipelined, put = __set_pipelined)) bool pipelined;

  /// @brief Field preAuthenticate, offset 0xb9, size 0x1
  __declspec(property(get = __get_preAuthenticate, put = __set_preAuthenticate)) bool preAuthenticate;

  /// @brief Field usedPreAuth, offset 0xba, size 0x1
  __declspec(property(get = __get_usedPreAuth, put = __set_usedPreAuth)) bool usedPreAuth;

  /// @brief Field version, offset 0xc0, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::System::Version* version;

  /// @brief Field force_version, offset 0xc8, size 0x1
  __declspec(property(get = __get_force_version, put = __set_force_version)) bool force_version;

  /// @brief Field actualVersion, offset 0xd0, size 0x8
  __declspec(property(get = __get_actualVersion, put = __set_actualVersion))::System::Version* actualVersion;

  /// @brief Field proxy, offset 0xd8, size 0x8
  __declspec(property(get = __get_proxy, put = __set_proxy))::System::Net::IWebProxy* proxy;

  /// @brief Field sendChunked, offset 0xe0, size 0x1
  __declspec(property(get = __get_sendChunked, put = __set_sendChunked)) bool sendChunked;

  /// @brief Field servicePoint, offset 0xe8, size 0x8
  __declspec(property(get = __get_servicePoint, put = __set_servicePoint))::System::Net::ServicePoint* servicePoint;

  /// @brief Field timeout, offset 0xf0, size 0x4
  __declspec(property(get = __get_timeout, put = __set_timeout)) int32_t timeout;

  /// @brief Field continueTimeout, offset 0xf4, size 0x4
  __declspec(property(get = __get_continueTimeout, put = __set_continueTimeout)) int32_t continueTimeout;

  /// @brief Field writeStream, offset 0xf8, size 0x8
  __declspec(property(get = __get_writeStream, put = __set_writeStream))::System::Net::WebRequestStream* writeStream;

  /// @brief Field webResponse, offset 0x100, size 0x8
  __declspec(property(get = __get_webResponse, put = __set_webResponse))::System::Net::HttpWebResponse* webResponse;

  /// @brief Field responseTask, offset 0x108, size 0x8
  __declspec(property(get = __get_responseTask, put = __set_responseTask))::System::Net::WebCompletionSource* responseTask;

  /// @brief Field currentOperation, offset 0x110, size 0x8
  __declspec(property(get = __get_currentOperation, put = __set_currentOperation))::System::Net::WebOperation* currentOperation;

  /// @brief Field aborted, offset 0x118, size 0x4
  __declspec(property(get = __get_aborted, put = __set_aborted)) int32_t aborted;

  /// @brief Field gotRequestStream, offset 0x11c, size 0x1
  __declspec(property(get = __get_gotRequestStream, put = __set_gotRequestStream)) bool gotRequestStream;

  /// @brief Field redirects, offset 0x120, size 0x4
  __declspec(property(get = __get_redirects, put = __set_redirects)) int32_t redirects;

  /// @brief Field expectContinue, offset 0x124, size 0x1
  __declspec(property(get = __get_expectContinue, put = __set_expectContinue)) bool expectContinue;

  /// @brief Field getResponseCalled, offset 0x125, size 0x1
  __declspec(property(get = __get_getResponseCalled, put = __set_getResponseCalled)) bool getResponseCalled;

  /// @brief Field locker, offset 0x128, size 0x8
  __declspec(property(get = __get_locker, put = __set_locker))::System::Object* locker;

  /// @brief Field finished_reading, offset 0x130, size 0x1
  __declspec(property(get = __get_finished_reading, put = __set_finished_reading)) bool finished_reading;

  /// @brief Field auto_decomp, offset 0x134, size 0x4
  __declspec(property(get = __get_auto_decomp, put = __set_auto_decomp))::System::Net::DecompressionMethods auto_decomp;

  /// @brief Field readWriteTimeout, offset 0x138, size 0x4
  __declspec(property(get = __get_readWriteTimeout, put = __set_readWriteTimeout)) int32_t readWriteTimeout;

  /// @brief Field tlsProvider, offset 0x140, size 0x8
  __declspec(property(get = __get_tlsProvider, put = __set_tlsProvider))::Mono::Net::Security::MobileTlsProvider* tlsProvider;

  /// @brief Field tlsSettings, offset 0x148, size 0x8
  __declspec(property(get = __get_tlsSettings, put = __set_tlsSettings))::Mono::Security::Interface::MonoTlsSettings* tlsSettings;

  /// @brief Field certValidationCallback, offset 0x150, size 0x8
  __declspec(property(get = __get_certValidationCallback, put = __set_certValidationCallback))::System::Net::ServerCertValidationCallback* certValidationCallback;

  /// @brief Field hostHasPort, offset 0x158, size 0x1
  __declspec(property(get = __get_hostHasPort, put = __set_hostHasPort)) bool hostHasPort;

  /// @brief Field hostUri, offset 0x160, size 0x8
  __declspec(property(get = __get_hostUri, put = __set_hostUri))::System::Uri* hostUri;

  /// @brief Field auth_state, offset 0x168, size 0x10
  __declspec(property(get = __get_auth_state, put = __set_auth_state))::System::Net::__HttpWebRequest__AuthorizationState auth_state;

  /// @brief Field proxy_auth_state, offset 0x178, size 0x10
  __declspec(property(get = __get_proxy_auth_state, put = __set_proxy_auth_state))::System::Net::__HttpWebRequest__AuthorizationState proxy_auth_state;

  /// @brief Field ResendContentFactory, offset 0x188, size 0x8
  __declspec(property(get = __get_ResendContentFactory, put = __set_ResendContentFactory))::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>* ResendContentFactory;

  /// @brief Field <ThrowOnError>k__BackingField, offset 0x190, size 0x1
  __declspec(property(get = __get__ThrowOnError_k__BackingField, put = __set__ThrowOnError_k__BackingField)) bool _ThrowOnError_k__BackingField;

  /// @brief Field unsafe_auth_blah, offset 0x191, size 0x1
  __declspec(property(get = __get_unsafe_auth_blah, put = __set_unsafe_auth_blah)) bool unsafe_auth_blah;

  /// @brief Field defaultMaxResponseHeadersLength, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_defaultMaxResponseHeadersLength, put = setStaticF_defaultMaxResponseHeadersLength)) int32_t defaultMaxResponseHeadersLength;

  /// @brief Field defaultMaximumErrorResponseLength, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_defaultMaximumErrorResponseLength, put = setStaticF_defaultMaximumErrorResponseLength)) int32_t defaultMaximumErrorResponseLength;

  /// @brief Field defaultCachePolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultCachePolicy, put = setStaticF_defaultCachePolicy))::System::Net::Cache::RequestCachePolicy* defaultCachePolicy;

  __declspec(property(get = get_Address))::System::Uri* Address;

  __declspec(property(put = set_AllowAutoRedirect)) bool AllowAutoRedirect;

  __declspec(property(get = get_AllowWriteStreamBuffering, put = set_AllowWriteStreamBuffering)) bool AllowWriteStreamBuffering;

  __declspec(property(get = get_AutomaticDecompression, put = set_AutomaticDecompression))::System::Net::DecompressionMethods AutomaticDecompression;

  __declspec(property(get = get_InternalAllowBuffering)) bool InternalAllowBuffering;

  __declspec(property(get = get_MethodWithBuffer)) bool MethodWithBuffer;

  __declspec(property(get = get_TlsProvider))::Mono::Net::Security::MobileTlsProvider* TlsProvider;

  __declspec(property(get = get_TlsSettings))::Mono::Security::Interface::MonoTlsSettings* TlsSettings;

  __declspec(property(get = get_ClientCertificates))::System::Security::Cryptography::X509Certificates::X509CertificateCollection* ClientCertificates;

  __declspec(property(put = set_ConnectionGroupName))::StringW ConnectionGroupName;

  __declspec(property(get = get_ContentLength, put = set_ContentLength)) int64_t ContentLength;

  __declspec(property(put = set_InternalContentLength)) int64_t InternalContentLength;

  __declspec(property(get = get_ThrowOnError, put = set_ThrowOnError)) bool ThrowOnError;

  __declspec(property(put = set_CookieContainer))::System::Net::CookieContainer* CookieContainer;

  __declspec(property(get = get_Credentials, put = set_Credentials))::System::Net::ICredentials* Credentials;

  __declspec(property(get = get_Headers))::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_Host, put = set_Host))::StringW Host;

  __declspec(property(get = get_KeepAlive, put = set_KeepAlive)) bool KeepAlive;

  __declspec(property(put = set_MaximumAutomaticRedirections)) int32_t MaximumAutomaticRedirections;

  __declspec(property(get = get_ReadWriteTimeout)) int32_t ReadWriteTimeout;

  __declspec(property(get = get_Method, put = set_Method))::StringW Method;

  __declspec(property(put = set_PreAuthenticate)) bool PreAuthenticate;

  __declspec(property(get = get_ProtocolVersion, put = set_ProtocolVersion))::System::Version* ProtocolVersion;

  __declspec(property(get = get_Proxy, put = set_Proxy))::System::Net::IWebProxy* Proxy;

  __declspec(property(get = get_RequestUri))::System::Uri* RequestUri;

  __declspec(property(get = get_SendChunked, put = set_SendChunked)) bool SendChunked;

  __declspec(property(get = get_ServicePoint))::System::Net::ServicePoint* ServicePoint;

  __declspec(property(get = get_ServicePointNoLock))::System::Net::ServicePoint* ServicePointNoLock;

  __declspec(property(get = get_Timeout, put = set_Timeout)) int32_t Timeout;

  __declspec(property(get = get_TransferEncoding))::StringW TransferEncoding;

  __declspec(property(get = get_UseDefaultCredentials)) bool UseDefaultCredentials;

  __declspec(property(get = get_UnsafeAuthenticatedConnectionSharing)) bool UnsafeAuthenticatedConnectionSharing;

  __declspec(property(get = get_ExpectContinue, put = set_ExpectContinue)) bool ExpectContinue;

  __declspec(property(get = get_AuthUri))::System::Uri* AuthUri;

  __declspec(property(get = get_ProxyQuery)) bool ProxyQuery;

  __declspec(property(get = get_ServerCertValidationCallback))::System::Net::ServerCertValidationCallback* ServerCertValidationCallback;

  __declspec(property(put = set_FinishedReading)) bool FinishedReading;

  __declspec(property(get = get_Aborted)) bool Aborted;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::System::Uri*& __get_requestUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_requestUri() const;

  constexpr void __set_requestUri(::System::Uri* value);

  constexpr ::System::Uri*& __get_actualUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_actualUri() const;

  constexpr void __set_actualUri(::System::Uri* value);

  constexpr bool& __get_hostChanged();

  constexpr bool const& __get_hostChanged() const;

  constexpr void __set_hostChanged(bool value);

  constexpr bool& __get_allowAutoRedirect();

  constexpr bool const& __get_allowAutoRedirect() const;

  constexpr void __set_allowAutoRedirect(bool value);

  constexpr bool& __get_allowBuffering();

  constexpr bool const& __get_allowBuffering() const;

  constexpr void __set_allowBuffering(bool value);

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __get_certificates();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*> const& __get_certificates() const;

  constexpr void __set_certificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  constexpr ::StringW& __get_connectionGroup();

  constexpr ::StringW const& __get_connectionGroup() const;

  constexpr void __set_connectionGroup(::StringW value);

  constexpr bool& __get_haveContentLength();

  constexpr bool const& __get_haveContentLength() const;

  constexpr void __set_haveContentLength(bool value);

  constexpr int64_t& __get_contentLength();

  constexpr int64_t const& __get_contentLength() const;

  constexpr void __set_contentLength(int64_t value);

  constexpr ::System::Net::HttpContinueDelegate*& __get_continueDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpContinueDelegate*> const& __get_continueDelegate() const;

  constexpr void __set_continueDelegate(::System::Net::HttpContinueDelegate* value);

  constexpr ::System::Net::CookieContainer*& __get_cookieContainer();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieContainer*> const& __get_cookieContainer() const;

  constexpr void __set_cookieContainer(::System::Net::CookieContainer* value);

  constexpr ::System::Net::ICredentials*& __get_credentials();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& __get_credentials() const;

  constexpr void __set_credentials(::System::Net::ICredentials* value);

  constexpr bool& __get_haveResponse();

  constexpr bool const& __get_haveResponse() const;

  constexpr void __set_haveResponse(bool value);

  constexpr bool& __get_requestSent();

  constexpr bool const& __get_requestSent() const;

  constexpr void __set_requestSent(bool value);

  constexpr ::System::Net::WebHeaderCollection*& __get_webHeaders();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& __get_webHeaders() const;

  constexpr void __set_webHeaders(::System::Net::WebHeaderCollection* value);

  constexpr bool& __get_keepAlive();

  constexpr bool const& __get_keepAlive() const;

  constexpr void __set_keepAlive(bool value);

  constexpr int32_t& __get_maxAutoRedirect();

  constexpr int32_t const& __get_maxAutoRedirect() const;

  constexpr void __set_maxAutoRedirect(int32_t value);

  constexpr ::StringW& __get_mediaType();

  constexpr ::StringW const& __get_mediaType() const;

  constexpr void __set_mediaType(::StringW value);

  constexpr ::StringW& __get_method();

  constexpr ::StringW const& __get_method() const;

  constexpr void __set_method(::StringW value);

  constexpr ::StringW& __get_initialMethod();

  constexpr ::StringW const& __get_initialMethod() const;

  constexpr void __set_initialMethod(::StringW value);

  constexpr bool& __get_pipelined();

  constexpr bool const& __get_pipelined() const;

  constexpr void __set_pipelined(bool value);

  constexpr bool& __get_preAuthenticate();

  constexpr bool const& __get_preAuthenticate() const;

  constexpr void __set_preAuthenticate(bool value);

  constexpr bool& __get_usedPreAuth();

  constexpr bool const& __get_usedPreAuth() const;

  constexpr void __set_usedPreAuth(bool value);

  constexpr ::System::Version*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __get_version() const;

  constexpr void __set_version(::System::Version* value);

  constexpr bool& __get_force_version();

  constexpr bool const& __get_force_version() const;

  constexpr void __set_force_version(bool value);

  constexpr ::System::Version*& __get_actualVersion();

  constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& __get_actualVersion() const;

  constexpr void __set_actualVersion(::System::Version* value);

  constexpr ::System::Net::IWebProxy*& __get_proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __get_proxy() const;

  constexpr void __set_proxy(::System::Net::IWebProxy* value);

  constexpr bool& __get_sendChunked();

  constexpr bool const& __get_sendChunked() const;

  constexpr void __set_sendChunked(bool value);

  constexpr ::System::Net::ServicePoint*& __get_servicePoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePoint*> const& __get_servicePoint() const;

  constexpr void __set_servicePoint(::System::Net::ServicePoint* value);

  constexpr int32_t& __get_timeout();

  constexpr int32_t const& __get_timeout() const;

  constexpr void __set_timeout(int32_t value);

  constexpr int32_t& __get_continueTimeout();

  constexpr int32_t const& __get_continueTimeout() const;

  constexpr void __set_continueTimeout(int32_t value);

  constexpr ::System::Net::WebRequestStream*& __get_writeStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequestStream*> const& __get_writeStream() const;

  constexpr void __set_writeStream(::System::Net::WebRequestStream* value);

  constexpr ::System::Net::HttpWebResponse*& __get_webResponse();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebResponse*> const& __get_webResponse() const;

  constexpr void __set_webResponse(::System::Net::HttpWebResponse* value);

  constexpr ::System::Net::WebCompletionSource*& __get_responseTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource*> const& __get_responseTask() const;

  constexpr void __set_responseTask(::System::Net::WebCompletionSource* value);

  constexpr ::System::Net::WebOperation*& __get_currentOperation();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebOperation*> const& __get_currentOperation() const;

  constexpr void __set_currentOperation(::System::Net::WebOperation* value);

  constexpr int32_t& __get_aborted();

  constexpr int32_t const& __get_aborted() const;

  constexpr void __set_aborted(int32_t value);

  constexpr bool& __get_gotRequestStream();

  constexpr bool const& __get_gotRequestStream() const;

  constexpr void __set_gotRequestStream(bool value);

  constexpr int32_t& __get_redirects();

  constexpr int32_t const& __get_redirects() const;

  constexpr void __set_redirects(int32_t value);

  constexpr bool& __get_expectContinue();

  constexpr bool const& __get_expectContinue() const;

  constexpr void __set_expectContinue(bool value);

  constexpr bool& __get_getResponseCalled();

  constexpr bool const& __get_getResponseCalled() const;

  constexpr void __set_getResponseCalled(bool value);

  constexpr ::System::Object*& __get_locker();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_locker() const;

  constexpr void __set_locker(::System::Object* value);

  constexpr bool& __get_finished_reading();

  constexpr bool const& __get_finished_reading() const;

  constexpr void __set_finished_reading(bool value);

  constexpr ::System::Net::DecompressionMethods& __get_auto_decomp();

  constexpr ::System::Net::DecompressionMethods const& __get_auto_decomp() const;

  constexpr void __set_auto_decomp(::System::Net::DecompressionMethods value);

  constexpr int32_t& __get_readWriteTimeout();

  constexpr int32_t const& __get_readWriteTimeout() const;

  constexpr void __set_readWriteTimeout(int32_t value);

  constexpr ::Mono::Net::Security::MobileTlsProvider*& __get_tlsProvider();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileTlsProvider*> const& __get_tlsProvider() const;

  constexpr void __set_tlsProvider(::Mono::Net::Security::MobileTlsProvider* value);

  constexpr ::Mono::Security::Interface::MonoTlsSettings*& __get_tlsSettings();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsSettings*> const& __get_tlsSettings() const;

  constexpr void __set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings* value);

  constexpr ::System::Net::ServerCertValidationCallback*& __get_certValidationCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ServerCertValidationCallback*> const& __get_certValidationCallback() const;

  constexpr void __set_certValidationCallback(::System::Net::ServerCertValidationCallback* value);

  constexpr bool& __get_hostHasPort();

  constexpr bool const& __get_hostHasPort() const;

  constexpr void __set_hostHasPort(bool value);

  constexpr ::System::Uri*& __get_hostUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_hostUri() const;

  constexpr void __set_hostUri(::System::Uri* value);

  constexpr ::System::Net::__HttpWebRequest__AuthorizationState& __get_auth_state();

  constexpr ::System::Net::__HttpWebRequest__AuthorizationState const& __get_auth_state() const;

  constexpr void __set_auth_state(::System::Net::__HttpWebRequest__AuthorizationState value);

  constexpr ::System::Net::__HttpWebRequest__AuthorizationState& __get_proxy_auth_state();

  constexpr ::System::Net::__HttpWebRequest__AuthorizationState const& __get_proxy_auth_state() const;

  constexpr void __set_proxy_auth_state(::System::Net::__HttpWebRequest__AuthorizationState value);

  constexpr ::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>*& __get_ResendContentFactory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>*> const& __get_ResendContentFactory() const;

  constexpr void __set_ResendContentFactory(::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>* value);

  constexpr bool& __get__ThrowOnError_k__BackingField();

  constexpr bool const& __get__ThrowOnError_k__BackingField() const;

  constexpr void __set__ThrowOnError_k__BackingField(bool value);

  constexpr bool& __get_unsafe_auth_blah();

  constexpr bool const& __get_unsafe_auth_blah() const;

  constexpr void __set_unsafe_auth_blah(bool value);

  static inline void setStaticF_defaultMaxResponseHeadersLength(int32_t value);

  static inline int32_t getStaticF_defaultMaxResponseHeadersLength();

  static inline void setStaticF_defaultMaximumErrorResponseLength(int32_t value);

  static inline int32_t getStaticF_defaultMaximumErrorResponseLength();

  static inline void setStaticF_defaultCachePolicy(::System::Net::Cache::RequestCachePolicy* value);

  static inline ::System::Net::Cache::RequestCachePolicy* getStaticF_defaultCachePolicy();

  static inline ::System::Net::HttpWebRequest* New_ctor(::System::Uri* uri);

  /// @brief Method .ctor, addr 0x29cb820, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* uri);

  static inline ::System::Net::HttpWebRequest* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x29cbc84, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method ResetAuthorization, addr 0x29cbc74, size 0x10, virtual false, abstract: false, final false
  inline void ResetAuthorization();

  /// @brief Method get_Address, addr 0x29cbdd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_Address();

  /// @brief Method set_AllowAutoRedirect, addr 0x29cbddc, size 0xc, virtual true, abstract: false, final false
  inline void set_AllowAutoRedirect(bool value);

  /// @brief Method get_AllowWriteStreamBuffering, addr 0x29cbde8, size 0x8, virtual true, abstract: false, final false
  inline bool get_AllowWriteStreamBuffering();

  /// @brief Method set_AllowWriteStreamBuffering, addr 0x29cbdf0, size 0xc, virtual true, abstract: false, final false
  inline void set_AllowWriteStreamBuffering(bool value);

  /// @brief Method get_AutomaticDecompression, addr 0x29cbdfc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::DecompressionMethods get_AutomaticDecompression();

  /// @brief Method set_AutomaticDecompression, addr 0x29cbe04, size 0x24, virtual false, abstract: false, final false
  inline void set_AutomaticDecompression(::System::Net::DecompressionMethods value);

  /// @brief Method get_InternalAllowBuffering, addr 0x29cbe88, size 0x14, virtual false, abstract: false, final false
  inline bool get_InternalAllowBuffering();

  /// @brief Method get_MethodWithBuffer, addr 0x29cbe9c, size 0xfc, virtual false, abstract: false, final false
  inline bool get_MethodWithBuffer();

  /// @brief Method get_TlsProvider, addr 0x29cbf98, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Net::Security::MobileTlsProvider* get_TlsProvider();

  /// @brief Method get_TlsSettings, addr 0x29cbfa0, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoTlsSettings* get_TlsSettings();

  /// @brief Method get_ClientCertificates, addr 0x29cbfa8, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();

  /// @brief Method set_ConnectionGroupName, addr 0x29cc014, size 0x8, virtual true, abstract: false, final false
  inline void set_ConnectionGroupName(::StringW value);

  /// @brief Method get_ContentLength, addr 0x29cc01c, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_ContentLength();

  /// @brief Method set_ContentLength, addr 0x29cc024, size 0x90, virtual true, abstract: false, final false
  inline void set_ContentLength(int64_t value);

  /// @brief Method set_InternalContentLength, addr 0x29cc0b4, size 0x8, virtual false, abstract: false, final false
  inline void set_InternalContentLength(int64_t value);

  /// @brief Method get_ThrowOnError, addr 0x29cc0bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_ThrowOnError();

  /// @brief Method set_ThrowOnError, addr 0x29cc0c4, size 0xc, virtual false, abstract: false, final false
  inline void set_ThrowOnError(bool value);

  /// @brief Method set_CookieContainer, addr 0x29cc0d0, size 0x8, virtual true, abstract: false, final false
  inline void set_CookieContainer(::System::Net::CookieContainer* value);

  /// @brief Method get_Credentials, addr 0x29cc0d8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::ICredentials* get_Credentials();

  /// @brief Method set_Credentials, addr 0x29cc0e0, size 0x8, virtual true, abstract: false, final false
  inline void set_Credentials(::System::Net::ICredentials* value);

  /// @brief Method get_DefaultMaximumErrorResponseLength, addr 0x29cc0e8, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_DefaultMaximumErrorResponseLength();

  /// @brief Method get_Headers, addr 0x29cc140, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_Host, addr 0x29cc148, size 0x10c, virtual false, abstract: false, final false
  inline ::StringW get_Host();

  /// @brief Method set_Host, addr 0x29cc254, size 0x170, virtual false, abstract: false, final false
  inline void set_Host(::StringW value);

  /// @brief Method TryGetHostUri, addr 0x29cc3c4, size 0xd0, virtual false, abstract: false, final false
  inline bool TryGetHostUri(::StringW hostName, ByRef<::System::Uri*> hostUri);

  /// @brief Method get_KeepAlive, addr 0x29cc494, size 0x8, virtual false, abstract: false, final false
  inline bool get_KeepAlive();

  /// @brief Method set_KeepAlive, addr 0x29cc49c, size 0xc, virtual false, abstract: false, final false
  inline void set_KeepAlive(bool value);

  /// @brief Method set_MaximumAutomaticRedirections, addr 0x29cc4a8, size 0x80, virtual false, abstract: false, final false
  inline void set_MaximumAutomaticRedirections(int32_t value);

  /// @brief Method get_DefaultMaximumResponseHeadersLength, addr 0x29cc528, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_DefaultMaximumResponseHeadersLength();

  /// @brief Method get_ReadWriteTimeout, addr 0x29cc580, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ReadWriteTimeout();

  /// @brief Method get_Method, addr 0x29cc588, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Method();

  /// @brief Method set_Method, addr 0x29cc590, size 0x22c, virtual true, abstract: false, final false
  inline void set_Method(::StringW value);

  /// @brief Method set_PreAuthenticate, addr 0x29cc7bc, size 0xc, virtual true, abstract: false, final false
  inline void set_PreAuthenticate(bool value);

  /// @brief Method get_ProtocolVersion, addr 0x29cc7c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Version* get_ProtocolVersion();

  /// @brief Method set_ProtocolVersion, addr 0x29cc7d0, size 0x110, virtual false, abstract: false, final false
  inline void set_ProtocolVersion(::System::Version* value);

  /// @brief Method get_Proxy, addr 0x29cc8e0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Net::IWebProxy* get_Proxy();

  /// @brief Method set_Proxy, addr 0x29cc8e8, size 0x2c, virtual true, abstract: false, final false
  inline void set_Proxy(::System::Net::IWebProxy* value);

  /// @brief Method get_RequestUri, addr 0x29cca44, size 0x8, virtual true, abstract: false, final false
  inline ::System::Uri* get_RequestUri();

  /// @brief Method get_SendChunked, addr 0x29cca4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_SendChunked();

  /// @brief Method set_SendChunked, addr 0x29cca54, size 0x24, virtual false, abstract: false, final false
  inline void set_SendChunked(bool value);

  /// @brief Method get_ServicePoint, addr 0x29cca78, size 0x4, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* get_ServicePoint();

  /// @brief Method get_ServicePointNoLock, addr 0x29cca7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* get_ServicePointNoLock();

  /// @brief Method get_Timeout, addr 0x29cca84, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Timeout();

  /// @brief Method set_Timeout, addr 0x29cca8c, size 0x64, virtual true, abstract: false, final false
  inline void set_Timeout(int32_t value);

  /// @brief Method get_TransferEncoding, addr 0x29ccaf0, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_TransferEncoding();

  /// @brief Method get_UseDefaultCredentials, addr 0x29ccb44, size 0x78, virtual true, abstract: false, final false
  inline bool get_UseDefaultCredentials();

  /// @brief Method get_UnsafeAuthenticatedConnectionSharing, addr 0x29ccbbc, size 0x8, virtual false, abstract: false, final false
  inline bool get_UnsafeAuthenticatedConnectionSharing();

  /// @brief Method get_ExpectContinue, addr 0x29ccbc4, size 0x8, virtual false, abstract: false, final false
  inline bool get_ExpectContinue();

  /// @brief Method set_ExpectContinue, addr 0x29ccbcc, size 0xc, virtual false, abstract: false, final false
  inline void set_ExpectContinue(bool value);

  /// @brief Method get_AuthUri, addr 0x29ccbd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_AuthUri();

  /// @brief Method get_ProxyQuery, addr 0x29ccbe0, size 0x34, virtual false, abstract: false, final false
  inline bool get_ProxyQuery();

  /// @brief Method get_ServerCertValidationCallback, addr 0x29ccc14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback();

  /// @brief Method GetServicePoint, addr 0x29cc914, size 0x130, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* GetServicePoint();

  /// @brief Method SendRequest, addr 0x29ccc1c, size 0x23c, virtual false, abstract: false, final false
  inline ::System::Net::WebOperation* SendRequest(bool redirecting, ::System::Net::BufferOffsetSize* writeBuffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MyGetRequestStreamAsync, addr 0x29cce58, size 0x378, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* MyGetRequestStreamAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method BeginGetRequestStream, addr 0x29cd2bc, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndGetRequestStream, addr 0x29cd374, size 0x124, virtual true, abstract: false, final false
  inline ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult);

  /// @brief Method GetRequestStreamAsync, addr 0x29cd51c, size 0x98, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetRequestStreamAsync();

  /// @brief Method RunWithTimeout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Threading::Tasks::Task_1<T>* RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>* func, int32_t timeout,
                                                                      ::System::Action* abort, ::System::Func_1<bool>* aborted, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RunWithTimeoutWorker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Threading::Tasks::Task_1<T>* RunWithTimeoutWorker(::System::Threading::Tasks::Task_1<T>* workerTask, int32_t timeout, ::System::Action* abort,
                                                                            ::System::Func_1<bool>* aborted, ::System::Threading::CancellationTokenSource* cts);

  /// @brief Method RunWithTimeout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<T>*>* func);

  /// @brief Method MyGetResponseAsync, addr 0x29cd5b4, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse*>* MyGetResponseAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetResponseFromData, addr 0x29cd6c0, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>*
  GetResponseFromData(::System::Net::WebResponseStream* stream, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FlattenException, addr 0x29cd7c8, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Exception* FlattenException(::System::Exception* e);

  /// @brief Method GetWebException, addr 0x29cd498, size 0x84, virtual false, abstract: false, final false
  inline ::System::Net::WebException* GetWebException(::System::Exception* e);

  /// @brief Method GetWebException, addr 0x29cd888, size 0x1b0, virtual false, abstract: false, final false
  static inline ::System::Net::WebException* GetWebException(::System::Exception* e, bool aborted);

  /// @brief Method CreateRequestAbortedException, addr 0x29cd1f8, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Net::WebException* CreateRequestAbortedException();

  /// @brief Method BeginGetResponse, addr 0x29cda38, size 0x17c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndGetResponse, addr 0x29cdbb4, size 0x124, virtual true, abstract: false, final false
  inline ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult);

  /// @brief Method GetResponse, addr 0x29cdcd8, size 0x100, virtual true, abstract: false, final false
  inline ::System::Net::WebResponse* GetResponse();

  /// @brief Method set_FinishedReading, addr 0x29cddd8, size 0xc, virtual false, abstract: false, final false
  inline void set_FinishedReading(bool value);

  /// @brief Method get_Aborted, addr 0x29cd1d0, size 0x28, virtual false, abstract: false, final false
  inline bool get_Aborted();

  /// @brief Method Abort, addr 0x29cdde4, size 0x110, virtual true, abstract: false, final false
  inline void Abort();

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x29cdef4, size 0x40, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetObjectData, addr 0x29cdf34, size 0x40, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method CheckRequestStarted, addr 0x29cbe28, size 0x60, virtual false, abstract: false, final false
  inline void CheckRequestStarted();

  /// @brief Method DoContinueDelegate, addr 0x29cdf74, size 0x1c, virtual false, abstract: false, final false
  inline void DoContinueDelegate(int32_t statusCode, ::System::Net::WebHeaderCollection* headers);

  /// @brief Method RewriteRedirectToGet, addr 0x29cdf90, size 0x78, virtual false, abstract: false, final false
  inline void RewriteRedirectToGet();

  /// @brief Method Redirect, addr 0x29ce008, size 0x4e0, virtual false, abstract: false, final false
  inline bool Redirect(::System::Net::HttpStatusCode code, ::System::Net::WebResponse* response);

  /// @brief Method GetHeaders, addr 0x29ce4e8, size 0x650, virtual false, abstract: false, final false
  inline ::StringW GetHeaders();

  /// @brief Method DoPreAuthenticate, addr 0x29ceb38, size 0x1fc, virtual false, abstract: false, final false
  inline void DoPreAuthenticate();

  /// @brief Method GetRequestHeaders, addr 0x29ced34, size 0x318, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRequestHeaders();

  /// @brief Method HandleNtlmAuth, addr 0x29cf04c, size 0x290, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::System::Net::WebOperation*, bool> HandleNtlmAuth(::System::Net::WebResponseStream* stream, ::System::Net::HttpWebResponse* response,
                                                                                   ::System::Net::BufferOffsetSize* writeBuffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CheckAuthorization, addr 0x29cf2dc, size 0x18, virtual false, abstract: false, final false
  inline bool CheckAuthorization(::System::Net::WebResponse* response, ::System::Net::HttpStatusCode code);

  /// @brief Method GetRewriteHandler, addr 0x29cf60c, size 0x1f8, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, ::System::Net::WebException*> GetRewriteHandler(::System::Net::HttpWebResponse* response,
                                                                                                                                                       bool redirect);

  /// @brief Method CheckFinalStatus, addr 0x29cf804, size 0x480, virtual false, abstract: false, final false
  inline ::System::ValueTuple_4<bool, bool, ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*, ::System::Net::WebException*>
  CheckFinalStatus(::System::Net::HttpWebResponse* response);

  /// @brief Method <RunWithTimeout>b__242_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool _RunWithTimeout_b__242_0();

  /// @brief Method <GetRewriteHandler>b__271_0, addr 0x29cfd08, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>* _GetRewriteHandler_b__271_0();

  static inline ::System::Net::HttpWebRequest* New_ctor();

  /// @brief Method .ctor, addr 0x29cfdf4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpWebRequest(HttpWebRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpWebRequest(HttpWebRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpWebRequest();

public:
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
  ::System::Net::__HttpWebRequest__AuthorizationState ___auth_state;

  /// @brief Field proxy_auth_state, offset: 0x178, size: 0x10, def value: None
  ::System::Net::__HttpWebRequest__AuthorizationState ___proxy_auth_state;

  /// @brief Field ResendContentFactory, offset: 0x188, size: 0x8, def value: None
  ::System::Func_2<::System::IO::Stream*, ::System::Threading::Tasks::Task*>* ___ResendContentFactory;

  /// @brief Field <ThrowOnError>k__BackingField, offset: 0x190, size: 0x1, def value: None
  bool ____ThrowOnError_k__BackingField;

  /// @brief Field unsafe_auth_blah, offset: 0x191, size: 0x1, def value: None
  bool ___unsafe_auth_blah;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpWebRequest, 0x198>, "Size mismatch!");

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

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__HttpWebRequest__NtlmAuthState, "System.Net", "HttpWebRequest/NtlmAuthState");
NEED_NO_BOX(::System::Net::HttpWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebRequest*, "System.Net", "HttpWebRequest");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::__HttpWebRequest____c__241_1, "System.Net", "HttpWebRequest/<>c__241`1");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__HttpWebRequest__AuthorizationState, "System.Net", "HttpWebRequest/AuthorizationState");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__HttpWebRequest___GetResponseFromData_d__244, "System.Net", "HttpWebRequest/<GetResponseFromData>d__244");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__HttpWebRequest___MyGetResponseAsync_d__243, "System.Net", "HttpWebRequest/<MyGetResponseAsync>d__243");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::__HttpWebRequest___RunWithTimeoutWorker_d__241_1, "System.Net", "HttpWebRequest/<RunWithTimeoutWorker>d__241`1");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__HttpWebRequest____GetRewriteHandler_b__271_0_d, "System.Net", "HttpWebRequest/<<GetRewriteHandler>b__271_0>d");
