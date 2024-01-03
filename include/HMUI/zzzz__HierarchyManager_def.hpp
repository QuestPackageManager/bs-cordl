#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HierarchyManager)
namespace HMUI {
class FlowCoordinator;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace HMUI {
class ScreenSystem;
}
namespace GlobalNamespace {
class GameScenesManager;
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
// Type: HMUI::HierarchyManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13583))
// CS Name: ::HMUI::HierarchyManager*
class CORDL_TYPE HierarchyManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _screenSystem, offset 0x18, size 0x8
  __declspec(property(get = __get__screenSystem, put = __set__screenSystem))::HMUI::ScreenSystem* _screenSystem;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  /// @brief Field _rootFlowCoordinator, offset 0x28, size 0x8
  __declspec(property(get = __get__rootFlowCoordinator, put = __set__rootFlowCoordinator))::HMUI::FlowCoordinator* _rootFlowCoordinator;

  constexpr ::HMUI::ScreenSystem*& __get__screenSystem();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenSystem*> const& __get__screenSystem() const;

  constexpr void __set__screenSystem(::HMUI::ScreenSystem* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  constexpr ::HMUI::FlowCoordinator*& __get__rootFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> const& __get__rootFlowCoordinator() const;

  constexpr void __set__rootFlowCoordinator(::HMUI::FlowCoordinator* value);

  /// @brief Method Start, addr 0x212a800, size 0x11c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x212a9d0, size 0x140, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleSceneTransitionDidFinish, addr 0x212a91c, size 0xb4, virtual false, abstract: false, final false
  inline void HandleSceneTransitionDidFinish(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* container);

  /// @brief Method HandleBeforeDismissingScenes, addr 0x212ab10, size 0xb4, virtual false, abstract: false, final false
  inline void HandleBeforeDismissingScenes();

  /// @brief Method StartWithFlowCoordinator, addr 0x212abc4, size 0x28, virtual false, abstract: false, final false
  inline void StartWithFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator);

  static inline ::HMUI::HierarchyManager* New_ctor();

  /// @brief Method .ctor, addr 0x212abec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyManager(HierarchyManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyManager(HierarchyManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyManager();

public:
  /// @brief Field _screenSystem, offset: 0x18, size: 0x8, def value: None
  ::HMUI::ScreenSystem* ____screenSystem;

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  /// @brief Field _rootFlowCoordinator, offset: 0x28, size: 0x8, def value: None
  ::HMUI::FlowCoordinator* ____rootFlowCoordinator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::HierarchyManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::HMUI::HierarchyManager, ____screenSystem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::HierarchyManager, ____gameScenesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HierarchyManager, ____rootFlowCoordinator) == 0x28, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HierarchyManager);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HierarchyManager*, "HMUI", "HierarchyManager");
