#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLiftConnectionManager)
namespace GlobalNamespace {
class __GameLiftConnectionManager__ConnectToServerParams;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class GameLiftClientMessageHandler;
}
namespace GlobalNamespace {
struct __GameLiftConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class GameLiftClientConnectionRequestHandler;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase;
}
namespace GlobalNamespace {
class ICertificateValidator;
}
namespace GlobalNamespace {
class INetworkConnectionManager;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__StartClientParams;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class IConnection;
}
namespace System {
class IDisposable;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
struct __GameLiftConnectionManager___GameLiftConnectToServer_d__82;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace GlobalNamespace {
class IPollable;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GameLiftConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
class GameLiftConnectionManager;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase;
}
namespace GlobalNamespace {
class __GameLiftConnectionManager__StartClientParams;
}
namespace GlobalNamespace {
struct __GameLiftConnectionManager___GameLiftConnectToServer_d__82;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GameLiftConnectionManager__ConnectionState);
MARK_REF_PTR_T(::GlobalNamespace::GameLiftConnectionManager);
MARK_REF_PTR_T(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams);
MARK_REF_PTR_T(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase);
MARK_REF_PTR_T(::GlobalNamespace::__GameLiftConnectionManager__StartClientParams);
MARK_VAL_T(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82);
// Type: ::ConnectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12661))
// CS Name: ::GameLiftConnectionManager::ConnectionState
struct CORDL_TYPE __GameLiftConnectionManager__ConnectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GameLiftConnectionManager__ConnectionState_Unwrapped
  enum struct ____GameLiftConnectionManager__ConnectionState_Unwrapped : int32_t {
    __E_Unconnected = static_cast<int32_t>(0x0),
    __E_Connecting = static_cast<int32_t>(0x1),
    __E_Connected = static_cast<int32_t>(0x2),
    __E_Disconnecting = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GameLiftConnectionManager__ConnectionState_Unwrapped() const noexcept {
    return static_cast<____GameLiftConnectionManager__ConnectionState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GameLiftConnectionManager__ConnectionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftConnectionManager__ConnectionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unconnected value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const Unconnected;

  /// @brief Field Connecting value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const Connecting;

  /// @brief Field Connected value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const Connected;

  /// @brief Field Disconnecting value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const Disconnecting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLiftConnectionManager__ConnectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__ConnectionState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameLiftConnectionManagerParamsBase
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12614)), TypeDefinitionIndex(TypeDefinitionIndex(12687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12662))
// CS Name: ::GameLiftConnectionManager::GameLiftConnectionManagerParamsBase*
class CORDL_TYPE __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field authenticationTokenProviderTask, offset 0x10, size 0x8
  __declspec(property(get = __get_authenticationTokenProviderTask,
                      put = __set_authenticationTokenProviderTask))::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* authenticationTokenProviderTask;

  /// @brief Field gameLiftPlayerSessionProvider, offset 0x18, size 0x8
  __declspec(property(get = __get_gameLiftPlayerSessionProvider, put = __set_gameLiftPlayerSessionProvider))::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* gameLiftPlayerSessionProvider;

  /// @brief Field selectionMask, offset 0x20, size 0x18
  __declspec(property(get = __get_selectionMask, put = __set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Field configuration, offset 0x38, size 0x18
  __declspec(property(get = __get_configuration, put = __set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>"
  constexpr operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*() noexcept;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& __get_authenticationTokenProviderTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*> const& __get_authenticationTokenProviderTask() const;

  constexpr void __set_authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value);

  constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*& __get_gameLiftPlayerSessionProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*> const& __get_gameLiftPlayerSessionProvider() const;

  constexpr void __set_gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* value);

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_selectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_selectionMask() const;

  constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_configuration() const;

  constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  static inline ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase* New_ctor();

  /// @brief Method .ctor addr 0xdb3260 size 0x2c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftConnectionManager__GameLiftConnectionManagerParamsBase();

public:
  /// @brief Field authenticationTokenProviderTask, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* ___authenticationTokenProviderTask;

  /// @brief Field gameLiftPlayerSessionProvider, offset: 0x18, size: 0x8, def value: None
  ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* ___gameLiftPlayerSessionProvider;

  /// @brief Field selectionMask, offset: 0x20, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x38, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, ___authenticationTokenProviderTask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, ___gameLiftPlayerSessionProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, ___selectionMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, ___configuration) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectToServerParams
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12662))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12663))
// CS Name: ::GameLiftConnectionManager::ConnectToServerParams*
class CORDL_TYPE __GameLiftConnectionManager__ConnectToServerParams : public ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase {
public:
  // Declarations
  /// @brief Field secret, offset 0x50, size 0x8
  __declspec(property(get = __get_secret, put = __set_secret))::StringW secret;

  /// @brief Field code, offset 0x58, size 0x8
  __declspec(property(get = __get_code, put = __set_code))::StringW code;

  constexpr ::StringW& __get_secret();

  constexpr ::StringW const& __get_secret() const;

  constexpr void __set_secret(::StringW value);

  constexpr ::StringW& __get_code();

  constexpr ::StringW const& __get_code() const;

  constexpr void __set_code(::StringW value);

  static inline ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams* New_ctor();

  /// @brief Method .ctor addr 0xdb32a0 size 0x2c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameLiftConnectionManager__ConnectToServerParams(__GameLiftConnectionManager__ConnectToServerParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__ConnectToServerParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameLiftConnectionManager__ConnectToServerParams(__GameLiftConnectionManager__ConnectToServerParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftConnectionManager__ConnectToServerParams();

public:
  /// @brief Field secret, offset: 0x50, size: 0x8, def value: None
  ::StringW ___secret;

  /// @brief Field code, offset: 0x58, size: 0x8, def value: None
  ::StringW ___code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams, ___secret) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams, ___code) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StartClientParams
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12662))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12664))
// CS Name: ::GameLiftConnectionManager::StartClientParams*
class CORDL_TYPE __GameLiftConnectionManager__StartClientParams : public ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams* New_ctor();

  /// @brief Method .ctor addr 0xdb32cc size 0x2c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__StartClientParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameLiftConnectionManager__StartClientParams(__GameLiftConnectionManager__StartClientParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameLiftConnectionManager__StartClientParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameLiftConnectionManager__StartClientParams(__GameLiftConnectionManager__StartClientParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftConnectionManager__StartClientParams();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLiftConnectionManager__StartClientParams, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GameLiftConnectToServer>d__82
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12702)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 877
// }), TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(13018)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 868 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12665)) CS Name:
// ::GameLiftConnectionManager::<GameLiftConnectToServer>d__82
struct CORDL_TYPE __GameLiftConnectionManager___GameLiftConnectToServer_d__82 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xdb32f8 size 0xa64 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xdb3d5c size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameLiftConnectionManager*", modifiers: "",
  // def_value: None }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_playerSessionInfo_5__2", ty: "::BGNet::Core::GameLift::PlayerSessionInfo*",
  // modifiers: "", def_value: None }, CppParam { name: "_authenticationTokenProvider_5__3", ty: "::GlobalNamespace::IAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __GameLiftConnectionManager___GameLiftConnectToServer_d__82(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                        ::GlobalNamespace::GameLiftConnectionManager* __4__this, ::StringW secret, ::StringW code,
                                                                        ::System::Threading::CancellationToken cancellationToken, ::BGNet::Core::GameLift::PlayerSessionInfo* _playerSessionInfo_5__2,
                                                                        ::GlobalNamespace::IAuthenticationTokenProvider* _authenticationTokenProvider_5__3,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*> __u__1,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __u__2,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLiftConnectionManager___GameLiftConnectToServer_d__82();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameLiftConnectionManager* __4__this;

  /// @brief Field secret, offset: 0x30, size: 0x8, def value: None
  ::StringW secret;

  /// @brief Field code, offset: 0x38, size: 0x8, def value: None
  ::StringW code;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <playerSessionInfo>5__2, offset: 0x48, size: 0x8, def value: None
  ::BGNet::Core::GameLift::PlayerSessionInfo* _playerSessionInfo_5__2;

  /// @brief Field <authenticationTokenProvider>5__3, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IAuthenticationTokenProvider* _authenticationTokenProvider_5__3;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*> __u__2;

  /// @brief Field <>u__3, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, secret) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, code) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, _playerSessionInfo_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, _authenticationTokenProvider_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, __u__2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, __u__3) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameLiftConnectionManager
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12614)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12661)),
// TypeDefinitionIndex(TypeDefinitionIndex(12687))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12666)) CS Name: ::GameLiftConnectionManager*
class CORDL_TYPE GameLiftConnectionManager : public ::System::Object {
public:
  // Declarations
  using _GameLiftConnectToServer_d__82 = ::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82;

  using StartClientParams = ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams;

  using ConnectToServerParams = ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams;

  using GameLiftConnectionManagerParamsBase = ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase;

  using ConnectionState = ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState;

  /// @brief Field _timeProvider, offset 0x10, size 0x8
  __declspec(property(get = __get__timeProvider, put = __set__timeProvider))::BGNet::Core::ITimeProvider* _timeProvider;

  /// @brief Field _taskUtility, offset 0x18, size 0x8
  __declspec(property(get = __get__taskUtility, put = __set__taskUtility))::BGNet::Core::ITaskUtility* _taskUtility;

  /// @brief Field _connectionManager, offset 0x20, size 0x8
  __declspec(property(get = __get__connectionManager, put = __set__connectionManager))::GlobalNamespace::INetworkConnectionManager* _connectionManager;

  /// @brief Field _certificateValidator, offset 0x28, size 0x8
  __declspec(property(get = __get__certificateValidator, put = __set__certificateValidator))::GlobalNamespace::ICertificateValidator* _certificateValidator;

  /// @brief Field _code, offset 0x30, size 0x8
  __declspec(property(get = __get__code, put = __set__code))::StringW _code;

  /// @brief Field _secret, offset 0x38, size 0x8
  __declspec(property(get = __get__secret, put = __set__secret))::StringW _secret;

  /// @brief Field _selectionMask, offset 0x40, size 0x18
  __declspec(property(get = __get__selectionMask, put = __set__selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask;

  /// @brief Field _configuration, offset 0x58, size 0x18
  __declspec(property(get = __get__configuration, put = __set__configuration))::GlobalNamespace::GameplayServerConfiguration _configuration;

  /// @brief Field _messageHandler, offset 0x70, size 0x8
  __declspec(property(get = __get__messageHandler, put = __set__messageHandler))::GlobalNamespace::GameLiftClientMessageHandler* _messageHandler;

  /// @brief Field _connectionState, offset 0x78, size 0x4
  __declspec(property(get = __get__connectionState, put = __set__connectionState))::GlobalNamespace::__GameLiftConnectionManager__ConnectionState _connectionState;

  /// @brief Field _connectionCancellationTokenSource, offset 0x80, size 0x8
  __declspec(property(get = __get__connectionCancellationTokenSource, put = __set__connectionCancellationTokenSource))::System::Threading::CancellationTokenSource* _connectionCancellationTokenSource;

  /// @brief Field _authenticationTokenProviderTask, offset 0x88, size 0x8
  __declspec(property(get = __get__authenticationTokenProviderTask,
                      put = __set__authenticationTokenProviderTask))::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* _authenticationTokenProviderTask;

  /// @brief Field _gameLiftPlayerSessionProvider, offset 0x90, size 0x8
  __declspec(property(get = __get__gameLiftPlayerSessionProvider, put = __set__gameLiftPlayerSessionProvider))::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* _gameLiftPlayerSessionProvider;

  /// @brief Field _connectionRequestHandler, offset 0x98, size 0x8
  __declspec(property(get = __get__connectionRequestHandler, put = __set__connectionRequestHandler))::GlobalNamespace::GameLiftClientConnectionRequestHandler* _connectionRequestHandler;

  /// @brief Field onInitializedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __get_onInitializedEvent, put = __set_onInitializedEvent))::System::Action* onInitializedEvent;

  /// @brief Field onConnectedEvent, offset 0xa8, size 0x8
  __declspec(property(get = __get_onConnectedEvent, put = __set_onConnectedEvent))::System::Action* onConnectedEvent;

  /// @brief Field onDisconnectedEvent, offset 0xb0, size 0x8
  __declspec(property(get = __get_onDisconnectedEvent, put = __set_onDisconnectedEvent))::System::Action_1<::GlobalNamespace::DisconnectedReason>* onDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset 0xb8, size 0x8
  __declspec(property(get = __get_onConnectionFailedEvent, put = __set_onConnectionFailedEvent))::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onConnectionFailedEvent;

  /// @brief Field onConnectionConnectedEvent, offset 0xc0, size 0x8
  __declspec(property(get = __get_onConnectionConnectedEvent, put = __set_onConnectionConnectedEvent))::System::Action_1<::GlobalNamespace::IConnection*>* onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset 0xc8, size 0x8
  __declspec(property(get = __get_onConnectionDisconnectedEvent,
                      put = __set_onConnectionDisconnectedEvent))::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* onConnectionDisconnectedEvent;

  /// @brief Field onReceivedDataEvent, offset 0xd0, size 0x8
  __declspec(property(get = __get_onReceivedDataEvent,
                      put = __set_onReceivedDataEvent))::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* onReceivedDataEvent;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isConnecting)) bool isConnecting;

  __declspec(property(get = get_isDisconnecting)) bool isDisconnecting;

  __declspec(property(get = get_connectionCount)) int32_t connectionCount;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isDisposed)) bool isDisposed;

  __declspec(property(get = get_playerSessionId))::StringW playerSessionId;

  __declspec(property(get = get_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_code))::StringW code;

  __declspec(property(get = get_secret))::StringW secret;

  /// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
  constexpr operator ::GlobalNamespace::IConnectionManager*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::BGNet::Core::ITimeProvider*& __get__timeProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& __get__timeProvider() const;

  constexpr void __set__timeProvider(::BGNet::Core::ITimeProvider* value);

  constexpr ::BGNet::Core::ITaskUtility*& __get__taskUtility();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& __get__taskUtility() const;

  constexpr void __set__taskUtility(::BGNet::Core::ITaskUtility* value);

  constexpr ::GlobalNamespace::INetworkConnectionManager*& __get__connectionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConnectionManager*> const& __get__connectionManager() const;

  constexpr void __set__connectionManager(::GlobalNamespace::INetworkConnectionManager* value);

  constexpr ::GlobalNamespace::ICertificateValidator*& __get__certificateValidator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICertificateValidator*> const& __get__certificateValidator() const;

  constexpr void __set__certificateValidator(::GlobalNamespace::ICertificateValidator* value);

  constexpr ::StringW& __get__code();

  constexpr ::StringW const& __get__code() const;

  constexpr void __set__code(::StringW value);

  constexpr ::StringW& __get__secret();

  constexpr ::StringW const& __get__secret() const;

  constexpr void __set__secret(::StringW value);

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get__selectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get__selectionMask() const;

  constexpr void __set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get__configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get__configuration() const;

  constexpr void __set__configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr ::GlobalNamespace::GameLiftClientMessageHandler*& __get__messageHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftClientMessageHandler*> const& __get__messageHandler() const;

  constexpr void __set__messageHandler(::GlobalNamespace::GameLiftClientMessageHandler* value);

  constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState& __get__connectionState();

  constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const& __get__connectionState() const;

  constexpr void __set__connectionState(::GlobalNamespace::__GameLiftConnectionManager__ConnectionState value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__connectionCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__connectionCancellationTokenSource() const;

  constexpr void __set__connectionCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& __get__authenticationTokenProviderTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*> const& __get__authenticationTokenProviderTask() const;

  constexpr void __set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* value);

  constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*& __get__gameLiftPlayerSessionProvider();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*> const& __get__gameLiftPlayerSessionProvider() const;

  constexpr void __set__gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* value);

  constexpr ::GlobalNamespace::GameLiftClientConnectionRequestHandler*& __get__connectionRequestHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftClientConnectionRequestHandler*> const& __get__connectionRequestHandler() const;

  constexpr void __set__connectionRequestHandler(::GlobalNamespace::GameLiftClientConnectionRequestHandler* value);

  constexpr ::System::Action*& __get_onInitializedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onInitializedEvent() const;

  constexpr void __set_onInitializedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_onConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_onConnectedEvent() const;

  constexpr void __set_onConnectedEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __get_onDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __get_onDisconnectedEvent() const;

  constexpr void __set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& __get_onConnectionFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const& __get_onConnectionFailedEvent() const;

  constexpr void __set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  constexpr ::System::Action_1<::GlobalNamespace::IConnection*>*& __get_onConnectionConnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnection*>*> const& __get_onConnectionConnectedEvent() const;

  constexpr void __set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*& __get_onConnectionDisconnectedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>*> const& __get_onConnectionDisconnectedEvent() const;

  constexpr void __set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  constexpr ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*& __get_onReceivedDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>*> const&
  __get_onReceivedDataEvent() const;

  constexpr void __set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method add_onInitializedEvent addr 0xdb124c size 0x9c virtual true final true
  inline void add_onInitializedEvent(::System::Action* value);

  /// @brief Method remove_onInitializedEvent addr 0xdb12e8 size 0x9c virtual true final true
  inline void remove_onInitializedEvent(::System::Action* value);

  /// @brief Method add_onConnectedEvent addr 0xdb1384 size 0x9c virtual true final true
  inline void add_onConnectedEvent(::System::Action* value);

  /// @brief Method remove_onConnectedEvent addr 0xdb1420 size 0x9c virtual true final true
  inline void remove_onConnectedEvent(::System::Action* value);

  /// @brief Method add_onDisconnectedEvent addr 0xdb14bc size 0xb0 virtual true final true
  inline void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onDisconnectedEvent addr 0xdb156c size 0xb0 virtual true final true
  inline void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onConnectionFailedEvent addr 0xdb161c size 0xb0 virtual true final true
  inline void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method remove_onConnectionFailedEvent addr 0xdb16cc size 0xb0 virtual true final true
  inline void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value);

  /// @brief Method add_onConnectionConnectedEvent addr 0xdb177c size 0xb0 virtual true final true
  inline void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method remove_onConnectionConnectedEvent addr 0xdb182c size 0xb0 virtual true final true
  inline void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>* value);

  /// @brief Method add_onConnectionDisconnectedEvent addr 0xdb18dc size 0xb0 virtual true final true
  inline void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_onConnectionDisconnectedEvent addr 0xdb198c size 0xb0 virtual true final true
  inline void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_onReceivedDataEvent addr 0xdb1a3c size 0xb0 virtual true final true
  inline void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method remove_onReceivedDataEvent addr 0xdb1aec size 0xb0 virtual true final true
  inline void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* value);

  /// @brief Method get_userId addr 0xdb1b9c size 0xec virtual true final true
  inline ::StringW get_userId();

  /// @brief Method get_userName addr 0xdb1c88 size 0xec virtual true final true
  inline ::StringW get_userName();

  /// @brief Method get_isConnected addr 0xdb1d74 size 0x10 virtual true final true
  inline bool get_isConnected();

  /// @brief Method get_isConnecting addr 0xdb1d84 size 0x10 virtual true final true
  inline bool get_isConnecting();

  /// @brief Method get_isDisconnecting addr 0xdb1d94 size 0x10 virtual true final true
  inline bool get_isDisconnecting();

  /// @brief Method get_connectionCount addr 0xdb1da4 size 0xa4 virtual true final true
  inline int32_t get_connectionCount();

  /// @brief Method get_isConnectionOwner addr 0xdb1e48 size 0xa4 virtual true final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_isDisposed addr 0xdb1eec size 0xa4 virtual true final true
  inline bool get_isDisposed();

  /// @brief Method get_playerSessionId addr 0xdb1f90 size 0x1c virtual false final false
  inline ::StringW get_playerSessionId();

  /// @brief Method get_selectionMask addr 0xdb1fac size 0x14 virtual false final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_configuration addr 0xdb1fc0 size 0x14 virtual false final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_code addr 0xdb1fd4 size 0x8 virtual false final false
  inline ::StringW get_code();

  /// @brief Method get_secret addr 0xdb1fdc size 0x8 virtual false final false
  inline ::StringW get_secret();

  /// @brief Method SendToAll addr 0xdb1fe4 size 0xbc virtual true final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method SendToAll addr 0xdb20a0 size 0xc4 virtual true final true
  inline void SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection* excludingConnection);

  /// @brief Method PollUpdate addr 0xdb2164 size 0xa0 virtual true final true
  inline void PollUpdate();

  static inline ::GlobalNamespace::GameLiftConnectionManager* New_ctor();

  /// @brief Method .ctor addr 0xdb2204 size 0x118 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::GameLiftConnectionManager* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                       ::GlobalNamespace::INetworkConnectionManager* connectionManager, ::GlobalNamespace::ICertificateValidator* certificateValidator);

  /// @brief Method .ctor addr 0xdb23c8 size 0x4b0 virtual false final false
  inline void _ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::INetworkConnectionManager* connectionManager,
                    ::GlobalNamespace::ICertificateValidator* certificateValidator);

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline bool Init(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  /// @brief Method DisposeAsync addr 0xdb2878 size 0xa4 virtual true final true
  inline ::System::Threading::Tasks::Task* DisposeAsync();

  /// @brief Method Dispose addr 0xdb291c size 0xa0 virtual true final true
  inline void Dispose();

  /// @brief Method Disconnect addr 0xdb29bc size 0x8 virtual true final true
  inline void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method DisconnectInternal addr 0xdb2c40 size 0xc virtual false final false
  inline void DisconnectInternal(::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// @brief Method DisconnectInternal addr 0xdb29c4 size 0x27c virtual false final false
  inline void DisconnectInternal(::GlobalNamespace::DisconnectedReason disconnectedReason, ::GlobalNamespace::ConnectionFailedReason connectionFailedReason);

  /// @brief Method GetConnection addr 0xdb2c4c size 0xac virtual true final true
  inline ::GlobalNamespace::IConnection* GetConnection(int32_t index);

  /// @brief Method HandleConnected addr 0xdb2cf8 size 0x30 virtual false final false
  inline void HandleConnected();

  /// @brief Method HandleConnectionConnected addr 0xdb2d28 size 0x1c virtual false final false
  inline void HandleConnectionConnected(::GlobalNamespace::IConnection* connection);

  /// @brief Method HandleConnectionDisconnected addr 0xdb2d44 size 0x1c virtual false final false
  inline void HandleConnectionDisconnected(::GlobalNamespace::IConnection* connection, ::GlobalNamespace::DisconnectedReason reason);

  /// @brief Method HandleConnectionFailed addr 0xdb2d60 size 0xc virtual false final false
  inline void HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason failedReason);

  /// @brief Method HandleReceivedData addr 0xdb2d6c size 0x1c virtual false final false
  inline void HandleReceivedData(::GlobalNamespace::IConnection* connection, ::LiteNetLib::Utils::NetDataReader* reader, ::BGNet::Core::DeliveryMethod deliveryMethod);

  /// @brief Method GameLiftConnectToServer addr 0xdb2d88 size 0xb8 virtual false final false
  inline void GameLiftConnectToServer(::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HandleConnectToServerSuccess addr 0xdb2e40 size 0x3a4 virtual false final false
  inline void HandleConnectToServerSuccess(::StringW playerSessionId, ::StringW hostName, int32_t port, ::StringW gameSessionId, ::StringW secret, ::StringW code,
                                           ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method GetPublicServers addr 0xdb31fc size 0x64 virtual false final false
  inline void GetPublicServers(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                               ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                               ::GlobalNamespace::GameplayServerConfiguration configuration, int32_t offset, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftConnectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLiftConnectionManager(GameLiftConnectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLiftConnectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLiftConnectionManager(GameLiftConnectionManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLiftConnectionManager();

public:
  /// @brief Field _timeProvider, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Core::ITimeProvider* ____timeProvider;

  /// @brief Field _taskUtility, offset: 0x18, size: 0x8, def value: None
  ::BGNet::Core::ITaskUtility* ____taskUtility;

  /// @brief Field _connectionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConnectionManager* ____connectionManager;

  /// @brief Field _certificateValidator, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ICertificateValidator* ____certificateValidator;

  /// @brief Field _code, offset: 0x30, size: 0x8, def value: None
  ::StringW ____code;

  /// @brief Field _secret, offset: 0x38, size: 0x8, def value: None
  ::StringW ____secret;

  /// @brief Field _selectionMask, offset: 0x40, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ____selectionMask;

  /// @brief Field _configuration, offset: 0x58, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration;

  /// @brief Field _messageHandler, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::GameLiftClientMessageHandler* ____messageHandler;

  /// @brief Field _connectionState, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState ____connectionState;

  /// @brief Field _connectionCancellationTokenSource, offset: 0x80, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____connectionCancellationTokenSource;

  /// @brief Field _authenticationTokenProviderTask, offset: 0x88, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* ____authenticationTokenProviderTask;

  /// @brief Field _gameLiftPlayerSessionProvider, offset: 0x90, size: 0x8, def value: None
  ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* ____gameLiftPlayerSessionProvider;

  /// @brief Field _connectionRequestHandler, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::GameLiftClientConnectionRequestHandler* ____connectionRequestHandler;

  /// @brief Field onInitializedEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action* ___onInitializedEvent;

  /// @brief Field onConnectedEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action* ___onConnectedEvent;

  /// @brief Field onDisconnectedEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ___onDisconnectedEvent;

  /// @brief Field onConnectionFailedEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* ___onConnectionFailedEvent;

  /// @brief Field onConnectionConnectedEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::IConnection*>* ___onConnectionConnectedEvent;

  /// @brief Field onConnectionDisconnectedEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason>* ___onConnectionDisconnectedEvent;

  /// @brief Field onReceivedDataEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod>* ___onReceivedDataEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameLiftConnectionManager, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____timeProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____taskUtility) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____connectionManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____certificateValidator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____code) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____secret) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____selectionMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____configuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____messageHandler) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____connectionState) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____connectionCancellationTokenSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____authenticationTokenProviderTask) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____gameLiftPlayerSessionProvider) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ____connectionRequestHandler) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onInitializedEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onConnectedEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onDisconnectedEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onConnectionFailedEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onConnectionConnectedEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onConnectionDisconnectedEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLiftConnectionManager, ___onReceivedDataEvent) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLiftConnectionManager__ConnectionState, "", "GameLiftConnectionManager/ConnectionState");
NEED_NO_BOX(::GlobalNamespace::GameLiftConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftConnectionManager*, "", "GameLiftConnectionManager");
NEED_NO_BOX(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*, "", "GameLiftConnectionManager/ConnectToServerParams");
NEED_NO_BOX(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase*, "", "GameLiftConnectionManager/GameLiftConnectionManagerParamsBase");
NEED_NO_BOX(::GlobalNamespace::__GameLiftConnectionManager__StartClientParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*, "", "GameLiftConnectionManager/StartClientParams");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__82, "", "GameLiftConnectionManager/<GameLiftConnectToServer>d__82");
