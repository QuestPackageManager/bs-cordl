#pragma once
// IWYU pragma private; include "GlobalNamespace\HealthWarningScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
CORDL_MODULE_EXPORT(HealthWarningScenesTransitionSetupData)
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HealthWarningScenesTransitionSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HealthWarningScenesTransitionSetupData*, "", "HealthWarningScenesTransitionSetupData");
// Dependencies ScenesTransitionSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: HealthWarningScenesTransitionSetupData
class CORDL_TYPE HealthWarningScenesTransitionSetupData : public ::GlobalNamespace::ScenesTransitionSetupData {
public:
  // Declarations
  /// @brief Method Init, addr 0x590ebec, size 0xc4, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::HealthWarningSceneSetupData* healthWarningSceneSetupData);

  static inline ::GlobalNamespace::HealthWarningScenesTransitionSetupData* New_ctor();

  /// @brief Method .ctor, addr 0x590ecb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningScenesTransitionSetupData(HealthWarningScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningScenesTransitionSetupData(HealthWarningScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6738 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HealthWarningScenesTransitionSetupData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
