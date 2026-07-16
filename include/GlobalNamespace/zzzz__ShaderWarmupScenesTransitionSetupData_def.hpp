#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderWarmupScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
CORDL_MODULE_EXPORT(ShaderWarmupScenesTransitionSetupData)
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*, "", "ShaderWarmupScenesTransitionSetupData");
// Dependencies ScenesTransitionSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShaderWarmupScenesTransitionSetupData
class CORDL_TYPE ShaderWarmupScenesTransitionSetupData : public ::GlobalNamespace::ScenesTransitionSetupData {
public:
  // Declarations
  /// @brief Method Init, addr 0x59102d4, size 0xc4, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::ShaderWarmupSceneSetupData* shaderWarmupSceneSetupData);

  static inline ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* New_ctor();

  /// @brief Method .ctor, addr 0x5910398, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderWarmupScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderWarmupScenesTransitionSetupData(ShaderWarmupScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderWarmupScenesTransitionSetupData(ShaderWarmupScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6726 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ShaderWarmupScenesTransitionSetupData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
