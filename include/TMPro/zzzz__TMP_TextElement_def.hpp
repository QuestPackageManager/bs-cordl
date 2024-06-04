#pragma once
// IWYU pragma private; include "TMPro/TMP_TextElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextElementType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextElement)
namespace TMPro {
class TMP_Asset;
}
namespace TMPro {
struct TextElementType;
}
namespace UnityEngine::TextCore {
class Glyph;
}
// Forward declare root types
namespace TMPro {
class TMP_TextElement;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_TextElement);
// Type: TMPro::TMP_TextElement
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_TextElement*
class CORDL_TYPE TMP_TextElement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_elementType))::TMPro::TextElementType elementType;

  __declspec(property(get = get_glyph, put = set_glyph))::UnityEngine::TextCore::Glyph* glyph;

  __declspec(property(get = get_glyphIndex, put = set_glyphIndex)) uint32_t glyphIndex;

  /// @brief Field m_ElementType, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ElementType, put = __cordl_internal_set_m_ElementType))::TMPro::TextElementType m_ElementType;

  /// @brief Field m_Glyph, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Glyph, put = __cordl_internal_set_m_Glyph))::UnityEngine::TextCore::Glyph* m_Glyph;

  /// @brief Field m_GlyphIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GlyphIndex, put = __cordl_internal_set_m_GlyphIndex)) uint32_t m_GlyphIndex;

  /// @brief Field m_Scale, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Scale, put = __cordl_internal_set_m_Scale)) float_t m_Scale;

  /// @brief Field m_TextAsset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextAsset, put = __cordl_internal_set_m_TextAsset))::UnityW<::TMPro::TMP_Asset> m_TextAsset;

  /// @brief Field m_Unicode, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Unicode, put = __cordl_internal_set_m_Unicode)) uint32_t m_Unicode;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  __declspec(property(get = get_textAsset, put = set_textAsset))::UnityW<::TMPro::TMP_Asset> textAsset;

  __declspec(property(get = get_unicode, put = set_unicode)) uint32_t unicode;

  static inline ::TMPro::TMP_TextElement* New_ctor();

  constexpr ::TMPro::TextElementType const& __cordl_internal_get_m_ElementType() const;

  constexpr ::TMPro::TextElementType& __cordl_internal_get_m_ElementType();

  constexpr ::UnityEngine::TextCore::Glyph*& __cordl_internal_get_m_Glyph();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Glyph*> const& __cordl_internal_get_m_Glyph() const;

  constexpr uint32_t const& __cordl_internal_get_m_GlyphIndex() const;

  constexpr uint32_t& __cordl_internal_get_m_GlyphIndex();

  constexpr float_t const& __cordl_internal_get_m_Scale() const;

  constexpr float_t& __cordl_internal_get_m_Scale();

  constexpr ::UnityW<::TMPro::TMP_Asset> const& __cordl_internal_get_m_TextAsset() const;

  constexpr ::UnityW<::TMPro::TMP_Asset>& __cordl_internal_get_m_TextAsset();

  constexpr uint32_t const& __cordl_internal_get_m_Unicode() const;

  constexpr uint32_t& __cordl_internal_get_m_Unicode();

  constexpr void __cordl_internal_set_m_ElementType(::TMPro::TextElementType value);

  constexpr void __cordl_internal_set_m_Glyph(::UnityEngine::TextCore::Glyph* value);

  constexpr void __cordl_internal_set_m_GlyphIndex(uint32_t value);

  constexpr void __cordl_internal_set_m_Scale(float_t value);

  constexpr void __cordl_internal_set_m_TextAsset(::UnityW<::TMPro::TMP_Asset> value);

  constexpr void __cordl_internal_set_m_Unicode(uint32_t value);

  /// @brief Method .ctor, addr 0x33a3fb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_elementType, addr 0x33a74f0, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TextElementType get_elementType();

  /// @brief Method get_glyph, addr 0x33a7518, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Glyph* get_glyph();

  /// @brief Method get_glyphIndex, addr 0x33a7528, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_glyphIndex();

  /// @brief Method get_scale, addr 0x33a7538, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scale();

  /// @brief Method get_textAsset, addr 0x33a7508, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Asset> get_textAsset();

  /// @brief Method get_unicode, addr 0x33a74f8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_unicode();

  /// @brief Method set_glyph, addr 0x33a7520, size 0x8, virtual false, abstract: false, final false
  inline void set_glyph(::UnityEngine::TextCore::Glyph* value);

  /// @brief Method set_glyphIndex, addr 0x33a7530, size 0x8, virtual false, abstract: false, final false
  inline void set_glyphIndex(uint32_t value);

  /// @brief Method set_scale, addr 0x33a7540, size 0x8, virtual false, abstract: false, final false
  inline void set_scale(float_t value);

  /// @brief Method set_textAsset, addr 0x33a7510, size 0x8, virtual false, abstract: false, final false
  inline void set_textAsset(::TMPro::TMP_Asset* value);

  /// @brief Method set_unicode, addr 0x33a7500, size 0x8, virtual false, abstract: false, final false
  inline void set_unicode(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_TextElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_TextElement(TMP_TextElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_TextElement(TMP_TextElement const&) = delete;

  /// @brief Field m_ElementType, offset: 0x10, size: 0x1, def value: None
  ::TMPro::TextElementType ___m_ElementType;

  /// @brief Field m_Unicode, offset: 0x14, size: 0x4, def value: None
  uint32_t ___m_Unicode;

  /// @brief Field m_TextAsset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Asset> ___m_TextAsset;

  /// @brief Field m_Glyph, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::TextCore::Glyph* ___m_Glyph;

  /// @brief Field m_GlyphIndex, offset: 0x28, size: 0x4, def value: None
  uint32_t ___m_GlyphIndex;

  /// @brief Field m_Scale, offset: 0x2c, size: 0x4, def value: None
  float_t ___m_Scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_TextElement, 0x30>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement, ___m_ElementType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement, ___m_Unicode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement, ___m_TextAsset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement, ___m_Glyph) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement, ___m_GlyphIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement, ___m_Scale) == 0x2c, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_TextElement);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextElement*, "TMPro", "TMP_TextElement");
