#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerModeSelectionFlowCoordinator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerModeSelectionFlowCoordinator)
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
class CreateServerViewController;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class GameServerBrowserFlowCoordinator;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinator;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class IBeatSaberMultiplayerSessionManager;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class JoinQuickPlayViewController;
}
namespace GlobalNamespace {
class JoiningLobbyViewController;
}
namespace GlobalNamespace {
class LobbyDataModelsManager;
}
namespace GlobalNamespace {
struct MultiplayerLobbyConnectionController_LobbyConnectionType;
}
namespace GlobalNamespace {
class MultiplayerLobbyConnectionController;
}
namespace GlobalNamespace {
struct MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61;
}
namespace GlobalNamespace {
struct MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63;
}
namespace GlobalNamespace {
struct MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0;
}
namespace GlobalNamespace {
struct MultiplayerModeSelectionViewController_MenuButton;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionViewController;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace GlobalNamespace {
struct MultiplayerUnavailableReason;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class SelectMultiplayerLobbyDestination;
}
namespace GlobalNamespace {
class ServerCodeEntryViewController;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace HMUI {
struct ViewController_AnimationType;
}
namespace HMUI {
class ViewController;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0;
}
namespace GlobalNamespace {
struct MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61;
}
namespace GlobalNamespace {
struct MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63;
}
namespace GlobalNamespace {
struct MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*);
MARK_REF_T(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0*);
MARK_REF_T(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0*);
MARK_REF_T(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0*);
MARK_VAL_T(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61);
MARK_VAL_T(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63);
MARK_VAL_T(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*, "", "MultiplayerModeSelectionFlowCoordinator");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0*, "", "MultiplayerModeSelectionFlowCoordinator/<>c__DisplayClass57_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0*, "", "MultiplayerModeSelectionFlowCoordinator/<>c__DisplayClass58_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0*, "", "MultiplayerModeSelectionFlowCoordinator/<>c__DisplayClass66_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61, "",
                    "MultiplayerModeSelectionFlowCoordinator/<HandleConnectedPlayerManagerCreated>d__61");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63, "",
                    "MultiplayerModeSelectionFlowCoordinator/<ResolveAndPresentNextFlowCoordinator>d__63");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62, "", "MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__62");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerModeSelectionFlowCoordinator/<>c__DisplayClass57_0
class CORDL_TYPE MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __4__this;

  /// @brief Field code, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_code, put = __cordl_internal_set_code)) ::StringW code;

  static inline ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0* New_ctor();

  /// @brief Method <HandleServerCodeEntryViewControllerDidFinish>b__0, addr 0x59356fc, size 0x3c, virtual false, abstract: false, final false
  inline void _HandleServerCodeEntryViewControllerDidFinish_b__0();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_code() const;

  constexpr ::StringW& __cordl_internal_get_code();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value);

  constexpr void __cordl_internal_set_code(::StringW value);

  /// @brief Method .ctor, addr 0x59356f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0(MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0(MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6845 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> _____4__this;

  /// @brief Field code, offset: 0x18, size: 0x8, def value: None
  ::StringW ___code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0, ___code) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies CreateServerFormData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerModeSelectionFlowCoordinator/<>c__DisplayClass58_0
class CORDL_TYPE MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __4__this;

  /// @brief Field data, offset 0x18, size 0x50
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::GlobalNamespace::CreateServerFormData data;

  static inline ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0* New_ctor();

  /// @brief Method <HandleCreateServerViewControllerDidFinish>b__0, addr 0x593573c, size 0x4c, virtual false, abstract: false, final false
  inline void _HandleCreateServerViewControllerDidFinish_b__0();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::CreateServerFormData const& __cordl_internal_get_data() const;

  constexpr ::GlobalNamespace::CreateServerFormData& __cordl_internal_get_data();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value);

  constexpr void __cordl_internal_set_data(::GlobalNamespace::CreateServerFormData value);

  /// @brief Method .ctor, addr 0x5935738, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0(MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0(MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6846 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> _____4__this;

  /// @brief Field data, offset: 0x18, size: 0x50, def value: None
  ::GlobalNamespace::CreateServerFormData ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0) == 0x68, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerModeSelectionFlowCoordinator/<>c__DisplayClass66_0
class CORDL_TYPE MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __4__this;

  /// @brief Field lobbyDestination, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lobbyDestination, put = __cordl_internal_set_lobbyDestination)) ::GlobalNamespace::SelectMultiplayerLobbyDestination* lobbyDestination;

  static inline ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0* New_ctor();

  /// @brief Method <ProcessDeeplinkingToLobby>b__0, addr 0x593578c, size 0x2c, virtual false, abstract: false, final false
  inline void _ProcessDeeplinkingToLobby_b__0();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::SelectMultiplayerLobbyDestination* const& __cordl_internal_get_lobbyDestination() const;

  constexpr ::GlobalNamespace::SelectMultiplayerLobbyDestination*& __cordl_internal_get_lobbyDestination();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value);

  constexpr void __cordl_internal_set_lobbyDestination(::GlobalNamespace::SelectMultiplayerLobbyDestination* value);

  /// @brief Method .ctor, addr 0x5935788, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0(MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0(MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6847 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> _____4__this;

  /// @brief Field lobbyDestination, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SelectMultiplayerLobbyDestination* ___lobbyDestination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0, ___lobbyDestination) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerAvatarsData, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerModeSelectionFlowCoordinator/<HandleConnectedPlayerManagerCreated>d__61
struct CORDL_TYPE MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x59357b8, size 0x410, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5935bc8, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>", modifiers: "", def_value: None }, CppParam { name: "networkPlayerModel", ty: "::GlobalNamespace::INetworkPlayerModel*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "", def_value: None }]
  constexpr MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __4__this,
      ::GlobalNamespace::INetworkPlayerModel* networkPlayerModel, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6848 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __4__this;

  /// @brief Field networkPlayerModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayerModel* networkPlayerModel;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61, networkPlayerModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerModeSelectionFlowCoordinator/<ResolveAndPresentNextFlowCoordinator>d__63
struct CORDL_TYPE MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5935bd0, size 0x46c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x593603c, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __4__this,
                                                                                                ::System::Threading::CancellationToken cancellationToken, int32_t __7__wrap1,
                                                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6849 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x4, def value: None
  int32_t __7__wrap1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__62
struct CORDL_TYPE MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5936044, size 0xc3c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5936c80, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "_multiplayerStatusData_5__2", ty: "::GlobalNamespace::MultiplayerStatusData*", modifiers: "", def_value: None }, CppParam { name:
  // "_exception_5__3", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*>", modifiers: "", def_value: None }]
  constexpr MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __4__this,
                                                                                ::System::Threading::CancellationToken cancellationToken,
                                                                                ::GlobalNamespace::MultiplayerStatusData* _multiplayerStatusData_5__2, ::System::Exception* _exception_5__3,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*> __u__2,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6850 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <multiplayerStatusData>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerStatusData* _multiplayerStatusData_5__2;

  /// @brief Field <exception>5__3, offset: 0x40, size: 0x8, def value: None
  ::System::Exception* _exception_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*> __u__2;

  /// @brief Field <>u__3, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62, _multiplayerStatusData_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62, _exception_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62, __u__3) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62) == 0x60, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.FlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerModeSelectionFlowCoordinator
class CORDL_TYPE MultiplayerModeSelectionFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using _HandleConnectedPlayerManagerCreated_d__61 = ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__HandleConnectedPlayerManagerCreated_d__61;

  using _ResolveAndPresentNextFlowCoordinator_d__63 = ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__ResolveAndPresentNextFlowCoordinator_d__63;

  using _TryShowModeSelection_d__62 = ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator__TryShowModeSelection_d__62;

  using __c__DisplayClass57_0 = ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass57_0;

  using __c__DisplayClass58_0 = ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass58_0;

  using __c__DisplayClass66_0 = ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator___c__DisplayClass66_0;

  /// @brief Field _ambienceAudioClip, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__ambienceAudioClip, put = __cordl_internal_set__ambienceAudioClip)) ::UnityW<::UnityEngine::AudioClip> _ambienceAudioClip;

  /// @brief Field _analyticsModel, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _avatarSystemCollection, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSystemCollection, put = __cordl_internal_set__avatarSystemCollection)) ::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _checkingAvailabilityTaskSource, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__checkingAvailabilityTaskSource,
                      put = __cordl_internal_set__checkingAvailabilityTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* _checkingAvailabilityTaskSource;

  /// @brief Field _createServerViewController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__createServerViewController, put = __cordl_internal_set__createServerViewController)) ::UnityW<::GlobalNamespace::CreateServerViewController>
      _createServerViewController;

  /// @brief Field _fadeInOutController, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOutController, put = __cordl_internal_set__fadeInOutController)) ::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOutController;

  /// @brief Field _gameServerBrowserFlowCoordinator, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServerBrowserFlowCoordinator,
                      put = __cordl_internal_set__gameServerBrowserFlowCoordinator)) ::UnityW<::GlobalNamespace::GameServerBrowserFlowCoordinator>
      _gameServerBrowserFlowCoordinator;

  /// @brief Field _gameServerLobbyFlowCoordinator, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServerLobbyFlowCoordinator,
                      put = __cordl_internal_set__gameServerLobbyFlowCoordinator)) ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator>
      _gameServerLobbyFlowCoordinator;

  /// @brief Field _joinQuickPlayViewController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__joinQuickPlayViewController, put = __cordl_internal_set__joinQuickPlayViewController)) ::UnityW<::GlobalNamespace::JoinQuickPlayViewController>
      _joinQuickPlayViewController;

  /// @brief Field _joiningLobbyCancellationTokenSource, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__joiningLobbyCancellationTokenSource,
                      put = __cordl_internal_set__joiningLobbyCancellationTokenSource)) ::System::Threading::CancellationTokenSource* _joiningLobbyCancellationTokenSource;

  /// @brief Field _joiningLobbyViewController, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__joiningLobbyViewController, put = __cordl_internal_set__joiningLobbyViewController)) ::UnityW<::GlobalNamespace::JoiningLobbyViewController>
      _joiningLobbyViewController;

  /// @brief Field _lobbyDataModelsManager, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyDataModelsManager, put = __cordl_internal_set__lobbyDataModelsManager)) ::GlobalNamespace::LobbyDataModelsManager* _lobbyDataModelsManager;

  /// @brief Field _lobbyDestination, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyDestination, put = __cordl_internal_set__lobbyDestination)) ::GlobalNamespace::SelectMultiplayerLobbyDestination* _lobbyDestination;

  /// @brief Field _lobbyGameStateController, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyGameStateController,
                      put = __cordl_internal_set__lobbyGameStateController)) ::GlobalNamespace::ILobbyGameStateController* _lobbyGameStateController;

  /// @brief Field _modeSelectionCancellationTokenSource, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__modeSelectionCancellationTokenSource,
                      put = __cordl_internal_set__modeSelectionCancellationTokenSource)) ::System::Threading::CancellationTokenSource* _modeSelectionCancellationTokenSource;

  /// @brief Field _multiplayerLobbyConnectionController, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLobbyConnectionController,
                      put = __cordl_internal_set__multiplayerLobbyConnectionController)) ::GlobalNamespace::MultiplayerLobbyConnectionController* _multiplayerLobbyConnectionController;

  /// @brief Field _multiplayerModeSelectionViewController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerModeSelectionViewController,
                      put = __cordl_internal_set__multiplayerModeSelectionViewController)) ::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>
      _multiplayerModeSelectionViewController;

  /// @brief Field _multiplayerSessionManager, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _multiplayerStatusModel, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerStatusModel, put = __cordl_internal_set__multiplayerStatusModel)) ::GlobalNamespace::IMultiplayerStatusModel* _multiplayerStatusModel;

  /// @brief Field _playerDataModel, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _quickPlaySetupData, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__quickPlaySetupData, put = __cordl_internal_set__quickPlaySetupData)) ::GlobalNamespace::QuickPlaySetupData* _quickPlaySetupData;

  /// @brief Field _quickPlaySetupModel, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__quickPlaySetupModel, put = __cordl_internal_set__quickPlaySetupModel)) ::GlobalNamespace::IQuickPlaySetupModel* _quickPlaySetupModel;

  /// @brief Field _serverCodeEntryViewController, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__serverCodeEntryViewController, put = __cordl_internal_set__serverCodeEntryViewController)) ::UnityW<::GlobalNamespace::ServerCodeEntryViewController>
      _serverCodeEntryViewController;

  /// @brief Field _simpleDialogPromptViewController, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__simpleDialogPromptViewController,
                      put = __cordl_internal_set__simpleDialogPromptViewController)) ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController>
      _simpleDialogPromptViewController;

  /// @brief Field _songPackMasksModel, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel)) ::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  /// @brief Field _songPreviewPlayer, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__songPreviewPlayer, put = __cordl_internal_set__songPreviewPlayer)) ::UnityW<::GlobalNamespace::SongPreviewPlayer> _songPreviewPlayer;

  /// @brief Field _transitionFinishedTaskSource, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__transitionFinishedTaskSource,
                      put = __cordl_internal_set__transitionFinishedTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* _transitionFinishedTaskSource;

  /// @brief Field _unifiedNetworkPlayerModel, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__unifiedNetworkPlayerModel,
                      put = __cordl_internal_set__unifiedNetworkPlayerModel)) ::GlobalNamespace::IUnifiedNetworkPlayerModel* _unifiedNetworkPlayerModel;

  /// @brief Field didFinishEvent, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>* didFinishEvent;

  /// @brief Method BackButtonWasPressed, addr 0x593228c, size 0xe0, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method DidActivate, addr 0x59315a0, size 0x6cc, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x5931d1c, size 0x570, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleConnectedPlayerManagerCreated, addr 0x5934b6c, size 0xac, virtual false, abstract: false, final false
  inline void HandleConnectedPlayerManagerCreated(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel);

  /// @brief Method HandleCreateServerViewControllerDidFinish, addr 0x59342f4, size 0x53c, virtual false, abstract: false, final false
  inline void HandleCreateServerViewControllerDidFinish(bool success, ::GlobalNamespace::CreateServerFormData data);

  /// @brief Method HandleGameServerBrowserFlowCoordinatorDidFinish, addr 0x5933ae8, size 0x14, virtual false, abstract: false, final false
  inline void HandleGameServerBrowserFlowCoordinatorDidFinish(::GlobalNamespace::GameServerBrowserFlowCoordinator* flowCoordinator);

  /// @brief Method HandleGameServerLobbyFlowCoordinatorDidFinish, addr 0x5934830, size 0x298, virtual false, abstract: false, final false
  inline void HandleGameServerLobbyFlowCoordinatorDidFinish();

  /// @brief Method HandleGameServerLobbyFlowCoordinatorWillFinish, addr 0x5934ac8, size 0xa4, virtual false, abstract: false, final false
  inline void HandleGameServerLobbyFlowCoordinatorWillFinish();

  /// @brief Method HandleJoinQuickPlayViewControllerDidFinish, addr 0x5933bdc, size 0x54c, virtual false, abstract: false, final false
  inline void HandleJoinQuickPlayViewControllerDidFinish(bool success);

  /// @brief Method HandleJoiningLobbyViewControllerDidCancel, addr 0x5933afc, size 0xe0, virtual false, abstract: false, final false
  inline void HandleJoiningLobbyViewControllerDidCancel();

  /// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionFailed, addr 0x593327c, size 0xc8, virtual false, abstract: false, final false
  inline void HandleMultiplayerLobbyConnectionControllerConnectionFailed(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType connectionType,
                                                                         ::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionSuccess, addr 0x5933248, size 0x34, virtual false, abstract: false, final false
  inline void HandleMultiplayerLobbyConnectionControllerConnectionSuccess();

  /// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel, addr 0x5933230, size 0x18, virtual false, abstract: false, final false
  inline void HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel();

  /// @brief Method HandleMultiplayerLobbyControllerDidFinish, addr 0x5933344, size 0x7a4, virtual false, abstract: false, final false
  inline void HandleMultiplayerLobbyControllerDidFinish(::GlobalNamespace::MultiplayerModeSelectionViewController* viewController,
                                                        ::GlobalNamespace::MultiplayerModeSelectionViewController_MenuButton menuButton);

  /// @brief Method HandleServerCodeEntryViewControllerDidFinish, addr 0x5934128, size 0x1cc, virtual false, abstract: false, final false
  inline void HandleServerCodeEntryViewControllerDidFinish(bool success, ::StringW code);

  static inline ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* New_ctor();

  /// @brief Method PresentConnectionErrorDialog, addr 0x5932b9c, size 0x694, virtual false, abstract: false, final false
  inline void PresentConnectionErrorDialog(::GlobalNamespace::MultiplayerLobbyConnectionController_LobbyConnectionType connectionType, ::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method PresentMasterServerUnavailableErrorDialog, addr 0x5934c18, size 0x5f4, virtual false, abstract: false, final false
  inline void PresentMasterServerUnavailableErrorDialog(::GlobalNamespace::MultiplayerUnavailableReason reason, ::System::Exception* exception, ::System::Nullable_1<int64_t> maintenanceWindowEndTime,
                                                        ::StringW remoteLocalizedMessage);

  /// @brief Method ProcessDeeplinkingToLobby, addr 0x593520c, size 0x1bc, virtual false, abstract: false, final false
  inline void ProcessDeeplinkingToLobby();

  /// @brief Method ResolveAndPresentNextFlowCoordinator, addr 0x5932aec, size 0xb0, virtual false, abstract: false, final false
  inline void ResolveAndPresentNextFlowCoordinator(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Setup, addr 0x5931598, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::SelectMultiplayerLobbyDestination* lobbyDestination);

  /// @brief Method TopViewControllerWillChange, addr 0x593236c, size 0x24c, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method TransitionDidFinish, addr 0x5932780, size 0x36c, virtual true, abstract: false, final false
  inline void TransitionDidFinish();

  /// @brief Method TransitionDidStart, addr 0x59325b8, size 0x1c8, virtual true, abstract: false, final false
  inline void TransitionDidStart();

  /// @brief Method TryShowModeSelection, addr 0x5931c6c, size 0xb0, virtual false, abstract: false, final false
  inline void TryShowModeSelection(bool shouldProvideInitialViewControllers, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method <HandleJoinQuickPlayViewControllerDidFinish>b__56_0, addr 0x59353d0, size 0x88, virtual false, abstract: false, final false
  inline void _HandleJoinQuickPlayViewControllerDidFinish_b__56_0();

  /// @brief Method <PresentConnectionErrorDialog>b__64_0, addr 0x59356a8, size 0x18, virtual false, abstract: false, final false
  inline void _PresentConnectionErrorDialog_b__64_0(int32_t btnId);

  /// @brief Method <PresentConnectionErrorDialog>b__64_1, addr 0x59356c0, size 0x18, virtual false, abstract: false, final false
  inline void _PresentConnectionErrorDialog_b__64_1(int32_t btnId);

  /// @brief Method <PresentMasterServerUnavailableErrorDialog>b__65_0, addr 0x59356d8, size 0x20, virtual false, abstract: false, final false
  inline void _PresentMasterServerUnavailableErrorDialog_b__65_0(int32_t btnId);

  /// @brief Method <ResolveAndPresentNextFlowCoordinator>b__63_0, addr 0x5935458, size 0x250, virtual false, abstract: false, final false
  inline void _ResolveAndPresentNextFlowCoordinator_b__63_0();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__ambienceAudioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__ambienceAudioClip();

  constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& __cordl_internal_get__avatarSystemCollection() const;

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __cordl_internal_get__avatarSystemCollection();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__checkingAvailabilityTaskSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__checkingAvailabilityTaskSource();

  constexpr ::UnityW<::GlobalNamespace::CreateServerViewController> const& __cordl_internal_get__createServerViewController() const;

  constexpr ::UnityW<::GlobalNamespace::CreateServerViewController>& __cordl_internal_get__createServerViewController();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOutController() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOutController();

  constexpr ::UnityW<::GlobalNamespace::GameServerBrowserFlowCoordinator> const& __cordl_internal_get__gameServerBrowserFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerBrowserFlowCoordinator>& __cordl_internal_get__gameServerBrowserFlowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> const& __cordl_internal_get__gameServerLobbyFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator>& __cordl_internal_get__gameServerLobbyFlowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::JoinQuickPlayViewController> const& __cordl_internal_get__joinQuickPlayViewController() const;

  constexpr ::UnityW<::GlobalNamespace::JoinQuickPlayViewController>& __cordl_internal_get__joinQuickPlayViewController();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__joiningLobbyCancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__joiningLobbyCancellationTokenSource();

  constexpr ::UnityW<::GlobalNamespace::JoiningLobbyViewController> const& __cordl_internal_get__joiningLobbyViewController() const;

  constexpr ::UnityW<::GlobalNamespace::JoiningLobbyViewController>& __cordl_internal_get__joiningLobbyViewController();

  constexpr ::GlobalNamespace::LobbyDataModelsManager* const& __cordl_internal_get__lobbyDataModelsManager() const;

  constexpr ::GlobalNamespace::LobbyDataModelsManager*& __cordl_internal_get__lobbyDataModelsManager();

  constexpr ::GlobalNamespace::SelectMultiplayerLobbyDestination* const& __cordl_internal_get__lobbyDestination() const;

  constexpr ::GlobalNamespace::SelectMultiplayerLobbyDestination*& __cordl_internal_get__lobbyDestination();

  constexpr ::GlobalNamespace::ILobbyGameStateController* const& __cordl_internal_get__lobbyGameStateController() const;

  constexpr ::GlobalNamespace::ILobbyGameStateController*& __cordl_internal_get__lobbyGameStateController();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__modeSelectionCancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__modeSelectionCancellationTokenSource();

  constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController* const& __cordl_internal_get__multiplayerLobbyConnectionController() const;

  constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController*& __cordl_internal_get__multiplayerLobbyConnectionController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController> const& __cordl_internal_get__multiplayerModeSelectionViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>& __cordl_internal_get__multiplayerModeSelectionViewController();

  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::IMultiplayerStatusModel* const& __cordl_internal_get__multiplayerStatusModel() const;

  constexpr ::GlobalNamespace::IMultiplayerStatusModel*& __cordl_internal_get__multiplayerStatusModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::QuickPlaySetupData* const& __cordl_internal_get__quickPlaySetupData() const;

  constexpr ::GlobalNamespace::QuickPlaySetupData*& __cordl_internal_get__quickPlaySetupData();

  constexpr ::GlobalNamespace::IQuickPlaySetupModel* const& __cordl_internal_get__quickPlaySetupModel() const;

  constexpr ::GlobalNamespace::IQuickPlaySetupModel*& __cordl_internal_get__quickPlaySetupModel();

  constexpr ::UnityW<::GlobalNamespace::ServerCodeEntryViewController> const& __cordl_internal_get__serverCodeEntryViewController() const;

  constexpr ::UnityW<::GlobalNamespace::ServerCodeEntryViewController>& __cordl_internal_get__serverCodeEntryViewController();

  constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> const& __cordl_internal_get__simpleDialogPromptViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController>& __cordl_internal_get__simpleDialogPromptViewController();

  constexpr ::GlobalNamespace::SongPackMasksModel* const& __cordl_internal_get__songPackMasksModel() const;

  constexpr ::GlobalNamespace::SongPackMasksModel*& __cordl_internal_get__songPackMasksModel();

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer> const& __cordl_internal_get__songPreviewPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::SongPreviewPlayer>& __cordl_internal_get__songPreviewPlayer();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__transitionFinishedTaskSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__transitionFinishedTaskSource();

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* const& __cordl_internal_get__unifiedNetworkPlayerModel() const;

  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& __cordl_internal_get__unifiedNetworkPlayerModel();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__ambienceAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr void __cordl_internal_set__checkingAvailabilityTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr void __cordl_internal_set__createServerViewController(::UnityW<::GlobalNamespace::CreateServerViewController> value);

  constexpr void __cordl_internal_set__fadeInOutController(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr void __cordl_internal_set__gameServerBrowserFlowCoordinator(::UnityW<::GlobalNamespace::GameServerBrowserFlowCoordinator> value);

  constexpr void __cordl_internal_set__gameServerLobbyFlowCoordinator(::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> value);

  constexpr void __cordl_internal_set__joinQuickPlayViewController(::UnityW<::GlobalNamespace::JoinQuickPlayViewController> value);

  constexpr void __cordl_internal_set__joiningLobbyCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__joiningLobbyViewController(::UnityW<::GlobalNamespace::JoiningLobbyViewController> value);

  constexpr void __cordl_internal_set__lobbyDataModelsManager(::GlobalNamespace::LobbyDataModelsManager* value);

  constexpr void __cordl_internal_set__lobbyDestination(::GlobalNamespace::SelectMultiplayerLobbyDestination* value);

  constexpr void __cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value);

  constexpr void __cordl_internal_set__modeSelectionCancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__multiplayerLobbyConnectionController(::GlobalNamespace::MultiplayerLobbyConnectionController* value);

  constexpr void __cordl_internal_set__multiplayerModeSelectionViewController(::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController> value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__multiplayerStatusModel(::GlobalNamespace::IMultiplayerStatusModel* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value);

  constexpr void __cordl_internal_set__quickPlaySetupModel(::GlobalNamespace::IQuickPlaySetupModel* value);

  constexpr void __cordl_internal_set__serverCodeEntryViewController(::UnityW<::GlobalNamespace::ServerCodeEntryViewController> value);

  constexpr void __cordl_internal_set__simpleDialogPromptViewController(::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> value);

  constexpr void __cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value);

  constexpr void __cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::SongPreviewPlayer> value);

  constexpr void __cordl_internal_set__transitionFinishedTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr void __cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>* value);

  /// @brief Method .ctor, addr 0x59353c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x59269dc, size 0xc0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>* value);

  /// @brief Method remove_didFinishEvent, addr 0x59271bc, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerModeSelectionFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerModeSelectionFlowCoordinator(MultiplayerModeSelectionFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerModeSelectionFlowCoordinator(MultiplayerModeSelectionFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6851 };

  /// @brief Field kButtonOkLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kButtonOkLocalizationKey{ u"BUTTON_OK" };

  /// @brief Field kLabelCheckingServerStatusLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelCheckingServerStatusLocalizationKey{ u"LABEL_CHECKING_SERVER_STATUS" };

  /// @brief Field kLabelConnectionErrorLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelConnectionErrorLocalizationKey{ u"LABEL_CONNECTION_ERROR" };

  /// @brief Field kLabelCreateServerLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelCreateServerLocalizationKey{ u"LABEL_CREATE_SERVER" };

  /// @brief Field kLabelCreatingServerLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelCreatingServerLocalizationKey{ u"LABEL_CREATING_SERVER" };

  /// @brief Field kLabelJoinQuickPlayLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelJoinQuickPlayLocalizationKey{ u"LABEL_JOIN_QUICK_PLAY" };

  /// @brief Field kLabelJoinViaCodeLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelJoinViaCodeLocalizationKey{ u"LABEL_JOIN_VIA_CODE" };

  /// @brief Field kLabelJoiningGameLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelJoiningGameLocalizationKey{ u"LABEL_JOINING_GAME" };

  /// @brief Field kLabelJoiningLobbyLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelJoiningLobbyLocalizationKey{ u"LABEL_JOINING_LOBBY" };

  /// @brief Field kLabelJoiningQuickPlayLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelJoiningQuickPlayLocalizationKey{ u"LABEL_JOINING_QUICK_PLAY" };

  /// @brief Field kLabelMultiplayerModeSelectionLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelMultiplayerModeSelectionLocalizationKey{ u"LABEL_MULTIPLAYER_MODE_SELECTION" };

  /// @brief Field kTextInvalidPasswordLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kTextInvalidPasswordLocalizationKey{ u"TEXT_INVALID_PASSWORD" };

  /// @brief Field _ambienceAudioClip, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____ambienceAudioClip;

  /// @brief Field _songPackMasksModel, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  /// @brief Field _gameServerBrowserFlowCoordinator, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerBrowserFlowCoordinator> ____gameServerBrowserFlowCoordinator;

  /// @brief Field _gameServerLobbyFlowCoordinator, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerLobbyFlowCoordinator> ____gameServerLobbyFlowCoordinator;

  /// @brief Field _multiplayerModeSelectionViewController, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController> ____multiplayerModeSelectionViewController;

  /// @brief Field _createServerViewController, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CreateServerViewController> ____createServerViewController;

  /// @brief Field _joinQuickPlayViewController, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::JoinQuickPlayViewController> ____joinQuickPlayViewController;

  /// @brief Field _serverCodeEntryViewController, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ServerCodeEntryViewController> ____serverCodeEntryViewController;

  /// @brief Field _simpleDialogPromptViewController, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> ____simpleDialogPromptViewController;

  /// @brief Field _joiningLobbyViewController, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::JoiningLobbyViewController> ____joiningLobbyViewController;

  /// @brief Field _unifiedNetworkPlayerModel, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::IUnifiedNetworkPlayerModel* ____unifiedNetworkPlayerModel;

  /// @brief Field _avatarSystemCollection, offset: 0x108, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _multiplayerSessionManager, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _fadeInOutController, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOutController;

  /// @brief Field _lobbyDataModelsManager, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::LobbyDataModelsManager* ____lobbyDataModelsManager;

  /// @brief Field _multiplayerLobbyConnectionController, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLobbyConnectionController* ____multiplayerLobbyConnectionController;

  /// @brief Field _multiplayerStatusModel, offset: 0x130, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerStatusModel* ____multiplayerStatusModel;

  /// @brief Field _quickPlaySetupModel, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::IQuickPlaySetupModel* ____quickPlaySetupModel;

  /// @brief Field _playerDataModel, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _songPreviewPlayer, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPreviewPlayer> ____songPreviewPlayer;

  /// @brief Field _analyticsModel, offset: 0x150, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _lobbyGameStateController, offset: 0x158, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyGameStateController* ____lobbyGameStateController;

  /// @brief Field didFinishEvent, offset: 0x160, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>>* ___didFinishEvent;

  /// @brief Field _joiningLobbyCancellationTokenSource, offset: 0x168, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____joiningLobbyCancellationTokenSource;

  /// @brief Field _modeSelectionCancellationTokenSource, offset: 0x170, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____modeSelectionCancellationTokenSource;

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
static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____ambienceAudioClip) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____songPackMasksModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____gameServerBrowserFlowCoordinator) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____gameServerLobbyFlowCoordinator) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____multiplayerModeSelectionViewController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____createServerViewController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____joinQuickPlayViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____serverCodeEntryViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____simpleDialogPromptViewController) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____joiningLobbyViewController) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____unifiedNetworkPlayerModel) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____avatarSystemCollection) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____multiplayerSessionManager) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____fadeInOutController) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____lobbyDataModelsManager) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____multiplayerLobbyConnectionController) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____multiplayerStatusModel) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____quickPlaySetupModel) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____playerDataModel) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____songPreviewPlayer) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____analyticsModel) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____lobbyGameStateController) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ___didFinishEvent) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____joiningLobbyCancellationTokenSource) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____modeSelectionCancellationTokenSource) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____transitionFinishedTaskSource) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____checkingAvailabilityTaskSource) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____quickPlaySetupData) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, ____lobbyDestination) == 0x190, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator) == 0x198, "Size mismatch!");

} // namespace GlobalNamespace
