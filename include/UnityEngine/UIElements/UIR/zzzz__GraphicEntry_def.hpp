#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/GraphicEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GraphicEntry)
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct GraphicEntry;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::GraphicEntry);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::GraphicEntry, "UnityEngine.UIElements.UIR", "GraphicEntry");
// Dependencies UnityEngine.UIElements.TextureId
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.GraphicEntry
struct CORDL_TYPE GraphicEntry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicEntry();

  // Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "actual", ty:
  // "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None, comment: None }, CppParam { name: "replaced", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "vectorImage", ty: "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: None, comment: None }]
  constexpr GraphicEntry(::UnityW<::UnityEngine::Texture> source, ::UnityEngine::UIElements::TextureId actual, bool replaced, ::UnityW<::UnityEngine::UIElements::VectorImage> vectorImage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5437 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field source, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> source;

  /// @brief Field actual, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId actual;

  /// @brief Field replaced, offset: 0xc, size: 0x1, def value: None
  bool replaced;

  /// @brief Field vectorImage, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VectorImage> vectorImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::GraphicEntry, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GraphicEntry, actual) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GraphicEntry, replaced) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GraphicEntry, vectorImage) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::GraphicEntry) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
