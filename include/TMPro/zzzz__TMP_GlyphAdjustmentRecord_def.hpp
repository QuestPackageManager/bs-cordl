#pragma once
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
// Type: TMPro::TMP_GlyphAdjustmentRecord
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12300))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12301))
// CS Name: ::TMPro::TMP_GlyphAdjustmentRecord
struct CORDL_TYPE TMP_GlyphAdjustmentRecord {
public:
  // Declarations
  __declspec(property(get = get_glyphIndex, put = set_glyphIndex)) uint32_t glyphIndex;

  __declspec(property(get = get_glyphValueRecord, put = set_glyphValueRecord))::TMPro::TMP_GlyphValueRecord glyphValueRecord;

  /// @brief Method get_glyphIndex addr 0x2a8d470 size 0x8 virtual false final false
  inline uint32_t get_glyphIndex();

  /// @brief Method set_glyphIndex addr 0x2a8d478 size 0x8 virtual false final false
  inline void set_glyphIndex(uint32_t value);

  /// @brief Method get_glyphValueRecord addr 0x2a8d480 size 0xc virtual false final false
  inline ::TMPro::TMP_GlyphValueRecord get_glyphValueRecord();

  /// @brief Method set_glyphValueRecord addr 0x2a8d48c size 0xc virtual false final false
  inline void set_glyphValueRecord(::TMPro::TMP_GlyphValueRecord value);

  /// @brief Method .ctor addr 0x2a8accc size 0x10 virtual false final false
  inline void _ctor(uint32_t glyphIndex, ::TMPro::TMP_GlyphValueRecord glyphValueRecord);

  /// @brief Method .ctor addr 0x2a8d498 size 0x54 virtual false final false
  inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord adjustmentRecord);

  // Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_GlyphValueRecord", ty: "::TMPro::TMP_GlyphValueRecord", modifiers: "",
  // def_value: None }]
  constexpr TMP_GlyphAdjustmentRecord(uint32_t m_GlyphIndex, ::TMPro::TMP_GlyphValueRecord m_GlyphValueRecord) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_GlyphAdjustmentRecord();

  /// @brief Field m_GlyphIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t m_GlyphIndex;

  /// @brief Field m_GlyphValueRecord, offset: 0x4, size: 0x10, def value: None
  ::TMPro::TMP_GlyphValueRecord m_GlyphValueRecord;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_GlyphAdjustmentRecord, 0x14>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_GlyphAdjustmentRecord, m_GlyphIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_GlyphAdjustmentRecord, m_GlyphValueRecord) == 0x4, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphAdjustmentRecord, "TMPro", "TMP_GlyphAdjustmentRecord");
