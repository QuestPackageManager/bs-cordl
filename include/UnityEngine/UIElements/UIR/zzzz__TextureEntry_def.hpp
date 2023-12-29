#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TextureEntry)
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::TextureEntry);
// Type: UnityEngine.UIElements.UIR::TextureEntry
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7484))
// CS Name: ::UnityEngine.UIElements.UIR::TextureEntry
struct CORDL_TYPE TextureEntry {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name: "actual", ty: "::UnityEngine::UIElements::TextureId", modifiers: "",
  // def_value: None }, CppParam { name: "replaced", ty: "bool", modifiers: "", def_value: None }]
  constexpr TextureEntry(::UnityEngine::Texture* source, ::UnityEngine::UIElements::TextureId actual, bool replaced) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureEntry();

  /// @brief Field source, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Texture* source;

  /// @brief Field actual, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId actual;

  /// @brief Field replaced, offset: 0xc, size: 0x1, def value: None
  bool replaced;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TextureEntry, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureEntry, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureEntry, actual) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureEntry, replaced) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextureEntry, "UnityEngine.UIElements.UIR", "TextureEntry");
