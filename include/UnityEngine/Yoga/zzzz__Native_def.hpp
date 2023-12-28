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
struct YogaDisplay;
}
namespace UnityEngine::Yoga {
struct YogaWrap;
}
namespace UnityEngine::Yoga {
struct YogaEdge;
}
namespace UnityEngine::Yoga {
struct YogaOverflow;
}
namespace UnityEngine::Yoga {
struct YogaPositionType;
}
namespace UnityEngine::Yoga {
struct YogaDirection;
}
namespace UnityEngine::Yoga {
struct YogaJustify;
}
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace UnityEngine::Yoga {
struct YogaFlexDirection;
}
namespace UnityEngine::Yoga {
class YogaNode;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15358))
// CS Name: ::UnityEngine.Yoga::Native*
class CORDL_TYPE Native : public ::System::Object {
public:
  // Declarations
  /// @brief Method YGNodeNewWithConfig addr 0x2ea2a64 size 0x3c virtual false final false
  static inline void* YGNodeNewWithConfig(void* config);

  /// @brief Method YGNodeFree addr 0x2ea2b38 size 0x8c virtual false final false
  static inline void YGNodeFree(void* ygNode);

  /// @brief Method YGNodeFreeInternal addr 0x2ea4ae0 size 0x3c virtual false final false
  static inline void YGNodeFreeInternal(void* ygNode);

  /// @brief Method YGSetManagedObject addr 0x2ea45c0 size 0x44 virtual false final false
  static inline void YGSetManagedObject(void* ygNode, ::UnityEngine::Yoga::YogaNode* node);

  /// @brief Method YGNodeSetConfig addr 0x2ea2c74 size 0x44 virtual false final false
  static inline void YGNodeSetConfig(void* ygNode, void* config);

  /// @brief Method YGConfigGetDefault addr 0x2ea4b1c size 0x28 virtual false final false
  static inline void* YGConfigGetDefault();

  /// @brief Method YGConfigNew addr 0x2ea4b44 size 0x28 virtual false final false
  static inline void* YGConfigNew();

  /// @brief Method YGConfigFree addr 0x2ea4b6c size 0x8c virtual false final false
  static inline void YGConfigFree(void* config);

  /// @brief Method YGConfigFreeInternal addr 0x2ea4bf8 size 0x3c virtual false final false
  static inline void YGConfigFreeInternal(void* config);

  /// @brief Method YGConfigSetUseWebDefaults addr 0x2ea4c34 size 0x44 virtual false final false
  static inline void YGConfigSetUseWebDefaults(void* config, bool useWebDefaults);

  /// @brief Method YGConfigGetUseWebDefaults addr 0x2ea4c78 size 0x3c virtual false final false
  static inline bool YGConfigGetUseWebDefaults(void* config);

  /// @brief Method YGConfigSetPointScaleFactor addr 0x2ea4cb4 size 0x4c virtual false final false
  static inline void YGConfigSetPointScaleFactor(void* config, float_t pixelsInPoint);

  /// @brief Method YGNodeInsertChild addr 0x2ea4324 size 0x54 virtual false final false
  static inline void YGNodeInsertChild(void* node, void* child, uint32_t index);

  /// @brief Method YGNodeRemoveChild addr 0x2ea4440 size 0x44 virtual false final false
  static inline void YGNodeRemoveChild(void* node, void* child);

  /// @brief Method YGNodeCalculateLayout addr 0x2ea473c size 0x5c virtual false final false
  static inline void YGNodeCalculateLayout(void* node, float_t availableWidth, float_t availableHeight, ::UnityEngine::Yoga::YogaDirection parentDirection);

  /// @brief Method YGNodeMarkDirty addr 0x2ea2d6c size 0x3c virtual false final false
  static inline void YGNodeMarkDirty(void* node);

  /// @brief Method YGNodeIsDirty addr 0x2ea2cf4 size 0x3c virtual false final false
  static inline bool YGNodeIsDirty(void* node);

  /// @brief Method YGNodeCopyStyle addr 0x2ea2e8c size 0x44 virtual false final false
  static inline void YGNodeCopyStyle(void* dstNode, void* srcNode);

  /// @brief Method YGNodeSetMeasureFunc addr 0x2ea4640 size 0x3c virtual false final false
  static inline void YGNodeSetMeasureFunc(void* node);

  /// @brief Method YGNodeRemoveMeasureFunc addr 0x2ea4604 size 0x3c virtual false final false
  static inline void YGNodeRemoveMeasureFunc(void* node);

  /// @brief Method YGNodeMeasureInvoke addr 0x2ea4d00 size 0x64 virtual false final false
  static inline void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                         ::UnityEngine::Yoga::YogaMeasureMode heightMode, void* returnValueAddress);

  /// @brief Method YGNodeBaselineInvoke addr 0x2ea4d64 size 0x4c virtual false final false
  static inline void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode* node, float_t width, float_t height, void* returnValueAddress);

  /// @brief Method YGNodeSetHasNewLayout addr 0x2ea41bc size 0x44 virtual false final false
  static inline void YGNodeSetHasNewLayout(void* node, bool hasNewLayout);

  /// @brief Method YGNodeGetHasNewLayout addr 0x2ea2de4 size 0x3c virtual false final false
  static inline bool YGNodeGetHasNewLayout(void* node);

  /// @brief Method YGNodeStyleGetDirection addr 0x2ea4700 size 0x3c virtual false final false
  static inline ::UnityEngine::Yoga::YogaDirection YGNodeStyleGetDirection(void* node);

  /// @brief Method YGNodeStyleSetFlexDirection addr 0x2ea2f14 size 0x44 virtual false final false
  static inline void YGNodeStyleSetFlexDirection(void* node, ::UnityEngine::Yoga::YogaFlexDirection flexDirection);

  /// @brief Method YGNodeStyleSetJustifyContent addr 0x2ea2f9c size 0x44 virtual false final false
  static inline void YGNodeStyleSetJustifyContent(void* node, ::UnityEngine::Yoga::YogaJustify justifyContent);

  /// @brief Method YGNodeStyleSetAlignContent addr 0x2ea31bc size 0x44 virtual false final false
  static inline void YGNodeStyleSetAlignContent(void* node, ::UnityEngine::Yoga::YogaAlign alignContent);

  /// @brief Method YGNodeStyleSetAlignItems addr 0x2ea30ac size 0x44 virtual false final false
  static inline void YGNodeStyleSetAlignItems(void* node, ::UnityEngine::Yoga::YogaAlign alignItems);

  /// @brief Method YGNodeStyleSetAlignSelf addr 0x2ea3134 size 0x44 virtual false final false
  static inline void YGNodeStyleSetAlignSelf(void* node, ::UnityEngine::Yoga::YogaAlign alignSelf);

  /// @brief Method YGNodeStyleSetPositionType addr 0x2ea3244 size 0x44 virtual false final false
  static inline void YGNodeStyleSetPositionType(void* node, ::UnityEngine::Yoga::YogaPositionType positionType);

  /// @brief Method YGNodeStyleSetFlexWrap addr 0x2ea32cc size 0x44 virtual false final false
  static inline void YGNodeStyleSetFlexWrap(void* node, ::UnityEngine::Yoga::YogaWrap flexWrap);

  /// @brief Method YGNodeStyleSetOverflow addr 0x2ea40ec size 0x44 virtual false final false
  static inline void YGNodeStyleSetOverflow(void* node, ::UnityEngine::Yoga::YogaOverflow flexWrap);

  /// @brief Method YGNodeStyleSetDisplay addr 0x2ea3024 size 0x44 virtual false final false
  static inline void YGNodeStyleSetDisplay(void* node, ::UnityEngine::Yoga::YogaDisplay display);

  /// @brief Method YGNodeStyleSetFlex addr 0x2ea335c size 0x4c virtual false final false
  static inline void YGNodeStyleSetFlex(void* node, float_t flex);

  /// @brief Method YGNodeStyleSetFlexGrow addr 0x2ea33f4 size 0x4c virtual false final false
  static inline void YGNodeStyleSetFlexGrow(void* node, float_t flexGrow);

  /// @brief Method YGNodeStyleSetFlexShrink addr 0x2ea348c size 0x4c virtual false final false
  static inline void YGNodeStyleSetFlexShrink(void* node, float_t flexShrink);

  /// @brief Method YGNodeStyleSetFlexBasis addr 0x2ea361c size 0x4c virtual false final false
  static inline void YGNodeStyleSetFlexBasis(void* node, float_t flexBasis);

  /// @brief Method YGNodeStyleSetFlexBasisPercent addr 0x2ea3594 size 0x4c virtual false final false
  static inline void YGNodeStyleSetFlexBasisPercent(void* node, float_t flexBasis);

  /// @brief Method YGNodeStyleSetFlexBasisAuto addr 0x2ea35e0 size 0x3c virtual false final false
  static inline void YGNodeStyleSetFlexBasisAuto(void* node);

  /// @brief Method YGNodeStyleSetWidth addr 0x2ea37ac size 0x4c virtual false final false
  static inline void YGNodeStyleSetWidth(void* node, float_t width);

  /// @brief Method YGNodeStyleSetWidthPercent addr 0x2ea3724 size 0x4c virtual false final false
  static inline void YGNodeStyleSetWidthPercent(void* node, float_t width);

  /// @brief Method YGNodeStyleSetWidthAuto addr 0x2ea3770 size 0x3c virtual false final false
  static inline void YGNodeStyleSetWidthAuto(void* node);

  /// @brief Method YGNodeStyleSetHeight addr 0x2ea393c size 0x4c virtual false final false
  static inline void YGNodeStyleSetHeight(void* node, float_t height);

  /// @brief Method YGNodeStyleSetHeightPercent addr 0x2ea38b4 size 0x4c virtual false final false
  static inline void YGNodeStyleSetHeightPercent(void* node, float_t height);

  /// @brief Method YGNodeStyleSetHeightAuto addr 0x2ea3900 size 0x3c virtual false final false
  static inline void YGNodeStyleSetHeightAuto(void* node);

  /// @brief Method YGNodeStyleSetMinWidth addr 0x2ea3c78 size 0x4c virtual false final false
  static inline void YGNodeStyleSetMinWidth(void* node, float_t minWidth);

  /// @brief Method YGNodeStyleSetMinWidthPercent addr 0x2ea3c2c size 0x4c virtual false final false
  static inline void YGNodeStyleSetMinWidthPercent(void* node, float_t minWidth);

  /// @brief Method YGNodeStyleSetMinHeight addr 0x2ea3d8c size 0x4c virtual false final false
  static inline void YGNodeStyleSetMinHeight(void* node, float_t minHeight);

  /// @brief Method YGNodeStyleSetMinHeightPercent addr 0x2ea3d40 size 0x4c virtual false final false
  static inline void YGNodeStyleSetMinHeightPercent(void* node, float_t minHeight);

  /// @brief Method YGNodeStyleSetMaxWidth addr 0x2ea3a50 size 0x4c virtual false final false
  static inline void YGNodeStyleSetMaxWidth(void* node, float_t maxWidth);

  /// @brief Method YGNodeStyleSetMaxWidthPercent addr 0x2ea3a04 size 0x4c virtual false final false
  static inline void YGNodeStyleSetMaxWidthPercent(void* node, float_t maxWidth);

  /// @brief Method YGNodeStyleSetMaxHeight addr 0x2ea3b64 size 0x4c virtual false final false
  static inline void YGNodeStyleSetMaxHeight(void* node, float_t maxHeight);

  /// @brief Method YGNodeStyleSetMaxHeightPercent addr 0x2ea3b18 size 0x4c virtual false final false
  static inline void YGNodeStyleSetMaxHeightPercent(void* node, float_t maxHeight);

  /// @brief Method YGNodeStyleSetPosition addr 0x2ea2038 size 0x54 virtual false final false
  static inline void YGNodeStyleSetPosition(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t position);

  /// @brief Method YGNodeStyleSetPositionPercent addr 0x2ea1fe4 size 0x54 virtual false final false
  static inline void YGNodeStyleSetPositionPercent(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t position);

  /// @brief Method YGNodeStyleSetMargin addr 0x2ea221c size 0x54 virtual false final false
  static inline void YGNodeStyleSetMargin(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin);

  /// @brief Method YGNodeStyleSetMarginPercent addr 0x2ea2184 size 0x54 virtual false final false
  static inline void YGNodeStyleSetMarginPercent(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin);

  /// @brief Method YGNodeStyleSetMarginAuto addr 0x2ea21d8 size 0x44 virtual false final false
  static inline void YGNodeStyleSetMarginAuto(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeStyleSetPadding addr 0x2ea2378 size 0x54 virtual false final false
  static inline void YGNodeStyleSetPadding(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding);

  /// @brief Method YGNodeStyleSetPaddingPercent addr 0x2ea2324 size 0x54 virtual false final false
  static inline void YGNodeStyleSetPaddingPercent(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding);

  /// @brief Method YGNodeStyleSetBorder addr 0x2ea241c size 0x54 virtual false final false
  static inline void YGNodeStyleSetBorder(void* node, ::UnityEngine::Yoga::YogaEdge edge, float_t border);

  /// @brief Method YGNodeLayoutGetLeft addr 0x2ea3e14 size 0x3c virtual false final false
  static inline float_t YGNodeLayoutGetLeft(void* node);

  /// @brief Method YGNodeLayoutGetTop addr 0x2ea3e8c size 0x3c virtual false final false
  static inline float_t YGNodeLayoutGetTop(void* node);

  /// @brief Method YGNodeLayoutGetRight addr 0x2ea3f04 size 0x3c virtual false final false
  static inline float_t YGNodeLayoutGetRight(void* node);

  /// @brief Method YGNodeLayoutGetBottom addr 0x2ea3f7c size 0x3c virtual false final false
  static inline float_t YGNodeLayoutGetBottom(void* node);

  /// @brief Method YGNodeLayoutGetWidth addr 0x2ea3ff4 size 0x3c virtual false final false
  static inline float_t YGNodeLayoutGetWidth(void* node);

  /// @brief Method YGNodeLayoutGetHeight addr 0x2ea406c size 0x3c virtual false final false
  static inline float_t YGNodeLayoutGetHeight(void* node);

  /// @brief Method YGNodeLayoutGetMargin addr 0x2ea25a0 size 0x44 virtual false final false
  static inline float_t YGNodeLayoutGetMargin(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetPadding addr 0x2ea26e4 size 0x44 virtual false final false
  static inline float_t YGNodeLayoutGetPadding(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  /// @brief Method YGNodeLayoutGetBorder addr 0x2ea2828 size 0x44 virtual false final false
  static inline float_t YGNodeLayoutGetBorder(void* node, ::UnityEngine::Yoga::YogaEdge edge);

  // Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Native(Native&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Native(Native const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Native();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::Native, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::Native);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::Native*, "UnityEngine.Yoga", "Native");
