#pragma once
// IWYU pragma private; include "UnityEngine/LOD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LOD)
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace UnityEngine {
struct LOD;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LOD);
DEFINE_IL2CPP_CLASS(::UnityEngine::LOD, "UnityEngine", "LOD");
// [UsedByNativeCode]
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LOD
struct CORDL_TYPE LOD {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LOD();

  // Ctor Parameters [CppParam { name: "screenRelativeTransitionHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fadeTransitionWidth", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "renderers", ty: "::ArrayW<::UnityW<::UnityEngine::Renderer>>", modifiers: "", def_value: None, comment: None }]
  constexpr LOD(float_t screenRelativeTransitionHeight, float_t fadeTransitionWidth, ::ArrayW<::UnityW<::UnityEngine::Renderer>> renderers) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9796 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field screenRelativeTransitionHeight, offset: 0x0, size: 0x4, def value: None
  float_t screenRelativeTransitionHeight;

  /// @brief Field fadeTransitionWidth, offset: 0x4, size: 0x4, def value: None
  float_t fadeTransitionWidth;

  /// @brief Field renderers, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Renderer>> renderers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LOD, screenRelativeTransitionHeight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LOD, fadeTransitionWidth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LOD, renderers) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LOD) == 0x10, "Size mismatch!");

} // namespace UnityEngine
