#pragma once
// IWYU pragma private; include "TMPro\GlyphPairKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphPairKey)
namespace TMPro {
class TMP_GlyphPairAdjustmentRecord;
}
// Forward declare root types
namespace TMPro {
struct GlyphPairKey;
}
// Write type traits
MARK_VAL_T(::TMPro::GlyphPairKey);
DEFINE_IL2CPP_CLASS(::TMPro::GlyphPairKey, "TMPro", "GlyphPairKey");
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.GlyphPairKey
struct CORDL_TYPE GlyphPairKey {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x695f018, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex);

  /// @brief Method .ctor, addr 0x695f028, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::TMP_GlyphPairAdjustmentRecord* record);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphPairKey();

  // Ctor Parameters [CppParam { name: "firstGlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "secondGlyphIndex", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GlyphPairKey(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex, uint32_t key) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15934 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field firstGlyphIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t firstGlyphIndex;

  /// @brief Field secondGlyphIndex, offset: 0x4, size: 0x4, def value: None
  uint32_t secondGlyphIndex;

  /// @brief Field key, offset: 0x8, size: 0x4, def value: None
  uint32_t key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::GlyphPairKey, firstGlyphIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::GlyphPairKey, secondGlyphIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::GlyphPairKey, key) == 0x8, "Offset mismatch!");

static_assert(sizeof(::TMPro::GlyphPairKey) == 0xc, "Size mismatch!");

} // namespace TMPro
