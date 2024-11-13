#pragma once
// IWYU pragma private; include "TMPro/FaceInfo_Legacy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FaceInfo_Legacy)
// Forward declare root types
namespace TMPro {
class FaceInfo_Legacy;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::FaceInfo_Legacy);
// Type: TMPro::FaceInfo_Legacy
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::FaceInfo_Legacy*
class CORDL_TYPE FaceInfo_Legacy : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ascender, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_Ascender, put = __cordl_internal_set_Ascender)) float_t Ascender;

  /// @brief Field AtlasHeight, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_AtlasHeight, put = __cordl_internal_set_AtlasHeight)) float_t AtlasHeight;

  /// @brief Field AtlasWidth, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_AtlasWidth, put = __cordl_internal_set_AtlasWidth)) float_t AtlasWidth;

  /// @brief Field Baseline, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_Baseline, put = __cordl_internal_set_Baseline)) float_t Baseline;

  /// @brief Field CapHeight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_CapHeight, put = __cordl_internal_set_CapHeight)) float_t CapHeight;

  /// @brief Field CenterLine, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_CenterLine, put = __cordl_internal_set_CenterLine)) float_t CenterLine;

  /// @brief Field CharacterCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_CharacterCount, put = __cordl_internal_set_CharacterCount)) int32_t CharacterCount;

  /// @brief Field Descender, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_Descender, put = __cordl_internal_set_Descender)) float_t Descender;

  /// @brief Field LineHeight, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_LineHeight, put = __cordl_internal_set_LineHeight)) float_t LineHeight;

  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  /// @brief Field Padding, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_Padding, put = __cordl_internal_set_Padding)) float_t Padding;

  /// @brief Field PointSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_PointSize, put = __cordl_internal_set_PointSize)) float_t PointSize;

  /// @brief Field Scale, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Scale, put = __cordl_internal_set_Scale)) float_t Scale;

  /// @brief Field SubSize, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_SubSize, put = __cordl_internal_set_SubSize)) float_t SubSize;

  /// @brief Field SubscriptOffset, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_SubscriptOffset, put = __cordl_internal_set_SubscriptOffset)) float_t SubscriptOffset;

  /// @brief Field SuperscriptOffset, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_SuperscriptOffset, put = __cordl_internal_set_SuperscriptOffset)) float_t SuperscriptOffset;

  /// @brief Field TabWidth, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_TabWidth, put = __cordl_internal_set_TabWidth)) float_t TabWidth;

  /// @brief Field Underline, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_Underline, put = __cordl_internal_set_Underline)) float_t Underline;

  /// @brief Field UnderlineThickness, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_UnderlineThickness, put = __cordl_internal_set_UnderlineThickness)) float_t UnderlineThickness;

  /// @brief Field strikethrough, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_strikethrough, put = __cordl_internal_set_strikethrough)) float_t strikethrough;

  /// @brief Field strikethroughThickness, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_strikethroughThickness, put = __cordl_internal_set_strikethroughThickness)) float_t strikethroughThickness;

  static inline ::TMPro::FaceInfo_Legacy* New_ctor();

  constexpr float_t const& __cordl_internal_get_Ascender() const;

  constexpr float_t& __cordl_internal_get_Ascender();

  constexpr float_t const& __cordl_internal_get_AtlasHeight() const;

  constexpr float_t& __cordl_internal_get_AtlasHeight();

  constexpr float_t const& __cordl_internal_get_AtlasWidth() const;

  constexpr float_t& __cordl_internal_get_AtlasWidth();

  constexpr float_t const& __cordl_internal_get_Baseline() const;

  constexpr float_t& __cordl_internal_get_Baseline();

  constexpr float_t const& __cordl_internal_get_CapHeight() const;

  constexpr float_t& __cordl_internal_get_CapHeight();

  constexpr float_t const& __cordl_internal_get_CenterLine() const;

  constexpr float_t& __cordl_internal_get_CenterLine();

  constexpr int32_t const& __cordl_internal_get_CharacterCount() const;

  constexpr int32_t& __cordl_internal_get_CharacterCount();

  constexpr float_t const& __cordl_internal_get_Descender() const;

  constexpr float_t& __cordl_internal_get_Descender();

  constexpr float_t const& __cordl_internal_get_LineHeight() const;

  constexpr float_t& __cordl_internal_get_LineHeight();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr float_t const& __cordl_internal_get_Padding() const;

  constexpr float_t& __cordl_internal_get_Padding();

  constexpr float_t const& __cordl_internal_get_PointSize() const;

  constexpr float_t& __cordl_internal_get_PointSize();

  constexpr float_t const& __cordl_internal_get_Scale() const;

  constexpr float_t& __cordl_internal_get_Scale();

  constexpr float_t const& __cordl_internal_get_SubSize() const;

  constexpr float_t& __cordl_internal_get_SubSize();

  constexpr float_t const& __cordl_internal_get_SubscriptOffset() const;

  constexpr float_t& __cordl_internal_get_SubscriptOffset();

  constexpr float_t const& __cordl_internal_get_SuperscriptOffset() const;

  constexpr float_t& __cordl_internal_get_SuperscriptOffset();

  constexpr float_t const& __cordl_internal_get_TabWidth() const;

  constexpr float_t& __cordl_internal_get_TabWidth();

  constexpr float_t const& __cordl_internal_get_Underline() const;

  constexpr float_t& __cordl_internal_get_Underline();

  constexpr float_t const& __cordl_internal_get_UnderlineThickness() const;

  constexpr float_t& __cordl_internal_get_UnderlineThickness();

  constexpr float_t const& __cordl_internal_get_strikethrough() const;

  constexpr float_t& __cordl_internal_get_strikethrough();

  constexpr float_t const& __cordl_internal_get_strikethroughThickness() const;

  constexpr float_t& __cordl_internal_get_strikethroughThickness();

  constexpr void __cordl_internal_set_Ascender(float_t value);

  constexpr void __cordl_internal_set_AtlasHeight(float_t value);

  constexpr void __cordl_internal_set_AtlasWidth(float_t value);

  constexpr void __cordl_internal_set_Baseline(float_t value);

  constexpr void __cordl_internal_set_CapHeight(float_t value);

  constexpr void __cordl_internal_set_CenterLine(float_t value);

  constexpr void __cordl_internal_set_CharacterCount(int32_t value);

  constexpr void __cordl_internal_set_Descender(float_t value);

  constexpr void __cordl_internal_set_LineHeight(float_t value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Padding(float_t value);

  constexpr void __cordl_internal_set_PointSize(float_t value);

  constexpr void __cordl_internal_set_Scale(float_t value);

  constexpr void __cordl_internal_set_SubSize(float_t value);

  constexpr void __cordl_internal_set_SubscriptOffset(float_t value);

  constexpr void __cordl_internal_set_SuperscriptOffset(float_t value);

  constexpr void __cordl_internal_set_TabWidth(float_t value);

  constexpr void __cordl_internal_set_Underline(float_t value);

  constexpr void __cordl_internal_set_UnderlineThickness(float_t value);

  constexpr void __cordl_internal_set_strikethrough(float_t value);

  constexpr void __cordl_internal_set_strikethroughThickness(float_t value);

  /// @brief Method .ctor, addr 0x477195c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FaceInfo_Legacy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FaceInfo_Legacy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FaceInfo_Legacy(FaceInfo_Legacy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FaceInfo_Legacy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FaceInfo_Legacy(FaceInfo_Legacy const&) = delete;

  /// @brief Field Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field PointSize, offset: 0x18, size: 0x4, def value: None
  float_t ___PointSize;

  /// @brief Field Scale, offset: 0x1c, size: 0x4, def value: None
  float_t ___Scale;

  /// @brief Field CharacterCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___CharacterCount;

  /// @brief Field LineHeight, offset: 0x24, size: 0x4, def value: None
  float_t ___LineHeight;

  /// @brief Field Baseline, offset: 0x28, size: 0x4, def value: None
  float_t ___Baseline;

  /// @brief Field Ascender, offset: 0x2c, size: 0x4, def value: None
  float_t ___Ascender;

  /// @brief Field CapHeight, offset: 0x30, size: 0x4, def value: None
  float_t ___CapHeight;

  /// @brief Field Descender, offset: 0x34, size: 0x4, def value: None
  float_t ___Descender;

  /// @brief Field CenterLine, offset: 0x38, size: 0x4, def value: None
  float_t ___CenterLine;

  /// @brief Field SuperscriptOffset, offset: 0x3c, size: 0x4, def value: None
  float_t ___SuperscriptOffset;

  /// @brief Field SubscriptOffset, offset: 0x40, size: 0x4, def value: None
  float_t ___SubscriptOffset;

  /// @brief Field SubSize, offset: 0x44, size: 0x4, def value: None
  float_t ___SubSize;

  /// @brief Field Underline, offset: 0x48, size: 0x4, def value: None
  float_t ___Underline;

  /// @brief Field UnderlineThickness, offset: 0x4c, size: 0x4, def value: None
  float_t ___UnderlineThickness;

  /// @brief Field strikethrough, offset: 0x50, size: 0x4, def value: None
  float_t ___strikethrough;

  /// @brief Field strikethroughThickness, offset: 0x54, size: 0x4, def value: None
  float_t ___strikethroughThickness;

  /// @brief Field TabWidth, offset: 0x58, size: 0x4, def value: None
  float_t ___TabWidth;

  /// @brief Field Padding, offset: 0x5c, size: 0x4, def value: None
  float_t ___Padding;

  /// @brief Field AtlasWidth, offset: 0x60, size: 0x4, def value: None
  float_t ___AtlasWidth;

  /// @brief Field AtlasHeight, offset: 0x64, size: 0x4, def value: None
  float_t ___AtlasHeight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14440 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::FaceInfo_Legacy, 0x68>, "Size mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___PointSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___Scale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___CharacterCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___LineHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___Baseline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___Ascender) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___CapHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___Descender) == 0x34, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___CenterLine) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___SuperscriptOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___SubscriptOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___SubSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___Underline) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___UnderlineThickness) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___strikethrough) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___strikethroughThickness) == 0x54, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___TabWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___Padding) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___AtlasWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TMPro::FaceInfo_Legacy, ___AtlasHeight) == 0x64, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::FaceInfo_Legacy);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FaceInfo_Legacy*, "TMPro", "FaceInfo_Legacy");
