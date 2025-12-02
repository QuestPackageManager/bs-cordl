#pragma once
// IWYU pragma private; include "GlobalNamespace/TextStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextStyle)
namespace GlobalNamespace {
class IReadOnlyTextStyle;
}
namespace TMPro {
struct FontStyles;
}
// Forward declare root types
namespace GlobalNamespace {
class TextStyle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextStyle);
// Dependencies System.Object, TMPro.FontStyles
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextStyle
class CORDL_TYPE TextStyle : public ::System::Object {
public:
  // Declarations
  /// @brief Field _autoSizing, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__autoSizing, put = __cordl_internal_set__autoSizing)) bool _autoSizing;

  /// @brief Field _charWidthMaxAdj, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__charWidthMaxAdj, put = __cordl_internal_set__charWidthMaxAdj)) float_t _charWidthMaxAdj;

  /// @brief Field _fontSize, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__fontSize, put = __cordl_internal_set__fontSize)) float_t _fontSize;

  /// @brief Field _fontSizeMax, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__fontSizeMax, put = __cordl_internal_set__fontSizeMax)) float_t _fontSizeMax;

  /// @brief Field _fontSizeMin, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__fontSizeMin, put = __cordl_internal_set__fontSizeMin)) float_t _fontSizeMin;

  /// @brief Field _fontStyle, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__fontStyle, put = __cordl_internal_set__fontStyle)) ::TMPro::FontStyles _fontStyle;

  /// @brief Field _lineSpacingMax, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__lineSpacingMax, put = __cordl_internal_set__lineSpacingMax)) float_t _lineSpacingMax;

  __declspec(property(get = get_autoSizing)) bool autoSizing;

  __declspec(property(get = get_charWidthMaxAdj)) float_t charWidthMaxAdj;

  __declspec(property(get = get_fontSize)) float_t fontSize;

  __declspec(property(get = get_fontSizeMax)) float_t fontSizeMax;

  __declspec(property(get = get_fontSizeMin)) float_t fontSizeMin;

  __declspec(property(get = get_fontStyle)) ::TMPro::FontStyles fontStyle;

  __declspec(property(get = get_lineSpacingMax)) float_t lineSpacingMax;

  /// @brief Convert operator to "::GlobalNamespace::IReadOnlyTextStyle"
  constexpr operator ::GlobalNamespace::IReadOnlyTextStyle*() noexcept;

  static inline ::GlobalNamespace::TextStyle* New_ctor();

  /// @brief Method Update, addr 0x31c5850, size 0x18, virtual false, abstract: false, final false
  inline void Update(::TMPro::FontStyles fontStyle, float_t fontSize, bool autoSizing, float_t fontSizeMin, float_t fontSizeMax, float_t charWidthMaxAdj, float_t lineSpacingMax);

  constexpr bool const& __cordl_internal_get__autoSizing() const;

  constexpr bool& __cordl_internal_get__autoSizing();

  constexpr float_t const& __cordl_internal_get__charWidthMaxAdj() const;

  constexpr float_t& __cordl_internal_get__charWidthMaxAdj();

  constexpr float_t const& __cordl_internal_get__fontSize() const;

  constexpr float_t& __cordl_internal_get__fontSize();

  constexpr float_t const& __cordl_internal_get__fontSizeMax() const;

  constexpr float_t& __cordl_internal_get__fontSizeMax();

  constexpr float_t const& __cordl_internal_get__fontSizeMin() const;

  constexpr float_t& __cordl_internal_get__fontSizeMin();

  constexpr ::TMPro::FontStyles const& __cordl_internal_get__fontStyle() const;

  constexpr ::TMPro::FontStyles& __cordl_internal_get__fontStyle();

  constexpr float_t const& __cordl_internal_get__lineSpacingMax() const;

  constexpr float_t& __cordl_internal_get__lineSpacingMax();

  constexpr void __cordl_internal_set__autoSizing(bool value);

  constexpr void __cordl_internal_set__charWidthMaxAdj(float_t value);

  constexpr void __cordl_internal_set__fontSize(float_t value);

  constexpr void __cordl_internal_set__fontSizeMax(float_t value);

  constexpr void __cordl_internal_set__fontSizeMin(float_t value);

  constexpr void __cordl_internal_set__fontStyle(::TMPro::FontStyles value);

  constexpr void __cordl_internal_set__lineSpacingMax(float_t value);

  /// @brief Method .ctor, addr 0x31c5868, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_autoSizing, addr 0x31c5828, size 0x8, virtual true, abstract: false, final true
  inline bool get_autoSizing();

  /// @brief Method get_charWidthMaxAdj, addr 0x31c5840, size 0x8, virtual true, abstract: false, final true
  inline float_t get_charWidthMaxAdj();

  /// @brief Method get_fontSize, addr 0x31c5820, size 0x8, virtual true, abstract: false, final true
  inline float_t get_fontSize();

  /// @brief Method get_fontSizeMax, addr 0x31c5838, size 0x8, virtual true, abstract: false, final true
  inline float_t get_fontSizeMax();

  /// @brief Method get_fontSizeMin, addr 0x31c5830, size 0x8, virtual true, abstract: false, final true
  inline float_t get_fontSizeMin();

  /// @brief Method get_fontStyle, addr 0x31c5818, size 0x8, virtual true, abstract: false, final true
  inline ::TMPro::FontStyles get_fontStyle();

  /// @brief Method get_lineSpacingMax, addr 0x31c5848, size 0x8, virtual true, abstract: false, final true
  inline float_t get_lineSpacingMax();

  /// @brief Convert to "::GlobalNamespace::IReadOnlyTextStyle"
  constexpr ::GlobalNamespace::IReadOnlyTextStyle* i___GlobalNamespace__IReadOnlyTextStyle() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextStyle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextStyle(TextStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextStyle(TextStyle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23231 };

  /// @brief Field _fontStyle, offset: 0x10, size: 0x4, def value: None
  ::TMPro::FontStyles ____fontStyle;

  /// @brief Field _fontSize, offset: 0x14, size: 0x4, def value: None
  float_t ____fontSize;

  /// @brief Field _autoSizing, offset: 0x18, size: 0x1, def value: None
  bool ____autoSizing;

  /// @brief Field _fontSizeMin, offset: 0x1c, size: 0x4, def value: None
  float_t ____fontSizeMin;

  /// @brief Field _fontSizeMax, offset: 0x20, size: 0x4, def value: None
  float_t ____fontSizeMax;

  /// @brief Field _charWidthMaxAdj, offset: 0x24, size: 0x4, def value: None
  float_t ____charWidthMaxAdj;

  /// @brief Field _lineSpacingMax, offset: 0x28, size: 0x4, def value: None
  float_t ____lineSpacingMax;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextStyle, ____fontStyle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextStyle, ____fontSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextStyle, ____autoSizing) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextStyle, ____fontSizeMin) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextStyle, ____fontSizeMax) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextStyle, ____charWidthMaxAdj) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextStyle, ____lineSpacingMax) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextStyle, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextStyle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextStyle*, "", "TextStyle");
