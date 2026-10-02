#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderEvents)
namespace System {
struct IntPtr;
}
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
namespace UnityEngine::UIElements::UIR {
struct ClipMethod;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements::UIR {
class RenderData;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager;
}
namespace UnityEngine::UIElements::UIR {
class RenderTree;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class RenderEvents;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderEvents*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderEvents*, "UnityEngine.UIElements.UIR", "RenderEvents");
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderEvents
class CORDL_TYPE RenderEvents : public ::System::Object {
public:
  // Declarations
  /// @brief Field VisibilityTreshold, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_VisibilityTreshold, put = setStaticF_VisibilityTreshold)) float_t VisibilityTreshold;

  /// @brief Field k_NudgeVerticesMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_NudgeVerticesMarker, put = setStaticF_k_NudgeVerticesMarker)) ::Unity::Profiling::ProfilerMarker k_NudgeVerticesMarker;

  /// @brief Method DepthFirstOnChildAdded, addr 0x7178bb0, size 0x5e0, virtual false, abstract: false, final false
  static inline uint32_t DepthFirstOnChildAdded(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::VisualElement* parent,
                                                ::UnityEngine::UIElements::VisualElement* ve, int32_t index);

  /// @brief Method DepthFirstOnClippingChanged, addr 0x71776c0, size 0x5b4, virtual false, abstract: false, final false
  static inline void DepthFirstOnClippingChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* parentRenderData,
                                                 ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID, bool hierarchical, bool isRootOfChange, bool isPendingHierarchicalRepaint,
                                                 bool inheritedClipRectIDChanged, bool inheritedMaskingChanged, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                 ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method DepthFirstOnElementRemoving, addr 0x717a0e8, size 0x1a4, virtual false, abstract: false, final false
  static inline uint32_t DepthFirstOnElementRemoving(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method DepthFirstOnOpacityChanged, addr 0x7177d34, size 0x3c8, virtual false, abstract: false, final false
  static inline void DepthFirstOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, float_t parentCompositeOpacity,
                                                ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID, bool hierarchical,
                                                ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats, bool isDoingFullVertexRegeneration);

  /// @brief Method DepthFirstOnTransformOrSizeChanged, addr 0x7178514, size 0x3e0, virtual false, abstract: false, final false
  static inline void DepthFirstOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                                        ::UnityEngine::UIElements::UIR::UIRenderDevice* device, bool isAncestorOfChangeSkinned, bool transformChanged,
                                                        ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method DepthFirstRemoveRenderData, addr 0x717a28c, size 0xe0, virtual false, abstract: false, final false
  static inline void DepthFirstRemoveRenderData(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method DetermineSelfClipMethod, addr 0x717ae98, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::ClipMethod DetermineSelfClipMethod(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                   ::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method DisconnectRenderTreeFromParent, addr 0x717a910, size 0x4c, virtual false, abstract: false, final false
  static inline void DisconnectRenderTreeFromParent(::UnityEngine::UIElements::UIR::RenderTree* parentTree, ::UnityEngine::UIElements::UIR::RenderTree* nestedTree);

  /// @brief Method DisconnectSubTree, addr 0x717a36c, size 0x54, virtual false, abstract: false, final false
  static inline void DisconnectSubTree(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method DoDepthFirstRemoveRenderData, addr 0x717a824, size 0xec, virtual false, abstract: false, final false
  static inline void DoDepthFirstRemoveRenderData(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method GetClipRectIDClipInfo, addr 0x7178a64, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetClipRectIDClipInfo(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method GetTransformIDTransformInfo, addr 0x71788f4, size 0x170, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetTransformIDTransformInfo(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method InitColorIDs, addr 0x7179754, size 0x464, virtual false, abstract: false, final false
  static inline bool InitColorIDs(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NeedsColorID, addr 0x717973c, size 0x18, virtual false, abstract: false, final false
  static inline bool NeedsColorID(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NeedsTextCoreSettings, addr 0x717b87c, size 0xac, virtual false, abstract: false, final false
  static inline bool NeedsTextCoreSettings(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NeedsTransformID, addr 0x7179708, size 0x34, virtual false, abstract: false, final false
  static inline bool NeedsTransformID(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NudgeVerticesToNewSpace, addr 0x717b424, size 0x458, virtual false, abstract: false, final false
  static inline bool NudgeVerticesToNewSpace(::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                             ::UnityEngine::UIElements::UIR::UIRenderDevice* device);

  /// @brief Method OnColorChanged, addr 0x7178188, size 0x2e8, virtual false, abstract: false, final false
  static inline void OnColorChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                    ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method PrepareNudgeVertices, addr 0x717b928, size 0xe0, virtual false, abstract: false, final false
  static inline void PrepareNudgeVertices(::UnityEngine::UIElements::UIR::UIRenderDevice* device, ::UnityEngine::UIElements::UIR::MeshHandle* mesh, ::by_ref<::System::IntPtr> src,
                                          ::by_ref<::System::IntPtr> dst, ::by_ref<int32_t> count);

  /// @brief Method ProcessOnClippingChanged, addr 0x71775e8, size 0xd8, virtual false, abstract: false, final false
  static inline void ProcessOnClippingChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                              ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnColorChanged, addr 0x71780fc, size 0x8c, virtual false, abstract: false, final false
  static inline void ProcessOnColorChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                           ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnOpacityChanged, addr 0x7177c74, size 0xc0, virtual false, abstract: false, final false
  static inline void ProcessOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                             ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnTransformOrSizeChanged, addr 0x7178470, size 0xa4, virtual false, abstract: false, final false
  static inline void ProcessOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                                     ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ResetRenderData, addr 0x717a3c0, size 0x464, virtual false, abstract: false, final false
  static inline void ResetRenderData(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method SetColorValues, addr 0x7179bb8, size 0x530, virtual false, abstract: false, final false
  static inline void SetColorValues(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateLocalFlipsWinding, addr 0x71795b0, size 0x158, virtual false, abstract: false, final false
  static inline bool UpdateLocalFlipsWinding(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method UpdateTextCoreSettings, addr 0x717af68, size 0x2f4, virtual false, abstract: false, final false
  static inline bool UpdateTextCoreSettings(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateZeroScaling, addr 0x717b25c, size 0x1c8, virtual false, abstract: false, final false
  static inline void UpdateZeroScaling(::UnityEngine::UIElements::UIR::RenderData* renderData);

  static inline float_t getStaticF_VisibilityTreshold();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_NudgeVerticesMarker();

  static inline void setStaticF_VisibilityTreshold(float_t value);

  static inline void setStaticF_k_NudgeVerticesMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderEvents", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderEvents(RenderEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderEvents", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderEvents(RenderEvents const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5440 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderEvents) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
