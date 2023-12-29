#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerModeSelectionFlowCoordinator)
namespace GlobalNamespace {
class JoinQuickPlayViewController;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class GameServerBrowserFlowCoordinator;
}
namespace GlobalNamespace {
struct __MultiplayerLobbyConnectionController__LobbyConnectionType;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class CreateServerViewController;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class JoiningLobbyViewController;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class ServerCodeEntryViewController;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionViewController__MenuButton;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionViewController;
}
namespace GlobalNamespace {
class MultiplayerLobbyConnectionController;
}
namespace GlobalNamespace {
class AvatarDataModel;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
namespace GlobalNamespace {
class XPlatformAuthFeatureFlag;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class SelectMultiplayerLobbyDestination;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class SongPackMaskModelSO;
}
namespace GlobalNamespace {
struct MultiplayerUnavailableReason;
}
namespace GlobalNamespace {
class LobbyDataModelsManager;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinator;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52;
}
namespace GlobalNamespace {
struct __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator);
MARK_VAL_T(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52);
MARK_VAL_T(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51);
// Type: ::<TryShowModeSelection>d__51
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4491)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 112 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(4483)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 875 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3395)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 878 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5607)) CS
// Name: ::MultiplayerModeSelectionFlowCoordinator::<TryShowModeSelection>d__51
struct CORDL_TYPE __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2153f38 size 0xae8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2154a20 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*",
  // modifiers: "", def_value: None }, CppParam { name: "_multiplayerStatusData_5__2", ty: "::GlobalNamespace::MultiplayerStatusData*", modifiers: "", def_value: None }, CppParam { name:
  // "_exception_5__3", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*>", modifiers: "", def_value: None }]
  constexpr __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                   ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* __4__this,
                                                                                   ::GlobalNamespace::MultiplayerStatusData* _multiplayerStatusData_5__2, ::System::Exception* _exception_5__3,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*> __u__2,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*> __u__3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* __4__this;

  /// @brief Field <multiplayerStatusData>5__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerStatusData* _multiplayerStatusData_5__2;

  /// @brief Field <exception>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Exception* _exception_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*> __u__2;

  /// @brief Field <>u__3, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, _multiplayerStatusData_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, _exception_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, __u__3) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ResolveAndPresentNextFlowCoordinator>d__52
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(3388))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5608))
// CS Name: ::MultiplayerModeSelectionFlowCoordinator::<ResolveAndPresentNextFlowCoordinator>d__52
struct CORDL_TYPE __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2154a2c size 0x390 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2154dbc size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                   ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* __4__this,
                                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerModeSelectionFlowCoordinator
// SizeInfo { instance_size: 408, native_size: -1, calculated_instance_size: 408, calculated_native_size: 408, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13699))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5609))
// CS Name: ::MultiplayerModeSelectionFlowCoordinator*
class CORDL_TYPE MultiplayerModeSelectionFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using _ResolveAndPresentNextFlowCoordinator_d__52 = ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52;

  using _TryShowModeSelection_d__51 = ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51;

  /// @brief Field _ambienceAudioClip, offset 0xa8, size 0x8
  __declspec(property(get = __get__ambienceAudioClip, put = __set__ambienceAudioClip))::UnityEngine::AudioClip* _ambienceAudioClip;

  /// @brief Field _songPackMaskModel, offset 0xb0, size 0x8
  __declspec(property(get = __get__songPackMaskModel, put = __set__songPackMaskModel))::GlobalNamespace::SongPackMaskModelSO* _songPackMaskModel;

  /// @brief Field _gameServerBrowserFlowCoordinator, offset 0xb8, size 0x8
  __declspec(property(get = __get__gameServerBrowserFlowCoordinator,
                      put = __set__gameServerBrowserFlowCoordinator))::GlobalNamespace::GameServerBrowserFlowCoordinator* _gameServerBrowserFlowCoordinator;

  /// @brief Field _gameServerLobbyFlowCoordinator, offset 0xc0, size 0x8
  __declspec(property(get = __get__gameServerLobbyFlowCoordinator, put = __set__gameServerLobbyFlowCoordinator))::GlobalNamespace::GameServerLobbyFlowCoordinator* _gameServerLobbyFlowCoordinator;

  /// @brief Field _multiplayerModeSelectionViewController, offset 0xc8, size 0x8
  __declspec(property(get = __get__multiplayerModeSelectionViewController,
                      put = __set__multiplayerModeSelectionViewController))::GlobalNamespace::MultiplayerModeSelectionViewController* _multiplayerModeSelectionViewController;

  /// @brief Field _createServerViewController, offset 0xd0, size 0x8
  __declspec(property(get = __get__createServerViewController, put = __set__createServerViewController))::GlobalNamespace::CreateServerViewController* _createServerViewController;

  /// @brief Field _joinQuickPlayViewController, offset 0xd8, size 0x8
  __declspec(property(get = __get__joinQuickPlayViewController, put = __set__joinQuickPlayViewController))::GlobalNamespace::JoinQuickPlayViewController* _joinQuickPlayViewController;

  /// @brief Field _serverCodeEntryViewController, offset 0xe0, size 0x8
  __declspec(property(get = __get__serverCodeEntryViewController, put = __set__serverCodeEntryViewController))::GlobalNamespace::ServerCodeEntryViewController* _serverCodeEntryViewController;

  /// @brief Field _simpleDialogPromptViewController, offset 0xe8, size 0x8
  __declspec(property(get = __get__simpleDialogPromptViewController,
                      put = __set__simpleDialogPromptViewController))::GlobalNamespace::SimpleDialogPromptViewController* _simpleDialogPromptViewController;

  /// @brief Field _joiningLobbyViewController, offset 0xf0, size 0x8
  __declspec(property(get = __get__joiningLobbyViewController, put = __set__joiningLobbyViewController))::GlobalNamespace::JoiningLobbyViewController* _joiningLobbyViewController;

  /// @brief Field _unifiedNetworkPlayerModel, offset 0xf8, size 0x8
  __declspec(property(get = __get__unifiedNetworkPlayerModel, put = __set__unifiedNetworkPlayerModel))::GlobalNamespace::IUnifiedNetworkPlayerModel* _unifiedNetworkPlayerModel;

  /// @brief Field _avatarDataModel, offset 0x100, size 0x8
  __declspec(property(get = __get__avatarDataModel, put = __set__avatarDataModel))::GlobalNamespace::AvatarDataModel* _avatarDataModel;

  /// @brief Field _multiplayerSessionManager, offset 0x108, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _fadeInOutController, offset 0x110, size 0x8
  __declspec(property(get = __get__fadeInOutController, put = __set__fadeInOutController))::GlobalNamespace::FadeInOutController* _fadeInOutController;

  /// @brief Field _lobbyDataModelsManager, offset 0x118, size 0x8
  __declspec(property(get = __get__lobbyDataModelsManager, put = __set__lobbyDataModelsManager))::GlobalNamespace::LobbyDataModelsManager* _lobbyDataModelsManager;

  /// @brief Field _multiplayerLobbyConnectionController, offset 0x120, size 0x8
  __declspec(property(get = __get__multiplayerLobbyConnectionController,
                      put = __set__multiplayerLobbyConnectionController))::GlobalNamespace::MultiplayerLobbyConnectionController* _multiplayerLobbyConnectionController;

  /// @brief Field _multiplayerStatusModel, offset 0x128, size 0x8
  __declspec(property(get = __get__multiplayerStatusModel, put = __set__multiplayerStatusModel))::GlobalNamespace::IMultiplayerStatusModel* _multiplayerStatusModel;

  /// @brief Field _quickPlaySetupModel, offset 0x130, size 0x8
  __declspec(property(get = __get__quickPlaySetupModel, put = __set__quickPlaySetupModel))::GlobalNamespace::IQuickPlaySetupModel* _quickPlaySetupModel;

  /// @brief Field _playerDataModel, offset 0x138, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _songPreviewPlayer, offset 0x140, size 0x8
  __declspec(property(get = __get__songPreviewPlayer, put = __set__songPreviewPlayer))::GlobalNamespace::SongPreviewPlayer* _songPreviewPlayer;

  /// @brief Field _analyticsModel, offset 0x148, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _lobbyGameStateController, offset 0x150, size 0x8
  __declspec(property(get = __get__lobbyGameStateController, put = __set__lobbyGameStateController))::GlobalNamespace::ILobbyGameStateController* _lobbyGameStateController;

  /// @brief Field _xPlatformAuthFeatureFlag, offset 0x158, size 0x8
  __declspec(property(get = __get__xPlatformAuthFeatureFlag, put = __set__xPlatformAuthFeatureFlag))::GlobalNamespace::XPlatformAuthFeatureFlag* _xPlatformAuthFeatureFlag;

  /// @brief Field didFinishEvent, offset 0x160, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>* didFinishEvent;

  /// @brief Field _joiningLobbyCancellationTokenSource, offset 0x168, size 0x8
  __declspec(property(get = __get__joiningLobbyCancellationTokenSource,
                      put = __set__joiningLobbyCancellationTokenSource))::System::Threading::CancellationTokenSource* _joiningLobbyCancellationTokenSource;

  /// @brief Field _cancellationTokenSource, offset 0x170, size 0x8
  __declspec(property(get = __get__cancellationTokenSource, put = __set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _transitionFinishedTaskSource, offset 0x178, size 0x8
  __declspec(property(get = __get__transitionFinishedTaskSource, put = __set__transitionFinishedTaskSource))::System::Threading::Tasks::TaskCompletionSource_1<bool>* _transitionFinishedTaskSource;

  /// @brief Field _checkingAvailabilityTaskSource, offset 0x180, size 0x8
  __declspec(property(get = __get__checkingAvailabilityTaskSource,
                      put = __set__checkingAvailabilityTaskSource))::System::Threading::Tasks::TaskCompletionSource_1<bool>* _checkingAvailabilityTaskSource;

  /// @brief Field _quickPlaySetupData, offset 0x188, size 0x8
  __declspec(property(get = __get__quickPlaySetupData, put = __set__quickPlaySetupData))::GlobalNamespace::QuickPlaySetupData* _quickPlaySetupData;

  /// @brief Field _lobbyDestination, offset 0x190, size 0x8
  __declspec(property(get = __get__lobbyDestination, put = __set__lobbyDestination))::GlobalNamespace::SelectMultiplayerLobbyDestination* _lobbyDestination;

  constexpr ::UnityEngine::AudioClip*& __get__ambienceAudioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__ambienceAudioClip() const;

  constexpr void __set__ambienceAudioClip(::UnityEngine::AudioClip* value);

  constexpr ::GlobalNamespace::SongPackMaskModelSO*& __get__songPackMaskModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMaskModelSO*> const& __get__songPackMaskModel() const;

  constexpr void __set__songPackMaskModel(::GlobalNamespace::SongPackMaskModelSO* value);

  constexpr ::GlobalNamespace::GameServerBrowserFlowCoordinator*& __get__gameServerBrowserFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerBrowserFlowCoordinator*> const& __get__gameServerBrowserFlowCoordinator() const;

  constexpr void __set__gameServerBrowserFlowCoordinator(::GlobalNamespace::GameServerBrowserFlowCoordinator* value);

  constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator*& __get__gameServerLobbyFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerLobbyFlowCoordinator*> const& __get__gameServerLobbyFlowCoordinator() const;

  constexpr void __set__gameServerLobbyFlowCoordinator(::GlobalNamespace::GameServerLobbyFlowCoordinator* value);

  constexpr ::GlobalNamespace::MultiplayerModeSelectionViewController*& __get__multiplayerModeSelectionViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSelectionViewController*> const& __get__multiplayerModeSelectionViewController() const;

  constexpr void __set__multiplayerModeSelectionViewController(::GlobalNamespace::MultiplayerModeSelectionViewController* value);

  constexpr ::GlobalNamespace::CreateServerViewController*& __get__createServerViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CreateServerViewController*> const& __get__createServerViewController() const;

  constexpr void __set__createServerViewController(::GlobalNamespace::CreateServerViewController* value);

  constexpr ::GlobalNamespace::JoinQuickPlayViewController*& __get__joinQuickPlayViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::JoinQuickPlayViewController*> const& __get__joinQuickPlayViewController() const;

  constexpr void __set__joinQuickPlayViewController(::GlobalNamespace::JoinQuickPlayViewController* value);

  constexpr ::GlobalNamespace::ServerCodeEntryViewController*& __get__serverCodeEntryViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ServerCodeEntryViewController*> const& __get__serverCodeEntryViewController() const;

  constexpr void __set__serverCodeEntryViewController(::GlobalNamespace::ServerCodeEntryViewController* value);

  constexpr ::GlobalNamespace::SimpleDialogPromptViewController*& __get__simpleDialogPromptViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> const& __get__simpleDialogPromptViewController() const;

  constexpr void __set__simpleDialogPromptViewController(::GlobalNamespace::SimpleDialogPromptViewController* value);

  constexpr ::GlobalNamespace::JoiningLobbyViewController*& __get__joiningLobbyViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::JoiningLobbyViewController*> const& __get__joiningLobbyViewController() const;

  constexpr void __set__joiningLobbyViewController(::GlobalNamespace::JoiningLobbyViewController* value);

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& __get__unifiedNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> const& __get__unifiedNetworkPlayerModel() const;

  constexpr void __set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value);

  constexpr ::GlobalNamespace::AvatarDataModel*& __get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarDataModel*> const& __get__avatarDataModel() const;

  constexpr void __set__avatarDataModel(::GlobalNamespace::AvatarDataModel* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::FadeInOutController*& __get__fadeInOutController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& __get__fadeInOutController() const;

  constexpr void __set__fadeInOutController(::GlobalNamespace::FadeInOutController* value);

  constexpr ::GlobalNamespace::LobbyDataModelsManager*& __get__lobbyDataModelsManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyDataModelsManager*> const& __get__lobbyDataModelsManager() const;

  constexpr void __set__lobbyDataModelsManager(::GlobalNamespace::LobbyDataModelsManager* value);

  constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController*& __get__multiplayerLobbyConnectionController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyConnectionController*> const& __get__multiplayerLobbyConnectionController() const;

  constexpr void __set__multiplayerLobbyConnectionController(::GlobalNamespace::MultiplayerLobbyConnectionController* value);

  constexpr ::GlobalNamespace::IMultiplayerStatusModel*& __get__multiplayerStatusModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerStatusModel*> const& __get__multiplayerStatusModel() const;

  constexpr void __set__multiplayerStatusModel(::GlobalNamespace::IMultiplayerStatusModel* value);

  constexpr ::GlobalNamespace::IQuickPlaySetupModel*& __get__quickPlaySetupModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IQuickPlaySetupModel*> const& __get__quickPlaySetupModel() const;

  constexpr void __set__quickPlaySetupModel(::GlobalNamespace::IQuickPlaySetupModel* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::SongPreviewPlayer*& __get__songPreviewPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& __get__songPreviewPlayer() const;

  constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::GlobalNamespace::ILobbyGameStateController*& __get__lobbyGameStateController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> const& __get__lobbyGameStateController() const;

  constexpr void __set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value);

  constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag*& __get__xPlatformAuthFeatureFlag();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAuthFeatureFlag*> const& __get__xPlatformAuthFeatureFlag() const;

  constexpr void __set__xPlatformAuthFeatureFlag(::GlobalNamespace::XPlatformAuthFeatureFlag* value);

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__joiningLobbyCancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__joiningLobbyCancellationTokenSource() const;

  constexpr void __set__joiningLobbyCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__cancellationTokenSource() const;

  constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get__transitionFinishedTaskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get__transitionFinishedTaskSource() const;

  constexpr void __set__transitionFinishedTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get__checkingAvailabilityTaskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get__checkingAvailabilityTaskSource() const;

  constexpr void __set__checkingAvailabilityTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr ::GlobalNamespace::QuickPlaySetupData*& __get__quickPlaySetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySetupData*> const& __get__quickPlaySetupData() const;

  constexpr void __set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value);

  constexpr ::GlobalNamespace::SelectMultiplayerLobbyDestination*& __get__lobbyDestination();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectMultiplayerLobbyDestination*> const& __get__lobbyDestination() const;

  constexpr void __set__lobbyDestination(::GlobalNamespace::SelectMultiplayerLobbyDestination* value);

  /// @brief Method add_didFinishEvent addr 0x21477a4 size 0xb4 virtual false final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>* value);

  /// @brief Method remove_didFinishEvent addr 0x2147f20 size 0xb4 virtual false final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>* value);

  /// @brief Method Setup addr 0x2150cb8 size 0x8 virtual false final false
  inline void Setup(::GlobalNamespace::SelectMultiplayerLobbyDestination* lobbyDestination);

  /// @brief Method DidActivate addr 0x2150cc0 size 0x4d8 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x2151230 size 0x404 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method BackButtonWasPressed addr 0x2151634 size 0xcc virtual true final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method TopViewControllerWillChange addr 0x2151700 size 0x24c virtual true final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method TransitionDidStart addr 0x215194c size 0x160 virtual true final false
  inline void TransitionDidStart();

  /// @brief Method TransitionDidFinish addr 0x2151aac size 0x284 virtual true final false
  inline void TransitionDidFinish();

  /// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel addr 0x21522ec size 0x1c virtual false final false
  inline void HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel();

  /// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionSuccess addr 0x2152308 size 0x4 virtual false final false
  inline void HandleMultiplayerLobbyConnectionControllerConnectionSuccess();

  /// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionFailed addr 0x215230c size 0xc4 virtual false final false
  inline void HandleMultiplayerLobbyConnectionControllerConnectionFailed(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType connectionType,
                                                                         ::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleMultiplayerLobbyControllerDidFinish addr 0x21523d0 size 0x5e0 virtual false final false
  inline void HandleMultiplayerLobbyControllerDidFinish(::GlobalNamespace::MultiplayerModeSelectionViewController* viewController,
                                                        ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton menuButton);

  /// @brief Method HandleGameServerBrowserFlowCoordinatorDidFinish addr 0x21529b0 size 0x14 virtual false final false
  inline void HandleGameServerBrowserFlowCoordinatorDidFinish(::GlobalNamespace::GameServerBrowserFlowCoordinator* flowCoordinator);

  /// @brief Method HandleJoiningLobbyViewControllerDidCancel addr 0x21529c4 size 0xc4 virtual false final false
  inline void HandleJoiningLobbyViewControllerDidCancel();

  /// @brief Method HandleJoinQuickPlayViewControllerDidFinish addr 0x2152a88 size 0x3ec virtual false final false
  inline void HandleJoinQuickPlayViewControllerDidFinish(bool success);

  /// @brief Method HandleServerCodeEntryViewControllerDidFinish addr 0x2152e74 size 0x124 virtual false final false
  inline void HandleServerCodeEntryViewControllerDidFinish(bool success, ::StringW code);

  /// @brief Method HandleCreateServerViewControllerDidFinish addr 0x2152f98 size 0x3c0 virtual false final false
  inline void HandleCreateServerViewControllerDidFinish(bool success, ::GlobalNamespace::CreateServerFormData data);

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidFinish addr 0x2153358 size 0x258 virtual false final false
  inline void HandleGameServerLobbyFlowCoordinatorDidFinish();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorWillFinish addr 0x21535b0 size 0x98 virtual false final false
  inline void HandleGameServerLobbyFlowCoordinatorWillFinish();

  /// @brief Method HandleConnectedPlayerManagerCreated addr 0x2153648 size 0x1e8 virtual false final false
  inline void HandleConnectedPlayerManagerCreated(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel);

  /// @brief Method TryShowModeSelection addr 0x2151198 size 0x98 virtual false final false
  inline void TryShowModeSelection(bool shouldProvideInitialViewControllers);

  /// @brief Method ResolveAndPresentNextFlowCoordinator addr 0x2151d30 size 0x94 virtual false final false
  inline void ResolveAndPresentNextFlowCoordinator();

  /// @brief Method PresentConnectionErrorDialog addr 0x2151dc4 size 0x528 virtual false final false
  inline void PresentConnectionErrorDialog(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType connectionType, ::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method PresentMasterServerUnavailableErrorDialog addr 0x2153830 size 0x44c virtual false final false
  inline void PresentMasterServerUnavailableErrorDialog(::GlobalNamespace::MultiplayerUnavailableReason reason, ::System::Exception* exception, ::System::Nullable_1<int64_t> maintenanceWindowEndTime,
                                                        ::StringW remoteLocalizedMessage);

  /// @brief Method ProcessDeeplinkingToLobby addr 0x2153c7c size 0xf4 virtual false final false
  inline void ProcessDeeplinkingToLobby();

  static inline ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* New_ctor();

  /// @brief Method .ctor addr 0x2153d70 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ResolveAndPresentNextFlowCoordinator>b__52_0 addr 0x2153d78 size 0x170 virtual false final false
  inline void _ResolveAndPresentNextFlowCoordinator_b__52_0();

  /// @brief Method <PresentConnectionErrorDialog>b__53_0 addr 0x2153ee8 size 0x18 virtual false final false
  inline void _PresentConnectionErrorDialog_b__53_0(int32_t btnId);

  /// @brief Method <PresentConnectionErrorDialog>b__53_1 addr 0x2153f00 size 0x18 virtual false final false
  inline void _PresentConnectionErrorDialog_b__53_1(int32_t btnId);

  /// @brief Method <PresentMasterServerUnavailableErrorDialog>b__54_0 addr 0x2153f18 size 0x20 virtual false final false
  inline void _PresentMasterServerUnavailableErrorDialog_b__54_0(int32_t btnId);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerModeSelectionFlowCoordinator(MultiplayerModeSelectionFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerModeSelectionFlowCoordinator(MultiplayerModeSelectionFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSelectionFlowCoordinator();

public:
  /// @brief Field _ambienceAudioClip, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____ambienceAudioClip;

  /// @brief Field _songPackMaskModel, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMaskModelSO* ____songPackMaskModel;

  /// @brief Field _gameServerBrowserFlowCoordinator, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::GameServerBrowserFlowCoordinator* ____gameServerBrowserFlowCoordinator;

  /// @brief Field _gameServerLobbyFlowCoordinator, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::GameServerLobbyFlowCoordinator* ____gameServerLobbyFlowCoordinator;

  /// @brief Field _multiplayerModeSelectionViewController, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerModeSelectionViewController* ____multiplayerModeSelectionViewController;

  /// @brief Field _createServerViewController, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::CreateServerViewController* ____createServerViewController;

  /// @brief Field _joinQuickPlayViewController, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::JoinQuickPlayViewController* ____joinQuickPlayViewController;

  /// @brief Field _serverCodeEntryViewController, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::ServerCodeEntryViewController* ____serverCodeEntryViewController;

  /// @brief Field _simpleDialogPromptViewController, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::SimpleDialogPromptViewController* ____simpleDialogPromptViewController;

  /// @brief Field _joiningLobbyViewController, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::JoiningLobbyViewController* ____joiningLobbyViewController;

  /// @brief Field _unifiedNetworkPlayerModel, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::IUnifiedNetworkPlayerModel* ____unifiedNetworkPlayerModel;

  /// @brief Field _avatarDataModel, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::AvatarDataModel* ____avatarDataModel;

  /// @brief Field _multiplayerSessionManager, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _fadeInOutController, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOutController* ____fadeInOutController;

  /// @brief Field _lobbyDataModelsManager, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::LobbyDataModelsManager* ____lobbyDataModelsManager;

  /// @brief Field _multiplayerLobbyConnectionController, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyConnectionController* ____multiplayerLobbyConnectionController;

  /// @brief Field _multiplayerStatusModel, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerStatusModel* ____multiplayerStatusModel;

  /// @brief Field _quickPlaySetupModel, offset: 0x130, size: 0x8, def value: None
  ::GlobalNamespace::IQuickPlaySetupModel* ____quickPlaySetupModel;

  /// @brief Field _playerDataModel, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _songPreviewPlayer, offset: 0x140, size: 0x8, def value: None
  ::GlobalNamespace::SongPreviewPlayer* ____songPreviewPlayer;

  /// @brief Field _analyticsModel, offset: 0x148, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _lobbyGameStateController, offset: 0x150, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyGameStateController* ____lobbyGameStateController;

  /// @brief Field _xPlatformAuthFeatureFlag, offset: 0x158, size: 0x8, def value: None
  ::GlobalNamespace::XPlatformAuthFeatureFlag* ____xPlatformAuthFeatureFlag;

  /// @brief Field didFinishEvent, offset: 0x160, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>* ___didFinishEvent;

  /// @brief Field _joiningLobbyCancellationTokenSource, offset: 0x168, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____joiningLobbyCancellationTokenSource;

  /// @brief Field _cancellationTokenSource, offset: 0x170, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _transitionFinishedTaskSource, offset: 0x178, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ____transitionFinishedTaskSource;

  /// @brief Field _checkingAvailabilityTaskSource, offset: 0x180, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ____checkingAvailabilityTaskSource;

  /// @brief Field _quickPlaySetupData, offset: 0x188, size: 0x8, def value: None
  ::GlobalNamespace::QuickPlaySetupData* ____quickPlaySetupData;

  /// @brief Field _lobbyDestination, offset: 0x190, size: 0x8, def value: None
  ::GlobalNamespace::SelectMultiplayerLobbyDestination* ____lobbyDestination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, 0x198>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____ambienceAudioClip) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____songPackMaskModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____gameServerBrowserFlowCoordinator) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____gameServerLobbyFlowCoordinator) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____multiplayerModeSelectionViewController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____createServerViewController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____joinQuickPlayViewController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____serverCodeEntryViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____simpleDialogPromptViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____joiningLobbyViewController) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____unifiedNetworkPlayerModel) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____avatarDataModel) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____multiplayerSessionManager) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____fadeInOutController) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____lobbyDataModelsManager) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____multiplayerLobbyConnectionController) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____multiplayerStatusModel) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____quickPlaySetupModel) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____playerDataModel) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____songPreviewPlayer) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____analyticsModel) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____lobbyGameStateController) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____xPlatformAuthFeatureFlag) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ___didFinishEvent) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____joiningLobbyCancellationTokenSource) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____cancellationTokenSource) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____transitionFinishedTaskSource) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____checkingAvailabilityTaskSource) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____quickPlaySetupData) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____lobbyDestination) == 0x190, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*, "", "MultiplayerModeSelectionFlowCoordinator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52, "",
                       "MultiplayerModeSelectionFlowCoordinator/<ResolveAndPresentNextFlowCoordinator>d__52");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, "", "MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__51");
