#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(HealthWarningScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO);
// Dependencies SingleFixedSceneScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: HealthWarningScenesTransitionSetupDataSO
class CORDL_TYPE HealthWarningScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Method Init, addr 0x3b33e80, size 0x8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::HealthWarningSceneSetupData* healthWarningSceneSetupData);

  static inline ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x3b37770, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningScenesTransitionSetupDataSO(HealthWarningScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningScenesTransitionSetupDataSO(HealthWarningScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5259 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*, "", "HealthWarningScenesTransitionSetupDataSO");
