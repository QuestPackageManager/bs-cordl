#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnection)
namespace System::Net {
struct __WebConnection___InitConnection_d__19;
}
namespace System::Net {
class NetworkCredential;
}
namespace System::IO {
class Stream;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
struct __WebConnection___CreateStream_d__18;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Net {
class __WebConnection____c;
}
namespace System::Net {
class WebException;
}
namespace System {
class Exception;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace System::Net {
struct __WebConnection___Connect_d__16;
}
namespace System {
struct DateTime;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
class IPAddress;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class __WebConnection____c;
}
namespace System::Net {
struct __WebConnection___Connect_d__16;
}
namespace System::Net {
struct __WebConnection___CreateStream_d__18;
}
namespace System::Net {
struct __WebConnection___InitConnection_d__19;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebConnection);
MARK_REF_PTR_T(::System::Net::__WebConnection____c);
MARK_VAL_T(::System::Net::__WebConnection___Connect_d__16);
MARK_VAL_T(::System::Net::__WebConnection___CreateStream_d__18);
MARK_VAL_T(::System::Net::__WebConnection___InitConnection_d__19);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9215))
// CS Name: ::WebConnection::<>c*
class CORDL_TYPE __WebConnection____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::__WebConnection____c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_0,
                             put = setStaticF___9__16_0))::System::Func_4<::System::Net::IPEndPoint*, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* __9__16_0;

  /// @brief Field <>9__16_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_1, put = setStaticF___9__16_1))::System::Action_1<::System::IAsyncResult*>* __9__16_1;

  static inline void setStaticF___9(::System::Net::__WebConnection____c* value);

  static inline ::System::Net::__WebConnection____c* getStaticF___9();

  static inline void setStaticF___9__16_0(::System::Func_4<::System::Net::IPEndPoint*, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* value);

  static inline ::System::Func_4<::System::Net::IPEndPoint*, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>* getStaticF___9__16_0();

  static inline void setStaticF___9__16_1(::System::Action_1<::System::IAsyncResult*>* value);

  static inline ::System::Action_1<::System::IAsyncResult*>* getStaticF___9__16_1();

  static inline ::System::Net::__WebConnection____c* New_ctor();

  /// @brief Method .ctor, addr 0x29ddd58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Connect>b__16_0, addr 0x29ddd60, size 0xa0, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* _Connect_b__16_0(::System::Net::IPEndPoint* targetEndPoint, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method <Connect>b__16_1, addr 0x29dde00, size 0xf4, virtual false, abstract: false, final false
  inline void _Connect_b__16_1(::System::IAsyncResult* asyncResult);

  // Ctor Parameters [CppParam { name: "", ty: "__WebConnection____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WebConnection____c(__WebConnection____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WebConnection____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WebConnection____c(__WebConnection____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebConnection____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebConnection____c, 0x10>, "Size mismatch!");

} // namespace System::Net
// Type: ::<Connect>d__16
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(2677))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9216))
// CS Name: ::WebConnection::<Connect>d__16
struct CORDL_TYPE __WebConnection___Connect_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x29ddef4, size 0x8c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x29de7f8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnection*", modifiers: "", def_value: None
  // }, CppParam { name: "operation", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "_connectException_5__2", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty:
  // "::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __WebConnection___Connect_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebConnection* __4__this,
                                            ::System::Net::WebOperation* operation, ::System::Threading::CancellationToken cancellationToken, ::System::Exception* _connectException_5__2,
                                            ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> __7__wrap2, int32_t __7__wrap3,
                                            ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebConnection___Connect_d__16();

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
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebConnection___Connect_d__16, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___Connect_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___Connect_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___Connect_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___Connect_d__16, operation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___Connect_d__16, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___Connect_d__16, _connectException_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___Connect_d__16, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___Connect_d__16, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___Connect_d__16, __u__1) == 0x50, "Offset mismatch!");

} // namespace System::Net
// Type: ::<CreateStream>d__18
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3395)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 899 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9217)) CS Name: ::WebConnection::<CreateStream>d__18
struct CORDL_TYPE __WebConnection___CreateStream_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x29de804, size 0x66c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x29def80, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnection*", modifiers: "",
  // def_value: None }, CppParam { name: "operation", ty: "::System::Net::WebOperation*", modifiers: "", def_value: None }, CppParam { name: "reused", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_stream_5__2", ty:
  // "::System::Net::Sockets::NetworkStream*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "",
  // def_value: None }]
  constexpr __WebConnection___CreateStream_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Net::WebConnection* __4__this,
                                                 ::System::Net::WebOperation* operation, bool reused, ::System::Threading::CancellationToken cancellationToken,
                                                 ::System::Net::Sockets::NetworkStream* _stream_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebConnection___CreateStream_d__18();

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
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebConnection___CreateStream_d__18, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___CreateStream_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___CreateStream_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___CreateStream_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___CreateStream_d__18, operation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___CreateStream_d__18, reused) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___CreateStream_d__18, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___CreateStream_d__18, _stream_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___CreateStream_d__18, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___CreateStream_d__18, __u__2) == 0x58, "Offset mismatch!");

} // namespace System::Net
// Type: ::<InitConnection>d__19
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(9238)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 105
// }), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3395)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 901 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9218)) CS Name: ::WebConnection::<InitConnection>d__19
struct CORDL_TYPE __WebConnection___InitConnection_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x29defd8, size 0x4cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x29df650, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream*>", modifiers: "", def_value: None }, CppParam { name: "operation", ty:
  // "::System::Net::WebOperation*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::System::Net::WebConnection*", modifiers: "", def_value: None }, CppParam { name: "_reused_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __WebConnection___InitConnection_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream*> __t__builder,
                                                   ::System::Net::WebOperation* operation, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebConnection* __4__this,
                                                   bool _reused_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                   ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebConnection___InitConnection_d__19();

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
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebConnection___InitConnection_d__19, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___InitConnection_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___InitConnection_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___InitConnection_d__19, operation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___InitConnection_d__19, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___InitConnection_d__19, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___InitConnection_d__19, _reused_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___InitConnection_d__19, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebConnection___InitConnection_d__19, __u__2) == 0x50, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::WebConnection
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9219))
// CS Name: ::System.Net::WebConnection*
class CORDL_TYPE WebConnection : public ::System::Object {
public:
  // Declarations
  using _InitConnection_d__19 = ::System::Net::__WebConnection___InitConnection_d__19;

  using _CreateStream_d__18 = ::System::Net::__WebConnection___CreateStream_d__18;

  using _Connect_d__16 = ::System::Net::__WebConnection___Connect_d__16;

  using __c = ::System::Net::__WebConnection____c;

  /// @brief Field ntlm_credentials, offset 0x10, size 0x8
  __declspec(property(get = __get_ntlm_credentials, put = __set_ntlm_credentials))::System::Net::NetworkCredential* ntlm_credentials;

  /// @brief Field ntlm_authenticated, offset 0x18, size 0x1
  __declspec(property(get = __get_ntlm_authenticated, put = __set_ntlm_authenticated)) bool ntlm_authenticated;

  /// @brief Field unsafe_sharing, offset 0x19, size 0x1
  __declspec(property(get = __get_unsafe_sharing, put = __set_unsafe_sharing)) bool unsafe_sharing;

  /// @brief Field networkStream, offset 0x20, size 0x8
  __declspec(property(get = __get_networkStream, put = __set_networkStream))::System::IO::Stream* networkStream;

  /// @brief Field socket, offset 0x28, size 0x8
  __declspec(property(get = __get_socket, put = __set_socket))::System::Net::Sockets::Socket* socket;

  /// @brief Field monoTlsStream, offset 0x30, size 0x8
  __declspec(property(get = __get_monoTlsStream, put = __set_monoTlsStream))::Mono::Net::Security::MonoTlsStream* monoTlsStream;

  /// @brief Field tunnel, offset 0x38, size 0x8
  __declspec(property(get = __get_tunnel, put = __set_tunnel))::System::Net::WebConnectionTunnel* tunnel;

  /// @brief Field disposed, offset 0x40, size 0x4
  __declspec(property(get = __get_disposed, put = __set_disposed)) int32_t disposed;

  /// @brief Field <ServicePoint>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__ServicePoint_k__BackingField, put = __set__ServicePoint_k__BackingField))::System::Net::ServicePoint* _ServicePoint_k__BackingField;

  /// @brief Field idleSince, offset 0x50, size 0x8
  __declspec(property(get = __get_idleSince, put = __set_idleSince))::System::DateTime idleSince;

  /// @brief Field currentOperation, offset 0x58, size 0x8
  __declspec(property(get = __get_currentOperation, put = __set_currentOperation))::System::Net::WebOperation* currentOperation;

  __declspec(property(get = get_ServicePoint))::System::Net::ServicePoint* ServicePoint;

  __declspec(property(get = get_Closed)) bool Closed;

  __declspec(property(get = get_IdleSince))::System::DateTime IdleSince;

  __declspec(property(get = get_NtlmAuthenticated, put = set_NtlmAuthenticated)) bool NtlmAuthenticated;

  __declspec(property(get = get_NtlmCredential, put = set_NtlmCredential))::System::Net::NetworkCredential* NtlmCredential;

  __declspec(property(get = get_UnsafeAuthenticatedConnectionSharing, put = set_UnsafeAuthenticatedConnectionSharing)) bool UnsafeAuthenticatedConnectionSharing;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Net::NetworkCredential*& __get_ntlm_credentials();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::NetworkCredential*> const& __get_ntlm_credentials() const;

  constexpr void __set_ntlm_credentials(::System::Net::NetworkCredential* value);

  constexpr bool& __get_ntlm_authenticated();

  constexpr bool const& __get_ntlm_authenticated() const;

  constexpr void __set_ntlm_authenticated(bool value);

  constexpr bool& __get_unsafe_sharing();

  constexpr bool const& __get_unsafe_sharing() const;

  constexpr void __set_unsafe_sharing(bool value);

  constexpr ::System::IO::Stream*& __get_networkStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_networkStream() const;

  constexpr void __set_networkStream(::System::IO::Stream* value);

  constexpr ::System::Net::Sockets::Socket*& __get_socket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __get_socket() const;

  constexpr void __set_socket(::System::Net::Sockets::Socket* value);

  constexpr ::Mono::Net::Security::MonoTlsStream*& __get_monoTlsStream();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MonoTlsStream*> const& __get_monoTlsStream() const;

  constexpr void __set_monoTlsStream(::Mono::Net::Security::MonoTlsStream* value);

  constexpr ::System::Net::WebConnectionTunnel*& __get_tunnel();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebConnectionTunnel*> const& __get_tunnel() const;

  constexpr void __set_tunnel(::System::Net::WebConnectionTunnel* value);

  constexpr int32_t& __get_disposed();

  constexpr int32_t const& __get_disposed() const;

  constexpr void __set_disposed(int32_t value);

  constexpr ::System::Net::ServicePoint*& __get__ServicePoint_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ServicePoint*> const& __get__ServicePoint_k__BackingField() const;

  constexpr void __set__ServicePoint_k__BackingField(::System::Net::ServicePoint* value);

  constexpr ::System::DateTime& __get_idleSince();

  constexpr ::System::DateTime const& __get_idleSince() const;

  constexpr void __set_idleSince(::System::DateTime value);

  constexpr ::System::Net::WebOperation*& __get_currentOperation();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebOperation*> const& __get_currentOperation() const;

  constexpr void __set_currentOperation(::System::Net::WebOperation* value);

  /// @brief Method get_ServicePoint, addr 0x29dcb34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* get_ServicePoint();

  static inline ::System::Net::WebConnection* New_ctor(::System::Net::ServicePoint* sPoint);

  /// @brief Method .ctor, addr 0x29db9c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::ServicePoint* sPoint);

  /// @brief Method CanReuse, addr 0x29dcb3c, size 0x30, virtual false, abstract: false, final false
  inline bool CanReuse();

  /// @brief Method CheckReusable, addr 0x29dcb6c, size 0x9c, virtual false, abstract: false, final false
  inline bool CheckReusable();

  /// @brief Method Connect, addr 0x29dcc08, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* Connect(::System::Net::WebOperation* operation, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CreateStream, addr 0x29dccec, size 0x120, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CreateStream(::System::Net::WebOperation* operation, bool reused, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InitConnection, addr 0x29dce0c, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* InitConnection(::System::Net::WebOperation* operation, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetException, addr 0x29dcf10, size 0x188, virtual false, abstract: false, final false
  static inline ::System::Net::WebException* GetException(::System::Net::WebExceptionStatus status, ::System::Exception* error);

  /// @brief Method ReadLine, addr 0x29dd098, size 0x1e8, virtual false, abstract: false, final false
  static inline bool ReadLine(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> start, int32_t max, ByRef<::StringW> output);

  /// @brief Method CanReuseConnection, addr 0x29db3a0, size 0x42c, virtual false, abstract: false, final false
  inline bool CanReuseConnection(::System::Net::WebOperation* operation);

  /// @brief Method PrepareSharingNtlm, addr 0x29dd280, size 0x31c, virtual false, abstract: false, final false
  inline bool PrepareSharingNtlm(::System::Net::WebOperation* operation);

  /// @brief Method Reset, addr 0x29dd59c, size 0xb8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Close, addr 0x29dd660, size 0xc8, virtual false, abstract: false, final false
  inline void Close(bool reset);

  /// @brief Method CloseSocket, addr 0x29dd728, size 0x26c, virtual false, abstract: false, final false
  inline void CloseSocket();

  /// @brief Method get_Closed, addr 0x29dafec, size 0x10, virtual false, abstract: false, final false
  inline bool get_Closed();

  /// @brief Method get_IdleSince, addr 0x29dd994, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_IdleSince();

  /// @brief Method StartOperation, addr 0x29db7cc, size 0x1f4, virtual false, abstract: false, final false
  inline bool StartOperation(::System::Net::WebOperation* operation, bool reused);

  /// @brief Method Continue, addr 0x29da188, size 0x160, virtual false, abstract: false, final false
  inline bool Continue(::System::Net::WebOperation* next);

  /// @brief Method Dispose, addr 0x29ddc84, size 0x38, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Dispose, addr 0x29dafe4, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ResetNtlm, addr 0x29dd654, size 0xc, virtual false, abstract: false, final false
  inline void ResetNtlm();

  /// @brief Method get_NtlmAuthenticated, addr 0x29ddcbc, size 0x8, virtual false, abstract: false, final false
  inline bool get_NtlmAuthenticated();

  /// @brief Method set_NtlmAuthenticated, addr 0x29ddcc4, size 0xc, virtual false, abstract: false, final false
  inline void set_NtlmAuthenticated(bool value);

  /// @brief Method get_NtlmCredential, addr 0x29ddcd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::NetworkCredential* get_NtlmCredential();

  /// @brief Method set_NtlmCredential, addr 0x29ddcd8, size 0x8, virtual false, abstract: false, final false
  inline void set_NtlmCredential(::System::Net::NetworkCredential* value);

  /// @brief Method get_UnsafeAuthenticatedConnectionSharing, addr 0x29ddce0, size 0x8, virtual false, abstract: false, final false
  inline bool get_UnsafeAuthenticatedConnectionSharing();

  /// @brief Method set_UnsafeAuthenticatedConnectionSharing, addr 0x29ddce8, size 0xc, virtual false, abstract: false, final false
  inline void set_UnsafeAuthenticatedConnectionSharing(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "WebConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebConnection(WebConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebConnection(WebConnection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnection();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::WebConnection, 0x60>, "Size mismatch!");

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

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebConnection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnection*, "System.Net", "WebConnection");
NEED_NO_BOX(::System::Net::__WebConnection____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebConnection____c*, "System.Net", "WebConnection/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebConnection___Connect_d__16, "System.Net", "WebConnection/<Connect>d__16");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebConnection___CreateStream_d__18, "System.Net", "WebConnection/<CreateStream>d__18");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebConnection___InitConnection_d__19, "System.Net", "WebConnection/<InitConnection>d__19");
