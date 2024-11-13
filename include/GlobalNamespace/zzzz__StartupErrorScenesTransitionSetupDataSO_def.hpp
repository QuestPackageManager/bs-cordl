#pragma once
// IWYU pragma private; include "GlobalNamespace/StartupErrorScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(StartupErrorScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class StartupErrorSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class StartupErrorScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO);
// Type: ::StartupErrorScenesTransitionSetupDataSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StartupErrorScenesTransitionSetupDataSO*
class CORDL_TYPE StartupErrorScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Method Init, addr 0x3ade408, size 0x8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::StartupErrorSceneSetupData* startupErrorSceneSetupData);

  static inline ::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x3ade410, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartupErrorScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartupErrorScenesTransitionSetupDataSO(StartupErrorScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartupErrorScenesTransitionSetupDataSO(StartupErrorScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5247 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO*, "", "StartupErrorScenesTransitionSetupDataSO");
