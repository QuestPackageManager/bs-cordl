#pragma once
// IWYU pragma private; include "TMPro/TMP_FontWeightPair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TMP_FontWeightPair)
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace TMPro {
struct TMP_FontWeightPair;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_FontWeightPair);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_FontWeightPair
struct CORDL_TYPE TMP_FontWeightPair {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_FontWeightPair();

  // Ctor Parameters [CppParam { name: "regularTypeface", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: None }, CppParam { name: "italicTypeface", ty:
  // "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: None }]
  constexpr TMP_FontWeightPair(::UnityW<::TMPro::TMP_FontAsset> regularTypeface, ::UnityW<::TMPro::TMP_FontAsset> italicTypeface) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14477 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field regularTypeface, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> regularTypeface;

  /// @brief Field italicTypeface, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_FontAsset> italicTypeface;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_FontWeightPair, regularTypeface) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_FontWeightPair, italicTypeface) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontWeightPair, 0x10>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontWeightPair, "TMPro", "TMP_FontWeightPair");
