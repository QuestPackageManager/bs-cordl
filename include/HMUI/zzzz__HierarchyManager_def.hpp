#pragma once
// IWYU pragma private; include "HMUI/HierarchyManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HierarchyManager)
namespace GlobalNamespace {
struct GameScenesManager_SceneTransitionType;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace HMUI {
class FlowCoordinator;
}
namespace HMUI {
class ScreenSystem;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace HMUI {
class HierarchyManager;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HierarchyManager);
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HierarchyManager
class CORDL_TYPE HierarchyManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameScenesManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _rootFlowCoordinator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rootFlowCoordinator, put = __cordl_internal_set__rootFlowCoordinator)) ::UnityW<::HMUI::FlowCoordinator> _rootFlowCoordinator;

  /// @brief Field _screenSystem, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__screenSystem, put = __cordl_internal_set__screenSystem)) ::UnityW<::HMUI::ScreenSystem> _screenSystem;

  /// @brief Method HandleBeforeDismissingScenes, addr 0x228e1e8, size 0xac, virtual false, abstract: false, final false
  inline void HandleBeforeDismissingScenes(::System::Collections::Generic::List_1<::StringW>* _);

  /// @brief Method HandleSceneTransitionDidFinish, addr 0x228e010, size 0xac, virtual false, abstract: false, final false
  inline void HandleSceneTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType sceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData,
                                             ::Zenject::DiContainer* container);

  static inline ::HMUI::HierarchyManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x228e0bc, size 0x12c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x228def8, size 0x118, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartWithFlowCoordinator, addr 0x228e294, size 0x24, virtual false, abstract: false, final false
  inline void StartWithFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get__rootFlowCoordinator() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get__rootFlowCoordinator();

  constexpr ::UnityW<::HMUI::ScreenSystem> const& __cordl_internal_get__screenSystem() const;

  constexpr ::UnityW<::HMUI::ScreenSystem>& __cordl_internal_get__screenSystem();

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__rootFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set__screenSystem(::UnityW<::HMUI::ScreenSystem> value);

  /// @brief Method .ctor, addr 0x228e2b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyManager(HierarchyManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyManager(HierarchyManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16807 };

  /// @brief Field _screenSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ScreenSystem> ____screenSystem;

  /// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _rootFlowCoordinator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ____rootFlowCoordinator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::HierarchyManager, ____screenSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HierarchyManager, ____gameScenesManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::HierarchyManager, ____rootFlowCoordinator) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::HierarchyManager, 0x38>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HierarchyManager);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HierarchyManager*, "HMUI", "HierarchyManager");
