#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ClipMethod_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataFlags_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderData)
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNode_1;
}
namespace UnityEngine::UIElements::UIR {
struct GraphicEntry;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
class RenderTree;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class RenderData;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderData*, "UnityEngine.UIElements.UIR", "RenderData");
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Rect, UnityEngine.UIElements.UIR.BMPAlloc, UnityEngine.UIElements.UIR.ClipMethod, UnityEngine.UIElements.UIR.RenderDataDirtyTypes,
// UnityEngine.UIElements.UIR.RenderDataFlags
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderData
class CORDL_TYPE RenderData : public ::System::Object {
public:
  // Declarations
  /// @brief Field backgroundAlpha, offset 0x154, size 0x4
  __declspec(property(get = __cordl_internal_get_backgroundAlpha, put = __cordl_internal_set_backgroundAlpha)) float_t backgroundAlpha;

  /// @brief Field backgroundColorID, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundColorID, put = __cordl_internal_set_backgroundColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc backgroundColorID;

  /// @brief Field boneTransformAncestor, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_boneTransformAncestor, put = __cordl_internal_set_boneTransformAncestor)) ::UnityEngine::UIElements::UIR::RenderData* boneTransformAncestor;

  /// @brief Field borderBottomColorID, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_borderBottomColorID, put = __cordl_internal_set_borderBottomColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc borderBottomColorID;

  /// @brief Field borderLeftColorID, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_borderLeftColorID, put = __cordl_internal_set_borderLeftColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc borderLeftColorID;

  /// @brief Field borderRightColorID, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_borderRightColorID, put = __cordl_internal_set_borderRightColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc borderRightColorID;

  /// @brief Field borderTopColorID, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_borderTopColorID, put = __cordl_internal_set_borderTopColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc borderTopColorID;

  /// @brief Field childrenMaskDepth, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_childrenMaskDepth, put = __cordl_internal_set_childrenMaskDepth)) int32_t childrenMaskDepth;

  /// @brief Field childrenStencilRef, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_childrenStencilRef, put = __cordl_internal_set_childrenStencilRef)) int32_t childrenStencilRef;

  /// @brief Field clipMethod, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_clipMethod, put = __cordl_internal_set_clipMethod)) ::UnityEngine::UIElements::UIR::ClipMethod clipMethod;

  /// @brief Field clipRectID, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_clipRectID, put = __cordl_internal_set_clipRectID)) ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID;

  __declspec(property(get = get_clippingRect, put = set_clippingRect)) ::UnityEngine::Rect clippingRect;

  __declspec(property(get = get_clippingRectIsInfinite, put = set_clippingRectIsInfinite)) bool clippingRectIsInfinite;

  __declspec(property(get = get_clippingRectMinusGroup, put = set_clippingRectMinusGroup)) ::UnityEngine::Rect clippingRectMinusGroup;

  /// @brief Field colorID, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_colorID, put = __cordl_internal_set_colorID)) ::UnityEngine::UIElements::UIR::BMPAlloc colorID;

  /// @brief Field compositeOpacity, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_compositeOpacity, put = __cordl_internal_set_compositeOpacity)) float_t compositeOpacity;

  /// @brief Field depthInRenderTree, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_depthInRenderTree, put = __cordl_internal_set_depthInRenderTree)) int32_t depthInRenderTree;

  /// @brief Field dirtiedValues, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_dirtiedValues, put = __cordl_internal_set_dirtiedValues)) ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtiedValues;

  /// @brief Field dirtyID, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_dirtyID, put = __cordl_internal_set_dirtyID)) uint32_t dirtyID;

  /// @brief Field firstChild, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_firstChild, put = __cordl_internal_set_firstChild)) ::UnityEngine::UIElements::UIR::RenderData* firstChild;

  /// @brief Field firstHeadCommand, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_firstHeadCommand, put = __cordl_internal_set_firstHeadCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* firstHeadCommand;

  /// @brief Field firstTailCommand, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_firstTailCommand, put = __cordl_internal_set_firstTailCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* firstTailCommand;

  /// @brief Field flags, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) ::UnityEngine::UIElements::UIR::RenderDataFlags flags;

  /// @brief Field graphicEntries, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_graphicEntries,
                      put = __cordl_internal_set_graphicEntries)) ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::GraphicEntry>* graphicEntries;

  /// @brief Field groupTransformAncestor, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_groupTransformAncestor, put = __cordl_internal_set_groupTransformAncestor)) ::UnityEngine::UIElements::UIR::RenderData* groupTransformAncestor;

  __declspec(property(get = get_hasExtraData)) bool hasExtraData;

  __declspec(property(get = get_hasExtraMeshes)) bool hasExtraMeshes;

  /// @brief Field headMesh, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_headMesh, put = __cordl_internal_set_headMesh)) ::UnityEngine::UIElements::UIR::MeshHandle* headMesh;

  __declspec(property(get = get_isClippingRectDirty)) bool isClippingRectDirty;

  __declspec(property(get = get_isGroupTransform)) bool isGroupTransform;

  __declspec(property(get = get_isIgnoringDynamicColorHint)) bool isIgnoringDynamicColorHint;

  __declspec(property(get = get_isNestedRenderTreeRoot)) bool isNestedRenderTreeRoot;

  __declspec(property(get = get_isSubTreeQuad)) bool isSubTreeQuad;

  /// @brief Field lastChild, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lastChild, put = __cordl_internal_set_lastChild)) ::UnityEngine::UIElements::UIR::RenderData* lastChild;

  /// @brief Field lastHeadCommand, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_lastHeadCommand, put = __cordl_internal_set_lastHeadCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* lastHeadCommand;

  /// @brief Field lastTailCommand, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_lastTailCommand, put = __cordl_internal_set_lastTailCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* lastTailCommand;

  /// @brief Field localFlipsWinding, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_localFlipsWinding, put = __cordl_internal_set_localFlipsWinding)) bool localFlipsWinding;

  /// @brief Field m_ClippingRect, offset 0x164, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ClippingRect, put = __cordl_internal_set_m_ClippingRect)) ::UnityEngine::Rect m_ClippingRect;

  /// @brief Field m_ClippingRectIsInfinite, offset 0x184, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClippingRectIsInfinite, put = __cordl_internal_set_m_ClippingRectIsInfinite)) bool m_ClippingRectIsInfinite;

  /// @brief Field m_ClippingRectMinusGroup, offset 0x174, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ClippingRectMinusGroup, put = __cordl_internal_set_m_ClippingRectMinusGroup)) ::UnityEngine::Rect m_ClippingRectMinusGroup;

  /// @brief Field nextDirty, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nextDirty, put = __cordl_internal_set_nextDirty)) ::UnityEngine::UIElements::UIR::RenderData* nextDirty;

  /// @brief Field nextSibling, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nextSibling, put = __cordl_internal_set_nextSibling)) ::UnityEngine::UIElements::UIR::RenderData* nextSibling;

  /// @brief Field opacityID, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_opacityID, put = __cordl_internal_set_opacityID)) ::UnityEngine::UIElements::UIR::BMPAlloc opacityID;

  /// @brief Field owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_owner, put = __cordl_internal_set_owner)) ::UnityEngine::UIElements::VisualElement* owner;

  /// @brief Field parent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::UnityEngine::UIElements::UIR::RenderData* parent;

  /// @brief Field pendingHierarchicalRepaint, offset 0x161, size 0x1
  __declspec(property(get = __cordl_internal_get_pendingHierarchicalRepaint, put = __cordl_internal_set_pendingHierarchicalRepaint)) bool pendingHierarchicalRepaint;

  /// @brief Field pendingRepaint, offset 0x160, size 0x1
  __declspec(property(get = __cordl_internal_get_pendingRepaint, put = __cordl_internal_set_pendingRepaint)) bool pendingRepaint;

  /// @brief Field prevDirty, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_prevDirty, put = __cordl_internal_set_prevDirty)) ::UnityEngine::UIElements::UIR::RenderData* prevDirty;

  /// @brief Field prevSibling, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_prevSibling, put = __cordl_internal_set_prevSibling)) ::UnityEngine::UIElements::UIR::RenderData* prevSibling;

  /// @brief Field renderTree, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_renderTree, put = __cordl_internal_set_renderTree)) ::UnityEngine::UIElements::UIR::RenderTree* renderTree;

  /// @brief Field tailMesh, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_tailMesh, put = __cordl_internal_set_tailMesh)) ::UnityEngine::UIElements::UIR::MeshHandle* tailMesh;

  /// @brief Field textCoreSettingsID, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_textCoreSettingsID, put = __cordl_internal_set_textCoreSettingsID)) ::UnityEngine::UIElements::UIR::BMPAlloc textCoreSettingsID;

  /// @brief Field tintColorID, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_tintColorID, put = __cordl_internal_set_tintColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc tintColorID;

  /// @brief Field transformID, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_transformID, put = __cordl_internal_set_transformID)) ::UnityEngine::UIElements::UIR::BMPAlloc transformID;

  /// @brief Field verticesSpace, offset 0xb8, size 0x40
  __declspec(property(get = __cordl_internal_get_verticesSpace, put = __cordl_internal_set_verticesSpace)) ::UnityEngine::Matrix4x4 verticesSpace;

  /// @brief Field worldFlipsWinding, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get_worldFlipsWinding, put = __cordl_internal_set_worldFlipsWinding)) bool worldFlipsWinding;

  /// @brief Field worldTransformScaleZero, offset 0x9a, size 0x1
  __declspec(property(get = __cordl_internal_get_worldTransformScaleZero, put = __cordl_internal_set_worldTransformScaleZero)) bool worldTransformScaleZero;

  /// @brief Method AllocatesID, addr 0x71763ac, size 0x70, virtual false, abstract: false, final false
  static inline bool AllocatesID(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method GetLocalClippingRect, addr 0x7176ee4, size 0x62c, virtual false, abstract: false, final false
  static inline void GetLocalClippingRect(::UnityEngine::UIElements::VisualElement* owner, ::by_ref<::UnityEngine::Rect> localRect);

  /// @brief Method InheritsID, addr 0x717641c, size 0x6c, virtual false, abstract: false, final false
  static inline bool InheritsID(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method Init, addr 0x7176488, size 0x288, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method IntersectClipRects, addr 0x7177510, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect IntersectClipRects(::UnityEngine::Rect rect, ::UnityEngine::Rect parentRect);

  static inline ::UnityEngine::UIElements::UIR::RenderData* New_ctor();

  /// @brief Method Reset, addr 0x7176740, size 0x28, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method UpdateClippingRect, addr 0x71767f8, size 0x680, virtual false, abstract: false, final false
  inline void UpdateClippingRect();

  constexpr float_t const& __cordl_internal_get_backgroundAlpha() const;

  constexpr float_t& __cordl_internal_get_backgroundAlpha();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_backgroundColorID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_backgroundColorID();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_boneTransformAncestor() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_boneTransformAncestor();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_borderBottomColorID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_borderBottomColorID();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_borderLeftColorID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_borderLeftColorID();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_borderRightColorID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_borderRightColorID();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_borderTopColorID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_borderTopColorID();

  constexpr int32_t const& __cordl_internal_get_childrenMaskDepth() const;

  constexpr int32_t& __cordl_internal_get_childrenMaskDepth();

  constexpr int32_t const& __cordl_internal_get_childrenStencilRef() const;

  constexpr int32_t& __cordl_internal_get_childrenStencilRef();

  constexpr ::UnityEngine::UIElements::UIR::ClipMethod const& __cordl_internal_get_clipMethod() const;

  constexpr ::UnityEngine::UIElements::UIR::ClipMethod& __cordl_internal_get_clipMethod();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_clipRectID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_clipRectID();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_colorID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_colorID();

  constexpr float_t const& __cordl_internal_get_compositeOpacity() const;

  constexpr float_t& __cordl_internal_get_compositeOpacity();

  constexpr int32_t const& __cordl_internal_get_depthInRenderTree() const;

  constexpr int32_t& __cordl_internal_get_depthInRenderTree();

  constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const& __cordl_internal_get_dirtiedValues() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes& __cordl_internal_get_dirtiedValues();

  constexpr uint32_t const& __cordl_internal_get_dirtyID() const;

  constexpr uint32_t& __cordl_internal_get_dirtyID();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_firstChild() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_firstChild();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_firstHeadCommand() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_firstHeadCommand();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_firstTailCommand() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_firstTailCommand();

  constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags const& __cordl_internal_get_flags() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags& __cordl_internal_get_flags();

  constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::GraphicEntry>* const& __cordl_internal_get_graphicEntries() const;

  constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::GraphicEntry>*& __cordl_internal_get_graphicEntries();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_groupTransformAncestor() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_groupTransformAncestor();

  constexpr ::UnityEngine::UIElements::UIR::MeshHandle* const& __cordl_internal_get_headMesh() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshHandle*& __cordl_internal_get_headMesh();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_lastChild() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_lastChild();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_lastHeadCommand() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_lastHeadCommand();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_lastTailCommand() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_lastTailCommand();

  constexpr bool const& __cordl_internal_get_localFlipsWinding() const;

  constexpr bool& __cordl_internal_get_localFlipsWinding();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_ClippingRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_ClippingRect();

  constexpr bool const& __cordl_internal_get_m_ClippingRectIsInfinite() const;

  constexpr bool& __cordl_internal_get_m_ClippingRectIsInfinite();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_ClippingRectMinusGroup() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_ClippingRectMinusGroup();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_nextDirty() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_nextDirty();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_nextSibling() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_nextSibling();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_opacityID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_opacityID();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_owner() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_owner();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_parent() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_parent();

  constexpr bool const& __cordl_internal_get_pendingHierarchicalRepaint() const;

  constexpr bool& __cordl_internal_get_pendingHierarchicalRepaint();

  constexpr bool const& __cordl_internal_get_pendingRepaint() const;

  constexpr bool& __cordl_internal_get_pendingRepaint();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_prevDirty() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_prevDirty();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_prevSibling() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_prevSibling();

  constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& __cordl_internal_get_renderTree() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderTree*& __cordl_internal_get_renderTree();

  constexpr ::UnityEngine::UIElements::UIR::MeshHandle* const& __cordl_internal_get_tailMesh() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshHandle*& __cordl_internal_get_tailMesh();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_textCoreSettingsID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_textCoreSettingsID();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_tintColorID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_tintColorID();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_transformID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_transformID();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_verticesSpace() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_verticesSpace();

  constexpr bool const& __cordl_internal_get_worldFlipsWinding() const;

  constexpr bool& __cordl_internal_get_worldFlipsWinding();

  constexpr bool const& __cordl_internal_get_worldTransformScaleZero() const;

  constexpr bool& __cordl_internal_get_worldTransformScaleZero();

  constexpr void __cordl_internal_set_backgroundAlpha(float_t value);

  constexpr void __cordl_internal_set_backgroundColorID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_boneTransformAncestor(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_borderBottomColorID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_borderLeftColorID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_borderRightColorID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_borderTopColorID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_childrenMaskDepth(int32_t value);

  constexpr void __cordl_internal_set_childrenStencilRef(int32_t value);

  constexpr void __cordl_internal_set_clipMethod(::UnityEngine::UIElements::UIR::ClipMethod value);

  constexpr void __cordl_internal_set_clipRectID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_colorID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_compositeOpacity(float_t value);

  constexpr void __cordl_internal_set_depthInRenderTree(int32_t value);

  constexpr void __cordl_internal_set_dirtiedValues(::UnityEngine::UIElements::UIR::RenderDataDirtyTypes value);

  constexpr void __cordl_internal_set_dirtyID(uint32_t value);

  constexpr void __cordl_internal_set_firstChild(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_firstHeadCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_firstTailCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_flags(::UnityEngine::UIElements::UIR::RenderDataFlags value);

  constexpr void __cordl_internal_set_graphicEntries(::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::GraphicEntry>* value);

  constexpr void __cordl_internal_set_groupTransformAncestor(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_headMesh(::UnityEngine::UIElements::UIR::MeshHandle* value);

  constexpr void __cordl_internal_set_lastChild(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_lastHeadCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_lastTailCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_localFlipsWinding(bool value);

  constexpr void __cordl_internal_set_m_ClippingRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_ClippingRectIsInfinite(bool value);

  constexpr void __cordl_internal_set_m_ClippingRectMinusGroup(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_nextDirty(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_nextSibling(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_opacityID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_owner(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_parent(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_pendingHierarchicalRepaint(bool value);

  constexpr void __cordl_internal_set_pendingRepaint(bool value);

  constexpr void __cordl_internal_set_prevDirty(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_prevSibling(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_renderTree(::UnityEngine::UIElements::UIR::RenderTree* value);

  constexpr void __cordl_internal_set_tailMesh(::UnityEngine::UIElements::UIR::MeshHandle* value);

  constexpr void __cordl_internal_set_textCoreSettingsID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_tintColorID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_transformID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_verticesSpace(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_worldFlipsWinding(bool value);

  constexpr void __cordl_internal_set_worldTransformScaleZero(bool value);

  /// @brief Method .ctor, addr 0x71775e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clippingRect, addr 0x71767bc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_clippingRect();

  /// @brief Method get_clippingRectIsInfinite, addr 0x7176eb4, size 0x30, virtual false, abstract: false, final false
  inline bool get_clippingRectIsInfinite();

  /// @brief Method get_clippingRectMinusGroup, addr 0x7176e78, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_clippingRectMinusGroup();

  /// @brief Method get_hasExtraData, addr 0x7176780, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasExtraData();

  /// @brief Method get_hasExtraMeshes, addr 0x717678c, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasExtraMeshes();

  /// @brief Method get_isClippingRectDirty, addr 0x71767b0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isClippingRectDirty();

  /// @brief Method get_isGroupTransform, addr 0x7176768, size 0xc, virtual false, abstract: false, final false
  inline bool get_isGroupTransform();

  /// @brief Method get_isIgnoringDynamicColorHint, addr 0x7176774, size 0xc, virtual false, abstract: false, final false
  inline bool get_isIgnoringDynamicColorHint();

  /// @brief Method get_isNestedRenderTreeRoot, addr 0x71767a4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isNestedRenderTreeRoot();

  /// @brief Method get_isSubTreeQuad, addr 0x7176798, size 0xc, virtual false, abstract: false, final false
  inline bool get_isSubTreeQuad();

  /// @brief Method set_clippingRect, addr 0x7176710, size 0x14, virtual false, abstract: false, final false
  inline void set_clippingRect(::UnityEngine::Rect value);

  /// @brief Method set_clippingRectIsInfinite, addr 0x7176738, size 0x8, virtual false, abstract: false, final false
  inline void set_clippingRectIsInfinite(bool value);

  /// @brief Method set_clippingRectMinusGroup, addr 0x7176724, size 0x14, virtual false, abstract: false, final false
  inline void set_clippingRectMinusGroup(::UnityEngine::Rect value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderData(RenderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderData(RenderData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5438 };

  /// @brief Field owner, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___owner;

  /// @brief Field renderTree, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderTree* ___renderTree;

  /// @brief Field parent, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___parent;

  /// @brief Field prevSibling, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___prevSibling;

  /// @brief Field nextSibling, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___nextSibling;

  /// @brief Field firstChild, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___firstChild;

  /// @brief Field lastChild, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___lastChild;

  /// @brief Field groupTransformAncestor, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___groupTransformAncestor;

  /// @brief Field boneTransformAncestor, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___boneTransformAncestor;

  /// @brief Field prevDirty, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___prevDirty;

  /// @brief Field nextDirty, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___nextDirty;

  /// @brief Field flags, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::RenderDataFlags ___flags;

  /// @brief Field depthInRenderTree, offset: 0x6c, size: 0x4, def value: None
  int32_t ___depthInRenderTree;

  /// @brief Field dirtiedValues, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes ___dirtiedValues;

  /// @brief Field dirtyID, offset: 0x74, size: 0x4, def value: None
  uint32_t ___dirtyID;

  /// @brief Field firstHeadCommand, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___firstHeadCommand;

  /// @brief Field lastHeadCommand, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___lastHeadCommand;

  /// @brief Field firstTailCommand, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___firstTailCommand;

  /// @brief Field lastTailCommand, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___lastTailCommand;

  /// @brief Field localFlipsWinding, offset: 0x98, size: 0x1, def value: None
  bool ___localFlipsWinding;

  /// @brief Field worldFlipsWinding, offset: 0x99, size: 0x1, def value: None
  bool ___worldFlipsWinding;

  /// @brief Field worldTransformScaleZero, offset: 0x9a, size: 0x1, def value: None
  bool ___worldTransformScaleZero;

  /// @brief Field clipMethod, offset: 0x9c, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::ClipMethod ___clipMethod;

  /// @brief Field childrenStencilRef, offset: 0xa0, size: 0x4, def value: None
  int32_t ___childrenStencilRef;

  /// @brief Field childrenMaskDepth, offset: 0xa4, size: 0x4, def value: None
  int32_t ___childrenMaskDepth;

  /// @brief Field headMesh, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshHandle* ___headMesh;

  /// @brief Field tailMesh, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshHandle* ___tailMesh;

  /// @brief Field verticesSpace, offset: 0xb8, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___verticesSpace;

  /// @brief Field transformID, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___transformID;

  /// @brief Field clipRectID, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___clipRectID;

  /// @brief Field opacityID, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___opacityID;

  /// @brief Field textCoreSettingsID, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___textCoreSettingsID;

  /// @brief Field colorID, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___colorID;

  /// @brief Field backgroundColorID, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___backgroundColorID;

  /// @brief Field borderLeftColorID, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___borderLeftColorID;

  /// @brief Field borderTopColorID, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___borderTopColorID;

  /// @brief Field borderRightColorID, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___borderRightColorID;

  /// @brief Field borderBottomColorID, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___borderBottomColorID;

  /// @brief Field tintColorID, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___tintColorID;

  /// @brief Field compositeOpacity, offset: 0x150, size: 0x4, def value: None
  float_t ___compositeOpacity;

  /// @brief Field backgroundAlpha, offset: 0x154, size: 0x4, def value: None
  float_t ___backgroundAlpha;

  /// @brief Field graphicEntries, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::GraphicEntry>* ___graphicEntries;

  /// @brief Field pendingRepaint, offset: 0x160, size: 0x1, def value: None
  bool ___pendingRepaint;

  /// @brief Field pendingHierarchicalRepaint, offset: 0x161, size: 0x1, def value: None
  bool ___pendingHierarchicalRepaint;

  /// @brief Field m_ClippingRect, offset: 0x164, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_ClippingRect;

  /// @brief Field m_ClippingRectMinusGroup, offset: 0x174, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_ClippingRectMinusGroup;

  /// @brief Field m_ClippingRectIsInfinite, offset: 0x184, size: 0x1, def value: None
  bool ___m_ClippingRectIsInfinite;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___renderTree) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___prevSibling) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___nextSibling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___firstChild) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___lastChild) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___groupTransformAncestor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___boneTransformAncestor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___prevDirty) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___nextDirty) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___flags) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___depthInRenderTree) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___dirtiedValues) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___dirtyID) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___firstHeadCommand) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___lastHeadCommand) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___firstTailCommand) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___lastTailCommand) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___localFlipsWinding) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___worldFlipsWinding) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___worldTransformScaleZero) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___clipMethod) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___childrenStencilRef) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___childrenMaskDepth) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___headMesh) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___tailMesh) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___verticesSpace) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___transformID) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___clipRectID) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___opacityID) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___textCoreSettingsID) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___colorID) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___backgroundColorID) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___borderLeftColorID) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___borderTopColorID) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___borderRightColorID) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___borderBottomColorID) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___tintColorID) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___compositeOpacity) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___backgroundAlpha) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___graphicEntries) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___pendingRepaint) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___pendingHierarchicalRepaint) == 0x161, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___m_ClippingRect) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___m_ClippingRectMinusGroup) == 0x174, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderData, ___m_ClippingRectIsInfinite) == 0x184, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderData) == 0x188, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
