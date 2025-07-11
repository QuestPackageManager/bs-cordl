#pragma once
// IWYU pragma private; include "TMPro/TMP_GlyphValueRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TMP_GlyphValueRecord)
namespace TMPro {
struct GlyphValueRecord_Legacy;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Forward declare root types
namespace TMPro {
struct TMP_GlyphValueRecord;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_GlyphValueRecord);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_GlyphValueRecord
struct CORDL_TYPE TMP_GlyphValueRecord {
public:
  // Declarations
  __declspec(property(get = get_xAdvance, put = set_xAdvance)) float_t xAdvance;

  __declspec(property(get = get_xPlacement, put = set_xPlacement)) float_t xPlacement;

  __declspec(property(get = get_yAdvance, put = set_yAdvance)) float_t yAdvance;

  __declspec(property(get = get_yPlacement, put = set_yPlacement)) float_t yPlacement;

  /// @brief Method .ctor, addr 0x47d6234, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::GlyphValueRecord_Legacy valueRecord);

  /// @brief Method .ctor, addr 0x47d6240, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord);

  /// @brief Method .ctor, addr 0x47d3bac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t xPlacement, float_t yPlacement, float_t xAdvance, float_t yAdvance);

  /// @brief Method get_xAdvance, addr 0x47d6214, size 0x8, virtual false, abstract: false, final false
  inline float_t get_xAdvance();

  /// @brief Method get_xPlacement, addr 0x47d61f4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_xPlacement();

  /// @brief Method get_yAdvance, addr 0x47d6224, size 0x8, virtual false, abstract: false, final false
  inline float_t get_yAdvance();

  /// @brief Method get_yPlacement, addr 0x47d6204, size 0x8, virtual false, abstract: false, final false
  inline float_t get_yPlacement();

  /// @brief Method op_Addition, addr 0x47d62a0, size 0x14, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_GlyphValueRecord op_Addition(::TMPro::TMP_GlyphValueRecord a, ::TMPro::TMP_GlyphValueRecord b);

  /// @brief Method set_xAdvance, addr 0x47d621c, size 0x8, virtual false, abstract: false, final false
  inline void set_xAdvance(float_t value);

  /// @brief Method set_xPlacement, addr 0x47d61fc, size 0x8, virtual false, abstract: false, final false
  inline void set_xPlacement(float_t value);

  /// @brief Method set_yAdvance, addr 0x47d622c, size 0x8, virtual false, abstract: false, final false
  inline void set_yAdvance(float_t value);

  /// @brief Method set_yPlacement, addr 0x47d620c, size 0x8, virtual false, abstract: false, final false
  inline void set_yPlacement(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_GlyphValueRecord();

  // Ctor Parameters [CppParam { name: "m_XPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_XAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YAdvance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TMP_GlyphValueRecord(float_t m_XPlacement, float_t m_YPlacement, float_t m_XAdvance, float_t m_YAdvance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14494 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_XPlacement, offset: 0x0, size: 0x4, def value: None
  float_t m_XPlacement;

  /// @brief Field m_YPlacement, offset: 0x4, size: 0x4, def value: None
  float_t m_YPlacement;

  /// @brief Field m_XAdvance, offset: 0x8, size: 0x4, def value: None
  float_t m_XAdvance;

  /// @brief Field m_YAdvance, offset: 0xc, size: 0x4, def value: None
  float_t m_YAdvance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_GlyphValueRecord, m_XPlacement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_GlyphValueRecord, m_YPlacement) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_GlyphValueRecord, m_XAdvance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_GlyphValueRecord, m_YAdvance) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_GlyphValueRecord, 0x10>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphValueRecord, "TMPro", "TMP_GlyphValueRecord");
