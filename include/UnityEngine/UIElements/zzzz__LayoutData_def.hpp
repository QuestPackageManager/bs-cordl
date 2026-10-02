#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/LayoutData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Align_def.hpp"
#include "UnityEngine/UIElements/zzzz__DisplayStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__FlexDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__Justify_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__Position_def.hpp"
#include "UnityEngine/UIElements/zzzz__Ratio_def.hpp"
#include "UnityEngine/UIElements/zzzz__Wrap_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutData)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleDataGroup_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct LayoutData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::LayoutData);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::LayoutData, "UnityEngine.UIElements", "LayoutData");
// Dependencies UnityEngine.UIElements.Align, UnityEngine.UIElements.DisplayStyle, UnityEngine.UIElements.FlexDirection, UnityEngine.UIElements.Justify, UnityEngine.UIElements.Length,
// UnityEngine.UIElements.Position, UnityEngine.UIElements.Ratio, UnityEngine.UIElements.Wrap
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.LayoutData
struct CORDL_TYPE LayoutData {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::LayoutData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::LayoutData>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::LayoutData>"
  constexpr operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::LayoutData>*();

  /// @brief Method Copy, addr 0x70f0dc8, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::LayoutData Copy();

  /// @brief Method CopyFrom, addr 0x70f0dd8, size 0x8, virtual true, abstract: false, final true
  inline void CopyFrom(::by_ref<::UnityEngine::UIElements::LayoutData> other);

  /// @brief Method Equals, addr 0x70f1244, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x70f11f8, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::LayoutData other);

  /// @brief Method GetHashCode, addr 0x70f12e8, size 0x3bc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::LayoutData>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::LayoutData>* i___System__IEquatable_1___UnityEngine__UIElements__LayoutData_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::LayoutData>"
  constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::LayoutData>* i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__LayoutData_();

  /// @brief Method op_Equality, addr 0x70f0de0, size 0x418, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::LayoutData lhs, ::UnityEngine::UIElements::LayoutData rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutData();

  // Ctor Parameters [CppParam { name: "alignContent", ty: "::UnityEngine::UIElements::Align", modifiers: "", def_value: None, comment: None }, CppParam { name: "alignItems", ty:
  // "::UnityEngine::UIElements::Align", modifiers: "", def_value: None, comment: None }, CppParam { name: "alignSelf", ty: "::UnityEngine::UIElements::Align", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "aspectRatio", ty: "::UnityEngine::UIElements::Ratio", modifiers: "", def_value: None, comment: None }, CppParam { name: "borderBottomWidth", ty: "float_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "borderLeftWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "borderRightWidth", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "borderTopWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottom", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "display", ty: "::UnityEngine::UIElements::DisplayStyle", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "flexBasis", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "flexDirection", ty:
  // "::UnityEngine::UIElements::FlexDirection", modifiers: "", def_value: None, comment: None }, CppParam { name: "flexGrow", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam
  // { name: "flexShrink", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "flexWrap", ty: "::UnityEngine::UIElements::Wrap", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "height", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "justifyContent", ty:
  // "::UnityEngine::UIElements::Justify", modifiers: "", def_value: None, comment: None }, CppParam { name: "left", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "marginBottom", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "marginLeft", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "marginRight", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "marginTop", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxHeight", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxWidth", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "minHeight", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "minWidth", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "paddingBottom", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "paddingLeft", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "paddingRight", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "paddingTop", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "position", ty: "::UnityEngine::UIElements::Position", modifiers: "", def_value: None, comment: None }, CppParam { name: "right", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "top", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "width", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }]
  constexpr LayoutData(::UnityEngine::UIElements::Align alignContent, ::UnityEngine::UIElements::Align alignItems, ::UnityEngine::UIElements::Align alignSelf,
                       ::UnityEngine::UIElements::Ratio aspectRatio, float_t borderBottomWidth, float_t borderLeftWidth, float_t borderRightWidth, float_t borderTopWidth,
                       ::UnityEngine::UIElements::Length bottom, ::UnityEngine::UIElements::DisplayStyle display, ::UnityEngine::UIElements::Length flexBasis,
                       ::UnityEngine::UIElements::FlexDirection flexDirection, float_t flexGrow, float_t flexShrink, ::UnityEngine::UIElements::Wrap flexWrap, ::UnityEngine::UIElements::Length height,
                       ::UnityEngine::UIElements::Justify justifyContent, ::UnityEngine::UIElements::Length left, ::UnityEngine::UIElements::Length marginBottom,
                       ::UnityEngine::UIElements::Length marginLeft, ::UnityEngine::UIElements::Length marginRight, ::UnityEngine::UIElements::Length marginTop,
                       ::UnityEngine::UIElements::Length maxHeight, ::UnityEngine::UIElements::Length maxWidth, ::UnityEngine::UIElements::Length minHeight, ::UnityEngine::UIElements::Length minWidth,
                       ::UnityEngine::UIElements::Length paddingBottom, ::UnityEngine::UIElements::Length paddingLeft, ::UnityEngine::UIElements::Length paddingRight,
                       ::UnityEngine::UIElements::Length paddingTop, ::UnityEngine::UIElements::Position position, ::UnityEngine::UIElements::Length right, ::UnityEngine::UIElements::Length top,
                       ::UnityEngine::UIElements::Length width) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5001 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd4 };

  /// @brief Field alignContent, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::Align alignContent;

  /// @brief Field alignItems, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::Align alignItems;

  /// @brief Field alignSelf, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::Align alignSelf;

  /// @brief Field aspectRatio, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::UIElements::Ratio aspectRatio;

  /// @brief Field borderBottomWidth, offset: 0x10, size: 0x4, def value: None
  float_t borderBottomWidth;

  /// @brief Field borderLeftWidth, offset: 0x14, size: 0x4, def value: None
  float_t borderLeftWidth;

  /// @brief Field borderRightWidth, offset: 0x18, size: 0x4, def value: None
  float_t borderRightWidth;

  /// @brief Field borderTopWidth, offset: 0x1c, size: 0x4, def value: None
  float_t borderTopWidth;

  /// @brief Field bottom, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length bottom;

  /// @brief Field display, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::UIElements::DisplayStyle display;

  /// @brief Field flexBasis, offset: 0x2c, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length flexBasis;

  /// @brief Field flexDirection, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::UIElements::FlexDirection flexDirection;

  /// @brief Field flexGrow, offset: 0x38, size: 0x4, def value: None
  float_t flexGrow;

  /// @brief Field flexShrink, offset: 0x3c, size: 0x4, def value: None
  float_t flexShrink;

  /// @brief Field flexWrap, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::UIElements::Wrap flexWrap;

  /// @brief Field height, offset: 0x44, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length height;

  /// @brief Field justifyContent, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::UIElements::Justify justifyContent;

  /// @brief Field left, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length left;

  /// @brief Field marginBottom, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length marginBottom;

  /// @brief Field marginLeft, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length marginLeft;

  /// @brief Field marginRight, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length marginRight;

  /// @brief Field marginTop, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length marginTop;

  /// @brief Field maxHeight, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length maxHeight;

  /// @brief Field maxWidth, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length maxWidth;

  /// @brief Field minHeight, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length minHeight;

  /// @brief Field minWidth, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length minWidth;

  /// @brief Field paddingBottom, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length paddingBottom;

  /// @brief Field paddingLeft, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length paddingLeft;

  /// @brief Field paddingRight, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length paddingRight;

  /// @brief Field paddingTop, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length paddingTop;

  /// @brief Field position, offset: 0xb8, size: 0x4, def value: None
  ::UnityEngine::UIElements::Position position;

  /// @brief Field right, offset: 0xbc, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length right;

  /// @brief Field top, offset: 0xc4, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length top;

  /// @brief Field width, offset: 0xcc, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length width;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::LayoutData, alignContent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, alignItems) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, alignSelf) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, aspectRatio) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, borderBottomWidth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, borderLeftWidth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, borderRightWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, borderTopWidth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, bottom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, display) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, flexBasis) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, flexDirection) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, flexGrow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, flexShrink) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, flexWrap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, height) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, justifyContent) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, left) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, marginBottom) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, marginLeft) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, marginRight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, marginTop) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, maxHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, maxWidth) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, minHeight) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, minWidth) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, paddingBottom) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, paddingLeft) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, paddingRight) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, paddingTop) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, position) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, right) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, top) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::LayoutData, width) == 0xcc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::LayoutData) == 0xd4, "Size mismatch!");

} // namespace UnityEngine::UIElements
