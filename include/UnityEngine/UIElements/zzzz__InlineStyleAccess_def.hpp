#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__InlineStyleAccess_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleCursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleScale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTranslate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueCollection_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InlineStyleAccess)
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValueManaged;
}
namespace UnityEngine::UIElements {
struct StyleTransformOrigin;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct StyleCursor;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct StyleColor;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements {
struct StyleTextShadow;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleScale;
}
namespace UnityEngine::UIElements {
class IStyle;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
struct StyleRotate;
}
namespace UnityEngine::UIElements {
struct __InlineStyleAccess__InlineRule;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct StyleLength;
}
namespace UnityEngine::UIElements {
template <typename T> struct StyleEnum_1;
}
namespace UnityEngine::UIElements {
struct StyleTranslate;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class InlineStyleAccess;
}
namespace UnityEngine::UIElements {
struct __InlineStyleAccess__InlineRule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::InlineStyleAccess);
MARK_VAL_T(::UnityEngine::UIElements::__InlineStyleAccess__InlineRule);
// Type: ::InlineRule
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7395))
// CS Name: ::InlineStyleAccess::InlineRule
struct CORDL_TYPE __InlineStyleAccess__InlineRule {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: None }, CppParam { name: "rule", ty: "::UnityEngine::UIElements::StyleRule*",
  // modifiers: "", def_value: None }, CppParam { name: "propertyIds", ty:
  // "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }]
  constexpr __InlineStyleAccess__InlineRule(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule,
                                            ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> propertyIds) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InlineStyleAccess__InlineRule();

  /// @brief Field sheet, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheet* sheet;

  /// @brief Field rule, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleRule* rule;

  /// @brief Field propertyIds, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> propertyIds;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__InlineStyleAccess__InlineRule, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__InlineStyleAccess__InlineRule, sheet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__InlineStyleAccess__InlineRule, rule) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__InlineStyleAccess__InlineRule, propertyIds) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::InlineStyleAccess
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 256, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7394)), TypeDefinitionIndex(TypeDefinitionIndex(7395)), TypeDefinitionIndex(TypeDefinitionIndex(7369)),
// TypeDefinitionIndex(TypeDefinitionIndex(7378)), TypeDefinitionIndex(TypeDefinitionIndex(7405)), TypeDefinitionIndex(TypeDefinitionIndex(7406)), TypeDefinitionIndex(TypeDefinitionIndex(7377)),
// TypeDefinitionIndex(TypeDefinitionIndex(7402))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7396)) CS Name: ::UnityEngine.UIElements::InlineStyleAccess*
class CORDL_TYPE InlineStyleAccess : public ::UnityEngine::UIElements::StyleValueCollection {
public:
  // Declarations
  using InlineRule = ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule;

  /// @brief Field m_ValuesManaged, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ValuesManaged, put = __set_m_ValuesManaged))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>* m_ValuesManaged;

  /// @brief Field <ve>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__ve_k__BackingField, put = __set__ve_k__BackingField))::UnityEngine::UIElements::VisualElement* _ve_k__BackingField;

  /// @brief Field m_HasInlineCursor, offset 0x28, size 0x1
  __declspec(property(get = __get_m_HasInlineCursor, put = __set_m_HasInlineCursor)) bool m_HasInlineCursor;

  /// @brief Field m_InlineCursor, offset 0x30, size 0x20
  __declspec(property(get = __get_m_InlineCursor, put = __set_m_InlineCursor))::UnityEngine::UIElements::StyleCursor m_InlineCursor;

  /// @brief Field m_HasInlineTextShadow, offset 0x50, size 0x1
  __declspec(property(get = __get_m_HasInlineTextShadow, put = __set_m_HasInlineTextShadow)) bool m_HasInlineTextShadow;

  /// @brief Field m_InlineTextShadow, offset 0x54, size 0x20
  __declspec(property(get = __get_m_InlineTextShadow, put = __set_m_InlineTextShadow))::UnityEngine::UIElements::StyleTextShadow m_InlineTextShadow;

  /// @brief Field m_HasInlineTransformOrigin, offset 0x74, size 0x1
  __declspec(property(get = __get_m_HasInlineTransformOrigin, put = __set_m_HasInlineTransformOrigin)) bool m_HasInlineTransformOrigin;

  /// @brief Field m_InlineTransformOrigin, offset 0x78, size 0x18
  __declspec(property(get = __get_m_InlineTransformOrigin, put = __set_m_InlineTransformOrigin))::UnityEngine::UIElements::StyleTransformOrigin m_InlineTransformOrigin;

  /// @brief Field m_HasInlineTranslate, offset 0x90, size 0x1
  __declspec(property(get = __get_m_HasInlineTranslate, put = __set_m_HasInlineTranslate)) bool m_HasInlineTranslate;

  /// @brief Field m_InlineTranslateOperation, offset 0x94, size 0x1c
  __declspec(property(get = __get_m_InlineTranslateOperation, put = __set_m_InlineTranslateOperation))::UnityEngine::UIElements::StyleTranslate m_InlineTranslateOperation;

  /// @brief Field m_HasInlineRotate, offset 0xb0, size 0x1
  __declspec(property(get = __get_m_HasInlineRotate, put = __set_m_HasInlineRotate)) bool m_HasInlineRotate;

  /// @brief Field m_InlineRotateOperation, offset 0xb4, size 0x1c
  __declspec(property(get = __get_m_InlineRotateOperation, put = __set_m_InlineRotateOperation))::UnityEngine::UIElements::StyleRotate m_InlineRotateOperation;

  /// @brief Field m_HasInlineScale, offset 0xd0, size 0x1
  __declspec(property(get = __get_m_HasInlineScale, put = __set_m_HasInlineScale)) bool m_HasInlineScale;

  /// @brief Field m_InlineScale, offset 0xd4, size 0x14
  __declspec(property(get = __get_m_InlineScale, put = __set_m_InlineScale))::UnityEngine::UIElements::StyleScale m_InlineScale;

  /// @brief Field m_InlineRule, offset 0xe8, size 0x18
  __declspec(property(get = __get_m_InlineRule, put = __set_m_InlineRule))::UnityEngine::UIElements::__InlineStyleAccess__InlineRule m_InlineRule;

  /// @brief Field s_StylePropertyReader, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_StylePropertyReader, put = setStaticF_s_StylePropertyReader))::UnityEngine::UIElements::StyleSheets::StylePropertyReader* s_StylePropertyReader;

  __declspec(property(get = get_ve, put = set_ve))::UnityEngine::UIElements::VisualElement* ve;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_cursor))::UnityEngine::UIElements::StyleCursor UnityEngine_UIElements_IStyle_cursor;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_textShadow))::UnityEngine::UIElements::StyleTextShadow UnityEngine_UIElements_IStyle_textShadow;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_transformOrigin))::UnityEngine::UIElements::StyleTransformOrigin UnityEngine_UIElements_IStyle_transformOrigin;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_translate,
                      put = UnityEngine_UIElements_IStyle_set_translate))::UnityEngine::UIElements::StyleTranslate UnityEngine_UIElements_IStyle_translate;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_rotate))::UnityEngine::UIElements::StyleRotate UnityEngine_UIElements_IStyle_rotate;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_scale))::UnityEngine::UIElements::StyleScale UnityEngine_UIElements_IStyle_scale;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_backgroundColor))::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_backgroundColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderBottomColor))::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_borderBottomColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_borderBottomLeftRadius;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderBottomRightRadius))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_borderBottomRightRadius;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderBottomWidth))::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_borderBottomWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderLeftColor))::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_borderLeftColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderLeftWidth))::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_borderLeftWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderRightColor))::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_borderRightColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderRightWidth))::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_borderRightWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderTopColor))::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_borderTopColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderTopLeftRadius))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_borderTopLeftRadius;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderTopRightRadius))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_borderTopRightRadius;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderTopWidth))::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_borderTopWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_bottom))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_bottom;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_color))::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_color;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_display,
                      put = UnityEngine_UIElements_IStyle_set_display))::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> UnityEngine_UIElements_IStyle_display;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_flexBasis))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_flexBasis;

  __declspec(
      property(put = UnityEngine_UIElements_IStyle_set_flexDirection))::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> UnityEngine_UIElements_IStyle_flexDirection;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_flexGrow))::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_flexGrow;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_flexShrink))::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_flexShrink;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_fontSize))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_fontSize;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_height, put = UnityEngine_UIElements_IStyle_set_height))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_height;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_left))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_left;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_marginBottom))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_marginBottom;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_marginLeft))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_marginLeft;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_marginRight))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_marginRight;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_marginTop))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_marginTop;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_minWidth))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_minWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_opacity))::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_opacity;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_paddingBottom))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_paddingBottom;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_paddingLeft))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_paddingLeft;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_paddingRight))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_paddingRight;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_paddingTop,
                      put = UnityEngine_UIElements_IStyle_set_paddingTop))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_paddingTop;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_position))::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> UnityEngine_UIElements_IStyle_position;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_right))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_right;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_top))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_top;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor))::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_unityBackgroundImageTintColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_visibility))::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> UnityEngine_UIElements_IStyle_visibility;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_width, put = UnityEngine_UIElements_IStyle_set_width))::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_width;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyle"
  constexpr operator ::UnityEngine::UIElements::IStyle*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*& __get_m_ValuesManaged();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*> const& __get_m_ValuesManaged() const;

  constexpr void __set_m_ValuesManaged(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__ve_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__ve_k__BackingField() const;

  constexpr void __set__ve_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr bool& __get_m_HasInlineCursor();

  constexpr bool const& __get_m_HasInlineCursor() const;

  constexpr void __set_m_HasInlineCursor(bool value);

  constexpr ::UnityEngine::UIElements::StyleCursor& __get_m_InlineCursor();

  constexpr ::UnityEngine::UIElements::StyleCursor const& __get_m_InlineCursor() const;

  constexpr void __set_m_InlineCursor(::UnityEngine::UIElements::StyleCursor value);

  constexpr bool& __get_m_HasInlineTextShadow();

  constexpr bool const& __get_m_HasInlineTextShadow() const;

  constexpr void __set_m_HasInlineTextShadow(bool value);

  constexpr ::UnityEngine::UIElements::StyleTextShadow& __get_m_InlineTextShadow();

  constexpr ::UnityEngine::UIElements::StyleTextShadow const& __get_m_InlineTextShadow() const;

  constexpr void __set_m_InlineTextShadow(::UnityEngine::UIElements::StyleTextShadow value);

  constexpr bool& __get_m_HasInlineTransformOrigin();

  constexpr bool const& __get_m_HasInlineTransformOrigin() const;

  constexpr void __set_m_HasInlineTransformOrigin(bool value);

  constexpr ::UnityEngine::UIElements::StyleTransformOrigin& __get_m_InlineTransformOrigin();

  constexpr ::UnityEngine::UIElements::StyleTransformOrigin const& __get_m_InlineTransformOrigin() const;

  constexpr void __set_m_InlineTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin value);

  constexpr bool& __get_m_HasInlineTranslate();

  constexpr bool const& __get_m_HasInlineTranslate() const;

  constexpr void __set_m_HasInlineTranslate(bool value);

  constexpr ::UnityEngine::UIElements::StyleTranslate& __get_m_InlineTranslateOperation();

  constexpr ::UnityEngine::UIElements::StyleTranslate const& __get_m_InlineTranslateOperation() const;

  constexpr void __set_m_InlineTranslateOperation(::UnityEngine::UIElements::StyleTranslate value);

  constexpr bool& __get_m_HasInlineRotate();

  constexpr bool const& __get_m_HasInlineRotate() const;

  constexpr void __set_m_HasInlineRotate(bool value);

  constexpr ::UnityEngine::UIElements::StyleRotate& __get_m_InlineRotateOperation();

  constexpr ::UnityEngine::UIElements::StyleRotate const& __get_m_InlineRotateOperation() const;

  constexpr void __set_m_InlineRotateOperation(::UnityEngine::UIElements::StyleRotate value);

  constexpr bool& __get_m_HasInlineScale();

  constexpr bool const& __get_m_HasInlineScale() const;

  constexpr void __set_m_HasInlineScale(bool value);

  constexpr ::UnityEngine::UIElements::StyleScale& __get_m_InlineScale();

  constexpr ::UnityEngine::UIElements::StyleScale const& __get_m_InlineScale() const;

  constexpr void __set_m_InlineScale(::UnityEngine::UIElements::StyleScale value);

  constexpr ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule& __get_m_InlineRule();

  constexpr ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule const& __get_m_InlineRule() const;

  constexpr void __set_m_InlineRule(::UnityEngine::UIElements::__InlineStyleAccess__InlineRule value);

  static inline void setStaticF_s_StylePropertyReader(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* value);

  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* getStaticF_s_StylePropertyReader();

  /// @brief Method get_ve addr 0x2d08cec size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_ve();

  /// @brief Method set_ve addr 0x2d08cf4 size 0x8 virtual false final false
  inline void set_ve(::UnityEngine::UIElements::VisualElement* value);

  static inline ::UnityEngine::UIElements::InlineStyleAccess* New_ctor(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method .ctor addr 0x2d08cfc size 0x24 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Finalize addr 0x2d08d20 size 0x148 virtual true final false
  inline void Finalize();

  /// @brief Method SetInlineRule addr 0x2d08e68 size 0x94 virtual false final false
  inline void SetInlineRule(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule);

  /// @brief Method IsValueSet addr 0x2d09910 size 0x310 virtual false final false
  inline bool IsValueSet(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method ApplyInlineStyles addr 0x2d08efc size 0xa14 virtual false final false
  inline void ApplyInlineStyles(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method UnityEngine.UIElements.IStyle.get_cursor addr 0x2d09cf8 size 0x54 virtual true final true
  inline ::UnityEngine::UIElements::StyleCursor UnityEngine_UIElements_IStyle_get_cursor();

  /// @brief Method UnityEngine.UIElements.IStyle.get_textShadow addr 0x2d09d6c size 0x58 virtual true final true
  inline ::UnityEngine::UIElements::StyleTextShadow UnityEngine_UIElements_IStyle_get_textShadow();

  /// @brief Method UnityEngine.UIElements.IStyle.get_transformOrigin addr 0x2d09e00 size 0x48 virtual true final true
  inline ::UnityEngine::UIElements::StyleTransformOrigin UnityEngine_UIElements_IStyle_get_transformOrigin();

  /// @brief Method UnityEngine.UIElements.IStyle.get_translate addr 0x2d09e7c size 0x50 virtual true final true
  inline ::UnityEngine::UIElements::StyleTranslate UnityEngine_UIElements_IStyle_get_translate();

  /// @brief Method UnityEngine.UIElements.IStyle.set_translate addr 0x2d09efc size 0x54 virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_translate(::UnityEngine::UIElements::StyleTranslate value);

  /// @brief Method UnityEngine.UIElements.IStyle.get_rotate addr 0x2d0a08c size 0x50 virtual true final true
  inline ::UnityEngine::UIElements::StyleRotate UnityEngine_UIElements_IStyle_get_rotate();

  /// @brief Method UnityEngine.UIElements.IStyle.get_scale addr 0x2d0a11c size 0x34 virtual true final true
  inline ::UnityEngine::UIElements::StyleScale UnityEngine_UIElements_IStyle_get_scale();

  /// @brief Method SetStyleValue addr 0x2d0a178 size 0x12c virtual false final false
  inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleLength inlineValue);

  /// @brief Method SetStyleValue addr 0x2d0a674 size 0x110 virtual false final false
  inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleFloat inlineValue);

  /// @brief Method SetStyleValue addr 0x2d0a784 size 0x13c virtual false final false
  inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleColor inlineValue);

  /// @brief Method SetStyleValue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleEnum_1<T> inlineValue);

  /// @brief Method SetInlineTranslate addr 0x2d09f50 size 0x13c virtual false final false
  inline bool SetInlineTranslate(::UnityEngine::UIElements::StyleTranslate inlineValue);

  /// @brief Method ApplyStyleTranslate addr 0x2d0a8c0 size 0x234 virtual false final false
  inline void ApplyStyleTranslate(::UnityEngine::UIElements::StyleTranslate translate);

  /// @brief Method ApplyStyleValue addr 0x2d0a394 size 0x2e0 virtual false final false
  inline void ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue value);

  /// @brief Method RemoveInlineStyle addr 0x2d0a2a4 size 0xf0 virtual false final false
  inline bool RemoveInlineStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method ApplyFromComputedStyle addr 0x2d0aaf4 size 0x220 virtual false final false
  inline void ApplyFromComputedStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle);

  /// @brief Method TryGetInlineCursor addr 0x2d09d4c size 0x20 virtual false final false
  inline bool TryGetInlineCursor(ByRef<::UnityEngine::UIElements::StyleCursor> value);

  /// @brief Method TryGetInlineTextShadow addr 0x2d09dc4 size 0x24 virtual false final false
  inline bool TryGetInlineTextShadow(ByRef<::UnityEngine::UIElements::StyleTextShadow> value);

  /// @brief Method TryGetInlineTransformOrigin addr 0x2d09e48 size 0x28 virtual false final false
  inline bool TryGetInlineTransformOrigin(ByRef<::UnityEngine::UIElements::StyleTransformOrigin> value);

  /// @brief Method TryGetInlineTranslate addr 0x2d09ecc size 0x30 virtual false final false
  inline bool TryGetInlineTranslate(ByRef<::UnityEngine::UIElements::StyleTranslate> value);

  /// @brief Method TryGetInlineRotate addr 0x2d0a0dc size 0x30 virtual false final false
  inline bool TryGetInlineRotate(ByRef<::UnityEngine::UIElements::StyleRotate> value);

  /// @brief Method TryGetInlineScale addr 0x2d0a150 size 0x28 virtual false final false
  inline bool TryGetInlineScale(ByRef<::UnityEngine::UIElements::StyleScale> value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_backgroundColor addr 0x2d0ad14 size 0x58 virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_backgroundColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomColor addr 0x2d0ad6c size 0x5c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderBottomColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius addr 0x2d0adc8 size 0x48 virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomRightRadius addr 0x2d0ae10 size 0x48 virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderBottomRightRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomWidth addr 0x2d0ae58 size 0x6c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderBottomWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderLeftColor addr 0x2d0aec4 size 0x5c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderLeftColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderLeftWidth addr 0x2d0af20 size 0x6c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderLeftWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderRightColor addr 0x2d0af8c size 0x5c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderRightColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderRightWidth addr 0x2d0afe8 size 0x6c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderRightWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderTopColor addr 0x2d0b054 size 0x58 virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderTopColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderTopLeftRadius addr 0x2d0b0ac size 0x48 virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderTopLeftRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderTopRightRadius addr 0x2d0b0f4 size 0x48 virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderTopRightRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderTopWidth addr 0x2d0b13c size 0x6c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_borderTopWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_bottom addr 0x2d0b1a8 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_bottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_color addr 0x2d0b224 size 0x58 virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_color(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.get_display addr 0x2d0b27c size 0x78 virtual true final true
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> UnityEngine_UIElements_IStyle_get_display();

  /// @brief Method UnityEngine.UIElements.IStyle.set_display addr 0x2d0b314 size 0xbc virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_display(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_flexBasis addr 0x2d0b3d0 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_flexBasis(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_flexDirection addr 0x2d0b44c size 0xbc virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_flexDirection(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_flexGrow addr 0x2d0b508 size 0x6c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_flexGrow(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_flexShrink addr 0x2d0b574 size 0x6c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_flexShrink(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_fontSize addr 0x2d0b5e0 size 0x44 virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_fontSize(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.get_height addr 0x2d0b624 size 0x1c virtual true final true
  inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_height();

  /// @brief Method UnityEngine.UIElements.IStyle.set_height addr 0x2d0b640 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_height(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_left addr 0x2d0b6bc size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_left(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_marginBottom addr 0x2d0b738 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_marginBottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_marginLeft addr 0x2d0b7b4 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_marginLeft(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_marginRight addr 0x2d0b830 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_marginRight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_marginTop addr 0x2d0b8ac size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_marginTop(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_minWidth addr 0x2d0b928 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_minWidth(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_opacity addr 0x2d0b9a4 size 0x40 virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_opacity(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_paddingBottom addr 0x2d0b9e4 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_paddingBottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_paddingLeft addr 0x2d0ba60 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_paddingLeft(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_paddingRight addr 0x2d0badc size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_paddingRight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.get_paddingTop addr 0x2d0bb58 size 0x1c virtual true final true
  inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_paddingTop();

  /// @brief Method UnityEngine.UIElements.IStyle.set_paddingTop addr 0x2d0bb74 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_paddingTop(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_position addr 0x2d0bbf0 size 0xbc virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_position(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_right addr 0x2d0bcac size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_right(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_top addr 0x2d0bd28 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_top(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor addr 0x2d0bda4 size 0x5c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_visibility addr 0x2d0be00 size 0x8c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_visibility(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> value);

  /// @brief Method UnityEngine.UIElements.IStyle.get_width addr 0x2d0be8c size 0x1c virtual true final true
  inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_width();

  /// @brief Method UnityEngine.UIElements.IStyle.set_width addr 0x2d0bea8 size 0x7c virtual true final true
  inline void UnityEngine_UIElements_IStyle_set_width(::UnityEngine::UIElements::StyleLength value);

  // Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InlineStyleAccess(InlineStyleAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InlineStyleAccess(InlineStyleAccess const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InlineStyleAccess();

public:
  /// @brief Field m_ValuesManaged, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>* ___m_ValuesManaged;

  /// @brief Field <ve>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____ve_k__BackingField;

  /// @brief Field m_HasInlineCursor, offset: 0x28, size: 0x1, def value: None
  bool ___m_HasInlineCursor;

  /// @brief Field m_InlineCursor, offset: 0x30, size: 0x20, def value: None
  ::UnityEngine::UIElements::StyleCursor ___m_InlineCursor;

  /// @brief Field m_HasInlineTextShadow, offset: 0x50, size: 0x1, def value: None
  bool ___m_HasInlineTextShadow;

  /// @brief Field m_InlineTextShadow, offset: 0x54, size: 0x20, def value: None
  ::UnityEngine::UIElements::StyleTextShadow ___m_InlineTextShadow;

  /// @brief Field m_HasInlineTransformOrigin, offset: 0x74, size: 0x1, def value: None
  bool ___m_HasInlineTransformOrigin;

  /// @brief Field m_InlineTransformOrigin, offset: 0x78, size: 0x18, def value: None
  ::UnityEngine::UIElements::StyleTransformOrigin ___m_InlineTransformOrigin;

  /// @brief Field m_HasInlineTranslate, offset: 0x90, size: 0x1, def value: None
  bool ___m_HasInlineTranslate;

  /// @brief Field m_InlineTranslateOperation, offset: 0x94, size: 0x1c, def value: None
  ::UnityEngine::UIElements::StyleTranslate ___m_InlineTranslateOperation;

  /// @brief Field m_HasInlineRotate, offset: 0xb0, size: 0x1, def value: None
  bool ___m_HasInlineRotate;

  /// @brief Field m_InlineRotateOperation, offset: 0xb4, size: 0x1c, def value: None
  ::UnityEngine::UIElements::StyleRotate ___m_InlineRotateOperation;

  /// @brief Field m_HasInlineScale, offset: 0xd0, size: 0x1, def value: None
  bool ___m_HasInlineScale;

  /// @brief Field m_InlineScale, offset: 0xd4, size: 0x14, def value: None
  ::UnityEngine::UIElements::StyleScale ___m_InlineScale;

  /// @brief Field m_InlineRule, offset: 0xe8, size: 0x18, def value: None
  ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule ___m_InlineRule;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InlineStyleAccess, 0x100>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_ValuesManaged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ____ve_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineCursor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineCursor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineTextShadow) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineTextShadow) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineTransformOrigin) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineTransformOrigin) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineTranslate) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineTranslateOperation) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineRotate) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineRotateOperation) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineScale) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineScale) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineRule) == 0xe8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::InlineStyleAccess);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InlineStyleAccess*, "UnityEngine.UIElements", "InlineStyleAccess");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__InlineStyleAccess__InlineRule, "UnityEngine.UIElements", "InlineStyleAccess/InlineRule");
