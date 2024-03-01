#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(FontWeightPair)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct FontWeightPair;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::FontWeightPair);
// Type: UnityEngine.TextCore.Text::FontWeightPair
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::FontWeightPair
struct CORDL_TYPE FontWeightPair {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontWeightPair();

  // Ctor Parameters [CppParam { name: "regularTypeface", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None }, CppParam { name: "italicTypeface", ty:
  // "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None }]
  constexpr FontWeightPair(::UnityW<::UnityEngine::TextCore::Text::FontAsset> regularTypeface, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> italicTypeface) noexcept;

  /// @brief Field regularTypeface, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> regularTypeface;

  /// @brief Field italicTypeface, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> italicTypeface;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontWeightPair, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontWeightPair, regularTypeface) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FontWeightPair, italicTypeface) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontWeightPair, "UnityEngine.TextCore.Text", "FontWeightPair");
