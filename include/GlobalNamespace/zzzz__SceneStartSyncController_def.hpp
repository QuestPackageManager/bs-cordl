#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneStartSyncController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SceneStartSyncController)
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class SceneStartHandler;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneStartSyncController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneStartSyncController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SceneStartSyncController
class CORDL_TYPE SceneStartSyncController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayRpcManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayRpcManager, put = __cordl_internal_set__gameplayRpcManager)) ::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _multiplayerSessionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _playersAtGameStartModel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__playersAtGameStartModel,
                      put = __cordl_internal_set__playersAtGameStartModel)) ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playersAtGameStartModel;

  /// @brief Field _sceneStartHandler, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneStartHandler, put = __cordl_internal_set__sceneStartHandler)) ::GlobalNamespace::SceneStartHandler* _sceneStartHandler;

  /// @brief Field _sceneSyncStarted, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__sceneSyncStarted, put = __cordl_internal_set__sceneSyncStarted)) bool _sceneSyncStarted;

  /// @brief Field _waitStartTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__waitStartTime, put = __cordl_internal_set__waitStartTime)) float_t _waitStartTime;

  /// @brief Field syncStartDidFailEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_syncStartDidFailEvent, put = __cordl_internal_set_syncStartDidFailEvent)) ::System::Action* syncStartDidFailEvent;

  /// @brief Field syncStartDidReceiveTooLateEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_syncStartDidReceiveTooLateEvent,
                      put = __cordl_internal_set_syncStartDidReceiveTooLateEvent)) ::System::Action_1<::StringW>* syncStartDidReceiveTooLateEvent;

  /// @brief Field syncStartDidSuccessEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_syncStartDidSuccessEvent, put = __cordl_internal_set_syncStartDidSuccessEvent)) ::System::Action_1<::StringW>* syncStartDidSuccessEvent;

  /// @brief Method HandleSceneSetupDidFinish, addr 0x3e74b40, size 0x4c, virtual false, abstract: false, final false
  inline void HandleSceneSetupDidFinish(::StringW sessionGameId);

  /// @brief Method HandleSceneSetupDidReceiveTooLate, addr 0x3e74b8c, size 0x4c, virtual false, abstract: false, final false
  inline void HandleSceneSetupDidReceiveTooLate(::StringW sessionGameId);

  static inline ::GlobalNamespace::SceneStartSyncController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3e748e8, size 0xf8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3e74878, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartSceneLoadSync, addr 0x3e749e0, size 0x160, virtual false, abstract: false, final false
  inline void StartSceneLoadSync(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel);

  /// @brief Method Update, addr 0x3e74890, size 0x58, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IGameplayRpcManager* const& __cordl_internal_get__gameplayRpcManager() const;

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__gameplayRpcManager();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* const& __cordl_internal_get__playersAtGameStartModel() const;

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __cordl_internal_get__playersAtGameStartModel();

  constexpr ::GlobalNamespace::SceneStartHandler* const& __cordl_internal_get__sceneStartHandler() const;

  constexpr ::GlobalNamespace::SceneStartHandler*& __cordl_internal_get__sceneStartHandler();

  constexpr bool const& __cordl_internal_get__sceneSyncStarted() const;

  constexpr bool& __cordl_internal_get__sceneSyncStarted();

  constexpr float_t const& __cordl_internal_get__waitStartTime() const;

  constexpr float_t& __cordl_internal_get__waitStartTime();

  constexpr ::System::Action* const& __cordl_internal_get_syncStartDidFailEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_syncStartDidFailEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_syncStartDidReceiveTooLateEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_syncStartDidReceiveTooLateEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_syncStartDidSuccessEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_syncStartDidSuccessEvent();

  constexpr void __cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__playersAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  constexpr void __cordl_internal_set__sceneStartHandler(::GlobalNamespace::SceneStartHandler* value);

  constexpr void __cordl_internal_set__sceneSyncStarted(bool value);

  constexpr void __cordl_internal_set__waitStartTime(float_t value);

  constexpr void __cordl_internal_set_syncStartDidFailEvent(::System::Action* value);

  constexpr void __cordl_internal_set_syncStartDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_syncStartDidSuccessEvent(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x3e74bd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_syncStartDidFailEvent, addr 0x3e74740, size 0x9c, virtual false, abstract: false, final false
  inline void add_syncStartDidFailEvent(::System::Action* value);

  /// @brief Method add_syncStartDidReceiveTooLateEvent, addr 0x3e745e0, size 0xb0, virtual false, abstract: false, final false
  inline void add_syncStartDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_syncStartDidSuccessEvent, addr 0x3e74480, size 0xb0, virtual false, abstract: false, final false
  inline void add_syncStartDidSuccessEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_syncStartDidFailEvent, addr 0x3e747dc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_syncStartDidFailEvent(::System::Action* value);

  /// @brief Method remove_syncStartDidReceiveTooLateEvent, addr 0x3e74690, size 0xb0, virtual false, abstract: false, final false
  inline void remove_syncStartDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_syncStartDidSuccessEvent, addr 0x3e74530, size 0xb0, virtual false, abstract: false, final false
  inline void remove_syncStartDidSuccessEvent(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneStartSyncController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneStartSyncController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneStartSyncController(SceneStartSyncController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneStartSyncController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneStartSyncController(SceneStartSyncController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17370 };

  /// @brief Field kLoadOtherTimeout offset 0xffffffff size 0x4
  static constexpr float_t kLoadOtherTimeout{ static_cast<float_t>(15.0f) };

  /// @brief Field kLoadSelfTimeout offset 0xffffffff size 0x4
  static constexpr float_t kLoadSelfTimeout{ static_cast<float_t>(20.0f) };

  /// @brief Field _multiplayerSessionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _gameplayRpcManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field syncStartDidSuccessEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___syncStartDidSuccessEvent;

  /// @brief Field syncStartDidReceiveTooLateEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___syncStartDidReceiveTooLateEvent;

  /// @brief Field syncStartDidFailEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___syncStartDidFailEvent;

  /// @brief Field _sceneStartHandler, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::SceneStartHandler* ____sceneStartHandler;

  /// @brief Field _playersAtGameStartModel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* ____playersAtGameStartModel;

  /// @brief Field _waitStartTime, offset: 0x58, size: 0x4, def value: None
  float_t ____waitStartTime;

  /// @brief Field _sceneSyncStarted, offset: 0x5c, size: 0x1, def value: None
  bool ____sceneSyncStarted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____multiplayerSessionManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____gameplayRpcManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ___syncStartDidSuccessEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ___syncStartDidReceiveTooLateEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ___syncStartDidFailEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____sceneStartHandler) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____playersAtGameStartModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____waitStartTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____sceneSyncStarted) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneStartSyncController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneStartSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneStartSyncController*, "", "SceneStartSyncController");
