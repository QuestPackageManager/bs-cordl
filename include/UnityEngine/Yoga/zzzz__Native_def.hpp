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
  /// @brief Method YGConfigFree, addr 0x33f2ccc, size 0x8c, virtual false, abstract: false, final false
  static inline void YGConfigFree(void* config);

  /// @brief Method YGConfigFreeInternal, addr 0x33f2d58, size 0x3c, virtual false, abstract: false, final false
  static inline void YGConfigFreeInternal(void* config);

  /// @brief Method YGConfigGetDefault, addr 0x33f2c7c, size 0x28, virtual false, abstract: false, final false
  static inline void* YGConfigGetDefault();

  /// @brief Method YGConfigGetUseWebDefaults, addr 0x33f2dd8, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGConfigGetUseWebDefaults(void* config);

  /// @brief Method YGConfigNew, addr 0x33f2ca4, size 0x28, virtual false, abstract: false, final false
  static inline void* YGConfigNew();

  /// @brief Method YGConfigSetPointScaleFactor, addr 0x33f2e14, size 0x4c, virtual false, abstract: false, final false
  static inline void YGConfigSetPointScaleFactor(void* config, float_t pixelsInPoint);

  /// @brief Method YGConfigSetUseWebDefaults, addr 0x33f2d94, size 0x44, virtual false, abstract: false, final false
  static inline void YGConfigSetUseWebDefaults(void* config, bool useWebDefaults);

  /// @brief Method YGNodeBaselineInvoke, addr 0x33f2ec4, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode* node, float_t width, float_t height, void* returnValueAddress);

  /// @brief Method YGNodeCalculateLayout, addr 0x33f289c, size 0x5c, virtual false, abstract: false, final false
  static inline void YGNodeCalculateLayout(void* node, float_t availableWidth, float_t availableHeight, ::UnityEngine::Yoga::YogaDirection parentDirection);

  /// @brief Method YGNodeCopyStyle, addr 0x33f0fec, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeCopyStyle(void* dstNode, void* srcNode);

  /// @brief Method YGNodeFree, addr 0x33f0c98, size 0x8c, virtual false, abstract: false, final false
  static inline void YGNodeFree(void* ygNode);

  /// @brief Method YGNodeFreeInternal, addr 0x33f2c40, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeFreeInternal(void* ygNode);

  /// @brief Method YGNodeGetHasNewLayout, addr 0x33f0f44, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGNodeGetHasNewLayout(void* node);

  /// @brief Method YGNodeInsertChild, addr 0x33f2484, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeInsertChild(void* node, void* child, uint32_t index);

  /// @brief Method YGNodeIsDirty, addr 0x33f0e54, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGNodeIsDirty(void* node);

  /// @brief Method YGNodeLayoutGetBorder, addr 0x33f0988, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetBorder(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetBottom, addr 0x33f20dc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetBottom(void* node);

  /// @brief Method YGNodeLayoutGetHeight, addr 0x33f21cc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetHeight(void* node);

  /// @brief Method YGNodeLayoutGetLeft, addr 0x33f1f74, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetLeft(void* node);

  /// @brief Method YGNodeLayoutGetMargin, addr 0x33f0700, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetMargin(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetPadding, addr 0x33f0844, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetPadding(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetRight, addr 0x33f2064, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetRight(void* node);

  /// @brief Method YGNodeLayoutGetTop, addr 0x33f1fec, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetTop(void* node);

  /// @brief Method YGNodeLayoutGetWidth, addr 0x33f2154, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetWidth(void* node);

  /// @brief Method YGNodeMarkDirty, addr 0x33f0ecc, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeMarkDirty(void* node);

  /// @brief Method YGNodeMeasureInvoke, addr 0x33f2e60, size 0x64, virtual false, abstract: false, final false
  static inline void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                         ::UnityEngine::Yoga::YogaMeasureMode heightMode, void* returnValueAddress);

  /// @brief Method YGNodeNewWithConfig, addr 0x33f0bc4, size 0x3c, virtual false, abstract: false, final false
  static inline void* YGNodeNewWithConfig(void* config);

  /// @brief Method YGNodeRemoveChild, addr 0x33f25a0, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeRemoveChild(void* node, void* child);

  /// @brief Method YGNodeRemoveMeasureFunc, addr 0x33f2764, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeRemoveMeasureFunc(void* node);

  /// @brief Method YGNodeSetConfig, addr 0x33f0dd4, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeSetConfig(void* ygNode, void* config);

  /// @brief Method YGNodeSetHasNewLayout, addr 0x33f231c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeSetHasNewLayout(void* node, bool hasNewLayout);

  /// @brief Method YGNodeSetMeasureFunc, addr 0x33f27a0, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeSetMeasureFunc(void* node);

  /// @brief Method YGNodeStyleGetDirection, addr 0x33f2860, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaDirection YGNodeStyleGetDirection(void* node);

  /// @brief Method YGNodeStyleSetAlignContent, addr 0x33f131c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignContent(void* node, ::UnityEngine::Yoga::YogaAlign alignContent);

  /// @brief Method YGNodeStyleSetAlignItems, addr 0x33f120c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignItems(void* node, ::UnityEngine::Yoga::YogaAlign alignItems);

  /// @brief Method YGNodeStyleSetAlignSelf, addr 0x33f1294, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignSelf(void* node, ::UnityEngine::Yoga::YogaAlign alignSelf);

  /// @brief Method YGNodeStyleSetBorder, addr 0x33f057c, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetBorder(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t border);

  /// @brief Method YGNodeStyleSetDisplay, addr 0x33f1184, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetDisplay(void* node, ::UnityEngine::Yoga::YogaDisplay display);

  /// @brief Method YGNodeStyleSetFlex, addr 0x33f14bc, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlex(void* node, float_t flex);

  /// @brief Method YGNodeStyleSetFlexBasis, addr 0x33f177c, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasis(void* node, float_t flexBasis);

  /// @brief Method YGNodeStyleSetFlexBasisAuto, addr 0x33f1740, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasisAuto(void* node);

  /// @brief Method YGNodeStyleSetFlexBasisPercent, addr 0x33f16f4, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasisPercent(void* node, float_t flexBasis);

  /// @brief Method YGNodeStyleSetFlexDirection, addr 0x33f1074, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexDirection(void* node, ::UnityEngine::Yoga::YogaFlexDirection flexDirection);

  /// @brief Method YGNodeStyleSetFlexGrow, addr 0x33f1554, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexGrow(void* node, float_t flexGrow);

  /// @brief Method YGNodeStyleSetFlexShrink, addr 0x33f15ec, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexShrink(void* node, float_t flexShrink);

  /// @brief Method YGNodeStyleSetFlexWrap, addr 0x33f142c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexWrap(void* node, ::UnityEngine::Yoga::YogaWrap flexWrap);

  /// @brief Method YGNodeStyleSetHeight, addr 0x33f1a9c, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeight(void* node, float_t height);

  /// @brief Method YGNodeStyleSetHeightAuto, addr 0x33f1a60, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeightAuto(void* node);

  /// @brief Method YGNodeStyleSetHeightPercent, addr 0x33f1a14, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeightPercent(void* node, float_t height);

  /// @brief Method YGNodeStyleSetJustifyContent, addr 0x33f10fc, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetJustifyContent(void* node, ::UnityEngine::Yoga::YogaJustify justifyContent);

  /// @brief Method YGNodeStyleSetMargin, addr 0x33f037c, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMargin(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin);

  /// @brief Method YGNodeStyleSetMarginAuto, addr 0x33f0338, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMarginAuto(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeStyleSetMarginPercent, addr 0x33f02e4, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMarginPercent(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin);

  /// @brief Method YGNodeStyleSetMaxHeight, addr 0x33f1cc4, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxHeight(void* node, float_t maxHeight);

  /// @brief Method YGNodeStyleSetMaxHeightPercent, addr 0x33f1c78, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxHeightPercent(void* node, float_t maxHeight);

  /// @brief Method YGNodeStyleSetMaxWidth, addr 0x33f1bb0, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxWidth(void* node, float_t maxWidth);

  /// @brief Method YGNodeStyleSetMaxWidthPercent, addr 0x33f1b64, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxWidthPercent(void* node, float_t maxWidth);

  /// @brief Method YGNodeStyleSetMinHeight, addr 0x33f1eec, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinHeight(void* node, float_t minHeight);

  /// @brief Method YGNodeStyleSetMinHeightPercent, addr 0x33f1ea0, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinHeightPercent(void* node, float_t minHeight);

  /// @brief Method YGNodeStyleSetMinWidth, addr 0x33f1dd8, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinWidth(void* node, float_t minWidth);

  /// @brief Method YGNodeStyleSetMinWidthPercent, addr 0x33f1d8c, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinWidthPercent(void* node, float_t minWidth);

  /// @brief Method YGNodeStyleSetOverflow, addr 0x33f224c, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetOverflow(void* node, ::UnityEngine::Yoga::YogaOverflow flexWrap);

  /// @brief Method YGNodeStyleSetPadding, addr 0x33f04d8, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPadding(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding);

  /// @brief Method YGNodeStyleSetPaddingPercent, addr 0x33f0484, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPaddingPercent(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding);

  /// @brief Method YGNodeStyleSetPosition, addr 0x33f0198, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPosition(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t position);

  /// @brief Method YGNodeStyleSetPositionPercent, addr 0x33f0144, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPositionPercent(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t position);

  /// @brief Method YGNodeStyleSetPositionType, addr 0x33f13a4, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPositionType(void* node, ::UnityEngine::Yoga::YogaPositionType positionType);

  /// @brief Method YGNodeStyleSetWidth, addr 0x33f190c, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidth(void* node, float_t width);

  /// @brief Method YGNodeStyleSetWidthAuto, addr 0x33f18d0, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidthAuto(void* node);

  /// @brief Method YGNodeStyleSetWidthPercent, addr 0x33f1884, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidthPercent(void* node, float_t width);

  /// @brief Method YGSetManagedObject, addr 0x33f2720, size 0x44, virtual false, abstract: false, final false
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
