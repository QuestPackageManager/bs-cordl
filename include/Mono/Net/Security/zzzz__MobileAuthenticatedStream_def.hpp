#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__AsyncProtocolResult_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "System/Net/Security/zzzz__AuthenticatedStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileAuthenticatedStream)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream___InnerWrite_d__67;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace Mono::Net::Security {
class __MobileAuthenticatedStream____c__DisplayClass66_0;
}
namespace Mono::Net::Security {
class BufferOffsetSize;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace Mono::Net::Security {
class BufferOffsetSize2;
}
namespace System {
class IDisposable;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Net::Security {
class AsyncProtocolRequest;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream___StartOperation_d__57;
}
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace Mono::Net::Security {
class MobileTlsContext;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
class Object;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream__OperationType;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class Stream;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream__Operation;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream___InnerRead_d__66;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream___ProcessAuthentication_d__48;
}
namespace System {
class Exception;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace Mono::Net::Security {
class AsyncProtocolResult;
}
// Forward declare root types
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream__Operation;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream__OperationType;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
class __MobileAuthenticatedStream____c__DisplayClass66_0;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream___InnerRead_d__66;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream___InnerWrite_d__67;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream___ProcessAuthentication_d__48;
}
namespace Mono::Net::Security {
struct __MobileAuthenticatedStream___StartOperation_d__57;
}
// Write type traits
MARK_VAL_T(::Mono::Net::Security::__MobileAuthenticatedStream__Operation);
MARK_VAL_T(::Mono::Net::Security::__MobileAuthenticatedStream__OperationType);
MARK_REF_PTR_T(::Mono::Net::Security::MobileAuthenticatedStream);
MARK_REF_PTR_T(::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0);
MARK_VAL_T(::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66);
MARK_VAL_T(::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67);
MARK_VAL_T(::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48);
MARK_VAL_T(::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57);
// Type: ::Operation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7666))
// CS Name: ::MobileAuthenticatedStream::Operation
struct CORDL_TYPE __MobileAuthenticatedStream__Operation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MobileAuthenticatedStream__Operation_Unwrapped
  enum struct ____MobileAuthenticatedStream__Operation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Handshake = static_cast<int32_t>(0x1),
    __E_Authenticated = static_cast<int32_t>(0x2),
    __E_Renegotiate = static_cast<int32_t>(0x3),
    __E_Read = static_cast<int32_t>(0x4),
    __E_Write = static_cast<int32_t>(0x5),
    __E_Close = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MobileAuthenticatedStream__Operation_Unwrapped() const noexcept {
    return static_cast<____MobileAuthenticatedStream__Operation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MobileAuthenticatedStream__Operation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileAuthenticatedStream__Operation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__Operation const None;

  /// @brief Field Handshake value: static_cast<int32_t>(0x1)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__Operation const Handshake;

  /// @brief Field Authenticated value: static_cast<int32_t>(0x2)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__Operation const Authenticated;

  /// @brief Field Renegotiate value: static_cast<int32_t>(0x3)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__Operation const Renegotiate;

  /// @brief Field Read value: static_cast<int32_t>(0x4)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__Operation const Read;

  /// @brief Field Write value: static_cast<int32_t>(0x5)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__Operation const Write;

  /// @brief Field Close value: static_cast<int32_t>(0x6)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__Operation const Close;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__MobileAuthenticatedStream__Operation, 0x4>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream__Operation, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Net::Security
// Type: ::OperationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7667))
// CS Name: ::MobileAuthenticatedStream::OperationType
struct CORDL_TYPE __MobileAuthenticatedStream__OperationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MobileAuthenticatedStream__OperationType_Unwrapped
  enum struct ____MobileAuthenticatedStream__OperationType_Unwrapped : int32_t {
    __E_Read = static_cast<int32_t>(0x0),
    __E_Write = static_cast<int32_t>(0x1),
    __E_Renegotiate = static_cast<int32_t>(0x2),
    __E_Shutdown = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MobileAuthenticatedStream__OperationType_Unwrapped() const noexcept {
    return static_cast<____MobileAuthenticatedStream__OperationType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MobileAuthenticatedStream__OperationType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileAuthenticatedStream__OperationType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Read value: static_cast<int32_t>(0x0)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType const Read;

  /// @brief Field Write value: static_cast<int32_t>(0x1)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType const Write;

  /// @brief Field Renegotiate value: static_cast<int32_t>(0x2)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType const Renegotiate;

  /// @brief Field Shutdown value: static_cast<int32_t>(0x3)
  static ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType const Shutdown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__MobileAuthenticatedStream__OperationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream__OperationType, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Net::Security
// Type: ::<ProcessAuthentication>d__48
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3392), inst: 859 }),
// TypeDefinitionIndex(TypeDefinitionIndex(7655)), TypeDefinitionIndex(TypeDefinitionIndex(3392)), TypeDefinitionIndex(TypeDefinitionIndex(3396))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7668))
// CS Name: ::MobileAuthenticatedStream::<ProcessAuthentication>d__48
struct CORDL_TYPE __MobileAuthenticatedStream___ProcessAuthentication_d__48 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x26a7644 size 0x904 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x26a7f48 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Mono::Net::Security::MonoSslAuthenticationOptions*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: None }, CppParam { name: "runSynchronously", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value: None }]
  constexpr __MobileAuthenticatedStream___ProcessAuthentication_d__48(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Mono::Net::Security::MonoSslAuthenticationOptions* options,
      ::Mono::Net::Security::MobileAuthenticatedStream* __4__this, bool runSynchronously, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileAuthenticatedStream___ProcessAuthentication_d__48();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field options, offset: 0x20, size: 0x8, def value: None
  ::Mono::Net::Security::MonoSslAuthenticationOptions* options;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream* __4__this;

  /// @brief Field runSynchronously, offset: 0x30, size: 0x1, def value: None
  bool runSynchronously;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48, 0x50>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48, options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48, runSynchronously) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48, __u__1) == 0x40, "Offset mismatch!");

} // namespace Mono::Net::Security
// Type: ::<StartOperation>d__57
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7655)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 101 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3392)), TypeDefinitionIndex(TypeDefinitionIndex(7667)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3392), inst: 859 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7669)) CS Name:
// ::MobileAuthenticatedStream::<StartOperation>d__57
struct CORDL_TYPE __MobileAuthenticatedStream___StartOperation_d__57 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x26a7f54 size 0x758 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x26a86ac size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*",
  // modifiers: "", def_value: None }, CppParam { name: "type", ty: "::Mono::Net::Security::__MobileAuthenticatedStream__OperationType", modifiers: "", def_value: None }, CppParam { name:
  // "asyncRequest", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value: None }]
  constexpr __MobileAuthenticatedStream___StartOperation_d__57(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Mono::Net::Security::MobileAuthenticatedStream* __4__this,
      ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType type, ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileAuthenticatedStream___StartOperation_d__57();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream* __4__this;

  /// @brief Field type, offset: 0x28, size: 0x4, def value: None
  ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType type;

  /// @brief Field asyncRequest, offset: 0x30, size: 0x8, def value: None
  ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57, 0x50>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57, type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57, asyncRequest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57, __u__1) == 0x40, "Offset mismatch!");

} // namespace Mono::Net::Security
// Type: ::<>c__DisplayClass66_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7670))
// CS Name: ::MobileAuthenticatedStream::<>c__DisplayClass66_0*
class CORDL_TYPE __MobileAuthenticatedStream____c__DisplayClass66_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Mono::Net::Security::MobileAuthenticatedStream* __4__this;

  /// @brief Field len, offset 0x18, size 0x4
  __declspec(property(get = __get_len, put = __set_len)) int32_t len;

  constexpr ::Mono::Net::Security::MobileAuthenticatedStream*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileAuthenticatedStream*> const& __get___4__this() const;

  constexpr void __set___4__this(::Mono::Net::Security::MobileAuthenticatedStream* value);

  constexpr int32_t& __get_len();

  constexpr int32_t const& __get_len() const;

  constexpr void __set_len(int32_t value);

  static inline ::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0* New_ctor();

  /// @brief Method .ctor addr 0x26a8704 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <InnerRead>b__0 addr 0x26a870c size 0x48 virtual false final false
  inline int32_t _InnerRead_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__MobileAuthenticatedStream____c__DisplayClass66_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileAuthenticatedStream____c__DisplayClass66_0(__MobileAuthenticatedStream____c__DisplayClass66_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileAuthenticatedStream____c__DisplayClass66_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileAuthenticatedStream____c__DisplayClass66_0(__MobileAuthenticatedStream____c__DisplayClass66_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileAuthenticatedStream____c__DisplayClass66_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream* _____4__this;

  /// @brief Field len, offset: 0x18, size: 0x4, def value: None
  int32_t ___len;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0, ___len) == 0x18, "Offset mismatch!");

} // namespace Mono::Net::Security
// Type: ::<InnerRead>d__66
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3392), inst: 101 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 101 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3392))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7671))
// CS Name: ::MobileAuthenticatedStream::<InnerRead>d__66
struct CORDL_TYPE __MobileAuthenticatedStream___InnerRead_d__66 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x26a8754 size 0x444 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x26a8b98 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "requestedSize", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __MobileAuthenticatedStream___InnerRead_d__66(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                          ::Mono::Net::Security::MobileAuthenticatedStream* __4__this, ::System::Threading::CancellationToken cancellationToken, int32_t requestedSize,
                                                          bool sync, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileAuthenticatedStream___InnerRead_d__66();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field requestedSize, offset: 0x30, size: 0x4, def value: None
  int32_t requestedSize;

  /// @brief Field sync, offset: 0x34, size: 0x1, def value: None
  bool sync;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66, 0x48>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66, requestedSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66, sync) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66, __u__1) == 0x38, "Offset mismatch!");

} // namespace Mono::Net::Security
// Type: ::<InnerWrite>d__67
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3396)), TypeDefinitionIndex(TypeDefinitionIndex(3390))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7672))
// CS Name: ::MobileAuthenticatedStream::<InnerWrite>d__67
struct CORDL_TYPE __MobileAuthenticatedStream___InnerWrite_d__67 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x26a8bf0 size 0x290 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x26a8e80 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MobileAuthenticatedStream___InnerWrite_d__67(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                           ::System::Threading::CancellationToken cancellationToken, ::Mono::Net::Security::MobileAuthenticatedStream* __4__this, bool sync,
                                                           ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileAuthenticatedStream___InnerWrite_d__67();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream* __4__this;

  /// @brief Field sync, offset: 0x30, size: 0x1, def value: None
  bool sync;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67, 0x48>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67, sync) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67, __u__1) == 0x38, "Offset mismatch!");

} // namespace Mono::Net::Security
// Type: Mono.Net.Security::MobileAuthenticatedStream
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 172, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7666)), TypeDefinitionIndex(TypeDefinitionIndex(8201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7673))
// CS Name: ::Mono.Net.Security::MobileAuthenticatedStream*
class CORDL_TYPE MobileAuthenticatedStream : public ::System::Net::Security::AuthenticatedStream {
public:
  // Declarations
  using _InnerWrite_d__67 = ::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67;

  using _InnerRead_d__66 = ::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66;

  using __c__DisplayClass66_0 = ::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0;

  using _StartOperation_d__57 = ::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57;

  using _ProcessAuthentication_d__48 = ::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48;

  using OperationType = ::Mono::Net::Security::__MobileAuthenticatedStream__OperationType;

  using Operation = ::Mono::Net::Security::__MobileAuthenticatedStream__Operation;

  /// @brief Field xobileTlsContext, offset 0x38, size 0x8
  __declspec(property(get = __get_xobileTlsContext, put = __set_xobileTlsContext))::Mono::Net::Security::MobileTlsContext* xobileTlsContext;

  /// @brief Field lastException, offset 0x40, size 0x8
  __declspec(property(get = __get_lastException, put = __set_lastException))::System::Runtime::ExceptionServices::ExceptionDispatchInfo* lastException;

  /// @brief Field asyncHandshakeRequest, offset 0x48, size 0x8
  __declspec(property(get = __get_asyncHandshakeRequest, put = __set_asyncHandshakeRequest))::Mono::Net::Security::AsyncProtocolRequest* asyncHandshakeRequest;

  /// @brief Field asyncReadRequest, offset 0x50, size 0x8
  __declspec(property(get = __get_asyncReadRequest, put = __set_asyncReadRequest))::Mono::Net::Security::AsyncProtocolRequest* asyncReadRequest;

  /// @brief Field asyncWriteRequest, offset 0x58, size 0x8
  __declspec(property(get = __get_asyncWriteRequest, put = __set_asyncWriteRequest))::Mono::Net::Security::AsyncProtocolRequest* asyncWriteRequest;

  /// @brief Field readBuffer, offset 0x60, size 0x8
  __declspec(property(get = __get_readBuffer, put = __set_readBuffer))::Mono::Net::Security::BufferOffsetSize2* readBuffer;

  /// @brief Field writeBuffer, offset 0x68, size 0x8
  __declspec(property(get = __get_writeBuffer, put = __set_writeBuffer))::Mono::Net::Security::BufferOffsetSize2* writeBuffer;

  /// @brief Field ioLock, offset 0x70, size 0x8
  __declspec(property(get = __get_ioLock, put = __set_ioLock))::System::Object* ioLock;

  /// @brief Field closeRequested, offset 0x78, size 0x4
  __declspec(property(get = __get_closeRequested, put = __set_closeRequested)) int32_t closeRequested;

  /// @brief Field shutdown, offset 0x7c, size 0x1
  __declspec(property(get = __get_shutdown, put = __set_shutdown)) bool shutdown;

  /// @brief Field operation, offset 0x80, size 0x4
  __declspec(property(get = __get_operation, put = __set_operation))::Mono::Net::Security::__MobileAuthenticatedStream__Operation operation;

  /// @brief Field <SslStream>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__SslStream_k__BackingField, put = __set__SslStream_k__BackingField))::System::Net::Security::SslStream* _SslStream_k__BackingField;

  /// @brief Field <Settings>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __get__Settings_k__BackingField, put = __set__Settings_k__BackingField))::Mono::Security::Interface::MonoTlsSettings* _Settings_k__BackingField;

  /// @brief Field <Provider>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __get__Provider_k__BackingField, put = __set__Provider_k__BackingField))::Mono::Net::Security::MobileTlsProvider* _Provider_k__BackingField;

  /// @brief Field <TargetHost>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __get__TargetHost_k__BackingField, put = __set__TargetHost_k__BackingField))::StringW _TargetHost_k__BackingField;

  /// @brief Field ID, offset 0xa8, size 0x4
  __declspec(property(get = __get__cordl_ID, put = __set__cordl_ID)) int32_t _cordl_ID;

  /// @brief Field uniqueNameInteger, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_uniqueNameInteger, put = setStaticF_uniqueNameInteger)) int32_t uniqueNameInteger;

  /// @brief Field nextId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nextId, put = setStaticF_nextId)) int32_t nextId;

  __declspec(property(get = get_SslStream))::System::Net::Security::SslStream* SslStream;

  __declspec(property(get = get_Settings))::Mono::Security::Interface::MonoTlsSettings* Settings;

  __declspec(property(get = get_Provider))::Mono::Net::Security::MobileTlsProvider* Provider;

  __declspec(property(get = get_TargetHost, put = set_TargetHost))::StringW TargetHost;

  __declspec(property(get = get_IsAuthenticated)) bool IsAuthenticated;

  __declspec(property(get = get_LocalCertificate))::System::Security::Cryptography::X509Certificates::X509Certificate* LocalCertificate;

  __declspec(property(get = get_InternalLocalCertificate))::System::Security::Cryptography::X509Certificates::X509Certificate* InternalLocalCertificate;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::Mono::Net::Security::MobileTlsContext*& __get_xobileTlsContext();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileTlsContext*> const& __get_xobileTlsContext() const;

  constexpr void __set_xobileTlsContext(::Mono::Net::Security::MobileTlsContext* value);

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __get_lastException();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> const& __get_lastException() const;

  constexpr void __set_lastException(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value);

  constexpr ::Mono::Net::Security::AsyncProtocolRequest*& __get_asyncHandshakeRequest();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::AsyncProtocolRequest*> const& __get_asyncHandshakeRequest() const;

  constexpr void __set_asyncHandshakeRequest(::Mono::Net::Security::AsyncProtocolRequest* value);

  constexpr ::Mono::Net::Security::AsyncProtocolRequest*& __get_asyncReadRequest();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::AsyncProtocolRequest*> const& __get_asyncReadRequest() const;

  constexpr void __set_asyncReadRequest(::Mono::Net::Security::AsyncProtocolRequest* value);

  constexpr ::Mono::Net::Security::AsyncProtocolRequest*& __get_asyncWriteRequest();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::AsyncProtocolRequest*> const& __get_asyncWriteRequest() const;

  constexpr void __set_asyncWriteRequest(::Mono::Net::Security::AsyncProtocolRequest* value);

  constexpr ::Mono::Net::Security::BufferOffsetSize2*& __get_readBuffer();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::BufferOffsetSize2*> const& __get_readBuffer() const;

  constexpr void __set_readBuffer(::Mono::Net::Security::BufferOffsetSize2* value);

  constexpr ::Mono::Net::Security::BufferOffsetSize2*& __get_writeBuffer();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::BufferOffsetSize2*> const& __get_writeBuffer() const;

  constexpr void __set_writeBuffer(::Mono::Net::Security::BufferOffsetSize2* value);

  constexpr ::System::Object*& __get_ioLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_ioLock() const;

  constexpr void __set_ioLock(::System::Object* value);

  constexpr int32_t& __get_closeRequested();

  constexpr int32_t const& __get_closeRequested() const;

  constexpr void __set_closeRequested(int32_t value);

  constexpr bool& __get_shutdown();

  constexpr bool const& __get_shutdown() const;

  constexpr void __set_shutdown(bool value);

  constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation& __get_operation();

  constexpr ::Mono::Net::Security::__MobileAuthenticatedStream__Operation const& __get_operation() const;

  constexpr void __set_operation(::Mono::Net::Security::__MobileAuthenticatedStream__Operation value);

  constexpr ::System::Net::Security::SslStream*& __get__SslStream_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslStream*> const& __get__SslStream_k__BackingField() const;

  constexpr void __set__SslStream_k__BackingField(::System::Net::Security::SslStream* value);

  constexpr ::Mono::Security::Interface::MonoTlsSettings*& __get__Settings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsSettings*> const& __get__Settings_k__BackingField() const;

  constexpr void __set__Settings_k__BackingField(::Mono::Security::Interface::MonoTlsSettings* value);

  constexpr ::Mono::Net::Security::MobileTlsProvider*& __get__Provider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileTlsProvider*> const& __get__Provider_k__BackingField() const;

  constexpr void __set__Provider_k__BackingField(::Mono::Net::Security::MobileTlsProvider* value);

  constexpr ::StringW& __get__TargetHost_k__BackingField();

  constexpr ::StringW const& __get__TargetHost_k__BackingField() const;

  constexpr void __set__TargetHost_k__BackingField(::StringW value);

  constexpr int32_t& __get__cordl_ID();

  constexpr int32_t const& __get__cordl_ID() const;

  constexpr void __set__cordl_ID(int32_t value);

  static inline void setStaticF_uniqueNameInteger(int32_t value);

  static inline int32_t getStaticF_uniqueNameInteger();

  static inline void setStaticF_nextId(int32_t value);

  static inline int32_t getStaticF_nextId();

  static inline ::Mono::Net::Security::MobileAuthenticatedStream* New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner,
                                                                           ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::MobileTlsProvider* provider);

  /// @brief Method .ctor addr 0x26a26dc size 0x134 virtual false final false
  inline void _ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner, ::Mono::Security::Interface::MonoTlsSettings* settings,
                    ::Mono::Net::Security::MobileTlsProvider* provider);

  /// @brief Method get_SslStream addr 0x26a5e14 size 0x8 virtual true final true
  inline ::System::Net::Security::SslStream* get_SslStream();

  /// @brief Method get_Settings addr 0x26a5e1c size 0x8 virtual false final false
  inline ::Mono::Security::Interface::MonoTlsSettings* get_Settings();

  /// @brief Method get_Provider addr 0x26a5e24 size 0x8 virtual false final false
  inline ::Mono::Net::Security::MobileTlsProvider* get_Provider();

  /// @brief Method get_TargetHost addr 0x26a5e2c size 0x8 virtual false final false
  inline ::StringW get_TargetHost();

  /// @brief Method set_TargetHost addr 0x26a5e34 size 0x8 virtual false final false
  inline void set_TargetHost(::StringW value);

  /// @brief Method CheckThrow addr 0x26a5e3c size 0xc8 virtual false final false
  inline void CheckThrow(bool authSuccessCheck, bool shutdownCheck);

  /// @brief Method GetSSPIException addr 0x26a3f08 size 0x194 virtual false final false
  static inline ::System::Exception* GetSSPIException(::System::Exception* e);

  /// @brief Method GetIOException addr 0x26a5f04 size 0x184 virtual false final false
  static inline ::System::Exception* GetIOException(::System::Exception* e, ::StringW message);

  /// @brief Method GetInternalError addr 0x26a6088 size 0x50 virtual false final false
  static inline ::System::Exception* GetInternalError();

  /// @brief Method GetInvalidNestedCallException addr 0x26a60d8 size 0x50 virtual false final false
  static inline ::System::Exception* GetInvalidNestedCallException();

  /// @brief Method SetException addr 0x26a39dc size 0x40 virtual false final false
  inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* SetException(::System::Exception* e);

  /// @brief Method AuthenticateAsClient addr 0x26a6128 size 0x1d8 virtual false final false
  inline void AuthenticateAsClient(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                   ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);

  /// @brief Method AuthenticateAsServer addr 0x26a6460 size 0x1d8 virtual false final false
  inline void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired,
                                   ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);

  /// @brief Method AuthenticateAsClientAsync addr 0x26a66a4 size 0x11c virtual true final true
  inline ::System::Threading::Tasks::Task* AuthenticateAsClientAsync(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                                                     ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);

  /// @brief Method ProcessAuthentication addr 0x26a636c size 0xf4 virtual false final false
  inline ::System::Threading::Tasks::Task* ProcessAuthentication(bool runSynchronously, ::Mono::Net::Security::MonoSslAuthenticationOptions* options,
                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CreateContext addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Mono::Net::Security::MobileTlsContext* CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* options);

  /// @brief Method Read addr 0x26a67c0 size 0xe4 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Write addr 0x26a69c0 size 0xd0 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync addr 0x26a6a90 size 0x9c virtual true final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteAsync addr 0x26a6b2c size 0x9c virtual true final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method StartOperation addr 0x26a68a4 size 0x11c virtual false final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* StartOperation(::Mono::Net::Security::__MobileAuthenticatedStream__OperationType type, ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest,
                                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InternalRead addr 0x26a0d30 size 0x10c virtual false final false
  inline int32_t InternalRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ByRef<bool> outWantMore);

  /// @brief Method InternalRead addr 0x26a6bc8 size 0x180 virtual false final false
  inline ::System::ValueTuple_2<int32_t, bool> InternalRead(::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::Mono::Net::Security::BufferOffsetSize* internalBuffer,
                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method InternalWrite addr 0x26a0848 size 0x1f0 virtual false final false
  inline bool InternalWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method InternalWrite addr 0x26a6d48 size 0xfc virtual false final false
  inline bool InternalWrite(::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::Mono::Net::Security::BufferOffsetSize2* internalBuffer, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer,
                            int32_t offset, int32_t size);

  /// @brief Method InnerRead addr 0x26a44dc size 0x11c virtual false final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* InnerRead(bool sync, int32_t requestedSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InnerWrite addr 0x26a409c size 0xe4 virtual false final false
  inline ::System::Threading::Tasks::Task* InnerWrite(bool sync, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ProcessHandshake addr 0x26a4674 size 0x3d8 virtual false final false
  inline ::Mono::Net::Security::AsyncOperationStatus ProcessHandshake(::Mono::Net::Security::AsyncOperationStatus status, bool renegotiate);

  /// @brief Method ProcessRead addr 0x26a4bd4 size 0x160 virtual false final false
  inline ::System::ValueTuple_2<int32_t, bool> ProcessRead(::Mono::Net::Security::BufferOffsetSize* userBuffer);

  /// @brief Method ProcessWrite addr 0x26a4db4 size 0x160 virtual false final false
  inline ::System::ValueTuple_2<int32_t, bool> ProcessWrite(::Mono::Net::Security::BufferOffsetSize* userBuffer);

  /// @brief Method get_IsAuthenticated addr 0x26a6e44 size 0xe8 virtual true final false
  inline bool get_IsAuthenticated();

  /// @brief Method Dispose addr 0x26a6f2c size 0x1e4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush addr 0x26a7180 size 0x24 virtual true final false
  inline void Flush();

  /// @brief Method get_LocalCertificate addr 0x26a71a4 size 0xdc virtual true final true
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalCertificate();

  /// @brief Method get_InternalLocalCertificate addr 0x26a7280 size 0x100 virtual true final true
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate();

  /// @brief Method Seek addr 0x26a7380 size 0x40 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x26a73c0 size 0x24 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method get_CanRead addr 0x26a73e4 size 0x44 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanTimeout addr 0x26a7428 size 0x20 virtual true final false
  inline bool get_CanTimeout();

  /// @brief Method get_CanWrite addr 0x26a7448 size 0x64 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_CanSeek addr 0x26a74ac size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_Length addr 0x26a74b4 size 0x20 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x26a74d4 size 0x20 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x26a74f4 size 0x40 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method get_ReadTimeout addr 0x26a7534 size 0x24 virtual true final false
  inline int32_t get_ReadTimeout();

  /// @brief Method set_ReadTimeout addr 0x26a7558 size 0x24 virtual true final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method get_WriteTimeout addr 0x26a757c size 0x24 virtual true final false
  inline int32_t get_WriteTimeout();

  /// @brief Method set_WriteTimeout addr 0x26a75a0 size 0x24 virtual true final false
  inline void set_WriteTimeout(int32_t value);

  /// @brief Method <InnerWrite>b__67_0 addr 0x26a7610 size 0x34 virtual false final false
  inline void _InnerWrite_b__67_0();

  // Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileAuthenticatedStream(MobileAuthenticatedStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileAuthenticatedStream(MobileAuthenticatedStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileAuthenticatedStream();

public:
  /// @brief Field xobileTlsContext, offset: 0x38, size: 0x8, def value: None
  ::Mono::Net::Security::MobileTlsContext* ___xobileTlsContext;

  /// @brief Field lastException, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* ___lastException;

  /// @brief Field asyncHandshakeRequest, offset: 0x48, size: 0x8, def value: None
  ::Mono::Net::Security::AsyncProtocolRequest* ___asyncHandshakeRequest;

  /// @brief Field asyncReadRequest, offset: 0x50, size: 0x8, def value: None
  ::Mono::Net::Security::AsyncProtocolRequest* ___asyncReadRequest;

  /// @brief Field asyncWriteRequest, offset: 0x58, size: 0x8, def value: None
  ::Mono::Net::Security::AsyncProtocolRequest* ___asyncWriteRequest;

  /// @brief Field readBuffer, offset: 0x60, size: 0x8, def value: None
  ::Mono::Net::Security::BufferOffsetSize2* ___readBuffer;

  /// @brief Field writeBuffer, offset: 0x68, size: 0x8, def value: None
  ::Mono::Net::Security::BufferOffsetSize2* ___writeBuffer;

  /// @brief Field ioLock, offset: 0x70, size: 0x8, def value: None
  ::System::Object* ___ioLock;

  /// @brief Field closeRequested, offset: 0x78, size: 0x4, def value: None
  int32_t ___closeRequested;

  /// @brief Field shutdown, offset: 0x7c, size: 0x1, def value: None
  bool ___shutdown;

  /// @brief Field operation, offset: 0x80, size: 0x4, def value: None
  ::Mono::Net::Security::__MobileAuthenticatedStream__Operation ___operation;

  /// @brief Field <SslStream>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Net::Security::SslStream* ____SslStream_k__BackingField;

  /// @brief Field <Settings>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoTlsSettings* ____Settings_k__BackingField;

  /// @brief Field <Provider>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::Mono::Net::Security::MobileTlsProvider* ____Provider_k__BackingField;

  /// @brief Field <TargetHost>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::StringW ____TargetHost_k__BackingField;

  /// @brief Field ID, offset: 0xa8, size: 0x4, def value: None
  int32_t ____cordl_ID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileAuthenticatedStream, 0xb0>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___xobileTlsContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___lastException) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___asyncHandshakeRequest) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___asyncReadRequest) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___asyncWriteRequest) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___readBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___writeBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___ioLock) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___closeRequested) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___shutdown) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___operation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ____SslStream_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ____Settings_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ____Provider_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ____TargetHost_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ____cordl_ID) == 0xa8, "Offset mismatch!");

} // namespace Mono::Net::Security
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__MobileAuthenticatedStream__Operation, "Mono.Net.Security", "MobileAuthenticatedStream/Operation");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__MobileAuthenticatedStream__OperationType, "Mono.Net.Security", "MobileAuthenticatedStream/OperationType");
NEED_NO_BOX(::Mono::Net::Security::MobileAuthenticatedStream);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream*, "Mono.Net.Security", "MobileAuthenticatedStream");
NEED_NO_BOX(::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__MobileAuthenticatedStream____c__DisplayClass66_0*, "Mono.Net.Security", "MobileAuthenticatedStream/<>c__DisplayClass66_0");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__MobileAuthenticatedStream___InnerRead_d__66, "Mono.Net.Security", "MobileAuthenticatedStream/<InnerRead>d__66");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__MobileAuthenticatedStream___InnerWrite_d__67, "Mono.Net.Security", "MobileAuthenticatedStream/<InnerWrite>d__67");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__MobileAuthenticatedStream___ProcessAuthentication_d__48, "Mono.Net.Security", "MobileAuthenticatedStream/<ProcessAuthentication>d__48");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__MobileAuthenticatedStream___StartOperation_d__57, "Mono.Net.Security", "MobileAuthenticatedStream/<StartOperation>d__57");
