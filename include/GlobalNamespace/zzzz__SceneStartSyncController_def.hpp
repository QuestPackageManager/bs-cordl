#pragma once
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
// Type: ::SceneStartSyncController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 85, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14976))
// CS Name: ::SceneStartSyncController*
class CORDL_TYPE SceneStartSyncController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x18, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _gameplayRpcManager, offset 0x20, size 0x8
  __declspec(property(get = __get__gameplayRpcManager, put = __set__gameplayRpcManager))::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field syncStartDidSuccessEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_syncStartDidSuccessEvent, put = __set_syncStartDidSuccessEvent))::System::Action_1<::StringW>* syncStartDidSuccessEvent;

  /// @brief Field syncStartDidReceiveTooLateEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_syncStartDidReceiveTooLateEvent, put = __set_syncStartDidReceiveTooLateEvent))::System::Action_1<::StringW>* syncStartDidReceiveTooLateEvent;

  /// @brief Field syncStartDidFailEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_syncStartDidFailEvent, put = __set_syncStartDidFailEvent))::System::Action* syncStartDidFailEvent;

  /// @brief Field _sceneStartHandler, offset 0x40, size 0x8
  __declspec(property(get = __get__sceneStartHandler, put = __set__sceneStartHandler))::GlobalNamespace::SceneStartHandler* _sceneStartHandler;

  /// @brief Field _playersAtGameStartModel, offset 0x48, size 0x8
  __declspec(property(get = __get__playersAtGameStartModel, put = __set__playersAtGameStartModel))::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playersAtGameStartModel;

  /// @brief Field _waitStartTime, offset 0x50, size 0x4
  __declspec(property(get = __get__waitStartTime, put = __set__waitStartTime)) float_t _waitStartTime;

  /// @brief Field _sceneSyncStarted, offset 0x54, size 0x1
  __declspec(property(get = __get__sceneSyncStarted, put = __set__sceneSyncStarted)) bool _sceneSyncStarted;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __get__gameplayRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __get__gameplayRpcManager() const;

  constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr ::System::Action_1<::StringW>*& __get_syncStartDidSuccessEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_syncStartDidSuccessEvent() const;

  constexpr void __set_syncStartDidSuccessEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __get_syncStartDidReceiveTooLateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_syncStartDidReceiveTooLateEvent() const;

  constexpr void __set_syncStartDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action*& __get_syncStartDidFailEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_syncStartDidFailEvent() const;

  constexpr void __set_syncStartDidFailEvent(::System::Action* value);

  constexpr ::GlobalNamespace::SceneStartHandler*& __get__sceneStartHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SceneStartHandler*> const& __get__sceneStartHandler() const;

  constexpr void __set__sceneStartHandler(::GlobalNamespace::SceneStartHandler* value);

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __get__playersAtGameStartModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> const& __get__playersAtGameStartModel() const;

  constexpr void __set__playersAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  constexpr float_t& __get__waitStartTime();

  constexpr float_t const& __get__waitStartTime() const;

  constexpr void __set__waitStartTime(float_t value);

  constexpr bool& __get__sceneSyncStarted();

  constexpr bool const& __get__sceneSyncStarted() const;

  constexpr void __set__sceneSyncStarted(bool value);

  /// @brief Method add_syncStartDidSuccessEvent, addr 0x2638d08, size 0xb0, virtual false, abstract: false, final false
  inline void add_syncStartDidSuccessEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_syncStartDidSuccessEvent, addr 0x2638db8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_syncStartDidSuccessEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_syncStartDidReceiveTooLateEvent, addr 0x2638e68, size 0xb0, virtual false, abstract: false, final false
  inline void add_syncStartDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_syncStartDidReceiveTooLateEvent, addr 0x2638f18, size 0xb0, virtual false, abstract: false, final false
  inline void remove_syncStartDidReceiveTooLateEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_syncStartDidFailEvent, addr 0x2638fc8, size 0x9c, virtual false, abstract: false, final false
  inline void add_syncStartDidFailEvent(::System::Action* value);

  /// @brief Method remove_syncStartDidFailEvent, addr 0x2639064, size 0x9c, virtual false, abstract: false, final false
  inline void remove_syncStartDidFailEvent(::System::Action* value);

  /// @brief Method Start, addr 0x2639100, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2639118, size 0x58, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method OnDestroy, addr 0x2639170, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method StartSceneLoadSync, addr 0x2639270, size 0x160, virtual false, abstract: false, final false
  inline void StartSceneLoadSync(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel);

  /// @brief Method HandleSceneSetupDidFinish, addr 0x26393d0, size 0x4c, virtual false, abstract: false, final false
  inline void HandleSceneSetupDidFinish(::StringW sessionGameId);

  /// @brief Method HandleSceneSetupDidReceiveTooLate, addr 0x263941c, size 0x4c, virtual false, abstract: false, final false
  inline void HandleSceneSetupDidReceiveTooLate(::StringW sessionGameId);

  static inline ::GlobalNamespace::SceneStartSyncController* New_ctor();

  /// @brief Method .ctor, addr 0x2639468, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SceneStartSyncController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneStartSyncController(SceneStartSyncController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneStartSyncController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneStartSyncController(SceneStartSyncController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneStartSyncController();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _gameplayRpcManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field syncStartDidSuccessEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___syncStartDidSuccessEvent;

  /// @brief Field syncStartDidReceiveTooLateEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___syncStartDidReceiveTooLateEvent;

  /// @brief Field syncStartDidFailEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___syncStartDidFailEvent;

  /// @brief Field _sceneStartHandler, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SceneStartHandler* ____sceneStartHandler;

  /// @brief Field _playersAtGameStartModel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* ____playersAtGameStartModel;

  /// @brief Field _waitStartTime, offset: 0x50, size: 0x4, def value: None
  float_t ____waitStartTime;

  /// @brief Field _sceneSyncStarted, offset: 0x54, size: 0x1, def value: None
  bool ____sceneSyncStarted;

  /// @brief Field kLoadOtherTimeout offset 0xffffffff size 0x4
  static constexpr float_t kLoadOtherTimeout{ 15.0 };

  /// @brief Field kLoadSelfTimeout offset 0xffffffff size 0x4
  static constexpr float_t kLoadSelfTimeout{ 20.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneStartSyncController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____multiplayerSessionManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____gameplayRpcManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ___syncStartDidSuccessEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ___syncStartDidReceiveTooLateEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ___syncStartDidFailEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____sceneStartHandler) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____playersAtGameStartModel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____waitStartTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneStartSyncController, ____sceneSyncStarted) == 0x54, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneStartSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneStartSyncController*, "", "SceneStartSyncController");
