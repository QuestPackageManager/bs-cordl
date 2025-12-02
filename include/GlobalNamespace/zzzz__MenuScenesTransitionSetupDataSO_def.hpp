#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(MenuScenesTransitionSetupDataSO)
// Forward declare root types
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuScenesTransitionSetupDataSO);
// Dependencies ScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuScenesTransitionSetupDataSO
class CORDL_TYPE MenuScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Method Init, addr 0x57201b4, size 0xc0, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::MenuScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x5720274, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuScenesTransitionSetupDataSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuScenesTransitionSetupDataSO*, "", "MenuScenesTransitionSetupDataSO");
