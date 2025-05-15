#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__AuthenticatedStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileAuthenticatedStream)
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace Mono::Net::Security {
class AsyncProtocolRequest;
}
namespace Mono::Net::Security {
class AsyncProtocolResult;
}
namespace Mono::Net::Security {
class BufferOffsetSize2;
}
namespace Mono::Net::Security {
class BufferOffsetSize;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream_OperationType;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream_Operation;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream__InnerRead_d__66;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream__InnerWrite_d__67;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream__ProcessAuthentication_d__48;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream__StartOperation_d__57;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream___c__DisplayClass66_0;
}
namespace Mono::Net::Security {
class MobileTlsContext;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
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
class Exception;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace Mono::Net::Security {
struct MobileAuthenticatedStream_Operation;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream_OperationType;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream___c__DisplayClass66_0;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream__InnerRead_d__66;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream__InnerWrite_d__67;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream__ProcessAuthentication_d__48;
}
namespace Mono::Net::Security {
struct MobileAuthenticatedStream__StartOperation_d__57;
}
// Write type traits
MARK_VAL_T(::Mono::Net::Security::MobileAuthenticatedStream_Operation);
MARK_VAL_T(::Mono::Net::Security::MobileAuthenticatedStream_OperationType);
MARK_REF_PTR_T(::Mono::Net::Security::MobileAuthenticatedStream);
MARK_REF_PTR_T(::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0);
MARK_VAL_T(::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66);
MARK_VAL_T(::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67);
MARK_VAL_T(::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48);
MARK_VAL_T(::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57);
// Dependencies
namespace Mono::Net::Security {
// Is value type: true
// CS Name: Mono.Net.Security.MobileAuthenticatedStream/Operation
struct CORDL_TYPE MobileAuthenticatedStream_Operation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MobileAuthenticatedStream_Operation_Unwrapped
  enum struct __MobileAuthenticatedStream_Operation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Handshake = static_cast<int32_t>(0x1),
    __E_Authenticated = static_cast<int32_t>(0x2),
    __E_Renegotiate = static_cast<int32_t>(0x3),
    __E_Read = static_cast<int32_t>(0x4),
    __E_Write = static_cast<int32_t>(0x5),
    __E_Close = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MobileAuthenticatedStream_Operation_Unwrapped() const noexcept {
    return static_cast<__MobileAuthenticatedStream_Operation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileAuthenticatedStream_Operation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MobileAuthenticatedStream_Operation(int32_t value__) noexcept;

  /// @brief Field Authenticated value: I32(2)
  static ::Mono::Net::Security::MobileAuthenticatedStream_Operation const Authenticated;

  /// @brief Field Close value: I32(6)
  static ::Mono::Net::Security::MobileAuthenticatedStream_Operation const Close;

  /// @brief Field Handshake value: I32(1)
  static ::Mono::Net::Security::MobileAuthenticatedStream_Operation const Handshake;

  /// @brief Field None value: I32(0)
  static ::Mono::Net::Security::MobileAuthenticatedStream_Operation const None;

  /// @brief Field Read value: I32(4)
  static ::Mono::Net::Security::MobileAuthenticatedStream_Operation const Read;

  /// @brief Field Renegotiate value: I32(3)
  static ::Mono::Net::Security::MobileAuthenticatedStream_Operation const Renegotiate;

  /// @brief Field Write value: I32(5)
  static ::Mono::Net::Security::MobileAuthenticatedStream_Operation const Write;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9149 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream_Operation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileAuthenticatedStream_Operation, 0x4>, "Size mismatch!");

} // namespace Mono::Net::Security
// Dependencies
namespace Mono::Net::Security {
// Is value type: true
// CS Name: Mono.Net.Security.MobileAuthenticatedStream/OperationType
struct CORDL_TYPE MobileAuthenticatedStream_OperationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MobileAuthenticatedStream_OperationType_Unwrapped
  enum struct __MobileAuthenticatedStream_OperationType_Unwrapped : int32_t {
    __E_Read = static_cast<int32_t>(0x0),
    __E_Write = static_cast<int32_t>(0x1),
    __E_Renegotiate = static_cast<int32_t>(0x2),
    __E_Shutdown = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MobileAuthenticatedStream_OperationType_Unwrapped() const noexcept {
    return static_cast<__MobileAuthenticatedStream_OperationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileAuthenticatedStream_OperationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MobileAuthenticatedStream_OperationType(int32_t value__) noexcept;

  /// @brief Field Read value: I32(0)
  static ::Mono::Net::Security::MobileAuthenticatedStream_OperationType const Read;

  /// @brief Field Renegotiate value: I32(2)
  static ::Mono::Net::Security::MobileAuthenticatedStream_OperationType const Renegotiate;

  /// @brief Field Shutdown value: I32(3)
  static ::Mono::Net::Security::MobileAuthenticatedStream_OperationType const Shutdown;

  /// @brief Field Write value: I32(1)
  static ::Mono::Net::Security::MobileAuthenticatedStream_OperationType const Write;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9150 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream_OperationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileAuthenticatedStream_OperationType, 0x4>, "Size mismatch!");

} // namespace Mono::Net::Security
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Mono::Net::Security {
// Is value type: true
// CS Name: Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__48
struct CORDL_TYPE MobileAuthenticatedStream__ProcessAuthentication_d__48 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x4114fec, size 0x920, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x411590c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileAuthenticatedStream__ProcessAuthentication_d__48();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Mono::Net::Security::MonoSslAuthenticationOptions*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: None }, CppParam { name: "runSynchronously", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value: None }]
  constexpr MobileAuthenticatedStream__ProcessAuthentication_d__48(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Mono::Net::Security::MonoSslAuthenticationOptions* options,
      ::Mono::Net::Security::MobileAuthenticatedStream* __4__this, bool runSynchronously, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9151 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

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
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48, options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48, runSynchronously) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48, 0x50>, "Size mismatch!");

} // namespace Mono::Net::Security
// Dependencies Mono.Net.Security.MobileAuthenticatedStream::OperationType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Mono::Net::Security {
// Is value type: true
// CS Name: Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__57
struct CORDL_TYPE MobileAuthenticatedStream__StartOperation_d__57 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x4115974, size 0x7a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x411611c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileAuthenticatedStream__StartOperation_d__57();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*",
  // modifiers: "", def_value: None }, CppParam { name: "type", ty: "::Mono::Net::Security::MobileAuthenticatedStream_OperationType", modifiers: "", def_value: None }, CppParam { name: "asyncRequest",
  // ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "",
  // def_value: None }]
  constexpr MobileAuthenticatedStream__StartOperation_d__57(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Mono::Net::Security::MobileAuthenticatedStream* __4__this,
      ::Mono::Net::Security::MobileAuthenticatedStream_OperationType type, ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9152 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream* __4__this;

  /// @brief Field type, offset: 0x28, size: 0x4, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream_OperationType type;

  /// @brief Field asyncRequest, offset: 0x30, size: 0x8, def value: None
  ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57, type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57, asyncRequest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57, 0x50>, "Size mismatch!");

} // namespace Mono::Net::Security
// Dependencies System.Object
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0
class CORDL_TYPE MobileAuthenticatedStream___c__DisplayClass66_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Mono::Net::Security::MobileAuthenticatedStream* __4__this;

  /// @brief Field len, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_len, put = __cordl_internal_set_len)) int32_t len;

  static inline ::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0* New_ctor();

  /// @brief Method <InnerRead>b__0, addr 0x41161a0, size 0x48, virtual false, abstract: false, final false
  inline int32_t _InnerRead_b__0();

  constexpr ::Mono::Net::Security::MobileAuthenticatedStream* const& __cordl_internal_get___4__this() const;

  constexpr ::Mono::Net::Security::MobileAuthenticatedStream*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_len() const;

  constexpr int32_t& __cordl_internal_get_len();

  constexpr void __cordl_internal_set___4__this(::Mono::Net::Security::MobileAuthenticatedStream* value);

  constexpr void __cordl_internal_set_len(int32_t value);

  /// @brief Method .ctor, addr 0x4116198, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileAuthenticatedStream___c__DisplayClass66_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream___c__DisplayClass66_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileAuthenticatedStream___c__DisplayClass66_0(MobileAuthenticatedStream___c__DisplayClass66_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream___c__DisplayClass66_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileAuthenticatedStream___c__DisplayClass66_0(MobileAuthenticatedStream___c__DisplayClass66_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9153 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Mono::Net::Security::MobileAuthenticatedStream* _____4__this;

  /// @brief Field len, offset: 0x18, size: 0x4, def value: None
  int32_t ___len;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0, ___len) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0, 0x20>, "Size mismatch!");

} // namespace Mono::Net::Security
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Mono::Net::Security {
// Is value type: true
// CS Name: Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66
struct CORDL_TYPE MobileAuthenticatedStream__InnerRead_d__66 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x41161e8, size 0x4a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x411668c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileAuthenticatedStream__InnerRead_d__66();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "requestedSize", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr MobileAuthenticatedStream__InnerRead_d__66(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                       ::Mono::Net::Security::MobileAuthenticatedStream* __4__this, ::System::Threading::CancellationToken cancellationToken, int32_t requestedSize,
                                                       bool sync, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9154 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

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
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66, requestedSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66, sync) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66, 0x48>, "Size mismatch!");

} // namespace Mono::Net::Security
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Mono::Net::Security {
// Is value type: true
// CS Name: Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67
struct CORDL_TYPE MobileAuthenticatedStream__InnerWrite_d__67 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x4116708, size 0x2fc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x4116a04, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileAuthenticatedStream__InnerWrite_d__67();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr MobileAuthenticatedStream__InnerWrite_d__67(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                        ::System::Threading::CancellationToken cancellationToken, ::Mono::Net::Security::MobileAuthenticatedStream* __4__this, bool sync,
                                                        ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9155 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

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
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67, sync) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67, 0x48>, "Size mismatch!");

} // namespace Mono::Net::Security
// Dependencies Mono.Net.Security.MobileAuthenticatedStream::Operation, System.IDisposable, System.Net.Security.AuthenticatedStream
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.MobileAuthenticatedStream
class CORDL_TYPE MobileAuthenticatedStream : public ::System::Net::Security::AuthenticatedStream {
public:
  // Declarations
  using Operation = ::Mono::Net::Security::MobileAuthenticatedStream_Operation;

  using OperationType = ::Mono::Net::Security::MobileAuthenticatedStream_OperationType;

  using _InnerRead_d__66 = ::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66;

  using _InnerWrite_d__67 = ::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67;

  using _ProcessAuthentication_d__48 = ::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48;

  using _StartOperation_d__57 = ::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57;

  using __c__DisplayClass66_0 = ::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_InternalLocalCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate* InternalLocalCertificate;

  __declspec(property(get = get_IsAuthenticated)) bool IsAuthenticated;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_LocalCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate* LocalCertificate;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_Provider)) ::Mono::Net::Security::MobileTlsProvider* Provider;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_Settings)) ::Mono::Security::Interface::MonoTlsSettings* Settings;

  __declspec(property(get = get_SslStream)) ::System::Net::Security::SslStream* SslStream;

  __declspec(property(get = get_TargetHost, put = set_TargetHost)) ::StringW TargetHost;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Field <Provider>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__Provider_k__BackingField, put = __cordl_internal_set__Provider_k__BackingField)) ::Mono::Net::Security::MobileTlsProvider* _Provider_k__BackingField;

  /// @brief Field <Settings>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Settings_k__BackingField,
                      put = __cordl_internal_set__Settings_k__BackingField)) ::Mono::Security::Interface::MonoTlsSettings* _Settings_k__BackingField;

  /// @brief Field <SslStream>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SslStream_k__BackingField, put = __cordl_internal_set__SslStream_k__BackingField)) ::System::Net::Security::SslStream* _SslStream_k__BackingField;

  /// @brief Field <TargetHost>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__TargetHost_k__BackingField, put = __cordl_internal_set__TargetHost_k__BackingField)) ::StringW _TargetHost_k__BackingField;

  /// @brief Field ID, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) int32_t _cordl_ID;

  /// @brief Field asyncHandshakeRequest, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_asyncHandshakeRequest, put = __cordl_internal_set_asyncHandshakeRequest)) ::Mono::Net::Security::AsyncProtocolRequest* asyncHandshakeRequest;

  /// @brief Field asyncReadRequest, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_asyncReadRequest, put = __cordl_internal_set_asyncReadRequest)) ::Mono::Net::Security::AsyncProtocolRequest* asyncReadRequest;

  /// @brief Field asyncWriteRequest, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_asyncWriteRequest, put = __cordl_internal_set_asyncWriteRequest)) ::Mono::Net::Security::AsyncProtocolRequest* asyncWriteRequest;

  /// @brief Field closeRequested, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_closeRequested, put = __cordl_internal_set_closeRequested)) int32_t closeRequested;

  /// @brief Field ioLock, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_ioLock, put = __cordl_internal_set_ioLock)) ::System::Object* ioLock;

  /// @brief Field lastException, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lastException, put = __cordl_internal_set_lastException)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* lastException;

  /// @brief Field nextId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_nextId, put = setStaticF_nextId)) int32_t nextId;

  /// @brief Field operation, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_operation, put = __cordl_internal_set_operation)) ::Mono::Net::Security::MobileAuthenticatedStream_Operation operation;

  /// @brief Field readBuffer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_readBuffer, put = __cordl_internal_set_readBuffer)) ::Mono::Net::Security::BufferOffsetSize2* readBuffer;

  /// @brief Field shutdown, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_shutdown, put = __cordl_internal_set_shutdown)) bool shutdown;

  /// @brief Field uniqueNameInteger, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_uniqueNameInteger, put = setStaticF_uniqueNameInteger)) int32_t uniqueNameInteger;

  /// @brief Field writeBuffer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_writeBuffer, put = __cordl_internal_set_writeBuffer)) ::Mono::Net::Security::BufferOffsetSize2* writeBuffer;

  /// @brief Field xobileTlsContext, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_xobileTlsContext, put = __cordl_internal_set_xobileTlsContext)) ::Mono::Net::Security::MobileTlsContext* xobileTlsContext;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AuthenticateAsClient, addr 0x4113b30, size 0x1d8, virtual false, abstract: false, final false
  inline void AuthenticateAsClient(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                   ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);

  /// @brief Method AuthenticateAsClientAsync, addr 0x4114098, size 0x11c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* AuthenticateAsClientAsync(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates,
                                                                     ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);

  /// @brief Method AuthenticateAsServer, addr 0x4113e5c, size 0x1d8, virtual false, abstract: false, final false
  inline void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired,
                                   ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);

  /// @brief Method CheckThrow, addr 0x411385c, size 0xc0, virtual false, abstract: false, final false
  inline void CheckThrow(bool authSuccessCheck, bool shutdownCheck);

  /// @brief Method CreateContext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Mono::Net::Security::MobileTlsContext* CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* options);

  /// @brief Method Dispose, addr 0x41148f0, size 0x1d4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush, addr 0x4114b34, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetIOException, addr 0x411391c, size 0x17c, virtual false, abstract: false, final false
  static inline ::System::Exception* GetIOException(::System::Exception* e, ::StringW message);

  /// @brief Method GetInternalError, addr 0x4113a98, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* GetInternalError();

  /// @brief Method GetInvalidNestedCallException, addr 0x4113ae4, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Exception* GetInvalidNestedCallException();

  /// @brief Method GetSSPIException, addr 0x41118a4, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Exception* GetSSPIException(::System::Exception* e);

  /// @brief Method InnerRead, addr 0x4111f1c, size 0x118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* InnerRead(bool sync, int32_t requestedSize, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InnerWrite, addr 0x4111a38, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InnerWrite(bool sync, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InternalRead, addr 0x411459c, size 0x178, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<int32_t, bool> InternalRead(::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::Mono::Net::Security::BufferOffsetSize* internalBuffer,
                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method InternalRead, addr 0x410e684, size 0x10c, virtual false, abstract: false, final false
  inline int32_t InternalRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::ByRef<bool> outWantMore);

  /// @brief Method InternalWrite, addr 0x4114714, size 0xf4, virtual false, abstract: false, final false
  inline bool InternalWrite(::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ::Mono::Net::Security::BufferOffsetSize2* internalBuffer, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer,
                            int32_t offset, int32_t size);

  /// @brief Method InternalWrite, addr 0x410e1a4, size 0x1e8, virtual false, abstract: false, final false
  inline bool InternalWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  static inline ::Mono::Net::Security::MobileAuthenticatedStream* New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner,
                                                                           ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::MobileTlsProvider* provider);

  /// @brief Method ProcessAuthentication, addr 0x4113d6c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ProcessAuthentication(bool runSynchronously, ::Mono::Net::Security::MonoSslAuthenticationOptions* options,
                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ProcessHandshake, addr 0x41120d4, size 0x3c4, virtual false, abstract: false, final false
  inline ::Mono::Net::Security::AsyncOperationStatus ProcessHandshake(::Mono::Net::Security::AsyncOperationStatus status, bool renegotiate);

  /// @brief Method ProcessRead, addr 0x4112618, size 0x160, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<int32_t, bool> ProcessRead(::Mono::Net::Security::BufferOffsetSize* userBuffer);

  /// @brief Method ProcessWrite, addr 0x41127f8, size 0x160, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<int32_t, bool> ProcessWrite(::Mono::Net::Security::BufferOffsetSize* userBuffer);

  /// @brief Method Read, addr 0x41141b4, size 0xe0, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x4114474, size 0x94, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Seek, addr 0x4114d34, size 0x38, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetException, addr 0x41112cc, size 0x40, virtual false, abstract: false, final false
  inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* SetException(::System::Exception* e);

  /// @brief Method SetLength, addr 0x4114d6c, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method StartOperation, addr 0x4114294, size 0x114, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* StartOperation(::Mono::Net::Security::MobileAuthenticatedStream_OperationType type, ::Mono::Net::Security::AsyncProtocolRequest* asyncRequest,
                                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Write, addr 0x41143a8, size 0xcc, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteAsync, addr 0x4114508, size 0x94, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method <InnerWrite>b__67_0, addr 0x4114fb8, size 0x34, virtual false, abstract: false, final false
  inline void _InnerWrite_b__67_0();

  constexpr ::Mono::Net::Security::MobileTlsProvider* const& __cordl_internal_get__Provider_k__BackingField() const;

  constexpr ::Mono::Net::Security::MobileTlsProvider*& __cordl_internal_get__Provider_k__BackingField();

  constexpr ::Mono::Security::Interface::MonoTlsSettings* const& __cordl_internal_get__Settings_k__BackingField() const;

  constexpr ::Mono::Security::Interface::MonoTlsSettings*& __cordl_internal_get__Settings_k__BackingField();

  constexpr ::System::Net::Security::SslStream* const& __cordl_internal_get__SslStream_k__BackingField() const;

  constexpr ::System::Net::Security::SslStream*& __cordl_internal_get__SslStream_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__TargetHost_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TargetHost_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__cordl_ID() const;

  constexpr int32_t& __cordl_internal_get__cordl_ID();

  constexpr ::Mono::Net::Security::AsyncProtocolRequest* const& __cordl_internal_get_asyncHandshakeRequest() const;

  constexpr ::Mono::Net::Security::AsyncProtocolRequest*& __cordl_internal_get_asyncHandshakeRequest();

  constexpr ::Mono::Net::Security::AsyncProtocolRequest* const& __cordl_internal_get_asyncReadRequest() const;

  constexpr ::Mono::Net::Security::AsyncProtocolRequest*& __cordl_internal_get_asyncReadRequest();

  constexpr ::Mono::Net::Security::AsyncProtocolRequest* const& __cordl_internal_get_asyncWriteRequest() const;

  constexpr ::Mono::Net::Security::AsyncProtocolRequest*& __cordl_internal_get_asyncWriteRequest();

  constexpr int32_t const& __cordl_internal_get_closeRequested() const;

  constexpr int32_t& __cordl_internal_get_closeRequested();

  constexpr ::System::Object* const& __cordl_internal_get_ioLock() const;

  constexpr ::System::Object*& __cordl_internal_get_ioLock();

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_lastException() const;

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_lastException();

  constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation const& __cordl_internal_get_operation() const;

  constexpr ::Mono::Net::Security::MobileAuthenticatedStream_Operation& __cordl_internal_get_operation();

  constexpr ::Mono::Net::Security::BufferOffsetSize2* const& __cordl_internal_get_readBuffer() const;

  constexpr ::Mono::Net::Security::BufferOffsetSize2*& __cordl_internal_get_readBuffer();

  constexpr bool const& __cordl_internal_get_shutdown() const;

  constexpr bool& __cordl_internal_get_shutdown();

  constexpr ::Mono::Net::Security::BufferOffsetSize2* const& __cordl_internal_get_writeBuffer() const;

  constexpr ::Mono::Net::Security::BufferOffsetSize2*& __cordl_internal_get_writeBuffer();

  constexpr ::Mono::Net::Security::MobileTlsContext* const& __cordl_internal_get_xobileTlsContext() const;

  constexpr ::Mono::Net::Security::MobileTlsContext*& __cordl_internal_get_xobileTlsContext();

  constexpr void __cordl_internal_set__Provider_k__BackingField(::Mono::Net::Security::MobileTlsProvider* value);

  constexpr void __cordl_internal_set__Settings_k__BackingField(::Mono::Security::Interface::MonoTlsSettings* value);

  constexpr void __cordl_internal_set__SslStream_k__BackingField(::System::Net::Security::SslStream* value);

  constexpr void __cordl_internal_set__TargetHost_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__cordl_ID(int32_t value);

  constexpr void __cordl_internal_set_asyncHandshakeRequest(::Mono::Net::Security::AsyncProtocolRequest* value);

  constexpr void __cordl_internal_set_asyncReadRequest(::Mono::Net::Security::AsyncProtocolRequest* value);

  constexpr void __cordl_internal_set_asyncWriteRequest(::Mono::Net::Security::AsyncProtocolRequest* value);

  constexpr void __cordl_internal_set_closeRequested(int32_t value);

  constexpr void __cordl_internal_set_ioLock(::System::Object* value);

  constexpr void __cordl_internal_set_lastException(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value);

  constexpr void __cordl_internal_set_operation(::Mono::Net::Security::MobileAuthenticatedStream_Operation value);

  constexpr void __cordl_internal_set_readBuffer(::Mono::Net::Security::BufferOffsetSize2* value);

  constexpr void __cordl_internal_set_shutdown(bool value);

  constexpr void __cordl_internal_set_writeBuffer(::Mono::Net::Security::BufferOffsetSize2* value);

  constexpr void __cordl_internal_set_xobileTlsContext(::Mono::Net::Security::MobileTlsContext* value);

  /// @brief Method .ctor, addr 0x4110004, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner, ::Mono::Security::Interface::MonoTlsSettings* settings,
                    ::Mono::Net::Security::MobileTlsProvider* provider);

  static inline int32_t getStaticF_nextId();

  static inline int32_t getStaticF_uniqueNameInteger();

  /// @brief Method get_CanRead, addr 0x4114d90, size 0x44, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x4114e58, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanTimeout, addr 0x4114dd4, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanTimeout();

  /// @brief Method get_CanWrite, addr 0x4114df4, size 0x64, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_InternalLocalCertificate, addr 0x4114c34, size 0x100, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate();

  /// @brief Method get_IsAuthenticated, addr 0x4114808, size 0xe8, virtual true, abstract: false, final false
  inline bool get_IsAuthenticated();

  /// @brief Method get_Length, addr 0x4114e60, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_LocalCertificate, addr 0x4114b58, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalCertificate();

  /// @brief Method get_Position, addr 0x4114e80, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_Provider, addr 0x4113844, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Net::Security::MobileTlsProvider* get_Provider();

  /// @brief Method get_ReadTimeout, addr 0x4114edc, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method get_Settings, addr 0x411383c, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::Interface::MonoTlsSettings* get_Settings();

  /// @brief Method get_SslStream, addr 0x4113834, size 0x8, virtual true, abstract: false, final true
  inline ::System::Net::Security::SslStream* get_SslStream();

  /// @brief Method get_TargetHost, addr 0x411384c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TargetHost();

  /// @brief Method get_WriteTimeout, addr 0x4114f24, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_nextId(int32_t value);

  static inline void setStaticF_uniqueNameInteger(int32_t value);

  /// @brief Method set_Position, addr 0x4114ea4, size 0x38, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method set_ReadTimeout, addr 0x4114f00, size 0x24, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method set_TargetHost, addr 0x4113854, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetHost(::StringW value);

  /// @brief Method set_WriteTimeout, addr 0x4114f48, size 0x24, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileAuthenticatedStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileAuthenticatedStream(MobileAuthenticatedStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileAuthenticatedStream(MobileAuthenticatedStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9156 };

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
  ::Mono::Net::Security::MobileAuthenticatedStream_Operation ___operation;

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

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileAuthenticatedStream, 0xb0>, "Size mismatch!");

} // namespace Mono::Net::Security
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream_Operation, "Mono.Net.Security", "MobileAuthenticatedStream/Operation");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream_OperationType, "Mono.Net.Security", "MobileAuthenticatedStream/OperationType");
NEED_NO_BOX(::Mono::Net::Security::MobileAuthenticatedStream);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream*, "Mono.Net.Security", "MobileAuthenticatedStream");
NEED_NO_BOX(::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0*, "Mono.Net.Security", "MobileAuthenticatedStream/<>c__DisplayClass66_0");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream__InnerRead_d__66, "Mono.Net.Security", "MobileAuthenticatedStream/<InnerRead>d__66");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67, "Mono.Net.Security", "MobileAuthenticatedStream/<InnerWrite>d__67");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream__ProcessAuthentication_d__48, "Mono.Net.Security", "MobileAuthenticatedStream/<ProcessAuthentication>d__48");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__57, "Mono.Net.Security", "MobileAuthenticatedStream/<StartOperation>d__57");
