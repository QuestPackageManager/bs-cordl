#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/ScalableImage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ScalableImage)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct ScalableImage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::ScalableImage);
// Dependencies
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.ScalableImage
struct CORDL_TYPE ScalableImage {
public:
  // Declarations
  /// @brief Method ToString, addr 0x49d675c, size 0x164, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScalableImage();

  // Ctor Parameters [CppParam { name: "normalImage", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "highResolutionImage", ty:
  // "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }]
  constexpr ScalableImage(::UnityW<::UnityEngine::Texture2D> normalImage, ::UnityW<::UnityEngine::Texture2D> highResolutionImage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6450 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field normalImage, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> normalImage;

  /// @brief Field highResolutionImage, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> highResolutionImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::ScalableImage, normalImage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::ScalableImage, highResolutionImage) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::ScalableImage, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::ScalableImage, "UnityEngine.UIElements.StyleSheets", "ScalableImage");
