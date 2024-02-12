#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MainMenuMissionInstaller)
namespace GlobalNamespace {
class MissionNodesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MainMenuMissionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainMenuMissionInstaller);
// Type: ::MainMenuMissionInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10280))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4698))
// CS Name: ::MainMenuMissionInstaller*
class CORDL_TYPE MainMenuMissionInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _missionNodesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodesManager, put = __cordl_internal_set__missionNodesManager))::UnityW<::GlobalNamespace::MissionNodesManager> _missionNodesManager;

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& __cordl_internal_get__missionNodesManager();

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& __cordl_internal_get__missionNodesManager() const;

  constexpr void __cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager> value);

  /// @brief Method InstallBindings, addr 0x23cd64c, size 0x80, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MainMenuMissionInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x23cd6cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainMenuMissionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainMenuMissionInstaller(MainMenuMissionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainMenuMissionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainMenuMissionInstaller(MainMenuMissionInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainMenuMissionInstaller();

public:
  /// @brief Field _missionNodesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodesManager> ____missionNodesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainMenuMissionInstaller, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuMissionInstaller, ____missionNodesManager) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainMenuMissionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuMissionInstaller*, "", "MainMenuMissionInstaller");
