#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PostProcessParams)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct PostProcessParams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::PostProcessParams);
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessParams
struct CORDL_TYPE PostProcessParams {
public:
  // Declarations
  /// @brief Method Create, addr 0x66f2d00, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::PostProcessParams Create();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessParams();

  // Ctor Parameters [CppParam { name: "blitMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "requestColorFormat", ty:
  // "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }]
  constexpr PostProcessParams(::UnityW<::UnityEngine::Material> blitMaterial, ::UnityEngine::Experimental::Rendering::GraphicsFormat requestColorFormat) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12868 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field blitMaterial, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> blitMaterial;

  /// @brief Field requestColorFormat, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat requestColorFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessParams, blitMaterial) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessParams, requestColorFormat) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessParams, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessParams, "UnityEngine.Rendering.Universal", "PostProcessParams");
