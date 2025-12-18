#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
class RenderChain;
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
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::RenderEvents);
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

  /// @brief Method DepthFirstOnChildAdded, addr 0x6b221d8, size 0x528, virtual false, abstract: false, final false
  static inline uint32_t DepthFirstOnChildAdded(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* parent,
                                                ::UnityEngine::UIElements::VisualElement* ve, int32_t index, bool resetState);

  /// @brief Method DepthFirstOnChildRemoving, addr 0x6b2347c, size 0x484, virtual false, abstract: false, final false
  static inline uint32_t DepthFirstOnChildRemoving(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method DepthFirstOnClippingChanged, addr 0x6b20e78, size 0x524, virtual false, abstract: false, final false
  static inline void DepthFirstOnClippingChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* parent,
                                                 ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, bool hierarchical, bool isRootOfChange, bool isPendingHierarchicalRepaint,
                                                 bool inheritedClipRectIDChanged, bool inheritedMaskingChanged, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                 ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method DepthFirstOnOpacityChanged, addr 0x6b21464, size 0x3a8, virtual false, abstract: false, final false
  static inline void DepthFirstOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, float_t parentCompositeOpacity, ::UnityEngine::UIElements::VisualElement* ve,
                                                uint32_t dirtyID, bool hierarchical, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats, bool isDoingFullVertexRegeneration);

  /// @brief Method DepthFirstOnTransformOrSizeChanged, addr 0x6b21b88, size 0x368, virtual false, abstract: false, final false
  static inline void DepthFirstOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* parent,
                                                        ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                        bool isAncestorOfChangeSkinned, bool transformChanged, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method DetermineSelfClipMethod, addr 0x6b24318, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::ClipMethod DetermineSelfClipMethod(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetClipRectIDClipInfo, addr 0x6b2203c, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetClipRectIDClipInfo(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetLastDeepestChild, addr 0x6b22824, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* GetLastDeepestChild(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetTransformIDTransformInfo, addr 0x6b21ef0, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetTransformIDTransformInfo(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method InitColorIDs, addr 0x6b22908, size 0x564, virtual false, abstract: false, final false
  static inline bool InitColorIDs(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NeedsColorID, addr 0x6b228f0, size 0x18, virtual false, abstract: false, final false
  static inline bool NeedsColorID(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NeedsTextCoreSettings, addr 0x6b24e20, size 0xac, virtual false, abstract: false, final false
  static inline bool NeedsTextCoreSettings(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NeedsTransformID, addr 0x6b228a0, size 0x28, virtual false, abstract: false, final false
  static inline bool NeedsTransformID(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NudgeVerticesToNewSpace, addr 0x6b24a44, size 0x3dc, virtual false, abstract: false, final false
  static inline bool NudgeVerticesToNewSpace(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                             ::UnityEngine::UIElements::UIR::UIRenderDevice* device);

  /// @brief Method OnColorChanged, addr 0x6b21898, size 0x234, virtual false, abstract: false, final false
  static inline void OnColorChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                    ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method PrepareNudgeVertices, addr 0x6b25294, size 0xdc, virtual false, abstract: false, final false
  static inline void PrepareNudgeVertices(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::UIRenderDevice* device, ::UnityEngine::UIElements::UIR::MeshHandle* mesh,
                                          ::ByRef<::System::IntPtr> src, ::ByRef<::System::IntPtr> dst, ::ByRef<int32_t> count);

  /// @brief Method ProcessOnClippingChanged, addr 0x6b20d98, size 0xe0, virtual false, abstract: false, final false
  static inline void ProcessOnClippingChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                              ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnColorChanged, addr 0x6b2180c, size 0x8c, virtual false, abstract: false, final false
  static inline void ProcessOnColorChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                           ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnOpacityChanged, addr 0x6b2139c, size 0xc8, virtual false, abstract: false, final false
  static inline void ProcessOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                             ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnTransformOrSizeChanged, addr 0x6b21acc, size 0xbc, virtual false, abstract: false, final false
  static inline void ProcessOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                                     ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method SetColorValues, addr 0x6b22e6c, size 0x4a8, virtual false, abstract: false, final false
  static inline void SetColorValues(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateLocalFlipsWinding, addr 0x6b22700, size 0x124, virtual false, abstract: false, final false
  static inline bool UpdateLocalFlipsWinding(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateTextCoreSettings, addr 0x6b24558, size 0x24c, virtual false, abstract: false, final false
  static inline bool UpdateTextCoreSettings(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateZeroScaling, addr 0x6b248c0, size 0x184, virtual false, abstract: false, final false
  static inline void UpdateZeroScaling(::UnityEngine::UIElements::VisualElement* ve);

  static inline float_t getStaticF_VisibilityTreshold();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_NudgeVerticesMarker();

  static inline void setStaticF_VisibilityTreshold(float_t value);

  static inline void setStaticF_k_NudgeVerticesMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderEvents(RenderEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderEvents(RenderEvents const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5341 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderEvents, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::RenderEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderEvents*, "UnityEngine.UIElements.UIR", "RenderEvents");
