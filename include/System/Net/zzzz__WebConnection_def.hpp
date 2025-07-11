#pragma once
// IWYU pragma private; include "System/Net/WebConnection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnection)
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class NetworkCredential;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
struct WebConnection__Connect_d__16;
}
namespace System::Net {
struct WebConnection__CreateStream_d__18;
}
namespace System::Net {
struct WebConnection__InitConnection_d__19;
}
namespace System::Net {
class WebConnection___c;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebConnection___c;
}
namespace System::Net {
struct WebConnection__Connect_d__16;
}
namespace System::Net {
struct WebConnection__CreateStream_d__18;
}
namespace System::Net {
struct WebConnection__InitConnection_d__19;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebConnection);
MARK_REF_PTR_T(::System::Net::WebConnection___c);
MARK_VAL_T(::System::Net::WebConnection__Connect_d__16);
MARK_VAL_T(::System::Net::WebConnection__CreateStream_d__18);
MARK_VAL_T(::System::Net::WebConnection__InitConnection_d__19);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebConnection/<>c
class CORDL_TYPE WebConnection___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Net::WebConnection___c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_0,
                      put = setStaticF___9__16_0)) ::System::Func_4<::System::Net::IPEndPoint*, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* __9__16_0;

  /// @brief Field <>9__16_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_1, put = setStaticF___9__16_1)) ::System::Action_1<::System::IAsyncResult*>* __9__16_1;

  static inline ::System::Net::WebConnection___c* New_ctor();

  /// @brief Method <Connect>b__16_0, addr 0x43dae64, size 0xa0, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* _Connect_b__16_0(::System::Net::IPEndPoint* targetEndPoint, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method <Connect>b__16_1, addr 0x43daf04, size 0xf4, virtual false, abstract: false, final false
  inline void _Connect_b__16_1(::System::IAsyncResult* asyncResult);

  /// @brief Method .ctor, addr 0x43dae5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::WebConnection___c* getStaticF___9();

  static inline ::System::Func_4<::System::Net::IPEndPoint*, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* getStaticF___9__16_0();

  static inline ::System::Action_1<::System::IAsyncResult*>* getStaticF___9__16_1();

  static inline void setStaticF___9(::System::Net::WebConnection___c* value);

  static inline void setStaticF___9__16_0(::System::Func_4<::System::Net::IPEndPoint*, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* value);

  static inline void setStaticF___9__16_1(::System::Action_1<::System::IAsyncResult*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnection___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebConnection___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebConnection___c(WebConnection___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebConnection___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebConnection___c(WebConnection___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9736 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebConnection___c, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebConnection/<Connect>d__16
struct CORDL_TYPE WebConnection__Connect_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43daff8, size 0x9a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43db998, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnection__Connect_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnection*", modifiers: "", def_value: None
  // }, CppParam { name: "operation", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "_connectException_5__2", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr WebConnection__Connect_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebConnection* __4__this,
                                         ::System::Net::WebOperation* operation, ::System::Threading::CancellationToken cancellationToken, ::System::Exception* _connectException_5__2,
                                         ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> __7__wrap2, int32_t __7__wrap3,
                                         ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9737 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebConnection* __4__this;

  /// @brief Field operation, offset: 0x28, size: 0x8, def value: None
  ::System::Net::WebOperation* operation;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <connectException>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Exception* _connectException_5__2;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> __7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x48, size: 0x4, def value: None
  int32_t __7__wrap3;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnection__Connect_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__Connect_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__Connect_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__Connect_d__16, operation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__Connect_d__16, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__Connect_d__16, _connectException_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__Connect_d__16, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__Connect_d__16, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__Connect_d__16, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebConnection__Connect_d__16, 0x60>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebConnection/<CreateStream>d__18
struct CORDL_TYPE WebConnection__CreateStream_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43dba00, size 0x6f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43dc0f8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnection__CreateStream_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnection*", modifiers: "",
  // def_value: None }, CppParam { name: "operation", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None }, CppParam { name: "reused", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_stream_5__2", ty:
  // "::System::Net::Sockets::NetworkStream*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "",
  // def_value: None }]
  constexpr WebConnection__CreateStream_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Net::WebConnection* __4__this,
                                              ::System::Net::WebOperation* operation, bool reused, ::System::Threading::CancellationToken cancellationToken,
                                              ::System::Net::Sockets::NetworkStream* _stream_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                              ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9738 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebConnection* __4__this;

  /// @brief Field operation, offset: 0x28, size: 0x8, def value: None
  ::System::Net::WebOperation* operation;

  /// @brief Field reused, offset: 0x30, size: 0x1, def value: None
  bool reused;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <stream>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Net::Sockets::NetworkStream* _stream_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnection__CreateStream_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__CreateStream_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__CreateStream_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__CreateStream_d__18, operation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__CreateStream_d__18, reused) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__CreateStream_d__18, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__CreateStream_d__18, _stream_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__CreateStream_d__18, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__CreateStream_d__18, __u__2) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebConnection__CreateStream_d__18, 0x68>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebConnection/<InitConnection>d__19
struct CORDL_TYPE WebConnection__InitConnection_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x43dc174, size 0x550, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x43dc8b4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnection__InitConnection_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream*>", modifiers: "", def_value: None }, CppParam { name: "operation", ty:
  // "::System::Net::WebOperation*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::System::Net::WebConnection*", modifiers: "", def_value: None }, CppParam { name: "_reused_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr WebConnection__InitConnection_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream*> __t__builder,
                                                ::System::Net::WebOperation* operation, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebConnection* __4__this,
                                                bool _reused_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1,
                                                ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9739 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream*> __t__builder;

  /// @brief Field operation, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebOperation* operation;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::Net::WebConnection* __4__this;

  /// @brief Field <reused>5__2, offset: 0x38, size: 0x1, def value: None
  bool _reused_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnection__InitConnection_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__InitConnection_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__InitConnection_d__19, operation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__InitConnection_d__19, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__InitConnection_d__19, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__InitConnection_d__19, _reused_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__InitConnection_d__19, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection__InitConnection_d__19, __u__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebConnection__InitConnection_d__19, 0x60>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.DateTime, System.IDisposable, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebConnection
class CORDL_TYPE WebConnection : public ::System::Object {
public:
  // Declarations
  using _Connect_d__16 = ::System::Net::WebConnection__Connect_d__16;

  using _CreateStream_d__18 = ::System::Net::WebConnection__CreateStream_d__18;

  using _InitConnection_d__19 = ::System::Net::WebConnection__InitConnection_d__19;

  using __c = ::System::Net::WebConnection___c;

  __declspec(property(get = get_Closed)) bool Closed;

  __declspec(property(get = get_IdleSince)) ::System::DateTime IdleSince;

  __declspec(property(get = get_NtlmAuthenticated, put = set_NtlmAuthenticated)) bool NtlmAuthenticated;

  __declspec(property(get = get_NtlmCredential, put = set_NtlmCredential)) ::System::Net::NetworkCredential* NtlmCredential;

  __declspec(property(get = get_ServicePoint)) ::System::Net::ServicePoint* ServicePoint;

  __declspec(property(get = get_UnsafeAuthenticatedConnectionSharing, put = set_UnsafeAuthenticatedConnectionSharing)) bool UnsafeAuthenticatedConnectionSharing;

  /// @brief Field <ServicePoint>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ServicePoint_k__BackingField, put = __cordl_internal_set__ServicePoint_k__BackingField)) ::System::Net::ServicePoint* _ServicePoint_k__BackingField;

  /// @brief Field currentOperation, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_currentOperation, put = __cordl_internal_set_currentOperation)) ::System::Net::WebOperation* currentOperation;

  /// @brief Field disposed, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) int32_t disposed;

  /// @brief Field idleSince, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_idleSince, put = __cordl_internal_set_idleSince)) ::System::DateTime idleSince;

  /// @brief Field monoTlsStream, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_monoTlsStream, put = __cordl_internal_set_monoTlsStream)) ::Mono::Net::Security::MonoTlsStream* monoTlsStream;

  /// @brief Field networkStream, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_networkStream, put = __cordl_internal_set_networkStream)) ::System::IO::Stream* networkStream;

  /// @brief Field ntlm_authenticated, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_ntlm_authenticated, put = __cordl_internal_set_ntlm_authenticated)) bool ntlm_authenticated;

  /// @brief Field ntlm_credentials, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ntlm_credentials, put = __cordl_internal_set_ntlm_credentials)) ::System::Net::NetworkCredential* ntlm_credentials;

  /// @brief Field socket, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_socket, put = __cordl_internal_set_socket)) ::System::Net::Sockets::Socket* socket;

  /// @brief Field tunnel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_tunnel, put = __cordl_internal_set_tunnel)) ::System::Net::WebConnectionTunnel* tunnel;

  /// @brief Field unsafe_sharing, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_unsafe_sharing, put = __cordl_internal_set_unsafe_sharing)) bool unsafe_sharing;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CanReuse, addr 0x43d9f80, size 0x30, virtual false, abstract: false, final false
  inline bool CanReuse();

  /// @brief Method CanReuseConnection, addr 0x43d8708, size 0x42c, virtual false, abstract: false, final false
  inline bool CanReuseConnection(::System::Net::WebOperation* operation);

  /// @brief Method CheckReusable, addr 0x43d9fb0, size 0x9c, virtual false, abstract: false, final false
  inline bool CheckReusable();

  /// @brief Method Close, addr 0x43daa64, size 0xc8, virtual false, abstract: false, final false
  inline void Close(bool reset);

  /// @brief Method CloseSocket, addr 0x43dab2c, size 0x25c, virtual false, abstract: false, final false
  inline void CloseSocket();

  /// @brief Method Connect, addr 0x43da04c, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* Connect(::System::Net::WebOperation* operation, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Continue, addr 0x43d75b8, size 0x168, virtual false, abstract: false, final false
  inline bool Continue(::System::Net::WebOperation* next);

  /// @brief Method CreateStream, addr 0x43da128, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CreateStream(::System::Net::WebOperation* operation, bool reused, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x43d83d4, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x43dad90, size 0x38, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetException, addr 0x43da338, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Net::WebException* GetException(::System::Net::WebExceptionStatus status, ::System::Exception* error);

  /// @brief Method InitConnection, addr 0x43da244, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* InitConnection(::System::Net::WebOperation* operation, ::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Net::WebConnection* New_ctor(::System::Net::ServicePoint* sPoint);

  /// @brief Method PrepareSharingNtlm, addr 0x43da684, size 0x31c, virtual false, abstract: false, final false
  inline bool PrepareSharingNtlm(::System::Net::WebOperation* operation);

  /// @brief Method ReadLine, addr 0x43da4b8, size 0x1cc, virtual false, abstract: false, final false
  static inline bool ReadLine(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::ByRef<int32_t> start, int32_t max, ::ByRef<::StringW> output);

  /// @brief Method Reset, addr 0x43da9a0, size 0xb8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetNtlm, addr 0x43daa58, size 0xc, virtual false, abstract: false, final false
  inline void ResetNtlm();

  /// @brief Method StartOperation, addr 0x43d8b34, size 0x1fc, virtual false, abstract: false, final false
  inline bool StartOperation(::System::Net::WebOperation* operation, bool reused);

  constexpr ::System::Net::ServicePoint* const& __cordl_internal_get__ServicePoint_k__BackingField() const;

  constexpr ::System::Net::ServicePoint*& __cordl_internal_get__ServicePoint_k__BackingField();

  constexpr ::System::Net::WebOperation* const& __cordl_internal_get_currentOperation() const;

  constexpr ::System::Net::WebOperation*& __cordl_internal_get_currentOperation();

  constexpr int32_t const& __cordl_internal_get_disposed() const;

  constexpr int32_t& __cordl_internal_get_disposed();

  constexpr ::System::DateTime const& __cordl_internal_get_idleSince() const;

  constexpr ::System::DateTime& __cordl_internal_get_idleSince();

  constexpr ::Mono::Net::Security::MonoTlsStream* const& __cordl_internal_get_monoTlsStream() const;

  constexpr ::Mono::Net::Security::MonoTlsStream*& __cordl_internal_get_monoTlsStream();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_networkStream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_networkStream();

  constexpr bool const& __cordl_internal_get_ntlm_authenticated() const;

  constexpr bool& __cordl_internal_get_ntlm_authenticated();

  constexpr ::System::Net::NetworkCredential* const& __cordl_internal_get_ntlm_credentials() const;

  constexpr ::System::Net::NetworkCredential*& __cordl_internal_get_ntlm_credentials();

  constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_socket() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_socket();

  constexpr ::System::Net::WebConnectionTunnel* const& __cordl_internal_get_tunnel() const;

  constexpr ::System::Net::WebConnectionTunnel*& __cordl_internal_get_tunnel();

  constexpr bool const& __cordl_internal_get_unsafe_sharing() const;

  constexpr bool& __cordl_internal_get_unsafe_sharing();

  constexpr void __cordl_internal_set__ServicePoint_k__BackingField(::System::Net::ServicePoint* value);

  constexpr void __cordl_internal_set_currentOperation(::System::Net::WebOperation* value);

  constexpr void __cordl_internal_set_disposed(int32_t value);

  constexpr void __cordl_internal_set_idleSince(::System::DateTime value);

  constexpr void __cordl_internal_set_monoTlsStream(::Mono::Net::Security::MonoTlsStream* value);

  constexpr void __cordl_internal_set_networkStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_ntlm_authenticated(bool value);

  constexpr void __cordl_internal_set_ntlm_credentials(::System::Net::NetworkCredential* value);

  constexpr void __cordl_internal_set_socket(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_tunnel(::System::Net::WebConnectionTunnel* value);

  constexpr void __cordl_internal_set_unsafe_sharing(bool value);

  /// @brief Method .ctor, addr 0x43d8d30, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::ServicePoint* sPoint);

  /// @brief Method get_Closed, addr 0x43d83dc, size 0x10, virtual false, abstract: false, final false
  inline bool get_Closed();

  /// @brief Method get_IdleSince, addr 0x43dad88, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_IdleSince();

  /// @brief Method get_NtlmAuthenticated, addr 0x43dadc8, size 0x8, virtual false, abstract: false, final false
  inline bool get_NtlmAuthenticated();

  /// @brief Method get_NtlmCredential, addr 0x43daddc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::NetworkCredential* get_NtlmCredential();

  /// @brief Method get_ServicePoint, addr 0x43d9f78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* get_ServicePoint();

  /// @brief Method get_UnsafeAuthenticatedConnectionSharing, addr 0x43dadec, size 0x8, virtual false, abstract: false, final false
  inline bool get_UnsafeAuthenticatedConnectionSharing();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_NtlmAuthenticated, addr 0x43dadd0, size 0xc, virtual false, abstract: false, final false
  inline void set_NtlmAuthenticated(bool value);

  /// @brief Method set_NtlmCredential, addr 0x43dade4, size 0x8, virtual false, abstract: false, final false
  inline void set_NtlmCredential(::System::Net::NetworkCredential* value);

  /// @brief Method set_UnsafeAuthenticatedConnectionSharing, addr 0x43dadf4, size 0xc, virtual false, abstract: false, final false
  inline void set_UnsafeAuthenticatedConnectionSharing(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebConnection(WebConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebConnection(WebConnection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9740 };

  /// @brief Field ntlm_credentials, offset: 0x10, size: 0x8, def value: None
  ::System::Net::NetworkCredential* ___ntlm_credentials;

  /// @brief Field ntlm_authenticated, offset: 0x18, size: 0x1, def value: None
  bool ___ntlm_authenticated;

  /// @brief Field unsafe_sharing, offset: 0x19, size: 0x1, def value: None
  bool ___unsafe_sharing;

  /// @brief Field networkStream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* ___networkStream;

  /// @brief Field socket, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___socket;

  /// @brief Field monoTlsStream, offset: 0x30, size: 0x8, def value: None
  ::Mono::Net::Security::MonoTlsStream* ___monoTlsStream;

  /// @brief Field tunnel, offset: 0x38, size: 0x8, def value: None
  ::System::Net::WebConnectionTunnel* ___tunnel;

  /// @brief Field disposed, offset: 0x40, size: 0x4, def value: None
  int32_t ___disposed;

  /// @brief Field <ServicePoint>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Net::ServicePoint* ____ServicePoint_k__BackingField;

  /// @brief Field idleSince, offset: 0x50, size: 0x8, def value: None
  ::System::DateTime ___idleSince;

  /// @brief Field currentOperation, offset: 0x58, size: 0x8, def value: None
  ::System::Net::WebOperation* ___currentOperation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnection, ___ntlm_credentials) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___ntlm_authenticated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___unsafe_sharing) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___networkStream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___socket) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___monoTlsStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___tunnel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___disposed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ____ServicePoint_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___idleSince) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___currentOperation) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebConnection, 0x60>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebConnection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnection*, "System.Net", "WebConnection");
NEED_NO_BOX(::System::Net::WebConnection___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnection___c*, "System.Net", "WebConnection/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnection__Connect_d__16, "System.Net", "WebConnection/<Connect>d__16");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnection__CreateStream_d__18, "System.Net", "WebConnection/<CreateStream>d__18");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnection__InitConnection_d__19, "System.Net", "WebConnection/<InitConnection>d__19");
