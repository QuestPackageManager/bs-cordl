#pragma once
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
// Type: ::AppInitScenesTransitionSetupDataContainerSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6060))
// CS Name: ::AppInitScenesTransitionSetupDataContainerSO*
class CORDL_TYPE AppInitScenesTransitionSetupDataContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field appInitScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get_appInitScenesTransitionSetupData,
                      put = __set_appInitScenesTransitionSetupData))::GlobalNamespace::AppInitScenesTransitionSetupDataSO* appInitScenesTransitionSetupData;

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO*& __get_appInitScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*> const& __get_appInitScenesTransitionSetupData() const;

  constexpr void __set_appInitScenesTransitionSetupData(::GlobalNamespace::AppInitScenesTransitionSetupDataSO* value);

  static inline ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* New_ctor();

  /// @brief Method .ctor, addr 0x231ce94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataContainerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitScenesTransitionSetupDataContainerSO(AppInitScenesTransitionSetupDataContainerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataContainerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitScenesTransitionSetupDataContainerSO(AppInitScenesTransitionSetupDataContainerSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitScenesTransitionSetupDataContainerSO();

public:
  /// @brief Field appInitScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupDataSO* ___appInitScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, ___appInitScenesTransitionSetupData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, "", "AppInitScenesTransitionSetupDataContainerSO");
