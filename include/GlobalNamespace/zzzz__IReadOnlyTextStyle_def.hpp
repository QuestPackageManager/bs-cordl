#pragma once
// IWYU pragma private; include "GlobalNamespace/IReadOnlyTextStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IReadOnlyTextStyle)
namespace TMPro {
struct FontStyles;
}
// Forward declare root types
namespace GlobalNamespace {
class IReadOnlyTextStyle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IReadOnlyTextStyle);
// Type: ::IReadOnlyTextStyle
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IReadOnlyTextStyle*
class CORDL_TYPE IReadOnlyTextStyle {
public:
  // Declarations
  __declspec(property(get = get_autoSizing)) bool autoSizing;

  __declspec(property(get = get_charWidthMaxAdj)) float_t charWidthMaxAdj;

  __declspec(property(get = get_fontSize)) float_t fontSize;

  __declspec(property(get = get_fontSizeMax)) float_t fontSizeMax;

  __declspec(property(get = get_fontSizeMin)) float_t fontSizeMin;

  __declspec(property(get = get_fontStyle)) ::TMPro::FontStyles fontStyle;

  __declspec(property(get = get_lineSpacingMax)) float_t lineSpacingMax;

  /// @brief Method get_autoSizing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_autoSizing();

  /// @brief Method get_charWidthMaxAdj, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_charWidthMaxAdj();

  /// @brief Method get_fontSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_fontSize();

  /// @brief Method get_fontSizeMax, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_fontSizeMax();

  /// @brief Method get_fontSizeMin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_fontSizeMin();

  /// @brief Method get_fontStyle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::TMPro::FontStyles get_fontStyle();

  /// @brief Method get_lineSpacingMax, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_lineSpacingMax();

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyTextStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReadOnlyTextStyle(IReadOnlyTextStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyTextStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadOnlyTextStyle(IReadOnlyTextStyle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19031 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IReadOnlyTextStyle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReadOnlyTextStyle*, "", "IReadOnlyTextStyle");
