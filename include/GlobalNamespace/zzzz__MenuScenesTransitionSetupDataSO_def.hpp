#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(MenuScenesTransitionSetupDataSO)
// Forward declare root types
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuScenesTransitionSetupDataSO);
// Type: ::MenuScenesTransitionSetupDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuScenesTransitionSetupDataSO*
class CORDL_TYPE MenuScenesTransitionSetupDataSO : public ::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x10713c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuScenesTransitionSetupDataSO(MenuScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuScenesTransitionSetupDataSO(MenuScenesTransitionSetupDataSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuScenesTransitionSetupDataSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuScenesTransitionSetupDataSO*, "", "MenuScenesTransitionSetupDataSO");
