#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderChainVEData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ClipMethod_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataFlags_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderChainVEData)
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
struct TextureEntry;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderChainVEData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderChainVEData);
// Dependencies UnityEngine.Matrix4x4, UnityEngine.UIElements.UIR.BMPAlloc, UnityEngine.UIElements.UIR.ClipMethod, UnityEngine.UIElements.UIR.RenderDataDirtyTypes,
// UnityEngine.UIElements.UIR.RenderDataFlags
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderChainVEData
struct CORDL_TYPE RenderChainVEData {
public:
  // Declarations
  __declspec(property(get = get_hasExtraData)) bool hasExtraData;

  __declspec(property(get = get_hasExtraMeshes)) bool hasExtraMeshes;

  __declspec(property(get = get_isGroupTransform)) bool isGroupTransform;

  __declspec(property(get = get_isIgnoringDynamicColorHint)) bool isIgnoringDynamicColorHint;

  __declspec(property(get = get_isInChain)) bool isInChain;

  __declspec(property(get = get_lastTailOrHeadCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* lastTailOrHeadCommand;

  /// @brief Method AllocatesID, addr 0x6ab7dec, size 0x70, virtual false, abstract: false, final false
  static inline bool AllocatesID(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method InheritsID, addr 0x6ab7e6c, size 0x6c, virtual false, abstract: false, final false
  static inline bool InheritsID(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method get_hasExtraData, addr 0x6ab7efc, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasExtraData();

  /// @brief Method get_hasExtraMeshes, addr 0x6ab7f08, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasExtraMeshes();

  /// @brief Method get_isGroupTransform, addr 0x6ab7ee4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isGroupTransform();

  /// @brief Method get_isIgnoringDynamicColorHint, addr 0x6ab7ef0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isIgnoringDynamicColorHint();

  /// @brief Method get_isInChain, addr 0x6ab7ed8, size 0xc, virtual false, abstract: false, final false
  inline bool get_isInChain();

  /// @brief Method get_lastTailOrHeadCommand, addr 0x6ab7dd4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* get_lastTailOrHeadCommand();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChainVEData();

  // Ctor Parameters [CppParam { name: "prev", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "next", ty:
  // "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "groupTransformAncestor", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "",
  // def_value: None }, CppParam { name: "boneTransformAncestor", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "prevDirty", ty:
  // "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "nextDirty", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None },
  // CppParam { name: "flags", ty: "::UnityEngine::UIElements::UIR::RenderDataFlags", modifiers: "", def_value: None }, CppParam { name: "hierarchyDepth", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "dirtiedValues", ty: "::UnityEngine::UIElements::UIR::RenderDataDirtyTypes", modifiers: "", def_value: None }, CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "firstHeadCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "lastHeadCommand", ty:
  // "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "firstTailCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers:
  // "", def_value: None }, CppParam { name: "lastTailCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "localFlipsWinding", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "localTransformScaleZero", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "worldFlipsWinding", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "worldTransformScaleZero", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clipMethod", ty: "::UnityEngine::UIElements::UIR::ClipMethod",
  // modifiers: "", def_value: None }, CppParam { name: "childrenStencilRef", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "childrenMaskDepth", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "headMesh", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: None }, CppParam { name: "tailMesh", ty:
  // "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: None }, CppParam { name: "verticesSpace", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam {
  // name: "transformID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "clipRectID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers:
  // "", def_value: None }, CppParam { name: "opacityID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "textCoreSettingsID", ty:
  // "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "colorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None },
  // CppParam { name: "backgroundColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderLeftColorID", ty:
  // "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderTopColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None
  // }, CppParam { name: "borderRightColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderBottomColorID", ty:
  // "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "tintColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None },
  // CppParam { name: "compositeOpacity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "backgroundAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "textures", ty: "::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*", modifiers: "", def_value: None }, CppParam { name: "pendingRepaint", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "pendingHierarchicalRepaint", ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderChainVEData(::UnityEngine::UIElements::VisualElement* prev, ::UnityEngine::UIElements::VisualElement* next, ::UnityEngine::UIElements::VisualElement* groupTransformAncestor,
                              ::UnityEngine::UIElements::VisualElement* boneTransformAncestor, ::UnityEngine::UIElements::VisualElement* prevDirty, ::UnityEngine::UIElements::VisualElement* nextDirty,
                              ::UnityEngine::UIElements::UIR::RenderDataFlags flags, int32_t hierarchyDepth, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtiedValues, uint32_t dirtyID,
                              ::UnityEngine::UIElements::UIR::RenderChainCommand* firstHeadCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* lastHeadCommand,
                              ::UnityEngine::UIElements::UIR::RenderChainCommand* firstTailCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* lastTailCommand, bool localFlipsWinding,
                              bool localTransformScaleZero, bool worldFlipsWinding, bool worldTransformScaleZero, ::UnityEngine::UIElements::UIR::ClipMethod clipMethod, int32_t childrenStencilRef,
                              int32_t childrenMaskDepth, ::UnityEngine::UIElements::UIR::MeshHandle* headMesh, ::UnityEngine::UIElements::UIR::MeshHandle* tailMesh,
                              ::UnityEngine::Matrix4x4 verticesSpace, ::UnityEngine::UIElements::UIR::BMPAlloc transformID, ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID,
                              ::UnityEngine::UIElements::UIR::BMPAlloc opacityID, ::UnityEngine::UIElements::UIR::BMPAlloc textCoreSettingsID, ::UnityEngine::UIElements::UIR::BMPAlloc colorID,
                              ::UnityEngine::UIElements::UIR::BMPAlloc backgroundColorID, ::UnityEngine::UIElements::UIR::BMPAlloc borderLeftColorID,
                              ::UnityEngine::UIElements::UIR::BMPAlloc borderTopColorID, ::UnityEngine::UIElements::UIR::BMPAlloc borderRightColorID,
                              ::UnityEngine::UIElements::UIR::BMPAlloc borderBottomColorID, ::UnityEngine::UIElements::UIR::BMPAlloc tintColorID, float_t compositeOpacity, float_t backgroundAlpha,
                              ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>* textures, bool pendingRepaint, bool pendingHierarchicalRepaint) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5337 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x130 };

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

  /// @brief Field flags, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::RenderDataFlags flags;

  /// @brief Field hierarchyDepth, offset: 0x34, size: 0x4, def value: None
  int32_t hierarchyDepth;

  /// @brief Field dirtiedValues, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtiedValues;

  /// @brief Field dirtyID, offset: 0x3c, size: 0x4, def value: None
  uint32_t dirtyID;

  /// @brief Field firstHeadCommand, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* firstHeadCommand;

  /// @brief Field lastHeadCommand, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* lastHeadCommand;

  /// @brief Field firstTailCommand, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* firstTailCommand;

  /// @brief Field lastTailCommand, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* lastTailCommand;

  /// @brief Field localFlipsWinding, offset: 0x60, size: 0x1, def value: None
  bool localFlipsWinding;

  /// @brief Field localTransformScaleZero, offset: 0x61, size: 0x1, def value: None
  bool localTransformScaleZero;

  /// @brief Field worldFlipsWinding, offset: 0x62, size: 0x1, def value: None
  bool worldFlipsWinding;

  /// @brief Field worldTransformScaleZero, offset: 0x63, size: 0x1, def value: None
  bool worldTransformScaleZero;

  /// @brief Field clipMethod, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::ClipMethod clipMethod;

  /// @brief Field childrenStencilRef, offset: 0x68, size: 0x4, def value: None
  int32_t childrenStencilRef;

  /// @brief Field childrenMaskDepth, offset: 0x6c, size: 0x4, def value: None
  int32_t childrenMaskDepth;

  /// @brief Field headMesh, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshHandle* headMesh;

  /// @brief Field tailMesh, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshHandle* tailMesh;

  /// @brief Field verticesSpace, offset: 0x80, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 verticesSpace;

  /// @brief Field transformID, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc transformID;

  /// @brief Field clipRectID, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID;

  /// @brief Field opacityID, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc opacityID;

  /// @brief Field textCoreSettingsID, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc textCoreSettingsID;

  /// @brief Field colorID, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc colorID;

  /// @brief Field backgroundColorID, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc backgroundColorID;

  /// @brief Field borderLeftColorID, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc borderLeftColorID;

  /// @brief Field borderTopColorID, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc borderTopColorID;

  /// @brief Field borderRightColorID, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc borderRightColorID;

  /// @brief Field borderBottomColorID, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc borderBottomColorID;

  /// @brief Field tintColorID, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc tintColorID;

  /// @brief Field compositeOpacity, offset: 0x118, size: 0x4, def value: None
  float_t compositeOpacity;

  /// @brief Field backgroundAlpha, offset: 0x11c, size: 0x4, def value: None
  float_t backgroundAlpha;

  /// @brief Field textures, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>* textures;

  /// @brief Field pendingRepaint, offset: 0x128, size: 0x1, def value: None
  bool pendingRepaint;

  /// @brief Field pendingHierarchicalRepaint, offset: 0x129, size: 0x1, def value: None
  bool pendingHierarchicalRepaint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, prev) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, next) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, groupTransformAncestor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, boneTransformAncestor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, prevDirty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, nextDirty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, hierarchyDepth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, dirtiedValues) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, dirtyID) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, firstHeadCommand) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, lastHeadCommand) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, firstTailCommand) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, lastTailCommand) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, localFlipsWinding) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, localTransformScaleZero) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, worldFlipsWinding) == 0x62, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, worldTransformScaleZero) == 0x63, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, clipMethod) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, childrenStencilRef) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, childrenMaskDepth) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, headMesh) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, tailMesh) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, verticesSpace) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, transformID) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, clipRectID) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, opacityID) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, textCoreSettingsID) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, colorID) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, backgroundColorID) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, borderLeftColorID) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, borderTopColorID) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, borderRightColorID) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, borderBottomColorID) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, tintColorID) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, compositeOpacity) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, backgroundAlpha) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, textures) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, pendingRepaint) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainVEData, pendingHierarchicalRepaint) == 0x129, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChainVEData, 0x130>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChainVEData, "UnityEngine.UIElements.UIR", "RenderChainVEData");
