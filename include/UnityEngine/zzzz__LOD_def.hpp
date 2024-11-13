#pragma once
// IWYU pragma private; include "UnityEngine/LOD.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine::LOD
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::LOD
struct CORDL_TYPE LOD {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x48235cc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t screenRelativeTransitionHeight, ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LOD();

  // Ctor Parameters [CppParam { name: "screenRelativeTransitionHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fadeTransitionWidth", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "renderers", ty: "::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>", modifiers: "", def_value: None }]
  constexpr LOD(float_t screenRelativeTransitionHeight, float_t fadeTransitionWidth, ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> renderers) noexcept;

  /// @brief Field screenRelativeTransitionHeight, offset: 0x0, size: 0x4, def value: None
  float_t screenRelativeTransitionHeight;

  /// @brief Field fadeTransitionWidth, offset: 0x4, size: 0x4, def value: None
  float_t fadeTransitionWidth;

  /// @brief Field renderers, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> renderers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10743 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LOD, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::LOD, screenRelativeTransitionHeight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LOD, fadeTransitionWidth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LOD, renderers) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LOD, "UnityEngine", "LOD");
