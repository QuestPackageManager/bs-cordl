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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12362))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12363))
// CS Name: ::TMPro::KerningPair*
class CORDL_TYPE KerningPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_FirstGlyph, offset 0x10, size 0x4
  __declspec(property(get = __get_m_FirstGlyph, put = __set_m_FirstGlyph)) uint32_t m_FirstGlyph;

  /// @brief Field m_FirstGlyphAdjustments, offset 0x14, size 0x10
  __declspec(property(get = __get_m_FirstGlyphAdjustments, put = __set_m_FirstGlyphAdjustments))::TMPro::GlyphValueRecord_Legacy m_FirstGlyphAdjustments;

  /// @brief Field m_SecondGlyph, offset 0x24, size 0x4
  __declspec(property(get = __get_m_SecondGlyph, put = __set_m_SecondGlyph)) uint32_t m_SecondGlyph;

  /// @brief Field m_SecondGlyphAdjustments, offset 0x28, size 0x10
  __declspec(property(get = __get_m_SecondGlyphAdjustments, put = __set_m_SecondGlyphAdjustments))::TMPro::GlyphValueRecord_Legacy m_SecondGlyphAdjustments;

  /// @brief Field xOffset, offset 0x38, size 0x4
  __declspec(property(get = __get_xOffset, put = __set_xOffset)) float_t xOffset;

  /// @brief Field m_IgnoreSpacingAdjustments, offset 0x3c, size 0x1
  __declspec(property(get = __get_m_IgnoreSpacingAdjustments, put = __set_m_IgnoreSpacingAdjustments)) bool m_IgnoreSpacingAdjustments;

  /// @brief Field empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_empty, put = setStaticF_empty))::TMPro::KerningPair* empty;

  __declspec(property(get = get_firstGlyph, put = set_firstGlyph)) uint32_t firstGlyph;

  __declspec(property(get = get_firstGlyphAdjustments))::TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments;

  __declspec(property(get = get_secondGlyph, put = set_secondGlyph)) uint32_t secondGlyph;

  __declspec(property(get = get_secondGlyphAdjustments))::TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments;

  __declspec(property(get = get_ignoreSpacingAdjustments)) bool ignoreSpacingAdjustments;

  constexpr uint32_t& __get_m_FirstGlyph();

  constexpr uint32_t const& __get_m_FirstGlyph() const;

  constexpr void __set_m_FirstGlyph(uint32_t value);

  constexpr ::TMPro::GlyphValueRecord_Legacy& __get_m_FirstGlyphAdjustments();

  constexpr ::TMPro::GlyphValueRecord_Legacy const& __get_m_FirstGlyphAdjustments() const;

  constexpr void __set_m_FirstGlyphAdjustments(::TMPro::GlyphValueRecord_Legacy value);

  constexpr uint32_t& __get_m_SecondGlyph();

  constexpr uint32_t const& __get_m_SecondGlyph() const;

  constexpr void __set_m_SecondGlyph(uint32_t value);

  constexpr ::TMPro::GlyphValueRecord_Legacy& __get_m_SecondGlyphAdjustments();

  constexpr ::TMPro::GlyphValueRecord_Legacy const& __get_m_SecondGlyphAdjustments() const;

  constexpr void __set_m_SecondGlyphAdjustments(::TMPro::GlyphValueRecord_Legacy value);

  constexpr float_t& __get_xOffset();

  constexpr float_t const& __get_xOffset() const;

  constexpr void __set_xOffset(float_t value);

  constexpr bool& __get_m_IgnoreSpacingAdjustments();

  constexpr bool const& __get_m_IgnoreSpacingAdjustments() const;

  constexpr void __set_m_IgnoreSpacingAdjustments(bool value);

  static inline void setStaticF_empty(::TMPro::KerningPair* value);

  static inline ::TMPro::KerningPair* getStaticF_empty();

  /// @brief Method get_firstGlyph addr 0x2c1036c size 0x8 virtual false final false
  inline uint32_t get_firstGlyph();

  /// @brief Method set_firstGlyph addr 0x2c10374 size 0x8 virtual false final false
  inline void set_firstGlyph(uint32_t value);

  /// @brief Method get_firstGlyphAdjustments addr 0x2c1037c size 0xc virtual false final false
  inline ::TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments();

  /// @brief Method get_secondGlyph addr 0x2c10388 size 0x8 virtual false final false
  inline uint32_t get_secondGlyph();

  /// @brief Method set_secondGlyph addr 0x2c10390 size 0x8 virtual false final false
  inline void set_secondGlyph(uint32_t value);

  /// @brief Method get_secondGlyphAdjustments addr 0x2c10398 size 0xc virtual false final false
  inline ::TMPro::GlyphValueRecord_Legacy get_secondGlyphAdjustments();

  /// @brief Method get_ignoreSpacingAdjustments addr 0x2c103a4 size 0x8 virtual false final false
  inline bool get_ignoreSpacingAdjustments();

  static inline ::TMPro::KerningPair* New_ctor();

  /// @brief Method .ctor addr 0x2c103ac size 0x24 virtual false final false
  inline void _ctor();

  static inline ::TMPro::KerningPair* New_ctor(uint32_t left, uint32_t right, float_t offset);

  /// @brief Method .ctor addr 0x2c103d0 size 0x40 virtual false final false
  inline void _ctor(uint32_t left, uint32_t right, float_t offset);

  static inline ::TMPro::KerningPair* New_ctor(uint32_t firstGlyph, ::TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint32_t secondGlyph,
                                               ::TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments);

  /// @brief Method .ctor addr 0x2c10410 size 0x80 virtual false final false
  inline void _ctor(uint32_t firstGlyph, ::TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint32_t secondGlyph, ::TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments);

  /// @brief Method ConvertLegacyKerningData addr 0x2c10490 size 0xc virtual false final false
  inline void ConvertLegacyKerningData();

  // Ctor Parameters [CppParam { name: "", ty: "KerningPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KerningPair(KerningPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KerningPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KerningPair(KerningPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KerningPair();

public:
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

} // namespace TMPro
NEED_NO_BOX(::TMPro::KerningPair);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::KerningPair*, "TMPro", "KerningPair");
