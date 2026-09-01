#pragma once
// IWYU pragma private; include "GlobalNamespace\StartupErrorScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
CORDL_MODULE_EXPORT(StartupErrorScenesTransitionSetupData)
namespace GlobalNamespace {
class StartupErrorSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class StartupErrorScenesTransitionSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StartupErrorScenesTransitionSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StartupErrorScenesTransitionSetupData*, "", "StartupErrorScenesTransitionSetupData");
// Dependencies ScenesTransitionSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: StartupErrorScenesTransitionSetupData
class CORDL_TYPE StartupErrorScenesTransitionSetupData : public ::GlobalNamespace::ScenesTransitionSetupData {
public:
  // Declarations
  /// @brief Method Init, addr 0x591266c, size 0xc4, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::StartupErrorSceneSetupData* startupErrorSceneSetupData);

  static inline ::GlobalNamespace::StartupErrorScenesTransitionSetupData* New_ctor();

  /// @brief Method .ctor, addr 0x5912730, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartupErrorScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartupErrorScenesTransitionSetupData(StartupErrorScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartupErrorScenesTransitionSetupData(StartupErrorScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StartupErrorScenesTransitionSetupData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
