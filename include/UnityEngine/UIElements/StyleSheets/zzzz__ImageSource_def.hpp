#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ImageSource)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct ImageSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::ImageSource);
// Type: UnityEngine.UIElements.StyleSheets::ImageSource
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7549))
// CS Name: ::UnityEngine.UIElements.StyleSheets::ImageSource
struct CORDL_TYPE ImageSource {
public:
  // Declarations
  /// @brief Method IsNull addr 0x2c7fc0c size 0xe8 virtual false final false
  inline bool IsNull();

  // Ctor Parameters [CppParam { name: "texture", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: None }, CppParam { name: "sprite", ty: "::UnityEngine::Sprite*", modifiers: "", def_value:
  // None }, CppParam { name: "vectorImage", ty: "::UnityEngine::UIElements::VectorImage*", modifiers: "", def_value: None }, CppParam { name: "renderTexture", ty: "::UnityEngine::RenderTexture*",
  // modifiers: "", def_value: None }]
  constexpr ImageSource(::UnityEngine::Texture2D* texture, ::UnityEngine::Sprite* sprite, ::UnityEngine::UIElements::VectorImage* vectorImage, ::UnityEngine::RenderTexture* renderTexture) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageSource();

  /// @brief Field texture, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Texture2D* texture;

  /// @brief Field sprite, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Sprite* sprite;

  /// @brief Field vectorImage, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VectorImage* vectorImage;

  /// @brief Field renderTexture, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* renderTexture;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::ImageSource, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::ImageSource, texture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::ImageSource, sprite) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::ImageSource, vectorImage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::ImageSource, renderTexture) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::ImageSource, "UnityEngine.UIElements.StyleSheets", "ImageSource");
