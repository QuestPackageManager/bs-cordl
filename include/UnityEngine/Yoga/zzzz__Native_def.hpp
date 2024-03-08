#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Native)
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
// Type: UnityEngine.Yoga::Native
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: ::UnityEngine.Yoga::Native*
class CORDL_TYPE Native : public ::System::Object {
public:
  // Declarations
  /// @brief Method YGConfigFree, addr 0x300beb4, size 0x8c, virtual false, abstract: false, final false
  static inline void YGConfigFree(void* config);

  /// @brief Method YGConfigFreeInternal, addr 0x300bf40, size 0x3c, virtual false, abstract: false, final false
  static inline void YGConfigFreeInternal(void* config);

  /// @brief Method YGConfigGetDefault, addr 0x300be64, size 0x28, virtual false, abstract: false, final false
  static inline void* YGConfigGetDefault();

  /// @brief Method YGConfigGetUseWebDefaults, addr 0x300bfc0, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGConfigGetUseWebDefaults(void* config);

  /// @brief Method YGConfigNew, addr 0x300be8c, size 0x28, virtual false, abstract: false, final false
  static inline void* YGConfigNew();

  /// @brief Method YGConfigSetPointScaleFactor, addr 0x300bffc, size 0x4c, virtual false, abstract: false, final false
  static inline void YGConfigSetPointScaleFactor(void* config, float_t pixelsInPoint);

  /// @brief Method YGConfigSetUseWebDefaults, addr 0x300bf7c, size 0x44, virtual false, abstract: false, final false
  static inline void YGConfigSetUseWebDefaults(void* config, bool useWebDefaults);

  /// @brief Method YGNodeBaselineInvoke, addr 0x300c0ac, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode* node, float_t width, float_t height, void* returnValueAddress);

  /// @brief Method YGNodeCalculateLayout, addr 0x300ba84, size 0x5c, virtual false, abstract: false, final false
  static inline void YGNodeCalculateLayout(void* node, float_t availableWidth, float_t availableHeight, ::UnityEngine::Yoga::YogaDirection parentDirection);

  /// @brief Method YGNodeCopyStyle, addr 0x300a1d4, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeCopyStyle(void* dstNode, void* srcNode);

  /// @brief Method YGNodeFree, addr 0x3009e80, size 0x8c, virtual false, abstract: false, final false
  static inline void YGNodeFree(void* ygNode);

  /// @brief Method YGNodeFreeInternal, addr 0x300be28, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeFreeInternal(void* ygNode);

  /// @brief Method YGNodeGetHasNewLayout, addr 0x300a12c, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGNodeGetHasNewLayout(void* node);

  /// @brief Method YGNodeInsertChild, addr 0x300b66c, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeInsertChild(void* node, void* child, uint32_t index);

  /// @brief Method YGNodeIsDirty, addr 0x300a03c, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGNodeIsDirty(void* node);

  /// @brief Method YGNodeLayoutGetBorder, addr 0x3009b70, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetBorder(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetBottom, addr 0x300b2c4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetBottom(void* node);

  /// @brief Method YGNodeLayoutGetHeight, addr 0x300b3b4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetHeight(void* node);

  /// @brief Method YGNodeLayoutGetLeft, addr 0x300b15c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetLeft(void* node);

  /// @brief Method YGNodeLayoutGetMargin, addr 0x30098e8, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetMargin(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetPadding, addr 0x3009a2c, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetPadding(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetRight, addr 0x300b24c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetRight(void* node);

  /// @brief Method YGNodeLayoutGetTop, addr 0x300b1d4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetTop(void* node);

  /// @brief Method YGNodeLayoutGetWidth, addr 0x300b33c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetWidth(void* node);

  /// @brief Method YGNodeMarkDirty, addr 0x300a0b4, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeMarkDirty(void* node);

  /// @brief Method YGNodeMeasureInvoke, addr 0x300c048, size 0x64, virtual false, abstract: false, final false
  static inline void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                         ::UnityEngine::Yoga::YogaMeasureMode heightMode, void* returnValueAddress);

  /// @brief Method YGNodeNewWithConfig, addr 0x3009dac, size 0x3c, virtual false, abstract: false, final false
  static inline void* YGNodeNewWithConfig(void* config);

  /// @brief Method YGNodeRemoveChild, addr 0x300b788, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeRemoveChild(void* node, void* child);

  /// @brief Method YGNodeRemoveMeasureFunc, addr 0x300b94c, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeRemoveMeasureFunc(void* node);

  /// @brief Method YGNodeSetConfig, addr 0x3009fbc, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeSetConfig(void* ygNode, void* config);

  /// @brief Method YGNodeSetHasNewLayout, addr 0x300b504, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeSetHasNewLayout(void* node, bool hasNewLayout);

  /// @brief Method YGNodeSetMeasureFunc, addr 0x300b988, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeSetMeasureFunc(void* node);

  /// @brief Method YGNodeStyleGetDirection, addr 0x300ba48, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaDirection YGNodeStyleGetDirection(void* node);

  /// @brief Method YGNodeStyleSetAlignContent, addr 0x300a504, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignContent(void* node, ::UnityEngine::Yoga::YogaAlign alignContent);

  /// @brief Method YGNodeStyleSetAlignItems, addr 0x300a3f4, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignItems(void* node, ::UnityEngine::Yoga::YogaAlign alignItems);

  /// @brief Method YGNodeStyleSetAlignSelf, addr 0x300a47c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignSelf(void* node, ::UnityEngine::Yoga::YogaAlign alignSelf);

  /// @brief Method YGNodeStyleSetBorder, addr 0x3009764, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetBorder(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t border);

  /// @brief Method YGNodeStyleSetDisplay, addr 0x300a36c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetDisplay(void* node, ::UnityEngine::Yoga::YogaDisplay display);

  /// @brief Method YGNodeStyleSetFlex, addr 0x300a6a4, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlex(void* node, float_t flex);

  /// @brief Method YGNodeStyleSetFlexBasis, addr 0x300a964, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasis(void* node, float_t flexBasis);

  /// @brief Method YGNodeStyleSetFlexBasisAuto, addr 0x300a928, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasisAuto(void* node);

  /// @brief Method YGNodeStyleSetFlexBasisPercent, addr 0x300a8dc, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasisPercent(void* node, float_t flexBasis);

  /// @brief Method YGNodeStyleSetFlexDirection, addr 0x300a25c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexDirection(void* node, ::UnityEngine::Yoga::YogaFlexDirection flexDirection);

  /// @brief Method YGNodeStyleSetFlexGrow, addr 0x300a73c, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexGrow(void* node, float_t flexGrow);

  /// @brief Method YGNodeStyleSetFlexShrink, addr 0x300a7d4, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexShrink(void* node, float_t flexShrink);

  /// @brief Method YGNodeStyleSetFlexWrap, addr 0x300a614, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexWrap(void* node, ::UnityEngine::Yoga::YogaWrap flexWrap);

  /// @brief Method YGNodeStyleSetHeight, addr 0x300ac84, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeight(void* node, float_t height);

  /// @brief Method YGNodeStyleSetHeightAuto, addr 0x300ac48, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeightAuto(void* node);

  /// @brief Method YGNodeStyleSetHeightPercent, addr 0x300abfc, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeightPercent(void* node, float_t height);

  /// @brief Method YGNodeStyleSetJustifyContent, addr 0x300a2e4, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetJustifyContent(void* node, ::UnityEngine::Yoga::YogaJustify justifyContent);

  /// @brief Method YGNodeStyleSetMargin, addr 0x3009564, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMargin(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin);

  /// @brief Method YGNodeStyleSetMarginAuto, addr 0x3009520, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMarginAuto(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeStyleSetMarginPercent, addr 0x30094cc, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMarginPercent(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin);

  /// @brief Method YGNodeStyleSetMaxHeight, addr 0x300aeac, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxHeight(void* node, float_t maxHeight);

  /// @brief Method YGNodeStyleSetMaxHeightPercent, addr 0x300ae60, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxHeightPercent(void* node, float_t maxHeight);

  /// @brief Method YGNodeStyleSetMaxWidth, addr 0x300ad98, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxWidth(void* node, float_t maxWidth);

  /// @brief Method YGNodeStyleSetMaxWidthPercent, addr 0x300ad4c, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxWidthPercent(void* node, float_t maxWidth);

  /// @brief Method YGNodeStyleSetMinHeight, addr 0x300b0d4, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinHeight(void* node, float_t minHeight);

  /// @brief Method YGNodeStyleSetMinHeightPercent, addr 0x300b088, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinHeightPercent(void* node, float_t minHeight);

  /// @brief Method YGNodeStyleSetMinWidth, addr 0x300afc0, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinWidth(void* node, float_t minWidth);

  /// @brief Method YGNodeStyleSetMinWidthPercent, addr 0x300af74, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinWidthPercent(void* node, float_t minWidth);

  /// @brief Method YGNodeStyleSetOverflow, addr 0x300b434, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetOverflow(void* node, ::UnityEngine::Yoga::YogaOverflow flexWrap);

  /// @brief Method YGNodeStyleSetPadding, addr 0x30096c0, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPadding(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding);

  /// @brief Method YGNodeStyleSetPaddingPercent, addr 0x300966c, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPaddingPercent(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding);

  /// @brief Method YGNodeStyleSetPosition, addr 0x3009380, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPosition(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t position);

  /// @brief Method YGNodeStyleSetPositionPercent, addr 0x300932c, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPositionPercent(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t position);

  /// @brief Method YGNodeStyleSetPositionType, addr 0x300a58c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPositionType(void* node, ::UnityEngine::Yoga::YogaPositionType positionType);

  /// @brief Method YGNodeStyleSetWidth, addr 0x300aaf4, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidth(void* node, float_t width);

  /// @brief Method YGNodeStyleSetWidthAuto, addr 0x300aab8, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidthAuto(void* node);

  /// @brief Method YGNodeStyleSetWidthPercent, addr 0x300aa6c, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidthPercent(void* node, float_t width);

  /// @brief Method YGSetManagedObject, addr 0x300b908, size 0x44, virtual false, abstract: false, final false
  static inline void YGSetManagedObject(void* ygNode, ::UnityEngine::Yoga::YogaNode* node);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::Native, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::Native);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::Native*, "UnityEngine.Yoga", "Native");
