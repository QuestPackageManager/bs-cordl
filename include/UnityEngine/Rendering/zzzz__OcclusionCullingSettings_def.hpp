#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionCullingSettings)
namespace UnityEngine::Rendering {
struct OcclusionTest;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct OcclusionCullingSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingSettings);
// Dependencies UnityEngine.Rendering.OcclusionTest
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingSettings
struct CORDL_TYPE OcclusionCullingSettings {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x665f4a0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t viewInstanceID, ::UnityEngine::Rendering::OcclusionTest occlusionTest);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingSettings();

  // Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "occlusionTest", ty: "::UnityEngine::Rendering::OcclusionTest", modifiers:
  // "", def_value: None }, CppParam { name: "instanceMultiplier", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OcclusionCullingSettings(int32_t viewInstanceID, ::UnityEngine::Rendering::OcclusionTest occlusionTest, int32_t instanceMultiplier) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17602 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field viewInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t viewInstanceID;

  /// @brief Field occlusionTest, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::OcclusionTest occlusionTest;

  /// @brief Field instanceMultiplier, offset: 0x8, size: 0x4, def value: None
  int32_t instanceMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingSettings, viewInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingSettings, occlusionTest) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingSettings, instanceMultiplier) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingSettings, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingSettings, "UnityEngine.Rendering", "OcclusionCullingSettings");
