#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStyle)
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct StyleColor;
}
namespace UnityEngine::UIElements {
struct StyleCursor;
}
namespace UnityEngine::UIElements {
template <typename T> struct StyleEnum_1;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
struct StyleLength;
}
namespace UnityEngine::UIElements {
struct StyleRotate;
}
namespace UnityEngine::UIElements {
struct StyleScale;
}
namespace UnityEngine::UIElements {
struct StyleTextShadow;
}
namespace UnityEngine::UIElements {
struct StyleTransformOrigin;
}
namespace UnityEngine::UIElements {
struct StyleTranslate;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IStyle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IStyle);
// Type: UnityEngine.UIElements::IStyle
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IStyle*
class CORDL_TYPE IStyle {
public:
  // Declarations
  __declspec(property(put = set_backgroundColor))::UnityEngine::UIElements::StyleColor backgroundColor;

  __declspec(property(put = set_borderBottomColor))::UnityEngine::UIElements::StyleColor borderBottomColor;

  __declspec(property(put = set_borderBottomLeftRadius))::UnityEngine::UIElements::StyleLength borderBottomLeftRadius;

  __declspec(property(put = set_borderBottomRightRadius))::UnityEngine::UIElements::StyleLength borderBottomRightRadius;

  __declspec(property(put = set_borderBottomWidth))::UnityEngine::UIElements::StyleFloat borderBottomWidth;

  __declspec(property(put = set_borderLeftColor))::UnityEngine::UIElements::StyleColor borderLeftColor;

  __declspec(property(put = set_borderLeftWidth))::UnityEngine::UIElements::StyleFloat borderLeftWidth;

  __declspec(property(put = set_borderRightColor))::UnityEngine::UIElements::StyleColor borderRightColor;

  __declspec(property(put = set_borderRightWidth))::UnityEngine::UIElements::StyleFloat borderRightWidth;

  __declspec(property(put = set_borderTopColor))::UnityEngine::UIElements::StyleColor borderTopColor;

  __declspec(property(put = set_borderTopLeftRadius))::UnityEngine::UIElements::StyleLength borderTopLeftRadius;

  __declspec(property(put = set_borderTopRightRadius))::UnityEngine::UIElements::StyleLength borderTopRightRadius;

  __declspec(property(put = set_borderTopWidth))::UnityEngine::UIElements::StyleFloat borderTopWidth;

  __declspec(property(put = set_bottom))::UnityEngine::UIElements::StyleLength bottom;

  __declspec(property(put = set_color))::UnityEngine::UIElements::StyleColor color;

  __declspec(property(get = get_cursor))::UnityEngine::UIElements::StyleCursor cursor;

  __declspec(property(get = get_display, put = set_display))::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> display;

  __declspec(property(put = set_flexBasis))::UnityEngine::UIElements::StyleLength flexBasis;

  __declspec(property(put = set_flexDirection))::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> flexDirection;

  __declspec(property(put = set_flexGrow))::UnityEngine::UIElements::StyleFloat flexGrow;

  __declspec(property(put = set_flexShrink))::UnityEngine::UIElements::StyleFloat flexShrink;

  __declspec(property(put = set_fontSize))::UnityEngine::UIElements::StyleLength fontSize;

  __declspec(property(get = get_height, put = set_height))::UnityEngine::UIElements::StyleLength height;

  __declspec(property(put = set_left))::UnityEngine::UIElements::StyleLength left;

  __declspec(property(put = set_marginBottom))::UnityEngine::UIElements::StyleLength marginBottom;

  __declspec(property(put = set_marginLeft))::UnityEngine::UIElements::StyleLength marginLeft;

  __declspec(property(put = set_marginRight))::UnityEngine::UIElements::StyleLength marginRight;

  __declspec(property(put = set_marginTop))::UnityEngine::UIElements::StyleLength marginTop;

  __declspec(property(put = set_minWidth))::UnityEngine::UIElements::StyleLength minWidth;

  __declspec(property(put = set_opacity))::UnityEngine::UIElements::StyleFloat opacity;

  __declspec(property(put = set_paddingBottom))::UnityEngine::UIElements::StyleLength paddingBottom;

  __declspec(property(put = set_paddingLeft))::UnityEngine::UIElements::StyleLength paddingLeft;

  __declspec(property(put = set_paddingRight))::UnityEngine::UIElements::StyleLength paddingRight;

  __declspec(property(get = get_paddingTop, put = set_paddingTop))::UnityEngine::UIElements::StyleLength paddingTop;

  __declspec(property(put = set_position))::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> position;

  __declspec(property(put = set_right))::UnityEngine::UIElements::StyleLength right;

  __declspec(property(get = get_rotate))::UnityEngine::UIElements::StyleRotate rotate;

  __declspec(property(get = get_scale))::UnityEngine::UIElements::StyleScale scale;

  __declspec(property(get = get_textShadow))::UnityEngine::UIElements::StyleTextShadow textShadow;

  __declspec(property(put = set_top))::UnityEngine::UIElements::StyleLength top;

  __declspec(property(get = get_transformOrigin))::UnityEngine::UIElements::StyleTransformOrigin transformOrigin;

  __declspec(property(get = get_translate, put = set_translate))::UnityEngine::UIElements::StyleTranslate translate;

  __declspec(property(put = set_unityBackgroundImageTintColor))::UnityEngine::UIElements::StyleColor unityBackgroundImageTintColor;

  __declspec(property(put = set_visibility))::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> visibility;

  __declspec(property(get = get_width, put = set_width))::UnityEngine::UIElements::StyleLength width;

  /// @brief Method get_cursor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleCursor get_cursor();

  /// @brief Method get_display, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> get_display();

  /// @brief Method get_height, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleLength get_height();

  /// @brief Method get_paddingTop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleLength get_paddingTop();

  /// @brief Method get_rotate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleRotate get_rotate();

  /// @brief Method get_scale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleScale get_scale();

  /// @brief Method get_textShadow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleTextShadow get_textShadow();

  /// @brief Method get_transformOrigin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleTransformOrigin get_transformOrigin();

  /// @brief Method get_translate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleTranslate get_translate();

  /// @brief Method get_width, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::StyleLength get_width();

  /// @brief Method set_backgroundColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_backgroundColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_borderBottomColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderBottomColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_borderBottomLeftRadius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderBottomLeftRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_borderBottomRightRadius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderBottomRightRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_borderBottomWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderBottomWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_borderLeftColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderLeftColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_borderLeftWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderLeftWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_borderRightColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderRightColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_borderRightWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderRightWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_borderTopColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderTopColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_borderTopLeftRadius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderTopLeftRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_borderTopRightRadius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderTopRightRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_borderTopWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_borderTopWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_bottom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_bottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_color, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_color(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_display, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_display(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> value);

  /// @brief Method set_flexBasis, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_flexBasis(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_flexDirection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_flexDirection(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> value);

  /// @brief Method set_flexGrow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_flexGrow(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_flexShrink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_flexShrink(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_fontSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_fontSize(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_height, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_height(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_left, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_left(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_marginBottom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_marginBottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_marginLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_marginLeft(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_marginRight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_marginRight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_marginTop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_marginTop(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_minWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_minWidth(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_opacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_opacity(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method set_paddingBottom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_paddingBottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_paddingLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_paddingLeft(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_paddingRight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_paddingRight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_paddingTop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_paddingTop(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_position(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> value);

  /// @brief Method set_right, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_right(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_top, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_top(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method set_translate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_translate(::UnityEngine::UIElements::StyleTranslate value);

  /// @brief Method set_unityBackgroundImageTintColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_unityBackgroundImageTintColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method set_visibility, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_visibility(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> value);

  /// @brief Method set_width, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_width(::UnityEngine::UIElements::StyleLength value);

  // Ctor Parameters [CppParam { name: "", ty: "IStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStyle(IStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStyle(IStyle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IStyle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IStyle*, "UnityEngine.UIElements", "IStyle");
