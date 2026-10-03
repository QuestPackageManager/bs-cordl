#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DepthOrderedDirtyTracking_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTree)
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
namespace UnityEngine::UIElements::UIR {
struct DepthOrderedDirtyTracking;
}
namespace UnityEngine::UIElements::UIR {
class GCHandlePool;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
class RenderData;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager;
}
namespace UnityEngine::UIElements::UIR {
struct RenderTree_AllowedClasses;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderTree_AllowedClasses;
}
namespace UnityEngine::UIElements::UIR {
class RenderTree;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses);
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderTree*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses, "UnityEngine.UIElements.UIR", "RenderTree/AllowedClasses");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTree*, "UnityEngine.UIElements.UIR", "RenderTree");
// [Flags]
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderTree/AllowedClasses
struct CORDL_TYPE RenderTree_AllowedClasses {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderTree_AllowedClasses_Unwrapped
  enum struct __RenderTree_AllowedClasses_Unwrapped : int32_t {
    __E_Clipping = static_cast<int32_t>(0x1),
    __E_Opacity = static_cast<int32_t>(0x2),
    __E_Color = static_cast<int32_t>(0x4),
    __E_TransformSize = static_cast<int32_t>(0x8),
    __E_Visuals = static_cast<int32_t>(0x10),
    __E_All = static_cast<int32_t>(0x1f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderTree_AllowedClasses_Unwrapped() const noexcept {
    return static_cast<__RenderTree_AllowedClasses_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTree_AllowedClasses();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RenderTree_AllowedClasses(int32_t value__) noexcept;

  /// @brief Field All value: I32(31)
  static ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses const All;

  /// @brief Field Clipping value: I32(1)
  static ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses const Clipping;

  /// @brief Field Color value: I32(4)
  static ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses const Color;

  /// @brief Field Opacity value: I32(2)
  static ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses const Opacity;

  /// @brief Field TransformSize value: I32(8)
  static ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses const TransformSize;

  /// @brief Field Visuals value: I32(16)
  static ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses const Visuals;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5442 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.Rect, UnityEngine.RectInt, UnityEngine.UIElements.TextureId, UnityEngine.UIElements.UIR.DepthOrderedDirtyTracking,
// UnityEngine.UIElements.UIR.RenderTree::AllowedClasses
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderTree
class CORDL_TYPE RenderTree : public ::System::Object {
public:
  // Declarations
  using AllowedClasses = ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses;

  __declspec(property(get = get_dirtyTracker)) ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking dirtyTracker;

  /// @brief Field firstChild, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_firstChild, put = __cordl_internal_set_firstChild)) ::UnityEngine::UIElements::UIR::RenderTree* firstChild;

  __declspec(property(get = get_firstCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand;

  __declspec(property(get = get_isRootRenderTree)) bool isRootRenderTree;

  /// @brief Field k_MarkerClipProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerClipProcessing, put = setStaticF_k_MarkerClipProcessing)) ::Unity::Profiling::ProfilerMarker k_MarkerClipProcessing;

  /// @brief Field k_MarkerColorsProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerColorsProcessing, put = setStaticF_k_MarkerColorsProcessing)) ::Unity::Profiling::ProfilerMarker k_MarkerColorsProcessing;

  /// @brief Field k_MarkerOpacityProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerOpacityProcessing, put = setStaticF_k_MarkerOpacityProcessing)) ::Unity::Profiling::ProfilerMarker k_MarkerOpacityProcessing;

  /// @brief Field k_MarkerTransformProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerTransformProcessing, put = setStaticF_k_MarkerTransformProcessing)) ::Unity::Profiling::ProfilerMarker k_MarkerTransformProcessing;

  /// @brief Field k_MarkerVisualsProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerVisualsProcessing, put = setStaticF_k_MarkerVisualsProcessing)) ::Unity::Profiling::ProfilerMarker k_MarkerVisualsProcessing;

  /// @brief Field m_AllowedDirtyClasses, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AllowedDirtyClasses,
                      put = __cordl_internal_set_m_AllowedDirtyClasses)) ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses m_AllowedDirtyClasses;

  /// @brief Field m_DirtyTracker, offset 0x18, size 0x30
  __declspec(property(get = __cordl_internal_get_m_DirtyTracker, put = __cordl_internal_set_m_DirtyTracker)) ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking m_DirtyTracker;

  /// @brief Field m_FirstCommand, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstCommand, put = __cordl_internal_set_m_FirstCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* m_FirstCommand;

  /// @brief Field m_GCHandlePool, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GCHandlePool, put = __cordl_internal_set_m_GCHandlePool)) ::UnityEngine::UIElements::UIR::GCHandlePool* m_GCHandlePool;

  /// @brief Field m_RenderTreeManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderTreeManager, put = __cordl_internal_set_m_RenderTreeManager)) ::UnityEngine::UIElements::UIR::RenderTreeManager* m_RenderTreeManager;

  /// @brief Field m_RootRenderData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootRenderData, put = __cordl_internal_set_m_RootRenderData)) ::UnityEngine::UIElements::UIR::RenderData* m_RootRenderData;

  /// @brief Field nextSibling, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_nextSibling, put = __cordl_internal_set_nextSibling)) ::UnityEngine::UIElements::UIR::RenderTree* nextSibling;

  /// @brief Field parent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::UnityEngine::UIElements::UIR::RenderTree* parent;

  /// @brief Field quadRect, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get_quadRect, put = __cordl_internal_set_quadRect)) ::UnityEngine::RectInt quadRect;

  /// @brief Field quadTextureId, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_quadTextureId, put = __cordl_internal_set_quadTextureId)) ::UnityEngine::UIElements::TextureId quadTextureId;

  /// @brief Field quadUVRect, offset 0x6c, size 0x10
  __declspec(property(get = __cordl_internal_get_quadUVRect, put = __cordl_internal_set_quadUVRect)) ::UnityEngine::Rect quadUVRect;

  __declspec(property(get = get_renderTreeManager)) ::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager;

  __declspec(property(get = get_rootRenderData)) ::UnityEngine::UIElements::UIR::RenderData* rootRenderData;

  /// @brief Method ChildWillBeRemoved, addr 0x717a95c, size 0xc4, virtual false, abstract: false, final false
  inline void ChildWillBeRemoved(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method DepthFirstResetTextures, addr 0x717c148, size 0x60, virtual false, abstract: false, final false
  inline void DepthFirstResetTextures(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method Dispose, addr 0x717c138, size 0x10, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Init, addr 0x717bff4, size 0x130, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* rootRenderData);

  static inline ::UnityEngine::UIElements::UIR::RenderTree* New_ctor();

  /// @brief Method OnRenderCommandAdded, addr 0x717c924, size 0x20, virtual false, abstract: false, final false
  inline void OnRenderCommandAdded(::UnityEngine::UIElements::UIR::RenderChainCommand* command);

  /// @brief Method OnRenderCommandsRemoved, addr 0x717c944, size 0x28, virtual false, abstract: false, final false
  inline void OnRenderCommandsRemoved(::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand);

  /// @brief Method OnRenderDataOpacityIdChanged, addr 0x717c244, size 0x80, virtual false, abstract: false, final false
  inline void OnRenderDataOpacityIdChanged(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method OnRenderDataTransformOrSizeChanged, addr 0x717c1a8, size 0x9c, virtual false, abstract: false, final false
  inline void OnRenderDataTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderData* renderData, bool transformChanged, bool clipRectSizeChanged);

  /// @brief Method OnRenderDataVisualsChanged, addr 0x717c2c4, size 0x90, virtual false, abstract: false, final false
  inline void OnRenderDataVisualsChanged(::UnityEngine::UIElements::UIR::RenderData* renderData, bool hierarchical);

  /// @brief Method ProcessChanges, addr 0x717c354, size 0x5d0, virtual false, abstract: false, final false
  inline void ProcessChanges(::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method Reset, addr 0x717c124, size 0x14, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& __cordl_internal_get_firstChild() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderTree*& __cordl_internal_get_firstChild();

  constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses const& __cordl_internal_get_m_AllowedDirtyClasses() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses& __cordl_internal_get_m_AllowedDirtyClasses();

  constexpr ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking const& __cordl_internal_get_m_DirtyTracker() const;

  constexpr ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking& __cordl_internal_get_m_DirtyTracker();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_m_FirstCommand() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_m_FirstCommand();

  constexpr ::UnityEngine::UIElements::UIR::GCHandlePool* const& __cordl_internal_get_m_GCHandlePool() const;

  constexpr ::UnityEngine::UIElements::UIR::GCHandlePool*& __cordl_internal_get_m_GCHandlePool();

  constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager* const& __cordl_internal_get_m_RenderTreeManager() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager*& __cordl_internal_get_m_RenderTreeManager();

  constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_m_RootRenderData() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_m_RootRenderData();

  constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& __cordl_internal_get_nextSibling() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderTree*& __cordl_internal_get_nextSibling();

  constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& __cordl_internal_get_parent() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderTree*& __cordl_internal_get_parent();

  constexpr ::UnityEngine::RectInt const& __cordl_internal_get_quadRect() const;

  constexpr ::UnityEngine::RectInt& __cordl_internal_get_quadRect();

  constexpr ::UnityEngine::UIElements::TextureId const& __cordl_internal_get_quadTextureId() const;

  constexpr ::UnityEngine::UIElements::TextureId& __cordl_internal_get_quadTextureId();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_quadUVRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_quadUVRect();

  constexpr void __cordl_internal_set_firstChild(::UnityEngine::UIElements::UIR::RenderTree* value);

  constexpr void __cordl_internal_set_m_AllowedDirtyClasses(::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses value);

  constexpr void __cordl_internal_set_m_DirtyTracker(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking value);

  constexpr void __cordl_internal_set_m_FirstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_m_GCHandlePool(::UnityEngine::UIElements::UIR::GCHandlePool* value);

  constexpr void __cordl_internal_set_m_RenderTreeManager(::UnityEngine::UIElements::UIR::RenderTreeManager* value);

  constexpr void __cordl_internal_set_m_RootRenderData(::UnityEngine::UIElements::UIR::RenderData* value);

  constexpr void __cordl_internal_set_nextSibling(::UnityEngine::UIElements::UIR::RenderTree* value);

  constexpr void __cordl_internal_set_parent(::UnityEngine::UIElements::UIR::RenderTree* value);

  constexpr void __cordl_internal_set_quadRect(::UnityEngine::RectInt value);

  constexpr void __cordl_internal_set_quadTextureId(::UnityEngine::UIElements::TextureId value);

  constexpr void __cordl_internal_set_quadUVRect(::UnityEngine::Rect value);

  /// @brief Method .ctor, addr 0x717c96c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerClipProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerColorsProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerOpacityProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerTransformProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerVisualsProcessing();

  /// @brief Method get_dirtyTracker, addr 0x7179408, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking> get_dirtyTracker();

  /// @brief Method get_firstCommand, addr 0x717bfb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* get_firstCommand();

  /// @brief Method get_isRootRenderTree, addr 0x717bfb8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isRootRenderTree();

  /// @brief Method get_renderTreeManager, addr 0x717bfa0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderTreeManager* get_renderTreeManager();

  /// @brief Method get_rootRenderData, addr 0x717bfa8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderData* get_rootRenderData();

  static inline void setStaticF_k_MarkerClipProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerColorsProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerOpacityProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerTransformProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerVisualsProcessing(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTree", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTree(RenderTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTree", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTree(RenderTree const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5443 };

  /// @brief Field m_RenderTreeManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderTreeManager* ___m_RenderTreeManager;

  /// @brief Field m_DirtyTracker, offset: 0x18, size: 0x30, def value: None
  ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking ___m_DirtyTracker;

  /// @brief Field m_FirstCommand, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___m_FirstCommand;

  /// @brief Field m_RootRenderData, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* ___m_RootRenderData;

  /// @brief Field quadTextureId, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId ___quadTextureId;

  /// @brief Field quadRect, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::RectInt ___quadRect;

  /// @brief Field quadUVRect, offset: 0x6c, size: 0x10, def value: None
  ::UnityEngine::Rect ___quadUVRect;

  /// @brief Field m_GCHandlePool, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::GCHandlePool* ___m_GCHandlePool;

  /// @brief Field parent, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderTree* ___parent;

  /// @brief Field firstChild, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderTree* ___firstChild;

  /// @brief Field nextSibling, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderTree* ___nextSibling;

  /// @brief Field m_AllowedDirtyClasses, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::RenderTree_AllowedClasses ___m_AllowedDirtyClasses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_RenderTreeManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_DirtyTracker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_FirstCommand) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_RootRenderData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___quadTextureId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___quadRect) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___quadUVRect) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_GCHandlePool) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___parent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___firstChild) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___nextSibling) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_AllowedDirtyClasses) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTree) == 0xa8, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
