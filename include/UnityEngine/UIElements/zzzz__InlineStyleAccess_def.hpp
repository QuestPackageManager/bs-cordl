#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InlineStyleAccess.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__InlineStyleAccess_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundSize_def.hpp"
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValueManaged;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
class IStyle;
}
namespace UnityEngine::UIElements {
struct Overflow;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
struct StyleBackgroundSize;
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
struct StyleFontDefinition;
}
namespace UnityEngine::UIElements {
struct StyleFont;
}
namespace UnityEngine::UIElements {
struct StyleLength;
}
namespace UnityEngine::UIElements {
struct StyleRotate;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
struct StyleScale;
}
namespace UnityEngine::UIElements {
class StyleSheet;
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
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __InlineStyleAccess__InlineRule;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::InlineStyleAccess::InlineRule
struct CORDL_TYPE __InlineStyleAccess__InlineRule {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InlineStyleAccess__InlineRule();

  // Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: None }, CppParam { name: "rule", ty:
  // "::UnityEngine::UIElements::StyleRule*", modifiers: "", def_value: None }, CppParam { name: "propertyIds", ty:
  // "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: None }]
  constexpr __InlineStyleAccess__InlineRule(::UnityW<::UnityEngine::UIElements::StyleSheet> sheet, ::UnityEngine::UIElements::StyleRule* rule,
                                            ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> propertyIds) noexcept;

  /// @brief Field sheet, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> sheet;

  /// @brief Field rule, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleRule* rule;

  /// @brief Field propertyIds, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> propertyIds;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6037 };

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
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::InlineStyleAccess*
class CORDL_TYPE InlineStyleAccess : public ::UnityEngine::UIElements::StyleValueCollection {
public:
  // Declarations
  using InlineRule = ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_backgroundColor)) ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_backgroundColor;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_backgroundSize)) ::UnityEngine::UIElements::StyleBackgroundSize UnityEngine_UIElements_IStyle_backgroundSize;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderBottomColor)) ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_borderBottomColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_borderBottomLeftRadius;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderBottomRightRadius)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_borderBottomRightRadius;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderBottomWidth)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_borderBottomWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderLeftColor)) ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_borderLeftColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderLeftWidth)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_borderLeftWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderRightColor)) ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_borderRightColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderRightWidth)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_borderRightWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderTopColor)) ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_borderTopColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderTopLeftRadius)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_borderTopLeftRadius;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderTopRightRadius)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_borderTopRightRadius;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_borderTopWidth)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_borderTopWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_bottom)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_bottom;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_color)) ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_color;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_cursor)) ::UnityEngine::UIElements::StyleCursor UnityEngine_UIElements_IStyle_cursor;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_display, put = UnityEngine_UIElements_IStyle_set_display)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>
      UnityEngine_UIElements_IStyle_display;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_flexBasis)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_flexBasis;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_flexDirection)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>
      UnityEngine_UIElements_IStyle_flexDirection;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_flexGrow)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_flexGrow;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_flexShrink)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_flexShrink;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_fontSize)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_fontSize;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_height)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_height;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_left)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_left;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_marginBottom)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_marginBottom;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_marginLeft)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_marginLeft;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_marginRight)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_marginRight;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_marginTop)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_marginTop;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_maxHeight)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_maxHeight;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_maxWidth)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_maxWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_minWidth)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_minWidth;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_opacity)) ::UnityEngine::UIElements::StyleFloat UnityEngine_UIElements_IStyle_opacity;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_overflow)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> UnityEngine_UIElements_IStyle_overflow;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_paddingBottom)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_paddingBottom;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_paddingLeft)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_paddingLeft;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_paddingRight)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_paddingRight;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_paddingTop,
                      put = UnityEngine_UIElements_IStyle_set_paddingTop)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_paddingTop;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_position)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> UnityEngine_UIElements_IStyle_position;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_right)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_right;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_rotate)) ::UnityEngine::UIElements::StyleRotate UnityEngine_UIElements_IStyle_rotate;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_scale)) ::UnityEngine::UIElements::StyleScale UnityEngine_UIElements_IStyle_scale;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_textShadow)) ::UnityEngine::UIElements::StyleTextShadow UnityEngine_UIElements_IStyle_textShadow;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_top)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_top;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_transformOrigin)) ::UnityEngine::UIElements::StyleTransformOrigin UnityEngine_UIElements_IStyle_transformOrigin;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_translate,
                      put = UnityEngine_UIElements_IStyle_set_translate)) ::UnityEngine::UIElements::StyleTranslate UnityEngine_UIElements_IStyle_translate;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor)) ::UnityEngine::UIElements::StyleColor UnityEngine_UIElements_IStyle_unityBackgroundImageTintColor;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_unityFont)) ::UnityEngine::UIElements::StyleFont UnityEngine_UIElements_IStyle_unityFont;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_unityFontDefinition)) ::UnityEngine::UIElements::StyleFontDefinition UnityEngine_UIElements_IStyle_unityFontDefinition;

  __declspec(property(put = UnityEngine_UIElements_IStyle_set_visibility)) ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> UnityEngine_UIElements_IStyle_visibility;

  __declspec(property(get = UnityEngine_UIElements_IStyle_get_width, put = UnityEngine_UIElements_IStyle_set_width)) ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_width;

  /// @brief Field <ve>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ve_k__BackingField, put = __cordl_internal_set__ve_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _ve_k__BackingField;

  /// @brief Field m_HasInlineBackgroundSize, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasInlineBackgroundSize, put = __cordl_internal_set_m_HasInlineBackgroundSize)) bool m_HasInlineBackgroundSize;

  /// @brief Field m_HasInlineCursor, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasInlineCursor, put = __cordl_internal_set_m_HasInlineCursor)) bool m_HasInlineCursor;

  /// @brief Field m_HasInlineRotate, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasInlineRotate, put = __cordl_internal_set_m_HasInlineRotate)) bool m_HasInlineRotate;

  /// @brief Field m_HasInlineScale, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasInlineScale, put = __cordl_internal_set_m_HasInlineScale)) bool m_HasInlineScale;

  /// @brief Field m_HasInlineTextShadow, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasInlineTextShadow, put = __cordl_internal_set_m_HasInlineTextShadow)) bool m_HasInlineTextShadow;

  /// @brief Field m_HasInlineTransformOrigin, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasInlineTransformOrigin, put = __cordl_internal_set_m_HasInlineTransformOrigin)) bool m_HasInlineTransformOrigin;

  /// @brief Field m_HasInlineTranslate, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasInlineTranslate, put = __cordl_internal_set_m_HasInlineTranslate)) bool m_HasInlineTranslate;

  /// @brief Field m_InlineBackgroundSize, offset 0xec, size 0x18
  __declspec(property(get = __cordl_internal_get_m_InlineBackgroundSize, put = __cordl_internal_set_m_InlineBackgroundSize)) ::UnityEngine::UIElements::StyleBackgroundSize m_InlineBackgroundSize;

  /// @brief Field m_InlineCursor, offset 0x30, size 0x20
  __declspec(property(get = __cordl_internal_get_m_InlineCursor, put = __cordl_internal_set_m_InlineCursor)) ::UnityEngine::UIElements::StyleCursor m_InlineCursor;

  /// @brief Field m_InlineRotateOperation, offset 0xb4, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_InlineRotateOperation, put = __cordl_internal_set_m_InlineRotateOperation)) ::UnityEngine::UIElements::StyleRotate m_InlineRotateOperation;

  /// @brief Field m_InlineRule, offset 0x108, size 0x18
  __declspec(property(get = __cordl_internal_get_m_InlineRule, put = __cordl_internal_set_m_InlineRule)) ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule m_InlineRule;

  /// @brief Field m_InlineScale, offset 0xd4, size 0x14
  __declspec(property(get = __cordl_internal_get_m_InlineScale, put = __cordl_internal_set_m_InlineScale)) ::UnityEngine::UIElements::StyleScale m_InlineScale;

  /// @brief Field m_InlineTextShadow, offset 0x54, size 0x20
  __declspec(property(get = __cordl_internal_get_m_InlineTextShadow, put = __cordl_internal_set_m_InlineTextShadow)) ::UnityEngine::UIElements::StyleTextShadow m_InlineTextShadow;

  /// @brief Field m_InlineTransformOrigin, offset 0x78, size 0x18
  __declspec(property(get = __cordl_internal_get_m_InlineTransformOrigin, put = __cordl_internal_set_m_InlineTransformOrigin)) ::UnityEngine::UIElements::StyleTransformOrigin m_InlineTransformOrigin;

  /// @brief Field m_InlineTranslateOperation, offset 0x94, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_InlineTranslateOperation,
                      put = __cordl_internal_set_m_InlineTranslateOperation)) ::UnityEngine::UIElements::StyleTranslate m_InlineTranslateOperation;

  /// @brief Field m_ValuesManaged, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValuesManaged,
                      put = __cordl_internal_set_m_ValuesManaged)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>* m_ValuesManaged;

  /// @brief Field s_StylePropertyReader, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_StylePropertyReader, put = setStaticF_s_StylePropertyReader)) ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* s_StylePropertyReader;

  __declspec(property(get = get_ve, put = set_ve)) ::UnityEngine::UIElements::VisualElement* ve;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyle"
  constexpr operator ::UnityEngine::UIElements::IStyle*() noexcept;

  /// @brief Method ApplyFromComputedStyle, addr 0x4a08a64, size 0x1d0, virtual false, abstract: false, final false
  inline void ApplyFromComputedStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle);

  /// @brief Method ApplyInlineStyles, addr 0x4a0720c, size 0xa34, virtual false, abstract: false, final false
  inline void ApplyInlineStyles(ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle);

  /// @brief Method ApplyStyleTranslate, addr 0x4a08888, size 0x1cc, virtual false, abstract: false, final false
  inline void ApplyStyleTranslate(::UnityEngine::UIElements::StyleTranslate translate);

  /// @brief Method ApplyStyleValue, addr 0x4a08610, size 0x278, virtual false, abstract: false, final false
  inline void ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue value);

  /// @brief Method Finalize, addr 0x4a07034, size 0x150, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method IsValueSet, addr 0x4a07c40, size 0x338, virtual false, abstract: false, final false
  inline bool IsValueSet(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  static inline ::UnityEngine::UIElements::InlineStyleAccess* New_ctor(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method RemoveInlineStyle, addr 0x4a08528, size 0xe8, virtual false, abstract: false, final false
  inline bool RemoveInlineStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method SetInlineRule, addr 0x4a07184, size 0x88, virtual false, abstract: false, final false
  inline void SetInlineRule(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule);

  /// @brief Method SetInlineTranslate, addr 0x4a082b4, size 0x15c, virtual false, abstract: false, final false
  inline bool SetInlineTranslate(::UnityEngine::UIElements::StyleTranslate inlineValue);

  /// @brief Method SetStyleValue, addr 0x4a04f48, size 0x18c, virtual false, abstract: false, final false
  inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleColor inlineValue);

  /// @brief Method SetStyleValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleEnum_1<T> inlineValue);

  /// @brief Method SetStyleValue, addr 0x4a053f0, size 0x148, virtual false, abstract: false, final false
  inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleFloat inlineValue);

  /// @brief Method SetStyleValue, addr 0x4a068bc, size 0x258, virtual false, abstract: false, final false
  inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleFont inlineValue);

  /// @brief Method SetStyleValue, addr 0x4a06b78, size 0x338, virtual false, abstract: false, final false
  inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleFontDefinition inlineValue);

  /// @brief Method SetStyleValue, addr 0x4a051b4, size 0x16c, virtual false, abstract: false, final false
  inline bool SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleLength inlineValue);

  /// @brief Method TryGetInlineBackgroundSize, addr 0x4a0811c, size 0x24, virtual false, abstract: false, final false
  inline bool TryGetInlineBackgroundSize(ByRef<::UnityEngine::UIElements::StyleBackgroundSize> value);

  /// @brief Method TryGetInlineCursor, addr 0x4a0802c, size 0x1c, virtual false, abstract: false, final false
  inline bool TryGetInlineCursor(ByRef<::UnityEngine::UIElements::StyleCursor> value);

  /// @brief Method TryGetInlineRotate, addr 0x4a08474, size 0x2c, virtual false, abstract: false, final false
  inline bool TryGetInlineRotate(ByRef<::UnityEngine::UIElements::StyleRotate> value);

  /// @brief Method TryGetInlineScale, addr 0x4a08504, size 0x24, virtual false, abstract: false, final false
  inline bool TryGetInlineScale(ByRef<::UnityEngine::UIElements::StyleScale> value);

  /// @brief Method TryGetInlineTextShadow, addr 0x4a08098, size 0x20, virtual false, abstract: false, final false
  inline bool TryGetInlineTextShadow(ByRef<::UnityEngine::UIElements::StyleTextShadow> value);

  /// @brief Method TryGetInlineTransformOrigin, addr 0x4a081a4, size 0x24, virtual false, abstract: false, final false
  inline bool TryGetInlineTransformOrigin(ByRef<::UnityEngine::UIElements::StyleTransformOrigin> value);

  /// @brief Method TryGetInlineTranslate, addr 0x4a0822c, size 0x2c, virtual false, abstract: false, final false
  inline bool TryGetInlineTranslate(ByRef<::UnityEngine::UIElements::StyleTranslate> value);

  /// @brief Method UnityEngine.UIElements.IStyle.get_backgroundSize, addr 0x4a080b8, size 0x64, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleBackgroundSize UnityEngine_UIElements_IStyle_get_backgroundSize();

  /// @brief Method UnityEngine.UIElements.IStyle.get_cursor, addr 0x4a07fe0, size 0x4c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleCursor UnityEngine_UIElements_IStyle_get_cursor();

  /// @brief Method UnityEngine.UIElements.IStyle.get_display, addr 0x4a05968, size 0x98, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> UnityEngine_UIElements_IStyle_get_display();

  /// @brief Method UnityEngine.UIElements.IStyle.get_paddingTop, addr 0x4a06578, size 0x20, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_paddingTop();

  /// @brief Method UnityEngine.UIElements.IStyle.get_rotate, addr 0x4a08410, size 0x64, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleRotate UnityEngine_UIElements_IStyle_get_rotate();

  /// @brief Method UnityEngine.UIElements.IStyle.get_scale, addr 0x4a084a0, size 0x64, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleScale UnityEngine_UIElements_IStyle_get_scale();

  /// @brief Method UnityEngine.UIElements.IStyle.get_textShadow, addr 0x4a08048, size 0x50, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleTextShadow UnityEngine_UIElements_IStyle_get_textShadow();

  /// @brief Method UnityEngine.UIElements.IStyle.get_transformOrigin, addr 0x4a08140, size 0x64, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleTransformOrigin UnityEngine_UIElements_IStyle_get_transformOrigin();

  /// @brief Method UnityEngine.UIElements.IStyle.get_translate, addr 0x4a081c8, size 0x64, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleTranslate UnityEngine_UIElements_IStyle_get_translate();

  /// @brief Method UnityEngine.UIElements.IStyle.get_width, addr 0x4a06f50, size 0x20, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_width();

  /// @brief Method UnityEngine.UIElements.IStyle.set_backgroundColor, addr 0x4a04ee8, size 0x60, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_backgroundColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomColor, addr 0x4a050fc, size 0x64, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderBottomColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius, addr 0x4a05160, size 0x54, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomRightRadius, addr 0x4a05320, size 0x58, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderBottomRightRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomWidth, addr 0x4a05378, size 0x78, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderBottomWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderLeftColor, addr 0x4a05538, size 0x64, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderLeftColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderLeftWidth, addr 0x4a0559c, size 0x78, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderLeftWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderRightColor, addr 0x4a05614, size 0x64, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderRightColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderRightWidth, addr 0x4a05678, size 0x78, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderRightWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderTopColor, addr 0x4a056f0, size 0x64, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderTopColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderTopLeftRadius, addr 0x4a05754, size 0x58, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderTopLeftRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderTopRightRadius, addr 0x4a057ac, size 0x58, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderTopRightRadius(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_borderTopWidth, addr 0x4a05804, size 0x78, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_borderTopWidth(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_bottom, addr 0x4a0587c, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_bottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_color, addr 0x4a05908, size 0x60, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_color(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_display, addr 0x4a05a00, size 0xc8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_display(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_flexBasis, addr 0x4a05ac8, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_flexBasis(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_flexDirection, addr 0x4a05b54, size 0xc8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_flexDirection(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_flexGrow, addr 0x4a05c1c, size 0x78, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_flexGrow(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_flexShrink, addr 0x4a05c94, size 0x78, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_flexShrink(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_fontSize, addr 0x4a05d0c, size 0x54, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_fontSize(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_height, addr 0x4a05d60, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_height(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_left, addr 0x4a05dec, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_left(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_marginBottom, addr 0x4a05e78, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_marginBottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_marginLeft, addr 0x4a05f04, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_marginLeft(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_marginRight, addr 0x4a05f90, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_marginRight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_marginTop, addr 0x4a0601c, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_marginTop(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_maxHeight, addr 0x4a060a8, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_maxHeight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_maxWidth, addr 0x4a06134, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_maxWidth(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_minWidth, addr 0x4a061c0, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_minWidth(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_opacity, addr 0x4a0624c, size 0x50, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_opacity(::UnityEngine::UIElements::StyleFloat value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_overflow, addr 0x4a0629c, size 0x138, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_overflow(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_paddingBottom, addr 0x4a063d4, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_paddingBottom(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_paddingLeft, addr 0x4a06460, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_paddingLeft(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_paddingRight, addr 0x4a064ec, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_paddingRight(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_paddingTop, addr 0x4a06598, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_paddingTop(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_position, addr 0x4a06624, size 0xc8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_position(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_right, addr 0x4a066ec, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_right(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_top, addr 0x4a06778, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_top(::UnityEngine::UIElements::StyleLength value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_translate, addr 0x4a08258, size 0x5c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_translate(::UnityEngine::UIElements::StyleTranslate value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor, addr 0x4a06804, size 0x64, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor(::UnityEngine::UIElements::StyleColor value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_unityFont, addr 0x4a06868, size 0x54, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_unityFont(::UnityEngine::UIElements::StyleFont value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_unityFontDefinition, addr 0x4a06b14, size 0x64, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_unityFontDefinition(::UnityEngine::UIElements::StyleFontDefinition value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_visibility, addr 0x4a06eb0, size 0xa0, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_visibility(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> value);

  /// @brief Method UnityEngine.UIElements.IStyle.set_width, addr 0x4a06f70, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IStyle_set_width(::UnityEngine::UIElements::StyleLength value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__ve_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get__ve_k__BackingField() const;

  constexpr bool const& __cordl_internal_get_m_HasInlineBackgroundSize() const;

  constexpr bool& __cordl_internal_get_m_HasInlineBackgroundSize();

  constexpr bool const& __cordl_internal_get_m_HasInlineCursor() const;

  constexpr bool& __cordl_internal_get_m_HasInlineCursor();

  constexpr bool const& __cordl_internal_get_m_HasInlineRotate() const;

  constexpr bool& __cordl_internal_get_m_HasInlineRotate();

  constexpr bool const& __cordl_internal_get_m_HasInlineScale() const;

  constexpr bool& __cordl_internal_get_m_HasInlineScale();

  constexpr bool const& __cordl_internal_get_m_HasInlineTextShadow() const;

  constexpr bool& __cordl_internal_get_m_HasInlineTextShadow();

  constexpr bool const& __cordl_internal_get_m_HasInlineTransformOrigin() const;

  constexpr bool& __cordl_internal_get_m_HasInlineTransformOrigin();

  constexpr bool const& __cordl_internal_get_m_HasInlineTranslate() const;

  constexpr bool& __cordl_internal_get_m_HasInlineTranslate();

  constexpr ::UnityEngine::UIElements::StyleBackgroundSize const& __cordl_internal_get_m_InlineBackgroundSize() const;

  constexpr ::UnityEngine::UIElements::StyleBackgroundSize& __cordl_internal_get_m_InlineBackgroundSize();

  constexpr ::UnityEngine::UIElements::StyleCursor const& __cordl_internal_get_m_InlineCursor() const;

  constexpr ::UnityEngine::UIElements::StyleCursor& __cordl_internal_get_m_InlineCursor();

  constexpr ::UnityEngine::UIElements::StyleRotate const& __cordl_internal_get_m_InlineRotateOperation() const;

  constexpr ::UnityEngine::UIElements::StyleRotate& __cordl_internal_get_m_InlineRotateOperation();

  constexpr ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule const& __cordl_internal_get_m_InlineRule() const;

  constexpr ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule& __cordl_internal_get_m_InlineRule();

  constexpr ::UnityEngine::UIElements::StyleScale const& __cordl_internal_get_m_InlineScale() const;

  constexpr ::UnityEngine::UIElements::StyleScale& __cordl_internal_get_m_InlineScale();

  constexpr ::UnityEngine::UIElements::StyleTextShadow const& __cordl_internal_get_m_InlineTextShadow() const;

  constexpr ::UnityEngine::UIElements::StyleTextShadow& __cordl_internal_get_m_InlineTextShadow();

  constexpr ::UnityEngine::UIElements::StyleTransformOrigin const& __cordl_internal_get_m_InlineTransformOrigin() const;

  constexpr ::UnityEngine::UIElements::StyleTransformOrigin& __cordl_internal_get_m_InlineTransformOrigin();

  constexpr ::UnityEngine::UIElements::StyleTranslate const& __cordl_internal_get_m_InlineTranslateOperation() const;

  constexpr ::UnityEngine::UIElements::StyleTranslate& __cordl_internal_get_m_InlineTranslateOperation();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*& __cordl_internal_get_m_ValuesManaged();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*> const& __cordl_internal_get_m_ValuesManaged() const;

  constexpr void __cordl_internal_set__ve_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_HasInlineBackgroundSize(bool value);

  constexpr void __cordl_internal_set_m_HasInlineCursor(bool value);

  constexpr void __cordl_internal_set_m_HasInlineRotate(bool value);

  constexpr void __cordl_internal_set_m_HasInlineScale(bool value);

  constexpr void __cordl_internal_set_m_HasInlineTextShadow(bool value);

  constexpr void __cordl_internal_set_m_HasInlineTransformOrigin(bool value);

  constexpr void __cordl_internal_set_m_HasInlineTranslate(bool value);

  constexpr void __cordl_internal_set_m_InlineBackgroundSize(::UnityEngine::UIElements::StyleBackgroundSize value);

  constexpr void __cordl_internal_set_m_InlineCursor(::UnityEngine::UIElements::StyleCursor value);

  constexpr void __cordl_internal_set_m_InlineRotateOperation(::UnityEngine::UIElements::StyleRotate value);

  constexpr void __cordl_internal_set_m_InlineRule(::UnityEngine::UIElements::__InlineStyleAccess__InlineRule value);

  constexpr void __cordl_internal_set_m_InlineScale(::UnityEngine::UIElements::StyleScale value);

  constexpr void __cordl_internal_set_m_InlineTextShadow(::UnityEngine::UIElements::StyleTextShadow value);

  constexpr void __cordl_internal_set_m_InlineTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin value);

  constexpr void __cordl_internal_set_m_InlineTranslateOperation(::UnityEngine::UIElements::StyleTranslate value);

  constexpr void __cordl_internal_set_m_ValuesManaged(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>* value);

  /// @brief Method .ctor, addr 0x4a0700c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* ve);

  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* getStaticF_s_StylePropertyReader();

  /// @brief Method get_ve, addr 0x4a06ffc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_ve();

  /// @brief Convert to "::UnityEngine::UIElements::IStyle"
  constexpr ::UnityEngine::UIElements::IStyle* i___UnityEngine__UIElements__IStyle() noexcept;

  static inline void setStaticF_s_StylePropertyReader(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* value);

  /// @brief Method set_ve, addr 0x4a07004, size 0x8, virtual false, abstract: false, final false
  inline void set_ve(::UnityEngine::UIElements::VisualElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InlineStyleAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InlineStyleAccess(InlineStyleAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InlineStyleAccess(InlineStyleAccess const&) = delete;

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

  /// @brief Field m_HasInlineBackgroundSize, offset: 0xe8, size: 0x1, def value: None
  bool ___m_HasInlineBackgroundSize;

  /// @brief Field m_InlineBackgroundSize, offset: 0xec, size: 0x18, def value: None
  ::UnityEngine::UIElements::StyleBackgroundSize ___m_InlineBackgroundSize;

  /// @brief Field m_InlineRule, offset: 0x108, size: 0x18, def value: None
  ::UnityEngine::UIElements::__InlineStyleAccess__InlineRule ___m_InlineRule;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6038 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InlineStyleAccess, 0x120>, "Size mismatch!");

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

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_HasInlineBackgroundSize) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineBackgroundSize) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InlineStyleAccess, ___m_InlineRule) == 0x108, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::InlineStyleAccess);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InlineStyleAccess*, "UnityEngine.UIElements", "InlineStyleAccess");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__InlineStyleAccess__InlineRule, "UnityEngine.UIElements", "InlineStyleAccess/InlineRule");
