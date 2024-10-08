#pragma once
// IWYU pragma private; include "TMPro/GlyphValueRecord_Legacy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GlyphValueRecord_Legacy)
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Forward declare root types
namespace TMPro {
struct GlyphValueRecord_Legacy;
}
// Write type traits
MARK_VAL_T(::TMPro::GlyphValueRecord_Legacy);
// Type: TMPro::GlyphValueRecord_Legacy
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::GlyphValueRecord_Legacy
struct CORDL_TYPE GlyphValueRecord_Legacy {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x475d3b4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord);

  /// @brief Method op_Addition, addr 0x475d414, size 0x14, virtual false, abstract: false, final false
  static inline ::TMPro::GlyphValueRecord_Legacy op_Addition(::TMPro::GlyphValueRecord_Legacy a, ::TMPro::GlyphValueRecord_Legacy b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphValueRecord_Legacy();

  // Ctor Parameters [CppParam { name: "xPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yAdvance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr GlyphValueRecord_Legacy(float_t xPlacement, float_t yPlacement, float_t xAdvance, float_t yAdvance) noexcept;

  /// @brief Field xPlacement, offset: 0x0, size: 0x4, def value: None
  float_t xPlacement;

  /// @brief Field yPlacement, offset: 0x4, size: 0x4, def value: None
  float_t yPlacement;

  /// @brief Field xAdvance, offset: 0x8, size: 0x4, def value: None
  float_t xAdvance;

  /// @brief Field yAdvance, offset: 0xc, size: 0x4, def value: None
  float_t yAdvance;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14438 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::GlyphValueRecord_Legacy, 0x10>, "Size mismatch!");

static_assert(offsetof(::TMPro::GlyphValueRecord_Legacy, xPlacement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::GlyphValueRecord_Legacy, yPlacement) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::GlyphValueRecord_Legacy, xAdvance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::GlyphValueRecord_Legacy, yAdvance) == 0xc, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::GlyphValueRecord_Legacy, "TMPro", "GlyphValueRecord_Legacy");
