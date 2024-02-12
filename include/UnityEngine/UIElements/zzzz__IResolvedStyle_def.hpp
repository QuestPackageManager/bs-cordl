#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IResolvedStyle)
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IResolvedStyle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IResolvedStyle);
// Type: UnityEngine.UIElements::IResolvedStyle
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6622))
// CS Name: ::UnityEngine.UIElements::IResolvedStyle*
class CORDL_TYPE IResolvedStyle {
public:
  // Declarations
  __declspec(property(get = get_backgroundColor))::UnityEngine::Color backgroundColor;

  __declspec(property(get = get_borderBottomColor))::UnityEngine::Color borderBottomColor;

  __declspec(property(get = get_borderBottomLeftRadius)) float_t borderBottomLeftRadius;

  __declspec(property(get = get_borderBottomRightRadius)) float_t borderBottomRightRadius;

  __declspec(property(get = get_borderBottomWidth)) float_t borderBottomWidth;

  __declspec(property(get = get_borderLeftColor))::UnityEngine::Color borderLeftColor;

  __declspec(property(get = get_borderLeftWidth)) float_t borderLeftWidth;

  __declspec(property(get = get_borderRightColor))::UnityEngine::Color borderRightColor;

  __declspec(property(get = get_borderRightWidth)) float_t borderRightWidth;

  __declspec(property(get = get_borderTopColor))::UnityEngine::Color borderTopColor;

  __declspec(property(get = get_borderTopLeftRadius)) float_t borderTopLeftRadius;

  __declspec(property(get = get_borderTopRightRadius)) float_t borderTopRightRadius;

  __declspec(property(get = get_borderTopWidth)) float_t borderTopWidth;

  __declspec(property(get = get_bottom)) float_t bottom;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  __declspec(property(get = get_display))::UnityEngine::UIElements::DisplayStyle display;

  __declspec(property(get = get_flexGrow)) float_t flexGrow;

  __declspec(property(get = get_flexShrink)) float_t flexShrink;

  __declspec(property(get = get_height)) float_t height;

  __declspec(property(get = get_left)) float_t left;

  __declspec(property(get = get_marginBottom)) float_t marginBottom;

  __declspec(property(get = get_marginLeft)) float_t marginLeft;

  __declspec(property(get = get_marginRight)) float_t marginRight;

  __declspec(property(get = get_marginTop)) float_t marginTop;

  __declspec(property(get = get_minHeight))::UnityEngine::UIElements::StyleFloat minHeight;

  __declspec(property(get = get_minWidth))::UnityEngine::UIElements::StyleFloat minWidth;

  __declspec(property(get = get_opacity)) float_t opacity;

  __declspec(property(get = get_paddingBottom)) float_t paddingBottom;

  __declspec(property(get = get_paddingLeft)) float_t paddingLeft;

  __declspec(property(get = get_paddingRight)) float_t paddingRight;

  __declspec(property(get = get_paddingTop)) float_t paddingTop;

  __declspec(property(get = get_right)) float_t right;

  __declspec(property(get = get_scale))::UnityEngine::UIElements::Scale scale;

  __declspec(property(get = get_top)) float_t top;

  __declspec(property(get = get_transformOrigin))::UnityEngine::Vector3 transformOrigin;

  __declspec(property(get = get_translate))::UnityEngine::Vector3 translate;

  __declspec(property(get = get_unityBackgroundImageTintColor))::UnityEngine::Color unityBackgroundImageTintColor;

  __declspec(property(get = get_unitySliceLeft)) int32_t unitySliceLeft;

  __declspec(property(get = get_unitySliceRight)) int32_t unitySliceRight;

  __declspec(property(get = get_unityTextOutlineColor))::UnityEngine::Color unityTextOutlineColor;

  __declspec(property(get = get_unityTextOutlineWidth)) float_t unityTextOutlineWidth;

  __declspec(property(get = get_visibility))::UnityEngine::UIElements::Visibility visibility;

  __declspec(property(get = get_whiteSpace))::UnityEngine::UIElements::WhiteSpace whiteSpace;

  __declspec(property(get = get_width)) float_t width;

  /// @brief Method get_backgroundColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_borderBottomColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Color get_borderBottomColor();

  /// @brief Method get_borderBottomLeftRadius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_borderBottomLeftRadius();

  /// @brief Method get_borderBottomRightRadius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_borderBottomRightRadius();

  /// @brief Method get_borderBottomWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_borderBottomWidth();

  /// @brief Method get_borderLeftColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Color get_borderLeftColor();

  /// @brief Method get_borderLeftWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_borderLeftWidth();

  /// @brief Method get_borderRightColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Color get_borderRightColor();

  /// @brief Method get_borderRightWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_borderRightWidth();

  /// @brief Method get_borderTopColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Color get_borderTopColor();

  /// @brief Method get_borderTopLeftRadius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_borderTopLeftRadius();

  /// @brief Method get_borderTopRightRadius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_borderTopRightRadius();

  /// @brief Method get_borderTopWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_borderTopWidth();

  /// @brief Method get_bottom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_bottom();

  /// @brief Method get_color, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_display, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::DisplayStyle get_display();

  /// @brief Method get_flexGrow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_flexGrow();

  /// @brief Method get_flexShrink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_flexShrink();

  /// @brief Method get_height, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_height();

  /// @brief Method get_left, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_left();

  /// @brief Method get_marginBottom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_marginBottom();

  /// @brief Method get_marginLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_marginLeft();

  /// @brief Method get_marginRight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_marginRight();

  /// @brief Method get_marginTop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_marginTop();

  /// @brief Method get_minHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleFloat get_minHeight();

  /// @brief Method get_minWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleFloat get_minWidth();

  /// @brief Method get_opacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_opacity();

  /// @brief Method get_paddingBottom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_paddingBottom();

  /// @brief Method get_paddingLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_paddingLeft();

  /// @brief Method get_paddingRight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_paddingRight();

  /// @brief Method get_paddingTop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_paddingTop();

  /// @brief Method get_right, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_right();

  /// @brief Method get_scale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::Scale get_scale();

  /// @brief Method get_top, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_top();

  /// @brief Method get_transformOrigin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 get_transformOrigin();

  /// @brief Method get_translate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 get_translate();

  /// @brief Method get_unityBackgroundImageTintColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Color get_unityBackgroundImageTintColor();

  /// @brief Method get_unitySliceLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_unitySliceLeft();

  /// @brief Method get_unitySliceRight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_unitySliceRight();

  /// @brief Method get_unityTextOutlineColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Color get_unityTextOutlineColor();

  /// @brief Method get_unityTextOutlineWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_unityTextOutlineWidth();

  /// @brief Method get_visibility, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::Visibility get_visibility();

  /// @brief Method get_whiteSpace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::WhiteSpace get_whiteSpace();

  /// @brief Method get_width, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_width();

  // Ctor Parameters [CppParam { name: "", ty: "IResolvedStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IResolvedStyle(IResolvedStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IResolvedStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IResolvedStyle(IResolvedStyle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IResolvedStyle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IResolvedStyle*, "UnityEngine.UIElements", "IResolvedStyle");
