#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderChainVEData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__ClipMethod_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderChainVEData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct ClipMethod;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNode_1;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChainTextEntry;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderChainVEData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderChainVEData);
// Type: UnityEngine.UIElements.UIR::RenderChainVEData
// SizeInfo { instance_size: 344, native_size: -1, calculated_instance_size: 344, calculated_native_size: 360, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.UIR::RenderChainVEData
struct CORDL_TYPE RenderChainVEData {
public:
  // Declarations
  __declspec(property(get = get_lastClosingOrLastCommand))::UnityEngine::UIElements::UIR::RenderChainCommand* lastClosingOrLastCommand;

  /// @brief Method AllocatesID, addr 0x35e5ccc, size 0x34, virtual false, abstract: false, final false
  static inline bool AllocatesID(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method InheritsID, addr 0x35e5d00, size 0x30, virtual false, abstract: false, final false
  static inline bool InheritsID(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method get_lastClosingOrLastCommand, addr 0x35e5cb4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* get_lastClosingOrLastCommand();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChainVEData();

  // Ctor Parameters [CppParam { name: "prev", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "next", ty:
  // "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "groupTransformAncestor", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "",
  // def_value: None }, CppParam { name: "boneTransformAncestor", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "prevDirty", ty:
  // "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "nextDirty", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None },
  // CppParam { name: "hierarchyDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dirtiedValues", ty: "::UnityEngine::UIElements::UIR::RenderDataDirtyTypes", modifiers: "",
  // def_value: None }, CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "firstCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*",
  // modifiers: "", def_value: None }, CppParam { name: "lastCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name:
  // "firstClosingCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "lastClosingCommand", ty:
  // "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "isInChain", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "isHierarchyHidden", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localFlipsWinding", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localTransformScaleZero",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "worldFlipsWinding", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clipMethod", ty:
  // "::UnityEngine::UIElements::UIR::Implementation::ClipMethod", modifiers: "", def_value: None }, CppParam { name: "childrenStencilRef", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "childrenMaskDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "disableNudging", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "usesLegacyText", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: None }, CppParam { name: "closingData", ty:
  // "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: None }, CppParam { name: "verticesSpace", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam {
  // name: "displacementUVStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "displacementUVEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "transformID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "clipRectID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "",
  // def_value: None }, CppParam { name: "opacityID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "textCoreSettingsID", ty:
  // "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "backgroundColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None
  // }, CppParam { name: "borderLeftColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderTopColorID", ty:
  // "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderRightColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None
  // }, CppParam { name: "borderBottomColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "tintColorID", ty:
  // "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "compositeOpacity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "prevText", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None },
  // CppParam { name: "nextText", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "textEntries", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>*", modifiers: "", def_value: None }, CppParam { name: "textures", ty:
  // "::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*", modifiers: "", def_value: None }]
  constexpr RenderChainVEData(::UnityEngine::UIElements::VisualElement* prev, ::UnityEngine::UIElements::VisualElement* next, ::UnityEngine::UIElements::VisualElement* groupTransformAncestor,
                              ::UnityEngine::UIElements::VisualElement* boneTransformAncestor, ::UnityEngine::UIElements::VisualElement* prevDirty, ::UnityEngine::UIElements::VisualElement* nextDirty,
                              int32_t hierarchyDepth, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtiedValues, uint32_t dirtyID,
                              ::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand,
                              ::UnityEngine::UIElements::UIR::RenderChainCommand* firstClosingCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* lastClosingCommand, bool isInChain,
                              bool isHierarchyHidden, bool localFlipsWinding, bool localTransformScaleZero, bool worldFlipsWinding,
                              ::UnityEngine::UIElements::UIR::Implementation::ClipMethod clipMethod, int32_t childrenStencilRef, int32_t childrenMaskDepth, bool disableNudging, bool usesLegacyText,
                              ::UnityEngine::UIElements::UIR::MeshHandle* data, ::UnityEngine::UIElements::UIR::MeshHandle* closingData, ::UnityEngine::Matrix4x4 verticesSpace,
                              int32_t displacementUVStart, int32_t displacementUVEnd, ::UnityEngine::UIElements::UIR::BMPAlloc transformID, ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID,
                              ::UnityEngine::UIElements::UIR::BMPAlloc opacityID, ::UnityEngine::UIElements::UIR::BMPAlloc textCoreSettingsID,
                              ::UnityEngine::UIElements::UIR::BMPAlloc backgroundColorID, ::UnityEngine::UIElements::UIR::BMPAlloc borderLeftColorID,
                              ::UnityEngine::UIElements::UIR::BMPAlloc borderTopColorID, ::UnityEngine::UIElements::UIR::BMPAlloc borderRightColorID,
                              ::UnityEngine::UIElements::UIR::BMPAlloc borderBottomColorID, ::UnityEngine::UIElements::UIR::BMPAlloc tintColorID, float_t compositeOpacity,
                              ::UnityEngine::Color backgroundColor, ::UnityEngine::UIElements::VisualElement* prevText, ::UnityEngine::UIElements::VisualElement* nextText,
                              ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>* textEntries,
                              ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>* textures) noexcept;

  /// @brief Field prev, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* prev;

  /// @brief Field next, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* next;

  /// @brief Field groupTransformAncestor, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* groupTransformAncestor;

  /// @brief Field boneTransformAncestor, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* boneTransformAncestor;

  /// @brief Field prevDirty, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* prevDirty;

  /// @brief Field nextDirty, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* nextDirty;

  /// @brief Field hierarchyDepth, offset: 0x30, size: 0x4, def value: None
  int32_t hierarchyDepth;

  /// @brief Field dirtiedValues, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtiedValues;

  /// @brief Field dirtyID, offset: 0x38, size: 0x4, def value: None
  uint32_t dirtyID;

  /// @brief Field firstCommand, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand;

  /// @brief Field lastCommand, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand;

  /// @brief Field firstClosingCommand, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* firstClosingCommand;

  /// @brief Field lastClosingCommand, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* lastClosingCommand;

  /// @brief Field isInChain, offset: 0x60, size: 0x1, def value: None
  bool isInChain;

  /// @brief Field isHierarchyHidden, offset: 0x61, size: 0x1, def value: None
  bool isHierarchyHidden;

  /// @brief Field localFlipsWinding, offset: 0x62, size: 0x1, def value: None
  bool localFlipsWinding;

  /// @brief Field localTransformScaleZero, offset: 0x63, size: 0x1, def value: None
  bool localTransformScaleZero;

  /// @brief Field worldFlipsWinding, offset: 0x64, size: 0x1, def value: None
  bool worldFlipsWinding;

  /// @brief Field clipMethod, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::Implementation::ClipMethod clipMethod;

  /// @brief Field childrenStencilRef, offset: 0x6c, size: 0x4, def value: None
  int32_t childrenStencilRef;

  /// @brief Field childrenMaskDepth, offset: 0x70, size: 0x4, def value: None
  int32_t childrenMaskDepth;

  /// @brief Field disableNudging, offset: 0x74, size: 0x1, def value: None
  bool disableNudging;

  /// @brief Field usesLegacyText, offset: 0x75, size: 0x1, def value: None
  bool usesLegacyText;

  /// @brief Field data, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshHandle* data;

  /// @brief Field closingData, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshHandle* closingData;

  /// @brief Field verticesSpace, offset: 0x88, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 verticesSpace;

  /// @brief Field displacementUVStart, offset: 0xc8, size: 0x4, def value: None
  int32_t displacementUVStart;

  /// @brief Field displacementUVEnd, offset: 0xcc, size: 0x4, def value: None
  int32_t displacementUVEnd;

  /// @brief Field transformID, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc transformID;

  /// @brief Field clipRectID, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID;

  /// @brief Field opacityID, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc opacityID;

  /// @brief Field textCoreSettingsID, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc textCoreSettingsID;

  /// @brief Field backgroundColorID, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc backgroundColorID;

  /// @brief Field borderLeftColorID, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc borderLeftColorID;

  /// @brief Field borderTopColorID, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc borderTopColorID;

  /// @brief Field borderRightColorID, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc borderRightColorID;

  /// @brief Field borderBottomColorID, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc borderBottomColorID;

  /// @brief Field tintColorID, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc tintColorID;

  /// @brief Field compositeOpacity, offset: 0x120, size: 0x4, def value: None
  float_t compositeOpacity;

  /// @brief Field backgroundColor, offset: 0x124, size: 0x10, def value: None
  ::UnityEngine::Color backgroundColor;

  /// @brief Field prevText, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* prevText;

  /// @brief Field nextText, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* nextText;

  /// @brief Field textEntries, offset: 0x148, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>* textEntries;

  /// @brief Field textures, offset: 0x150, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>* textures;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x158 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChainVEData, 0x158>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, prev) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, next) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, groupTransformAncestor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, boneTransformAncestor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, prevDirty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, nextDirty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, hierarchyDepth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, dirtiedValues) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, dirtyID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, firstCommand) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, lastCommand) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, firstClosingCommand) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, lastClosingCommand) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, isInChain) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, isHierarchyHidden) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, localFlipsWinding) == 0x62, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, localTransformScaleZero) == 0x63, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, worldFlipsWinding) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, clipMethod) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, childrenStencilRef) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, childrenMaskDepth) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, disableNudging) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, usesLegacyText) == 0x75, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, data) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, closingData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, verticesSpace) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, displacementUVStart) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, displacementUVEnd) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, transformID) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, clipRectID) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, opacityID) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, textCoreSettingsID) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, backgroundColorID) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, borderLeftColorID) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, borderTopColorID) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, borderRightColorID) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, borderBottomColorID) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, tintColorID) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, compositeOpacity) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, backgroundColor) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, prevText) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, nextText) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, textEntries) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, textures) == 0x150, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChainVEData, "UnityEngine.UIElements.UIR", "RenderChainVEData");
