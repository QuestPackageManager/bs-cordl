#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(ShaderWarmupScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO);
// Type: ::ShaderWarmupScenesTransitionSetupDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShaderWarmupScenesTransitionSetupDataSO*
class CORDL_TYPE ShaderWarmupScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Method Init, addr 0x241a6f8, size 0x8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::ShaderWarmupSceneSetupData* shaderWarmupSceneSetupData);

  static inline ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x241a700, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderWarmupScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderWarmupScenesTransitionSetupDataSO(ShaderWarmupScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderWarmupScenesTransitionSetupDataSO(ShaderWarmupScenesTransitionSetupDataSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*, "", "ShaderWarmupScenesTransitionSetupDataSO");
