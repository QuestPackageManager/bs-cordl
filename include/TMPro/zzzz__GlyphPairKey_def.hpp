#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
// Type: TMPro::GlyphPairKey
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12273))
// CS Name: ::TMPro::GlyphPairKey
struct CORDL_TYPE GlyphPairKey {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2c0ee0c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex);

  /// @brief Method .ctor, addr 0x2c06790, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::TMP_GlyphPairAdjustmentRecord* record);

  // Ctor Parameters [CppParam { name: "firstGlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "secondGlyphIndex", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GlyphPairKey(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex, uint32_t key) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphPairKey();

  /// @brief Field firstGlyphIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t firstGlyphIndex;

  /// @brief Field secondGlyphIndex, offset: 0x4, size: 0x4, def value: None
  uint32_t secondGlyphIndex;

  /// @brief Field key, offset: 0x8, size: 0x4, def value: None
  uint32_t key;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::GlyphPairKey, 0xc>, "Size mismatch!");

static_assert(offsetof(::TMPro::GlyphPairKey, firstGlyphIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::GlyphPairKey, secondGlyphIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::GlyphPairKey, key) == 0x8, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::GlyphPairKey, "TMPro", "GlyphPairKey");
