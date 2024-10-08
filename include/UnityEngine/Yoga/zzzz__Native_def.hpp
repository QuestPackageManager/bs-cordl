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
// Type: UnityEngine.Yoga::Native
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: ::UnityEngine.Yoga::Native*
class CORDL_TYPE Native : public ::System::Object {
public:
  // Declarations
  /// @brief Method YGConfigFree, addr 0x48f0bf4, size 0x58, virtual false, abstract: false, final false
  static inline void YGConfigFree(::System::IntPtr config);

  /// @brief Method YGConfigFreeInternal, addr 0x48f1004, size 0x3c, virtual false, abstract: false, final false
  static inline void YGConfigFreeInternal(::System::IntPtr config);

  /// @brief Method YGConfigGetDefault, addr 0x48f0e6c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr YGConfigGetDefault();

  /// @brief Method YGConfigGetUseWebDefaults, addr 0x48f0c88, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGConfigGetUseWebDefaults(::System::IntPtr config);

  /// @brief Method YGConfigNew, addr 0x48f0abc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr YGConfigNew();

  /// @brief Method YGConfigSetPointScaleFactor, addr 0x48f0d98, size 0x4c, virtual false, abstract: false, final false
  static inline void YGConfigSetPointScaleFactor(::System::IntPtr config, float_t pixelsInPoint);

  /// @brief Method YGConfigSetUseWebDefaults, addr 0x48f0d08, size 0x44, virtual false, abstract: false, final false
  static inline void YGConfigSetUseWebDefaults(::System::IntPtr config, bool useWebDefaults);

  /// @brief Method YGNodeBaselineInvoke, addr 0x48f1344, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode* node, float_t width, float_t height, ::System::IntPtr returnValueAddress);

  /// @brief Method YGNodeCalculateLayout, addr 0x48f10d8, size 0x5c, virtual false, abstract: false, final false
  static inline void YGNodeCalculateLayout(::System::IntPtr node, float_t availableWidth, float_t availableHeight, ::UnityEngine::Yoga::YogaDirection parentDirection);

  /// @brief Method YGNodeCopyStyle, addr 0x48f11ac, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeCopyStyle(::System::IntPtr dstNode, ::System::IntPtr srcNode);

  /// @brief Method YGNodeFree, addr 0x48f0ee8, size 0x58, virtual false, abstract: false, final false
  static inline void YGNodeFree(::System::IntPtr ygNode);

  /// @brief Method YGNodeFreeInternal, addr 0x48f0f40, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeFreeInternal(::System::IntPtr ygNode);

  /// @brief Method YGNodeGetHasNewLayout, addr 0x48f1444, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGNodeGetHasNewLayout(::System::IntPtr node);

  /// @brief Method YGNodeInsertChild, addr 0x48f1040, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeInsertChild(::System::IntPtr node, ::System::IntPtr child, uint32_t index);

  /// @brief Method YGNodeIsDirty, addr 0x48f1170, size 0x3c, virtual false, abstract: false, final false
  static inline bool YGNodeIsDirty(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetBorder, addr 0x48f2160, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetBorder(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetBottom, addr 0x48f2024, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetBottom(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetHeight, addr 0x48f209c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetHeight(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetLeft, addr 0x48f1f70, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetLeft(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetMargin, addr 0x48f20d8, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetMargin(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetPadding, addr 0x48f211c, size 0x44, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetPadding(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetRight, addr 0x48f1fe8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetRight(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetTop, addr 0x48f1fac, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetTop(::System::IntPtr node);

  /// @brief Method YGNodeLayoutGetWidth, addr 0x48f2060, size 0x3c, virtual false, abstract: false, final false
  static inline float_t YGNodeLayoutGetWidth(::System::IntPtr node);

  /// @brief Method YGNodeMarkDirty, addr 0x48f1134, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeMarkDirty(::System::IntPtr node);

  /// @brief Method YGNodeMeasureInvoke, addr 0x48f1268, size 0x64, virtual false, abstract: false, final false
  static inline void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                         ::UnityEngine::Yoga::YogaMeasureMode heightMode, ::System::IntPtr returnValueAddress);

  /// @brief Method YGNodeNewWithConfig, addr 0x48f0eac, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr YGNodeNewWithConfig(::System::IntPtr config);

  /// @brief Method YGNodeRemoveChild, addr 0x48f1094, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeRemoveChild(::System::IntPtr node, ::System::IntPtr child);

  /// @brief Method YGNodeRemoveMeasureFunc, addr 0x48f122c, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeRemoveMeasureFunc(::System::IntPtr node);

  /// @brief Method YGNodeSetConfig, addr 0x48f0fc0, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeSetConfig(::System::IntPtr ygNode, ::System::IntPtr config);

  /// @brief Method YGNodeSetHasNewLayout, addr 0x48f1400, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeSetHasNewLayout(::System::IntPtr node, bool hasNewLayout);

  /// @brief Method YGNodeSetMeasureFunc, addr 0x48f11f0, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeSetMeasureFunc(::System::IntPtr node);

  /// @brief Method YGNodeStyleGetDirection, addr 0x48f1480, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaDirection YGNodeStyleGetDirection(::System::IntPtr node);

  /// @brief Method YGNodeStyleSetAlignContent, addr 0x48f1544, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignContent(::System::IntPtr node, ::UnityEngine::Yoga::YogaAlign alignContent);

  /// @brief Method YGNodeStyleSetAlignItems, addr 0x48f1588, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignItems(::System::IntPtr node, ::UnityEngine::Yoga::YogaAlign alignItems);

  /// @brief Method YGNodeStyleSetAlignSelf, addr 0x48f15cc, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetAlignSelf(::System::IntPtr node, ::UnityEngine::Yoga::YogaAlign alignSelf);

  /// @brief Method YGNodeStyleSetBorder, addr 0x48f1f1c, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetBorder(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t border);

  /// @brief Method YGNodeStyleSetDisplay, addr 0x48f16dc, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetDisplay(::System::IntPtr node, ::UnityEngine::Yoga::YogaDisplay display);

  /// @brief Method YGNodeStyleSetFlex, addr 0x48f1720, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlex(::System::IntPtr node, float_t flex);

  /// @brief Method YGNodeStyleSetFlexBasis, addr 0x48f1804, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasis(::System::IntPtr node, float_t flexBasis);

  /// @brief Method YGNodeStyleSetFlexBasisAuto, addr 0x48f189c, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasisAuto(::System::IntPtr node);

  /// @brief Method YGNodeStyleSetFlexBasisPercent, addr 0x48f1850, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexBasisPercent(::System::IntPtr node, float_t flexBasis);

  /// @brief Method YGNodeStyleSetFlexDirection, addr 0x48f14bc, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexDirection(::System::IntPtr node, ::UnityEngine::Yoga::YogaFlexDirection flexDirection);

  /// @brief Method YGNodeStyleSetFlexGrow, addr 0x48f176c, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexGrow(::System::IntPtr node, float_t flexGrow);

  /// @brief Method YGNodeStyleSetFlexShrink, addr 0x48f17b8, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexShrink(::System::IntPtr node, float_t flexShrink);

  /// @brief Method YGNodeStyleSetFlexWrap, addr 0x48f1654, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetFlexWrap(::System::IntPtr node, ::UnityEngine::Yoga::YogaWrap flexWrap);

  /// @brief Method YGNodeStyleSetHeight, addr 0x48f19ac, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeight(::System::IntPtr node, float_t height);

  /// @brief Method YGNodeStyleSetHeightAuto, addr 0x48f1a44, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeightAuto(::System::IntPtr node);

  /// @brief Method YGNodeStyleSetHeightPercent, addr 0x48f19f8, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetHeightPercent(::System::IntPtr node, float_t height);

  /// @brief Method YGNodeStyleSetJustifyContent, addr 0x48f1500, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetJustifyContent(::System::IntPtr node, ::UnityEngine::Yoga::YogaJustify justifyContent);

  /// @brief Method YGNodeStyleSetMargin, addr 0x48f1d88, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMargin(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin);

  /// @brief Method YGNodeStyleSetMarginAuto, addr 0x48f1e30, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMarginAuto(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeStyleSetMarginPercent, addr 0x48f1ddc, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMarginPercent(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin);

  /// @brief Method YGNodeStyleSetMaxHeight, addr 0x48f1c48, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxHeight(::System::IntPtr node, float_t maxHeight);

  /// @brief Method YGNodeStyleSetMaxHeightPercent, addr 0x48f1c94, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxHeightPercent(::System::IntPtr node, float_t maxHeight);

  /// @brief Method YGNodeStyleSetMaxWidth, addr 0x48f1bb0, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxWidth(::System::IntPtr node, float_t maxWidth);

  /// @brief Method YGNodeStyleSetMaxWidthPercent, addr 0x48f1bfc, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMaxWidthPercent(::System::IntPtr node, float_t maxWidth);

  /// @brief Method YGNodeStyleSetMinHeight, addr 0x48f1b18, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinHeight(::System::IntPtr node, float_t minHeight);

  /// @brief Method YGNodeStyleSetMinHeightPercent, addr 0x48f1b64, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinHeightPercent(::System::IntPtr node, float_t minHeight);

  /// @brief Method YGNodeStyleSetMinWidth, addr 0x48f1a80, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinWidth(::System::IntPtr node, float_t minWidth);

  /// @brief Method YGNodeStyleSetMinWidthPercent, addr 0x48f1acc, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetMinWidthPercent(::System::IntPtr node, float_t minWidth);

  /// @brief Method YGNodeStyleSetOverflow, addr 0x48f1698, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetOverflow(::System::IntPtr node, ::UnityEngine::Yoga::YogaOverflow flexWrap);

  /// @brief Method YGNodeStyleSetPadding, addr 0x48f1e74, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPadding(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding);

  /// @brief Method YGNodeStyleSetPaddingPercent, addr 0x48f1ec8, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPaddingPercent(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding);

  /// @brief Method YGNodeStyleSetPosition, addr 0x48f1ce0, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPosition(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t position);

  /// @brief Method YGNodeStyleSetPositionPercent, addr 0x48f1d34, size 0x54, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPositionPercent(::System::IntPtr node, ::UnityEngine::Yoga::YogaEdge edge, float_t position);

  /// @brief Method YGNodeStyleSetPositionType, addr 0x48f1610, size 0x44, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetPositionType(::System::IntPtr node, ::UnityEngine::Yoga::YogaPositionType positionType);

  /// @brief Method YGNodeStyleSetWidth, addr 0x48f18d8, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidth(::System::IntPtr node, float_t width);

  /// @brief Method YGNodeStyleSetWidthAuto, addr 0x48f1970, size 0x3c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidthAuto(::System::IntPtr node);

  /// @brief Method YGNodeStyleSetWidthPercent, addr 0x48f1924, size 0x4c, virtual false, abstract: false, final false
  static inline void YGNodeStyleSetWidthPercent(::System::IntPtr node, float_t width);

  /// @brief Method YGSetManagedObject, addr 0x48f0f7c, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5406 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::Native, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::Native);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::Native*, "UnityEngine.Yoga", "Native");
