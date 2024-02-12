#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FaceInfo)
// Forward declare root types
namespace UnityEngine::TextCore {
struct FaceInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::FaceInfo);
// Type: UnityEngine.TextCore::FaceInfo
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15712))
// CS Name: ::UnityEngine.TextCore::FaceInfo
struct CORDL_TYPE FaceInfo {
public:
  // Declarations
  __declspec(property(get = get_faceIndex)) int32_t faceIndex;

  __declspec(property(get = get_familyName, put = set_familyName))::StringW familyName;

  __declspec(property(get = get_styleName, put = set_styleName))::StringW styleName;

  __declspec(property(get = get_pointSize, put = set_pointSize)) int32_t pointSize;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  __declspec(property(get = get_lineHeight, put = set_lineHeight)) float_t lineHeight;

  __declspec(property(get = get_ascentLine, put = set_ascentLine)) float_t ascentLine;

  __declspec(property(get = get_capLine, put = set_capLine)) float_t capLine;

  __declspec(property(get = get_meanLine, put = set_meanLine)) float_t meanLine;

  __declspec(property(get = get_baseline, put = set_baseline)) float_t baseline;

  __declspec(property(get = get_descentLine, put = set_descentLine)) float_t descentLine;

  __declspec(property(get = get_superscriptOffset, put = set_superscriptOffset)) float_t superscriptOffset;

  __declspec(property(get = get_superscriptSize, put = set_superscriptSize)) float_t superscriptSize;

  __declspec(property(get = get_subscriptOffset, put = set_subscriptOffset)) float_t subscriptOffset;

  __declspec(property(get = get_subscriptSize, put = set_subscriptSize)) float_t subscriptSize;

  __declspec(property(get = get_underlineOffset, put = set_underlineOffset)) float_t underlineOffset;

  __declspec(property(get = get_underlineThickness, put = set_underlineThickness)) float_t underlineThickness;

  __declspec(property(get = get_strikethroughOffset, put = set_strikethroughOffset)) float_t strikethroughOffset;

  __declspec(property(put = set_strikethroughThickness)) float_t strikethroughThickness;

  __declspec(property(get = get_tabWidth, put = set_tabWidth)) float_t tabWidth;

  /// @brief Method get_faceIndex, addr 0x2d40f30, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_faceIndex();

  /// @brief Method get_familyName, addr 0x2d40f38, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_familyName();

  /// @brief Method set_familyName, addr 0x2d40f40, size 0x8, virtual false, abstract: false, final false
  inline void set_familyName(::StringW value);

  /// @brief Method get_styleName, addr 0x2d40f48, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_styleName();

  /// @brief Method set_styleName, addr 0x2d40f50, size 0x8, virtual false, abstract: false, final false
  inline void set_styleName(::StringW value);

  /// @brief Method get_pointSize, addr 0x2d40f58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pointSize();

  /// @brief Method set_pointSize, addr 0x2d40f60, size 0x8, virtual false, abstract: false, final false
  inline void set_pointSize(int32_t value);

  /// @brief Method get_scale, addr 0x2d40f68, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scale();

  /// @brief Method set_scale, addr 0x2d40f70, size 0x8, virtual false, abstract: false, final false
  inline void set_scale(float_t value);

  /// @brief Method get_lineHeight, addr 0x2d40f78, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lineHeight();

  /// @brief Method set_lineHeight, addr 0x2d40f80, size 0x8, virtual false, abstract: false, final false
  inline void set_lineHeight(float_t value);

  /// @brief Method get_ascentLine, addr 0x2d40f88, size 0x8, virtual false, abstract: false, final false
  inline float_t get_ascentLine();

  /// @brief Method set_ascentLine, addr 0x2d40f90, size 0x8, virtual false, abstract: false, final false
  inline void set_ascentLine(float_t value);

  /// @brief Method get_capLine, addr 0x2d40f98, size 0x8, virtual false, abstract: false, final false
  inline float_t get_capLine();

  /// @brief Method set_capLine, addr 0x2d40fa0, size 0x8, virtual false, abstract: false, final false
  inline void set_capLine(float_t value);

  /// @brief Method get_meanLine, addr 0x2d40fa8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_meanLine();

  /// @brief Method set_meanLine, addr 0x2d40fb0, size 0x8, virtual false, abstract: false, final false
  inline void set_meanLine(float_t value);

  /// @brief Method get_baseline, addr 0x2d40fb8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_baseline();

  /// @brief Method set_baseline, addr 0x2d40fc0, size 0x8, virtual false, abstract: false, final false
  inline void set_baseline(float_t value);

  /// @brief Method get_descentLine, addr 0x2d40fc8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_descentLine();

  /// @brief Method set_descentLine, addr 0x2d40fd0, size 0x8, virtual false, abstract: false, final false
  inline void set_descentLine(float_t value);

  /// @brief Method get_superscriptOffset, addr 0x2d40fd8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_superscriptOffset();

  /// @brief Method set_superscriptOffset, addr 0x2d40fe0, size 0x8, virtual false, abstract: false, final false
  inline void set_superscriptOffset(float_t value);

  /// @brief Method get_superscriptSize, addr 0x2d40fe8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_superscriptSize();

  /// @brief Method set_superscriptSize, addr 0x2d40ff0, size 0x8, virtual false, abstract: false, final false
  inline void set_superscriptSize(float_t value);

  /// @brief Method get_subscriptOffset, addr 0x2d40ff8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_subscriptOffset();

  /// @brief Method set_subscriptOffset, addr 0x2d41000, size 0x8, virtual false, abstract: false, final false
  inline void set_subscriptOffset(float_t value);

  /// @brief Method get_subscriptSize, addr 0x2d41008, size 0x8, virtual false, abstract: false, final false
  inline float_t get_subscriptSize();

  /// @brief Method set_subscriptSize, addr 0x2d41010, size 0x8, virtual false, abstract: false, final false
  inline void set_subscriptSize(float_t value);

  /// @brief Method get_underlineOffset, addr 0x2d41018, size 0x8, virtual false, abstract: false, final false
  inline float_t get_underlineOffset();

  /// @brief Method set_underlineOffset, addr 0x2d41020, size 0x8, virtual false, abstract: false, final false
  inline void set_underlineOffset(float_t value);

  /// @brief Method get_underlineThickness, addr 0x2d41028, size 0x8, virtual false, abstract: false, final false
  inline float_t get_underlineThickness();

  /// @brief Method set_underlineThickness, addr 0x2d41030, size 0x8, virtual false, abstract: false, final false
  inline void set_underlineThickness(float_t value);

  /// @brief Method get_strikethroughOffset, addr 0x2d41038, size 0x8, virtual false, abstract: false, final false
  inline float_t get_strikethroughOffset();

  /// @brief Method set_strikethroughOffset, addr 0x2d41040, size 0x8, virtual false, abstract: false, final false
  inline void set_strikethroughOffset(float_t value);

  /// @brief Method set_strikethroughThickness, addr 0x2d41048, size 0x8, virtual false, abstract: false, final false
  inline void set_strikethroughThickness(float_t value);

  /// @brief Method get_tabWidth, addr 0x2d41050, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tabWidth();

  /// @brief Method set_tabWidth, addr 0x2d41058, size 0x8, virtual false, abstract: false, final false
  inline void set_tabWidth(float_t value);

  // Ctor Parameters [CppParam { name: "m_FaceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FamilyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "m_StyleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_PointSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Scale", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_UnitsPerEM", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LineHeight", ty: "float_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_AscentLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CapLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeanLine",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Baseline", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_DescentLine", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_SuperscriptOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SuperscriptSize", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_SubscriptOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SubscriptSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_UnderlineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UnderlineThickness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_StrikethroughOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StrikethroughThickness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_TabWidth", ty: "float_t", modifiers: "", def_value: None }]
  constexpr FaceInfo(int32_t m_FaceIndex, ::StringW m_FamilyName, ::StringW m_StyleName, int32_t m_PointSize, float_t m_Scale, int32_t m_UnitsPerEM, float_t m_LineHeight, float_t m_AscentLine,
                     float_t m_CapLine, float_t m_MeanLine, float_t m_Baseline, float_t m_DescentLine, float_t m_SuperscriptOffset, float_t m_SuperscriptSize, float_t m_SubscriptOffset,
                     float_t m_SubscriptSize, float_t m_UnderlineOffset, float_t m_UnderlineThickness, float_t m_StrikethroughOffset, float_t m_StrikethroughThickness, float_t m_TabWidth) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FaceInfo();

  /// @brief Field m_FaceIndex, offset: 0x0, size: 0x4, def value: None
  int32_t m_FaceIndex;

  /// @brief Field m_FamilyName, offset: 0x8, size: 0x8, def value: None
  ::StringW m_FamilyName;

  /// @brief Field m_StyleName, offset: 0x10, size: 0x8, def value: None
  ::StringW m_StyleName;

  /// @brief Field m_PointSize, offset: 0x18, size: 0x4, def value: None
  int32_t m_PointSize;

  /// @brief Field m_Scale, offset: 0x1c, size: 0x4, def value: None
  float_t m_Scale;

  /// @brief Field m_UnitsPerEM, offset: 0x20, size: 0x4, def value: None
  int32_t m_UnitsPerEM;

  /// @brief Field m_LineHeight, offset: 0x24, size: 0x4, def value: None
  float_t m_LineHeight;

  /// @brief Field m_AscentLine, offset: 0x28, size: 0x4, def value: None
  float_t m_AscentLine;

  /// @brief Field m_CapLine, offset: 0x2c, size: 0x4, def value: None
  float_t m_CapLine;

  /// @brief Field m_MeanLine, offset: 0x30, size: 0x4, def value: None
  float_t m_MeanLine;

  /// @brief Field m_Baseline, offset: 0x34, size: 0x4, def value: None
  float_t m_Baseline;

  /// @brief Field m_DescentLine, offset: 0x38, size: 0x4, def value: None
  float_t m_DescentLine;

  /// @brief Field m_SuperscriptOffset, offset: 0x3c, size: 0x4, def value: None
  float_t m_SuperscriptOffset;

  /// @brief Field m_SuperscriptSize, offset: 0x40, size: 0x4, def value: None
  float_t m_SuperscriptSize;

  /// @brief Field m_SubscriptOffset, offset: 0x44, size: 0x4, def value: None
  float_t m_SubscriptOffset;

  /// @brief Field m_SubscriptSize, offset: 0x48, size: 0x4, def value: None
  float_t m_SubscriptSize;

  /// @brief Field m_UnderlineOffset, offset: 0x4c, size: 0x4, def value: None
  float_t m_UnderlineOffset;

  /// @brief Field m_UnderlineThickness, offset: 0x50, size: 0x4, def value: None
  float_t m_UnderlineThickness;

  /// @brief Field m_StrikethroughOffset, offset: 0x54, size: 0x4, def value: None
  float_t m_StrikethroughOffset;

  /// @brief Field m_StrikethroughThickness, offset: 0x58, size: 0x4, def value: None
  float_t m_StrikethroughThickness;

  /// @brief Field m_TabWidth, offset: 0x5c, size: 0x4, def value: None
  float_t m_TabWidth;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::FaceInfo, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_FaceIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_FamilyName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_StyleName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_PointSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_Scale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_UnitsPerEM) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_LineHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_AscentLine) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_CapLine) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_MeanLine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_Baseline) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_DescentLine) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_SuperscriptOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_SuperscriptSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_SubscriptOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_SubscriptSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_UnderlineOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_UnderlineThickness) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_StrikethroughOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_StrikethroughThickness) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::FaceInfo, m_TabWidth) == 0x5c, "Offset mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::FaceInfo, "UnityEngine.TextCore", "FaceInfo");
