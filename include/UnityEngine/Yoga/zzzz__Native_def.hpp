#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/Native.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Native)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Yoga {
struct YogaAlign;
}
namespace UnityEngine::Yoga {
struct YogaDirection;
}
namespace UnityEngine::Yoga {
struct YogaDisplay;
}
namespace UnityEngine::Yoga {
struct YogaEdge;
}
namespace UnityEngine::Yoga {
struct YogaFlexDirection;
}
namespace UnityEngine::Yoga {
struct YogaJustify;
}
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
namespace UnityEngine::Yoga {
struct YogaOverflow;
}
namespace UnityEngine::Yoga {
struct YogaPositionType;
}
namespace UnityEngine::Yoga {
struct YogaWrap;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class Native;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::Native);
// Dependencies System.Object
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: UnityEngine.Yoga.Native
class CORDL_TYPE Native : public ::System::Object {
public:
  // Declarations
  /// @brief Method YGConfigFree, addr 0x496c570, size 0x58, virtual false, abstract: false, final false
  static inline void YGConfigFree(::System::IntPtr config);

  /// @brief Method YGConfigFreeInternal, addr 0x496c980, size 0x3c, virtual false, abstract: false, final false
  static inline void YGConfigFreeInternal(::System::IntPtr config);

  /// @brief Method YGConfigGetDefault, addr 0x496c7e8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr YGConfigGetDefault();

  /// @brief Method YGConfigGetUseWebDefaults, addr 0x496c604, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGConfigGetUseWebDefaults(::System::IntPtr config);

  /// @brief Method YGConfigNew, addr 0x496c438, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr YGConfigNew();

  /// @brief Method YGConfigSetPointScaleFactor, addr 0x496c714, size 0x4c, virtual false, abstract: false, final false
  static inline void YGConfigSetPointScaleFactor(::System::IntPtr config, float_t pixelsInPoint);

  /// @brief Method YGConfigSetUseWebDefaults, addr 0x496c684, size 0x44, virtual false, abstract: false, final false
  static inline void YGConfigSetUseWebDefaults(::System::IntPtr config, bool useWebDefaults);

  /// @brief Method YGNodeBaselineInvoke, addr 0x496ccc0, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode* node, float_t width, float_t height, ::System::IntPtr returnValueAddress);

  /// @brief Method YGNodeCalculateLayout, addr 0x496ca54, size 0x5c, virtual false, abstract: false, final false
  static inline void YGNodeCalculateLayout(::System::IntPtr node, float_t availableWidth, float_t availableHeight, ::UnityEngine::Yoga::YogaDirection parentDirection);

  /// @brief Method YGNodeCopyStyle, addr 0x496cb28, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeCopyStyle(::System::IntPtr dstNode, ::System::IntPtr srcNode);

  /// @brief Method YGNodeFree, addr 0x496c864, size 0x58, virtual false, abstract: false, final false
  static inline void YGNodeFree(::System::IntPtr ygNode);

  /// @brief Method YGNodeFreeInternal, addr 0x496c8bc, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeFreeInternal(::System::IntPtr ygNode);

  /// @brief Method YGNodeGetHasNewLayout, addr 0x496cdc0, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGNodeGetHasNewLayout(::System::IntPtr node);

  /// @brief Method YGNodeInsertChild, addr 0x496c9bc, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeInsertChild(::System::IntPtr node, ::System::IntPtr child, uint32_t index);

  /// @brief Method YGNodeIsDirty, addr 0x496caec, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGNodeIsDirty(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetBorder, addr 0x496dadc, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetBorder(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetBottom, addr 0x496d9a0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetBottom(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetHeight, addr 0x496da18, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetHeight(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetLeft, addr 0x496d8ec, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetLeft(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetMargin, addr 0x496da54, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetMargin(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetPadding, addr 0x496da98, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetPadding(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetRight, addr 0x496d964, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetRight(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetTop, addr 0x496d928, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetTop(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetWidth, addr 0x496d9dc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetWidth(::System::IntPtr node);

  /// @brief Method YGNodeMarkDirty, addr 0x496cab0, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeMarkDirty(::System::IntPtr node);

  /// @brief Method YGNodeMeasureInvoke, addr 0x496cbe4, size 0x64, virtual false, abstract: false, final false
  static inline void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                         ::UnityEngine::Yoga::YogaMeasureMode heightMode, ::System::IntPtr returnValueAddress);

  /// @brief Method YGNodeNewWithConfig, addr 0x496c828, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr YGNodeNewWithConfig(::System::IntPtr config);

  /// @brief Method YGNodeRemoveChild, addr 0x496ca10, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeRemoveChild(::System::IntPtr node, ::System::IntPtr child);

  /// @brief Method YGNodeRemoveMeasureFunc, addr 0x496cba8, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeRemoveMeasureFunc(::System::IntPtr node);

  /// @brief Method YGNodeSetConfig, addr 0x496c93c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeSetConfig(::System::IntPtr ygNode, ::System::IntPtr config);

  /// @brief Method YGNodeSetHasNewLayout, addr 0x496cd7c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeSetHasNewLayout(::System::IntPtr node, bool hasNewLayout);

  /// @brief Method YGNodeSetMeasureFunc, addr 0x496cb6c, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeSetMeasureFunc(::System::IntPtr node);

  /// @brief Method YGNodeStyleGetDirection, addr 0x496cdfc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaDirection YGNodeStyleGetDirection(::System::IntPtr node);

  /// @brief Method YGNodeStyleSetAlignContent, addr 0x496cec0, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignContent(::System::IntPtr node, ::UnityEngine::Yoga::YogaAlign alignContent);

  /// @brief Method YGNodeStyleSetAlignItems, addr 0x496cf04, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignItems(::System::IntPtr node, ::UnityEngine::Yoga::YogaAlign alignItems);

  /// @brief Method YGNodeStyleSetAlignSelf, addr 0x496cf48, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignSelf(::System::IntPtr node, ::UnityEngine::Yoga::YogaAlign alignSelf);

  /// @brief Method YGNodeStyleSetBorder, addr 0x496d898, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetBorder(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t border);

  /// @brief Method YGNodeStyleSetDisplay, addr 0x496d058, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetDisplay(::System::IntPtr node, ::UnityEngine::Yoga::YogaDisplay display);

  /// @brief Method YGNodeStyleSetFlex, addr 0x496d09c, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlex(::System::IntPtr node, float_t flex);

  /// @brief Method YGNodeStyleSetFlexBasis, addr 0x496d180, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasis(::System::IntPtr node, float_t flexBasis);

  /// @brief Method YGNodeStyleSetFlexBasisAuto, addr 0x496d218, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasisAuto(::System::IntPtr node);

  /// @brief Method YGNodeStyleSetFlexBasisPercent, addr 0x496d1cc, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasisPercent(::System::IntPtr node, float_t flexBasis);

  /// @brief Method YGNodeStyleSetFlexDirection, addr 0x496ce38, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexDirection(::System::IntPtr node, ::UnityEngine::Yoga::YogaFlexDirection flexDirection);

  /// @brief Method YGNodeStyleSetFlexGrow, addr 0x496d0e8, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexGrow(::System::IntPtr node, float_t flexGrow);

  /// @brief Method YGNodeStyleSetFlexShrink, addr 0x496d134, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexShrink(::System::IntPtr node, float_t flexShrink);

  /// @brief Method YGNodeStyleSetFlexWrap, addr 0x496cfd0, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexWrap(::System::IntPtr node, ::UnityEngine::Yoga::YogaWrap flexWrap);

  /// @brief Method YGNodeStyleSetHeight, addr 0x496d328, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeight(::System::IntPtr node, float_t height);

  /// @brief Method YGNodeStyleSetHeightAuto, addr 0x496d3c0, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeightAuto(::System::IntPtr node);

  /// @brief Method YGNodeStyleSetHeightPercent, addr 0x496d374, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeightPercent(::System::IntPtr node, float_t height);

  /// @brief Method YGNodeStyleSetJustifyContent, addr 0x496ce7c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetJustifyContent(::System::IntPtr node, ::UnityEngine::Yoga::YogaJustify justifyContent);

  /// @brief Method YGNodeStyleSetMargin, addr 0x496d704, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMargin(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin);

  /// @brief Method YGNodeStyleSetMarginAuto, addr 0x496d7ac, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMarginAuto(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeStyleSetMarginPercent, addr 0x496d758, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMarginPercent(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin);

  /// @brief Method YGNodeStyleSetMaxHeight, addr 0x496d5c4, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxHeight(::System::IntPtr node, float_t maxHeight);

  /// @brief Method YGNodeStyleSetMaxHeightPercent, addr 0x496d610, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxHeightPercent(::System::IntPtr node, float_t maxHeight);

  /// @brief Method YGNodeStyleSetMaxWidth, addr 0x496d52c, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxWidth(::System::IntPtr node, float_t maxWidth);

  /// @brief Method YGNodeStyleSetMaxWidthPercent, addr 0x496d578, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxWidthPercent(::System::IntPtr node, float_t maxWidth);

  /// @brief Method YGNodeStyleSetMinHeight, addr 0x496d494, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinHeight(::System::IntPtr node, float_t minHeight);

  /// @brief Method YGNodeStyleSetMinHeightPercent, addr 0x496d4e0, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinHeightPercent(::System::IntPtr node, float_t minHeight);

  /// @brief Method YGNodeStyleSetMinWidth, addr 0x496d3fc, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinWidth(::System::IntPtr node, float_t minWidth);

  /// @brief Method YGNodeStyleSetMinWidthPercent, addr 0x496d448, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinWidthPercent(::System::IntPtr node, float_t minWidth);

  /// @brief Method YGNodeStyleSetOverflow, addr 0x496d014, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetOverflow(::System::IntPtr node, ::UnityEngine::Yoga::YogaOverflow flexWrap);

  /// @brief Method YGNodeStyleSetPadding, addr 0x496d7f0, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPadding(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding);

  /// @brief Method YGNodeStyleSetPaddingPercent, addr 0x496d844, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPaddingPercent(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding);

  /// @brief Method YGNodeStyleSetPosition, addr 0x496d65c, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPosition(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t position);

  /// @brief Method YGNodeStyleSetPositionPercent, addr 0x496d6b0, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPositionPercent(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t position);

  /// @brief Method YGNodeStyleSetPositionType, addr 0x496cf8c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPositionType(::System::IntPtr node, ::UnityEngine::Yoga::YogaPositionType positionType);

  /// @brief Method YGNodeStyleSetWidth, addr 0x496d254, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidth(::System::IntPtr node, float_t width);

  /// @brief Method YGNodeStyleSetWidthAuto, addr 0x496d2ec, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidthAuto(::System::IntPtr node);

  /// @brief Method YGNodeStyleSetWidthPercent, addr 0x496d2a0, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidthPercent(::System::IntPtr node, float_t width);

  /// @brief Method YGSetManagedObject, addr 0x496c8f8, size 0x44, virtual false, abstract: false, final false
  static inline void YGSetManagedObject(::System::IntPtr ygNode, ::UnityEngine::Yoga::YogaNode* node);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Native();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Native(Native&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Native(Native const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5440 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::Native, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::Native);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::Native*, "UnityEngine.Yoga", "Native");
