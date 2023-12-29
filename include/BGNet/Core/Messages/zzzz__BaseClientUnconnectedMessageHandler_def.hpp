#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/Messages/zzzz__ChangeCipherSpecRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__HelloVerifyRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__ServerCertificateRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__ServerHelloRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseClientUnconnectedMessageHandler)
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace System::Security::Authentication {
class AuthenticationException;
}
namespace BGNet::Core::Messages {
class HelloVerifyRequest;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31;
}
namespace GlobalNamespace {
class ICertificateValidator;
}
namespace BGNet::Core::Messages {
template <typename T> struct __BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___OnSendFailed_d__25;
}
namespace BGNet::Core::Messages {
struct __UnconnectedMessageHandler__MessageOrigin;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22;
}
namespace BGNet::Core::Messages {
template <typename T> struct __BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
class IPEndPoint;
}
namespace BGNet::Core::Messages {
class __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0;
}
namespace BGNet::Core::Messages {
class __BaseClientUnconnectedMessageHandler____c__DisplayClass35_0;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32;
}
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Threading {
struct CancellationToken;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21;
}
namespace BGNet::Core {
class IAnalyticsManager;
}
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateRequest;
}
namespace GlobalNamespace {
struct __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d;
}
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateResponse;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace BGNet::Core::Messages {
class ServerHelloRequest;
}
namespace BGNet::Core::Messages {
class ChangeCipherSpecRequest;
}
namespace GlobalNamespace {
class __EncryptionUtility__IEncryptionState;
}
namespace BGNet::Core::Messages {
class ServerCertificateRequest;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseClientUnconnectedMessageHandler;
}
namespace BGNet::Core::Messages {
class __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0;
}
namespace BGNet::Core::Messages {
class __BaseClientUnconnectedMessageHandler____c__DisplayClass35_0;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30;
}
namespace BGNet::Core::Messages {
template <typename T> struct __BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___OnSendFailed_d__25;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27;
}
namespace BGNet::Core::Messages {
template <typename T> struct __BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22;
}
namespace BGNet::Core::Messages {
struct __BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21;
}
namespace GlobalNamespace {
struct __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler);
MARK_REF_PTR_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0);
MARK_REF_PTR_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0);
MARK_VAL_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31);
MARK_VAL_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32);
MARK_VAL_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30);
MARK_GEN_VAL_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1);
MARK_VAL_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25);
MARK_VAL_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27);
MARK_GEN_VAL_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1);
MARK_VAL_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24);
MARK_VAL_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22);
MARK_VAL_T(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21);
MARK_VAL_T(::GlobalNamespace::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d);
// Type: ::<SendOrderedAuthenticatedRequest>d__21
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(3388))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12938))
// CS Name: ::BaseClientUnconnectedMessageHandler::<SendOrderedAuthenticatedRequest>d__21
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xdd9cf0 size 0x304 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xdd9ff4 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "queue", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "message", ty:
  // "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "_task_5__2", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                          ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this, ::StringW queue,
                                                                                          ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                                                                          ::System::Threading::CancellationToken cancellationToken, ::System::Threading::Tasks::Task* _task_5__2,
                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field queue, offset: 0x30, size: 0x8, def value: None
  ::StringW queue;

  /// @brief Field message, offset: 0x38, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <task>5__2, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* _task_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, 0x58>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, queue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, message) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, _task_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, __u__1) == 0x50, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<SendOrderedAuthenticatedRequestAsync>d__22
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3396))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12939))
// CS Name: ::BaseClientUnconnectedMessageHandler::<SendOrderedAuthenticatedRequestAsync>d__22
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xdda000 size 0x3dc virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xdda3dc size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "previousTask", ty: "::System::Threading::Tasks::Task*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*", modifiers: "", def_value: None }, CppParam { name: "message", ty:
  // "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                               ::System::Threading::Tasks::Task* previousTask,
                                                                                               ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this,
                                                                                               ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                                                                               ::System::Threading::CancellationToken cancellationToken,
                                                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field previousTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* previousTask;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field message, offset: 0x30, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22, 0x48>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22, previousTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22, message) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22, __u__1) == 0x40, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<SendAuthenticatedRequestAsync>d__23`1
// SizeInfo { instance_size: 72, native_size: 88, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3397)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 103 }), TypeDefinitionIndex(TypeDefinitionIndex(3388)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3389), inst: 103 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12940)) CS Name: ::BaseClientUnconnectedMessageHandler::<SendAuthenticatedRequestAsync>d__23`1<T>
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "",
  // def_value: None }]
  constexpr __BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                                                          ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this,
                                                                                          ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                                                                          ::System::Threading::CancellationToken cancellationToken,
                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field message, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: ::<SendAuthenticatedRequestAsync>d__24
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3396)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3388))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12941))
// CS Name: ::BaseClientUnconnectedMessageHandler::<SendAuthenticatedRequestAsync>d__24
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xdda3e8 size 0x2bc virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xdda6a4 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None
  // }]
  constexpr __BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                        ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this,
                                                                                        ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                                                                        ::System::Threading::CancellationToken cancellationToken,
                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field message, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24, 0x40>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24, message) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24, __u__1) == 0x38, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<OnSendFailed>d__25
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(3396)), TypeDefinitionIndex(TypeDefinitionIndex(2675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12942))
// CS Name: ::BaseClientUnconnectedMessageHandler::<OnSendFailed>d__25
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler___OnSendFailed_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xdda6b0 size 0x330 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xdda9e0 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*", modifiers: "", def_value: None }, CppParam { name: "protocolVersion",
  // ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BaseClientUnconnectedMessageHandler___OnSendFailed_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this,
                                                                       ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, uint32_t protocolVersion,
                                                                       ::System::Net::IPEndPoint* remoteEndPoint, ::System::Threading::CancellationToken cancellationToken,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler___OnSendFailed_d__25();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field message, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field protocolVersion, offset: 0x30, size: 0x4, def value: None
  uint32_t protocolVersion;

  /// @brief Field remoteEndPoint, offset: 0x38, size: 0x8, def value: None
  ::System::Net::IPEndPoint* remoteEndPoint;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, 0x50>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, message) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, protocolVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, remoteEndPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, __u__1) == 0x48, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<OnSendFailedAwaitResponse>d__26`1
// SizeInfo { instance_size: 88, native_size: 104, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3388)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 93
// }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 93 }), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(12943)) CS Name: ::BaseClientUnconnectedMessageHandler::<OnSendFailedAwaitResponse>d__26`1<T>
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::BGNet::Core::Messages::IUnconnectedReliableRequest*",
  // modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "::System::Net::IPEndPoint*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "",
  // def_value: None }]
  constexpr __BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                                                      ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this,
                                                                                      ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, uint32_t protocolVersion,
                                                                                      ::System::Net::IPEndPoint* remoteEndPoint, ::System::Threading::CancellationToken cancellationToken,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field message, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;

  /// @brief Field protocolVersion, offset: 0x30, size: 0x4, def value: None
  uint32_t protocolVersion;

  /// @brief Field remoteEndPoint, offset: 0x38, size: 0x8, def value: None
  ::System::Net::IPEndPoint* remoteEndPoint;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGNet::Core::Messages
// Type: ::<ReauthenticateWithServer>d__27
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3396)), TypeDefinitionIndex(TypeDefinitionIndex(3388))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12944))
// CS Name: ::BaseClientUnconnectedMessageHandler::<ReauthenticateWithServer>d__27
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xdda9ec size 0x1e4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xddabd0 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                   ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27, __u__1) == 0x28, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<AuthenticateWithServer>d__30
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(3388))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12945))
// CS Name: ::BaseClientUnconnectedMessageHandler::<AuthenticateWithServer>d__30
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xddabdc size 0x21c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xddadf8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                 ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this,
                                                                                 ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30, __u__1) == 0x30, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<AuthenticateWithServerAsyncInternalVerbose>d__31
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3396)), TypeDefinitionIndex(TypeDefinitionIndex(3388))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12946))
// CS Name: ::BaseClientUnconnectedMessageHandler::<AuthenticateWithServerAsyncInternalVerbose>d__31
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xddae04 size 0x39c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xddb1a0 size 0x100c virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                     ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this,
                                                                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31, __u__1) == 0x28, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<<AuthenticateWithServerAsyncInternal>b__0>d
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 772 }), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3397), inst: 772 }), TypeDefinitionIndex(TypeDefinitionIndex(3389))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12947)) CS Name:
// ::BaseClientUnconnectedMessageHandler::<>c__DisplayClass32_0::<<AuthenticateWithServerAsyncInternal>b__0>d
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xddc35c size 0x2b0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xddc60c size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "result", ty:
  // "::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }]
  constexpr __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder,
      ::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>* result, ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder;

  /// @brief Field result, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>* result;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d, result) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12948))
// CS Name: ::BaseClientUnconnectedMessageHandler::<>c__DisplayClass32_0*
class CORDL_TYPE __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  using __AuthenticateWithServerAsyncInternal_b__0_d = ::GlobalNamespace::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d;

  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field serverPublicKey, offset 0x18, size 0x8
  __declspec(property(get = __get_serverPublicKey, put = __set_serverPublicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> serverPublicKey;

  constexpr ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*> const& __get___4__this() const;

  constexpr void __set___4__this(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_serverPublicKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_serverPublicKey() const;

  constexpr void __set_serverPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0* New_ctor();

  /// @brief Method .ctor addr 0xddc1ac size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AuthenticateWithServerAsyncInternal>b__1 addr 0xddc1b4 size 0x94 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::HelloVerifyRequest*>* _AuthenticateWithServerAsyncInternal_b__1(uint32_t protocolVersion, ::System::Net::IPEndPoint* ep,
                                                                                                                                     ::BGNet::Core::Messages::IUnconnectedReliableRequest* request,
                                                                                                                                     ::System::Threading::CancellationToken ct);

  /// @brief Method <AuthenticateWithServerAsyncInternal>b__0 addr 0xddc260 size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
  _AuthenticateWithServerAsyncInternal_b__0(::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>* result);

  // Ctor Parameters [CppParam { name: "", ty: "__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0(__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0(__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler____c__DisplayClass32_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* _____4__this;

  /// @brief Field serverPublicKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___serverPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0, ___serverPublicKey) == 0x18, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<AuthenticateWithServerAsyncInternal>d__32
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12985)), TypeDefinitionIndex(TypeDefinitionIndex(7869)), TypeDefinitionIndex(TypeDefinitionIndex(12971)),
// TypeDefinitionIndex(TypeDefinitionIndex(3396)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 772 }), TypeDefinitionIndex(TypeDefinitionIndex(12651)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4956 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 890 }),
// TypeDefinitionIndex(TypeDefinitionIndex(12639)), TypeDefinitionIndex(TypeDefinitionIndex(12974)), TypeDefinitionIndex(TypeDefinitionIndex(12976)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3389), inst: 4706 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 2541 }), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4707 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4705 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4697 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4955 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 4954 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112 }),
// TypeDefinitionIndex(TypeDefinitionIndex(12972)), TypeDefinitionIndex(TypeDefinitionIndex(12986))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12949)) CS Name:
// ::BaseClientUnconnectedMessageHandler::<AuthenticateWithServerAsyncInternal>d__32
struct CORDL_TYPE __BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xddc664 size 0x13d8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xddddc4 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*",
  // modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0*", modifiers: "", def_value: None },
  // CppParam { name: "_endPoint_5__2", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "_authenticationRequest_5__3", ty:
  // "::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*", modifiers: "", def_value: None }, CppParam { name: "_clientRandom_5__4", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "_generateKeysTask_5__5", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>*", modifiers: "", def_value: None }, CppParam {
  // name: "_serverCertificateTask_5__6", ty: "::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::ServerCertificateRequest*>*", modifiers: "", def_value: None }, CppParam { name:
  // "_serverRandom_5__7", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_signature_5__8", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "_responseId_5__9", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_getPreMasterSecretTask_5__10", ty:
  // "::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*", modifiers: "", def_value: None }, CppParam { name: "_verifySignatureTask_5__11", ty:
  // "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: None }, CppParam { name: "_clientKeys_5__12", ty: "::GlobalNamespace::IDiffieHellmanKeyPair*", modifiers: "", def_value:
  // None }, CppParam { name: "_encryptionState_5__13", ty: "::GlobalNamespace::__EncryptionUtility__IEncryptionState*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::IPEndPoint*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::HelloVerifyRequest*>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ServerHelloRequest*>", modifiers: "", def_value: None }, CppParam { name: "__u__5", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ServerCertificateRequest*>", modifiers: "", def_value: None }, CppParam { name: "__u__6", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*>", modifiers: "", def_value: None }, CppParam { name: "__u__7", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__8", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ChangeCipherSpecRequest*>", modifiers: "", def_value: None }, CppParam { name: "__u__9", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "__u__10", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: None }, CppParam { name: "__u__11", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*>", modifiers: "", def_value: None }]
  constexpr __BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this,
      ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0* __8__1, ::System::Net::IPEndPoint* _endPoint_5__2,
      ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest* _authenticationRequest_5__3, ::ArrayW<uint8_t, ::Array<uint8_t>*> _clientRandom_5__4,
      ::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>* _generateKeysTask_5__5,
      ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::ServerCertificateRequest*>* _serverCertificateTask_5__6, ::ArrayW<uint8_t, ::Array<uint8_t>*> _serverRandom_5__7,
      ::ArrayW<uint8_t, ::Array<uint8_t>*> _signature_5__8, uint32_t _responseId_5__9, ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _getPreMasterSecretTask_5__10,
      ::System::Threading::Tasks::Task_1<bool>* _verifySignatureTask_5__11, ::GlobalNamespace::IDiffieHellmanKeyPair* _clientKeys_5__12,
      ::GlobalNamespace::__EncryptionUtility__IEncryptionState* _encryptionState_5__13, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::IPEndPoint*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*> __u__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::HelloVerifyRequest*> __u__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ServerHelloRequest*> __u__4,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ServerCertificateRequest*> __u__5,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*> __u__6, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__7,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ChangeCipherSpecRequest*> __u__8,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__9,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__10,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*> __u__11) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0* __8__1;

  /// @brief Field <endPoint>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IPEndPoint* _endPoint_5__2;

  /// @brief Field <authenticationRequest>5__3, offset: 0x38, size: 0x8, def value: None
  ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest* _authenticationRequest_5__3;

  /// @brief Field <clientRandom>5__4, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _clientRandom_5__4;

  /// @brief Field <generateKeysTask>5__5, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>* _generateKeysTask_5__5;

  /// @brief Field <serverCertificateTask>5__6, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::ServerCertificateRequest*>* _serverCertificateTask_5__6;

  /// @brief Field <serverRandom>5__7, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _serverRandom_5__7;

  /// @brief Field <signature>5__8, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _signature_5__8;

  /// @brief Field <responseId>5__9, offset: 0x68, size: 0x4, def value: None
  uint32_t _responseId_5__9;

  /// @brief Field <getPreMasterSecretTask>5__10, offset: 0x70, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _getPreMasterSecretTask_5__10;

  /// @brief Field <verifySignatureTask>5__11, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<bool>* _verifySignatureTask_5__11;

  /// @brief Field <clientKeys>5__12, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IDiffieHellmanKeyPair* _clientKeys_5__12;

  /// @brief Field <encryptionState>5__13, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::__EncryptionUtility__IEncryptionState* _encryptionState_5__13;

  /// @brief Field <>u__1, offset: 0x90, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::IPEndPoint*> __u__1;

  /// @brief Field <>u__2, offset: 0x98, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*> __u__2;

  /// @brief Field <>u__3, offset: 0xa0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::HelloVerifyRequest*> __u__3;

  /// @brief Field <>u__4, offset: 0xa8, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ServerHelloRequest*> __u__4;

  /// @brief Field <>u__5, offset: 0xb0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ServerCertificateRequest*> __u__5;

  /// @brief Field <>u__6, offset: 0xb8, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*> __u__6;

  /// @brief Field <>u__7, offset: 0xc0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__7;

  /// @brief Field <>u__8, offset: 0xc8, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ChangeCipherSpecRequest*> __u__8;

  /// @brief Field <>u__9, offset: 0xd0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__9;

  /// @brief Field <>u__10, offset: 0xd8, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__10;

  /// @brief Field <>u__11, offset: 0xe0, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateResponse*> __u__11;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, 0xe8>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _endPoint_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _authenticationRequest_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _clientRandom_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _generateKeysTask_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _serverCertificateTask_5__6) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _serverRandom_5__7) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _signature_5__8) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _responseId_5__9) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _getPreMasterSecretTask_5__10) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _verifySignatureTask_5__11) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _clientKeys_5__12) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, _encryptionState_5__13) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__1) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__2) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__3) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__4) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__5) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__6) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__7) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__8) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__9) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__10) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, __u__11) == 0xe0, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: ::<>c__DisplayClass35_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12950))
// CS Name: ::BaseClientUnconnectedMessageHandler::<>c__DisplayClass35_0*
class CORDL_TYPE __BaseClientUnconnectedMessageHandler____c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field clientRandom, offset 0x10, size 0x8
  __declspec(property(get = __get_clientRandom, put = __set_clientRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom;

  /// @brief Field serverRandom, offset 0x18, size 0x8
  __declspec(property(get = __get_serverRandom, put = __set_serverRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom;

  /// @brief Field serverKey, offset 0x20, size 0x8
  __declspec(property(get = __get_serverKey, put = __set_serverKey))::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey;

  /// @brief Field certData, offset 0x28, size 0x8
  __declspec(property(get = __get_certData, put = __set_certData))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certData;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* __4__this;

  /// @brief Field signature, offset 0x38, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::ArrayW<uint8_t, ::Array<uint8_t>*> signature;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_clientRandom();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_clientRandom() const;

  constexpr void __set_clientRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_serverRandom();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_serverRandom() const;

  constexpr void __set_serverRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_serverKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_serverKey() const;

  constexpr void __set_serverKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __get_certData();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get_certData() const;

  constexpr void __set_certData(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  constexpr ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*> const& __get___4__this() const;

  constexpr void __set___4__this(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_signature();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_signature() const;

  constexpr void __set_signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0* New_ctor();

  /// @brief Method .ctor addr 0xddddd0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <VerifySignature>b__0 addr 0xddddd8 size 0x610 virtual false final false
  inline bool _VerifySignature_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseClientUnconnectedMessageHandler____c__DisplayClass35_0(__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseClientUnconnectedMessageHandler____c__DisplayClass35_0(__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseClientUnconnectedMessageHandler____c__DisplayClass35_0();

public:
  /// @brief Field clientRandom, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___clientRandom;

  /// @brief Field serverRandom, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___serverRandom;

  /// @brief Field serverKey, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___serverKey;

  /// @brief Field certData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ___certData;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* _____4__this;

  /// @brief Field signature, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___signature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0, ___clientRandom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0, ___serverRandom) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0, ___serverKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0, ___certData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0, ___signature) == 0x38, "Offset mismatch!");

} // namespace BGNet::Core::Messages
// Type: BGNet.Core.Messages::BaseClientUnconnectedMessageHandler
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13009))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12951))
// CS Name: ::BGNet.Core.Messages::BaseClientUnconnectedMessageHandler*
class CORDL_TYPE BaseClientUnconnectedMessageHandler : public ::BGNet::Core::Messages::UnconnectedMessageHandler {
public:
  // Declarations
  using __c__DisplayClass35_0 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0;

  using _AuthenticateWithServerAsyncInternal_d__32 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32;

  using __c__DisplayClass32_0 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0;

  using _AuthenticateWithServerAsyncInternalVerbose_d__31 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31;

  using _AuthenticateWithServer_d__30 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30;

  using _ReauthenticateWithServer_d__27 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27;

  template <typename T> using _OnSendFailedAwaitResponse_d__26_1 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1<T>;

  using _OnSendFailed_d__25 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25;

  using _SendAuthenticatedRequestAsync_d__24 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24;

  template <typename T> using _SendAuthenticatedRequestAsync_d__23_1 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1<T>;

  using _SendOrderedAuthenticatedRequestAsync_d__22 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22;

  using _SendOrderedAuthenticatedRequest_d__21 = ::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21;

  /// @brief Field _endPoint, offset 0x88, size 0x8
  __declspec(property(get = __get__endPoint, put = __set__endPoint))::GlobalNamespace::DnsEndPoint* _endPoint;

  /// @brief Field _certificateValidator, offset 0x90, size 0x8
  __declspec(property(get = __get__certificateValidator, put = __set__certificateValidator))::GlobalNamespace::ICertificateValidator* _certificateValidator;

  /// @brief Field _authenticationTask, offset 0x98, size 0x8
  __declspec(property(get = __get__authenticationTask, put = __set__authenticationTask))::System::Threading::Tasks::Task* _authenticationTask;

  /// @brief Field _authenticationException, offset 0xa0, size 0x8
  __declspec(property(get = __get__authenticationException, put = __set__authenticationException))::System::Security::Authentication::AuthenticationException* _authenticationException;

  /// @brief Field _disposed, offset 0xa8, size 0x1
  __declspec(property(get = __get__disposed, put = __set__disposed)) bool _disposed;

  /// @brief Field _orderedRequests, offset 0xb0, size 0x8
  __declspec(property(get = __get__orderedRequests, put = __set__orderedRequests))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task*>* _orderedRequests;

  /// @brief Field _authenticationDataWriter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__authenticationDataWriter, put = setStaticF__authenticationDataWriter))::LiteNetLib::Utils::NetDataWriter* _authenticationDataWriter;

  __declspec(property(get = get_endPoint))::GlobalNamespace::DnsEndPoint* endPoint;

  __declspec(property(get = get_isAuthenticated)) bool isAuthenticated;

  __declspec(property(get = get_isAuthenticating)) bool isAuthenticating;

  __declspec(property(get = get_hasAuthenticationFailed)) bool hasAuthenticationFailed;

  constexpr ::GlobalNamespace::DnsEndPoint*& __get__endPoint();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DnsEndPoint*> const& __get__endPoint() const;

  constexpr void __set__endPoint(::GlobalNamespace::DnsEndPoint* value);

  constexpr ::GlobalNamespace::ICertificateValidator*& __get__certificateValidator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICertificateValidator*> const& __get__certificateValidator() const;

  constexpr void __set__certificateValidator(::GlobalNamespace::ICertificateValidator* value);

  constexpr ::System::Threading::Tasks::Task*& __get__authenticationTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get__authenticationTask() const;

  constexpr void __set__authenticationTask(::System::Threading::Tasks::Task* value);

  constexpr ::System::Security::Authentication::AuthenticationException*& __get__authenticationException();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Authentication::AuthenticationException*> const& __get__authenticationException() const;

  constexpr void __set__authenticationException(::System::Security::Authentication::AuthenticationException* value);

  constexpr bool& __get__disposed();

  constexpr bool const& __get__disposed() const;

  constexpr void __set__disposed(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task*>*& __get__orderedRequests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task*>*> const& __get__orderedRequests() const;

  constexpr void __set__orderedRequests(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task*>* value);

  static inline void setStaticF__authenticationDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  static inline ::LiteNetLib::Utils::NetDataWriter* getStaticF__authenticationDataWriter();

  /// @brief Method get_endPoint addr 0xdd85e8 size 0x8 virtual false final false
  inline ::GlobalNamespace::DnsEndPoint* get_endPoint();

  /// @brief Method get_isAuthenticated addr 0xdd85f0 size 0x78 virtual false final false
  inline bool get_isAuthenticated();

  /// @brief Method get_isAuthenticating addr 0xdd8668 size 0x5c virtual false final false
  inline bool get_isAuthenticating();

  /// @brief Method get_hasAuthenticationFailed addr 0xdd86c4 size 0x10 virtual false final false
  inline bool get_hasAuthenticationFailed();

  static inline ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* New_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::GlobalNamespace::DnsEndPoint* endPoint,
                                                                                       ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                                       ::GlobalNamespace::ICertificateValidator* certificateValidator, ::BGNet::Core::IAnalyticsManager* analytics);

  /// @brief Method .ctor addr 0xdd86d4 size 0x15c virtual false final false
  inline void _ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::GlobalNamespace::DnsEndPoint* endPoint, ::BGNet::Core::ITimeProvider* timeProvider,
                    ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::ICertificateValidator* certificateValidator, ::BGNet::Core::IAnalyticsManager* analytics);

  /// @brief Method Dispose addr 0xdd915c size 0x10 virtual true final false
  inline void Dispose();

  /// @brief Method GetMessageType addr 0xdd916c size 0x80 virtual true final false
  inline uint32_t GetMessageType(::BGNet::Core::Messages::IUnconnectedMessage* message);

  /// @brief Method ShouldHandleMessage addr 0xdd91ec size 0x8c virtual true final false
  inline bool ShouldHandleMessage(::BGNet::Core::Messages::IUnconnectedMessage* packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method RegisterHandshakeMessageHandlers addr 0xdd8830 size 0x92c virtual false final false
  inline void RegisterHandshakeMessageHandlers();

  /// @brief Method HandleHelloVerifyRequest addr 0xdd9278 size 0xb4 virtual false final false
  inline void HandleHelloVerifyRequest(::BGNet::Core::Messages::HelloVerifyRequest* packet, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin);

  /// @brief Method SendOrderedAuthenticatedRequest addr 0xdd932c size 0xb8 virtual false final false
  inline void SendOrderedAuthenticatedRequest(::StringW queue, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendOrderedAuthenticatedRequestAsync addr 0xdd93e4 size 0xf0 virtual false final false
  inline ::System::Threading::Tasks::Task* SendOrderedAuthenticatedRequestAsync(::System::Threading::Tasks::Task* previousTask, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendAuthenticatedRequestAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* SendAuthenticatedRequestAsync(::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendAuthenticatedRequestAsync addr 0xdd94d4 size 0xdc virtual false final false
  inline ::System::Threading::Tasks::Task* SendAuthenticatedRequestAsync(::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OnSendFailed addr 0xdd95b0 size 0xf8 virtual false final false
  inline ::System::Threading::Tasks::Task* OnSendFailed(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message,
                                                        ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method OnSendFailedAwaitResponse addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* OnSendFailedAwaitResponse(uint32_t protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint,
                                                                          ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReauthenticateWithServer addr 0xdd96a8 size 0xc8 virtual false final false
  inline ::System::Threading::Tasks::Task* ReauthenticateWithServer();

  /// @brief Method UnauthenticateWithServer addr 0xdd9770 size 0x68 virtual false final false
  inline void UnauthenticateWithServer();

  /// @brief Method AuthenticateWithServerAsync addr 0xdd97d8 size 0xac virtual false final false
  inline ::System::Threading::Tasks::Task* AuthenticateWithServerAsync();

  /// @brief Method AuthenticateWithServer addr 0xdd9958 size 0x94 virtual false final false
  inline void AuthenticateWithServer();

  /// @brief Method AuthenticateWithServerAsyncInternalVerbose addr 0xdd99ec size 0xc8 virtual false final false
  inline ::System::Threading::Tasks::Task* AuthenticateWithServerAsyncInternalVerbose();

  /// @brief Method AuthenticateWithServerAsyncInternal addr 0xdd9884 size 0xd4 virtual false final false
  inline ::System::Threading::Tasks::Task* AuthenticateWithServerAsyncInternal();

  /// @brief Method GetAuthenticationRequest addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>* GetAuthenticationRequest();

  /// @brief Method ShouldHandleMessageFromEndPoint addr 0xdd9ab4 size 0x38 virtual true final false
  inline bool ShouldHandleMessageFromEndPoint(::System::Net::IPEndPoint* endPoint);

  /// @brief Method VerifySignature addr 0xdd9aec size 0x178 virtual false final false
  inline ::System::Threading::Tasks::Task_1<bool>* VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom, ::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom,
                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> serverKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature,
                                                                   ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certData);

  /// @brief Method HandshakeLog addr 0xdd9c64 size 0x8c virtual false final false
  inline void HandshakeLog(::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "BaseClientUnconnectedMessageHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseClientUnconnectedMessageHandler(BaseClientUnconnectedMessageHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseClientUnconnectedMessageHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseClientUnconnectedMessageHandler(BaseClientUnconnectedMessageHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseClientUnconnectedMessageHandler();

public:
  /// @brief Field _endPoint, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::DnsEndPoint* ____endPoint;

  /// @brief Field _certificateValidator, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::ICertificateValidator* ____certificateValidator;

  /// @brief Field _authenticationTask, offset: 0x98, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____authenticationTask;

  /// @brief Field _authenticationException, offset: 0xa0, size: 0x8, def value: None
  ::System::Security::Authentication::AuthenticationException* ____authenticationException;

  /// @brief Field _disposed, offset: 0xa8, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _orderedRequests, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task*>* ____orderedRequests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0xb8>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, ____endPoint) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, ____certificateValidator) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, ____authenticationTask) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, ____authenticationException) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, ____disposed) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, ____orderedRequests) == 0xb0, "Offset mismatch!");

} // namespace BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler");
NEED_NO_BOX(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0*, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<>c__DisplayClass32_0");
NEED_NO_BOX(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0*, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<>c__DisplayClass35_0");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31, "BGNet.Core.Messages",
                       "BaseClientUnconnectedMessageHandler/<AuthenticateWithServerAsyncInternalVerbose>d__31");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, "BGNet.Core.Messages",
                       "BaseClientUnconnectedMessageHandler/<AuthenticateWithServerAsyncInternal>d__32");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30, "BGNet.Core.Messages",
                       "BaseClientUnconnectedMessageHandler/<AuthenticateWithServer>d__30");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1, "BGNet.Core.Messages",
                                      "BaseClientUnconnectedMessageHandler/<OnSendFailedAwaitResponse>d__26`1");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<OnSendFailed>d__25");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27, "BGNet.Core.Messages",
                       "BaseClientUnconnectedMessageHandler/<ReauthenticateWithServer>d__27");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1, "BGNet.Core.Messages",
                                      "BaseClientUnconnectedMessageHandler/<SendAuthenticatedRequestAsync>d__23`1");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24, "BGNet.Core.Messages",
                       "BaseClientUnconnectedMessageHandler/<SendAuthenticatedRequestAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22, "BGNet.Core.Messages",
                       "BaseClientUnconnectedMessageHandler/<SendOrderedAuthenticatedRequestAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, "BGNet.Core.Messages",
                       "BaseClientUnconnectedMessageHandler/<SendOrderedAuthenticatedRequest>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d, "BGNet.Core.Messages",
                       "BaseClientUnconnectedMessageHandler/<>c__DisplayClass32_0/<<AuthenticateWithServerAsyncInternal>b__0>d");
