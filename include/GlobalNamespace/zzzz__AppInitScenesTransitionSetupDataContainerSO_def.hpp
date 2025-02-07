#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitScenesTransitionSetupDataContainerSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AppInitScenesTransitionSetupDataContainerSO)
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppInitScenesTransitionSetupDataContainerSO
class CORDL_TYPE AppInitScenesTransitionSetupDataContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field appInitScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_appInitScenesTransitionSetupData,
                      put = __cordl_internal_set_appInitScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO>
      appInitScenesTransitionSetupData;

  static inline ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO> const& __cordl_internal_get_appInitScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO>& __cordl_internal_get_appInitScenesTransitionSetupData();

  constexpr void __cordl_internal_set_appInitScenesTransitionSetupData(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3b40bf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitScenesTransitionSetupDataContainerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataContainerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitScenesTransitionSetupDataContainerSO(AppInitScenesTransitionSetupDataContainerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataContainerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitScenesTransitionSetupDataContainerSO(AppInitScenesTransitionSetupDataContainerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5251 };

  /// @brief Field appInitScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO> ___appInitScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, ___appInitScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, "", "AppInitScenesTransitionSetupDataContainerSO");
