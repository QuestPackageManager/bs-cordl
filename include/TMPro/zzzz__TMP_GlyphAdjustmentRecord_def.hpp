#pragma once
// IWYU pragma private; include "TMPro/TMP_GlyphAdjustmentRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TMP_GlyphValueRecord_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_GlyphAdjustmentRecord)
namespace TMPro {
struct TMP_GlyphValueRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAdjustmentRecord;
}
// Forward declare root types
namespace TMPro {
struct TMP_GlyphAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_GlyphAdjustmentRecord);
// Dependencies TMPro.TMP_GlyphValueRecord
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_GlyphAdjustmentRecord
struct CORDL_TYPE TMP_GlyphAdjustmentRecord {
public:
  // Declarations
  __declspec(property(get = get_glyphIndex, put = set_glyphIndex)) uint32_t glyphIndex;

  __declspec(property(get = get_glyphValueRecord, put = set_glyphValueRecord)) ::TMPro::TMP_GlyphValueRecord glyphValueRecord;

  /// @brief Method .ctor, addr 0x47d62dc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord adjustmentRecord);

  /// @brief Method .ctor, addr 0x47d3bb8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint32_t glyphIndex, ::TMPro::TMP_GlyphValueRecord glyphValueRecord);

  /// @brief Method get_glyphIndex, addr 0x47d62b4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_glyphIndex();

  /// @brief Method get_glyphValueRecord, addr 0x47d62c4, size 0xc, virtual false, abstract: false, final false
  inline ::TMPro::TMP_GlyphValueRecord get_glyphValueRecord();

  /// @brief Method set_glyphIndex, addr 0x47d62bc, size 0x8, virtual false, abstract: false, final false
  inline void set_glyphIndex(uint32_t value);

  /// @brief Method set_glyphValueRecord, addr 0x47d62d0, size 0xc, virtual false, abstract: false, final false
  inline void set_glyphValueRecord(::TMPro::TMP_GlyphValueRecord value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_GlyphAdjustmentRecord();

  // Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_GlyphValueRecord", ty: "::TMPro::TMP_GlyphValueRecord", modifiers: "",
  // def_value: None }]
  constexpr TMP_GlyphAdjustmentRecord(uint32_t m_GlyphIndex, ::TMPro::TMP_GlyphValueRecord m_GlyphValueRecord) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14495 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_GlyphIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t m_GlyphIndex;

  /// @brief Field m_GlyphValueRecord, offset: 0x4, size: 0x10, def value: None
  ::TMPro::TMP_GlyphValueRecord m_GlyphValueRecord;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_GlyphAdjustmentRecord, m_GlyphIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_GlyphAdjustmentRecord, m_GlyphValueRecord) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_GlyphAdjustmentRecord, 0x14>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphAdjustmentRecord, "TMPro", "TMP_GlyphAdjustmentRecord");
