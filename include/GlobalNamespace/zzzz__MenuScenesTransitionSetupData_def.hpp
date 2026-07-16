#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
CORDL_MODULE_EXPORT(MenuScenesTransitionSetupData)
// Forward declare root types
namespace GlobalNamespace {
class MenuScenesTransitionSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenuScenesTransitionSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuScenesTransitionSetupData*, "", "MenuScenesTransitionSetupData");
// Dependencies ScenesTransitionSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuScenesTransitionSetupData
class CORDL_TYPE MenuScenesTransitionSetupData : public ::GlobalNamespace::ScenesTransitionSetupData {
public:
  // Declarations
  /// @brief Method Init, addr 0x590d81c, size 0xc0, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::MenuScenesTransitionSetupData* New_ctor();

  /// @brief Method .ctor, addr 0x590d8dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuScenesTransitionSetupData(MenuScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuScenesTransitionSetupData(MenuScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6717 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MenuScenesTransitionSetupData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
