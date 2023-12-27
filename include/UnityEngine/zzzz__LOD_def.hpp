#pragma once
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10090))
// CS Name: ::UnityEngine::LOD
struct CORDL_TYPE LOD {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2cb70f4 size 0x10 virtual false final false
  inline void _ctor(float_t screenRelativeTransitionHeight, ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers);

  // Ctor Parameters [CppParam { name: "screenRelativeTransitionHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fadeTransitionWidth", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "renderers", ty: "::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>", modifiers: "", def_value: None }]
  constexpr LOD(float_t screenRelativeTransitionHeight, float_t fadeTransitionWidth, ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LOD();

  /// @brief Field screenRelativeTransitionHeight, offset: 0x0, size: 0x4, def value: None
  float_t screenRelativeTransitionHeight;

  /// @brief Field fadeTransitionWidth, offset: 0x4, size: 0x4, def value: None
  float_t fadeTransitionWidth;

  /// @brief Field renderers, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> renderers;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LOD, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LOD, "UnityEngine", "LOD");
