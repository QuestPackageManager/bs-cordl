#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__GlyphValueRecord_Legacy_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KerningPair)
namespace TMPro {
struct GlyphValueRecord_Legacy;
}
// Forward declare root types
namespace TMPro {
class KerningPair;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::KerningPair);
// Type: TMPro::KerningPair
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 61, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::KerningPair*
class CORDL_TYPE KerningPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_empty, put = setStaticF_empty))::TMPro::KerningPair* empty;

  __declspec(property(get = get_firstGlyph, put = set_firstGlyph)) uint32_t firstGlyph;

  __declspec(property(get = get_firstGlyphAdjustments))::TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments;

  __declspec(property(get = get_ignoreSpacingAdjustments)) bool ignoreSpacingAdjustments;

  /// @brief Field m_FirstGlyph, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FirstGlyph, put = __cordl_internal_set_m_FirstGlyph)) uint32_t m_FirstGlyph;

  /// @brief Field m_FirstGlyphAdjustments, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_m_FirstGlyphAdjustments, put = __cordl_internal_set_m_FirstGlyphAdjustments))::TMPro::GlyphValueRecord_Legacy m_FirstGlyphAdjustments;

  /// @brief Field m_IgnoreSpacingAdjustments, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreSpacingAdjustments, put = __cordl_internal_set_m_IgnoreSpacingAdjustments)) bool m_IgnoreSpacingAdjustments;

  /// @brief Field m_SecondGlyph, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SecondGlyph, put = __cordl_internal_set_m_SecondGlyph)) uint32_t m_SecondGlyph;

  /// @brief Field m_SecondGlyphAdjustments, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_SecondGlyphAdjustments, put = __cordl_internal_set_m_SecondGlyphAdjustments))::TMPro::GlyphValueRecord_Legacy m_SecondGlyphAdjustments;

  __declspec(property(get = get_secondGlyph, put = set_secondGlyph)) uint32_t secondGlyph;

  __declspec(property(get = get_secondGlyphAdjustments))::TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments;

  /// @brief Field xOffset, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_xOffset, put = __cordl_internal_set_xOffset)) float_t xOffset;

  /// @brief Method ConvertLegacyKerningData, addr 0x334483c, size 0xc, virtual false, abstract: false, final false
  inline void ConvertLegacyKerningData();

  static inline ::TMPro::KerningPair* New_ctor();

  static inline ::TMPro::KerningPair* New_ctor(uint32_t firstGlyph, ::TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint32_t secondGlyph,
                                               ::TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments);

  static inline ::TMPro::KerningPair* New_ctor(uint32_t left, uint32_t right, float_t offset);

  constexpr uint32_t const& __cordl_internal_get_m_FirstGlyph() const;

  constexpr uint32_t& __cordl_internal_get_m_FirstGlyph();

  constexpr ::TMPro::GlyphValueRecord_Legacy const& __cordl_internal_get_m_FirstGlyphAdjustments() const;

  constexpr ::TMPro::GlyphValueRecord_Legacy& __cordl_internal_get_m_FirstGlyphAdjustments();

  constexpr bool const& __cordl_internal_get_m_IgnoreSpacingAdjustments() const;

  constexpr bool& __cordl_internal_get_m_IgnoreSpacingAdjustments();

  constexpr uint32_t const& __cordl_internal_get_m_SecondGlyph() const;

  constexpr uint32_t& __cordl_internal_get_m_SecondGlyph();

  constexpr ::TMPro::GlyphValueRecord_Legacy const& __cordl_internal_get_m_SecondGlyphAdjustments() const;

  constexpr ::TMPro::GlyphValueRecord_Legacy& __cordl_internal_get_m_SecondGlyphAdjustments();

  constexpr float_t const& __cordl_internal_get_xOffset() const;

  constexpr float_t& __cordl_internal_get_xOffset();

  constexpr void __cordl_internal_set_m_FirstGlyph(uint32_t value);

  constexpr void __cordl_internal_set_m_FirstGlyphAdjustments(::TMPro::GlyphValueRecord_Legacy value);

  constexpr void __cordl_internal_set_m_IgnoreSpacingAdjustments(bool value);

  constexpr void __cordl_internal_set_m_SecondGlyph(uint32_t value);

  constexpr void __cordl_internal_set_m_SecondGlyphAdjustments(::TMPro::GlyphValueRecord_Legacy value);

  constexpr void __cordl_internal_set_xOffset(float_t value);

  /// @brief Method .ctor, addr 0x3344758, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x33447bc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(uint32_t firstGlyph, ::TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint32_t secondGlyph, ::TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments);

  /// @brief Method .ctor, addr 0x334477c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(uint32_t left, uint32_t right, float_t offset);

  static inline ::TMPro::KerningPair* getStaticF_empty();

  /// @brief Method get_firstGlyph, addr 0x3344718, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_firstGlyph();

  /// @brief Method get_firstGlyphAdjustments, addr 0x3344728, size 0xc, virtual false, abstract: false, final false
  inline ::TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments();

  /// @brief Method get_ignoreSpacingAdjustments, addr 0x3344750, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreSpacingAdjustments();

  /// @brief Method get_secondGlyph, addr 0x3344734, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_secondGlyph();

  /// @brief Method get_secondGlyphAdjustments, addr 0x3344744, size 0xc, virtual false, abstract: false, final false
  inline ::TMPro::GlyphValueRecord_Legacy get_secondGlyphAdjustments();

  static inline void setStaticF_empty(::TMPro::KerningPair* value);

  /// @brief Method set_firstGlyph, addr 0x3344720, size 0x8, virtual false, abstract: false, final false
  inline void set_firstGlyph(uint32_t value);

  /// @brief Method set_secondGlyph, addr 0x334473c, size 0x8, virtual false, abstract: false, final false
  inline void set_secondGlyph(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KerningPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KerningPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KerningPair(KerningPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KerningPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KerningPair(KerningPair const&) = delete;

  /// @brief Field m_FirstGlyph, offset: 0x10, size: 0x4, def value: None
  uint32_t ___m_FirstGlyph;

  /// @brief Field m_FirstGlyphAdjustments, offset: 0x14, size: 0x10, def value: None
  ::TMPro::GlyphValueRecord_Legacy ___m_FirstGlyphAdjustments;

  /// @brief Field m_SecondGlyph, offset: 0x24, size: 0x4, def value: None
  uint32_t ___m_SecondGlyph;

  /// @brief Field m_SecondGlyphAdjustments, offset: 0x28, size: 0x10, def value: None
  ::TMPro::GlyphValueRecord_Legacy ___m_SecondGlyphAdjustments;

  /// @brief Field xOffset, offset: 0x38, size: 0x4, def value: None
  float_t ___xOffset;

  /// @brief Field m_IgnoreSpacingAdjustments, offset: 0x3c, size: 0x1, def value: None
  bool ___m_IgnoreSpacingAdjustments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::KerningPair, 0x40>, "Size mismatch!");

static_assert(offsetof(::TMPro::KerningPair, ___m_FirstGlyph) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::KerningPair, ___m_FirstGlyphAdjustments) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TMPro::KerningPair, ___m_SecondGlyph) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::KerningPair, ___m_SecondGlyphAdjustments) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::KerningPair, ___xOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::KerningPair, ___m_IgnoreSpacingAdjustments) == 0x3c, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::KerningPair);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::KerningPair*, "TMPro", "KerningPair");
