#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Implementation/RenderEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderEvents)
namespace UnityEngine::UIElements::UIR::Implementation {
struct ClipMethod;
}
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
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
namespace UnityEngine::UIElements::UIR::Implementation {
class RenderEvents;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Implementation::RenderEvents);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Implementation.RenderEvents
class CORDL_TYPE RenderEvents : public ::System::Object {
public:
  // Declarations
  /// @brief Field VisibilityTreshold, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_VisibilityTreshold, put = setStaticF_VisibilityTreshold)) float_t VisibilityTreshold;

  /// @brief Method DepthFirstOnChildAdded, addr 0x49c4bc8, size 0x54c, virtual false, abstract: false, final false
  static inline uint32_t DepthFirstOnChildAdded(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* parent,
                                                ::UnityEngine::UIElements::VisualElement* ve, int32_t index, bool resetState);

  /// @brief Method DepthFirstOnChildRemoving, addr 0x49c6134, size 0x5d4, virtual false, abstract: false, final false
  static inline uint32_t DepthFirstOnChildRemoving(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method DepthFirstOnClippingChanged, addr 0x49c305c, size 0x5e8, virtual false, abstract: false, final false
  static inline void DepthFirstOnClippingChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* parent,
                                                 ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, bool hierarchical, bool isRootOfChange, bool isPendingHierarchicalRepaint,
                                                 bool inheritedClipRectIDChanged, bool inheritedMaskingChanged, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                 ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method DepthFirstOnOpacityChanged, addr 0x49c3724, size 0x444, virtual false, abstract: false, final false
  static inline void DepthFirstOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, float_t parentCompositeOpacity, ::UnityEngine::UIElements::VisualElement* ve,
                                                uint32_t dirtyID, bool hierarchical, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats, bool isDoingFullVertexRegeneration);

  /// @brief Method DepthFirstOnTransformOrSizeChanged, addr 0x49c3ef0, size 0x40c, virtual false, abstract: false, final false
  static inline void DepthFirstOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* parent,
                                                        ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                        bool isAncestorOfChangeSkinned, bool transformChanged, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method DepthFirstOnVisualsChanged, addr 0x49c44bc, size 0x440, virtual false, abstract: false, final false
  static inline void DepthFirstOnVisualsChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, bool parentHierarchyHidden,
                                                bool hierarchical, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method DetermineSelfClipMethod, addr 0x49c6708, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::Implementation::ClipMethod DetermineSelfClipMethod(::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                                                                   ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetClipRectIDClipInfo, addr 0x49c4a44, size 0x184, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetClipRectIDClipInfo(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetLastDeepestChild, addr 0x49c523c, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* GetLastDeepestChild(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetTransformIDTransformInfo, addr 0x49c48fc, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetTransformIDTransformInfo(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method InitColorIDs, addr 0x49c5314, size 0x698, virtual false, abstract: false, final false
  static inline bool InitColorIDs(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method IsElementHierarchyHidden, addr 0x49c43fc, size 0xc0, virtual false, abstract: false, final false
  static inline bool IsElementHierarchyHidden(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NeedsColorID, addr 0x49c52f4, size 0x20, virtual false, abstract: false, final false
  static inline bool NeedsColorID(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NeedsTextCoreSettings, addr 0x49c6e48, size 0xa0, virtual false, abstract: false, final false
  static inline bool NeedsTextCoreSettings(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method NeedsTransformID, addr 0x49c52b8, size 0x3c, virtual false, abstract: false, final false
  static inline bool NeedsTransformID(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method OnColorChanged, addr 0x49c3bf0, size 0x244, virtual false, abstract: false, final false
  static inline void OnColorChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                    ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnClippingChanged, addr 0x49c2f74, size 0xe8, virtual false, abstract: false, final false
  static inline void ProcessOnClippingChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                              ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnColorChanged, addr 0x49c3b68, size 0x88, virtual false, abstract: false, final false
  static inline void ProcessOnColorChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                           ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnOpacityChanged, addr 0x49c3644, size 0xe0, virtual false, abstract: false, final false
  static inline void ProcessOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                             ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnTransformOrSizeChanged, addr 0x49c3e34, size 0xbc, virtual false, abstract: false, final false
  static inline void ProcessOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                                     ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ProcessOnVisualsChanged, addr 0x49c42fc, size 0x100, virtual false, abstract: false, final false
  static inline void ProcessOnVisualsChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                             ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method SetColorValues, addr 0x49c59ac, size 0x788, virtual false, abstract: false, final false
  static inline void SetColorValues(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateLocalFlipsWinding, addr 0x49c5114, size 0x128, virtual false, abstract: false, final false
  static inline bool UpdateLocalFlipsWinding(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateTextCoreSettings, addr 0x49c6810, size 0x424, virtual false, abstract: false, final false
  static inline bool UpdateTextCoreSettings(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateWorldFlipsWinding, addr 0x49c6df4, size 0x54, virtual false, abstract: false, final false
  static inline void UpdateWorldFlipsWinding(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateZeroScaling, addr 0x49c6c34, size 0x1c0, virtual false, abstract: false, final false
  static inline void UpdateZeroScaling(::UnityEngine::UIElements::VisualElement* ve);

  static inline float_t getStaticF_VisibilityTreshold();

  static inline void setStaticF_VisibilityTreshold(float_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6437 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::RenderEvents, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Implementation::RenderEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::RenderEvents*, "UnityEngine.UIElements.UIR.Implementation", "RenderEvents");
