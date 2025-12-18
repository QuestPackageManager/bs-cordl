#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderChain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderChain)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
class BaseElementBuilder;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNodePool_1;
}
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
namespace UnityEngine::UIElements::UIR {
class EntryPool;
}
namespace UnityEngine::UIElements::UIR {
class EntryProcessor;
}
namespace UnityEngine::UIElements::UIR {
class EntryRecorder;
}
namespace UnityEngine::UIElements::UIR {
class Entry;
}
namespace UnityEngine::UIElements::UIR {
class ExtraRenderChainVEData;
}
namespace UnityEngine::UIElements::UIR {
class JobManager;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::UIElements::UIR {
class MeshGenerationDeferrer;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements::UIR {
class MeshWriteDataPool;
}
namespace UnityEngine::UIElements::UIR {
class OpacityIdAccelerator;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChain_DepthOrderedDirtyTracking;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain_VisualChangesProcessor;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain___c;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypeClasses;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
namespace UnityEngine::UIElements::UIR {
class TempMeshAllocatorImpl;
}
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
namespace UnityEngine::UIElements::UIR {
class UIRVEShaderInfoAllocator;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageManager;
}
namespace UnityEngine::UIElements::UIR {
struct VisualChangesProcessor_RenderChain_EntryProcessingInfo;
}
namespace UnityEngine::UIElements::UIR {
struct VisualChangesProcessor_RenderChain_VisualsProcessingType;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class MeshGenerationNodeManager;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct VisualChangesProcessor_RenderChain_VisualsProcessingType;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain_VisualChangesProcessor;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain___c;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChain_DepthOrderedDirtyTracking;
}
namespace UnityEngine::UIElements::UIR {
struct VisualChangesProcessor_RenderChain_EntryProcessingInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::RenderChain);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::RenderChain___c);
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking);
MARK_VAL_T(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
struct CORDL_TYPE RenderChain_DepthOrderedDirtyTracking {
public:
  // Declarations
  /// @brief Method ClearDirty, addr 0x6b1c01c, size 0x198, virtual false, abstract: false, final false
  inline void ClearDirty(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypesInverse);

  /// @brief Method EnsureFits, addr 0x6b1e30c, size 0x128, virtual false, abstract: false, final false
  inline void EnsureFits(int32_t maxDepth);

  /// @brief Method RegisterDirty, addr 0x6b1de04, size 0x1d4, virtual false, abstract: false, final false
  inline void RegisterDirty(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes,
                            ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyTypeClass);

  /// @brief Method Reset, addr 0x6b1b3e8, size 0x74, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChain_DepthOrderedDirtyTracking();

  // Ctor Parameters [CppParam { name: "heads", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name: "tails",
  // ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name: "minDepths", ty:
  // "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "maxDepths", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam {
  // name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr RenderChain_DepthOrderedDirtyTracking(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* heads,
                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* tails, ::ArrayW<int32_t, ::Array<int32_t>*> minDepths,
                                                  ::ArrayW<int32_t, ::Array<int32_t>*> maxDepths, uint32_t dirtyID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5328 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field heads, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* heads;

  /// @brief Field tails, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* tails;

  /// @brief Field minDepths, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> minDepths;

  /// @brief Field maxDepths, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> maxDepths;

  /// @brief Field dirtyID, offset: 0x20, size: 0x4, def value: None
  uint32_t dirtyID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, heads) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, tails) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, minDepths) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, maxDepths) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, dirtyID) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderChain/VisualChangesProcessor/VisualsProcessingType
struct CORDL_TYPE VisualChangesProcessor_RenderChain_VisualsProcessingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisualChangesProcessor_RenderChain_VisualsProcessingType_Unwrapped
  enum struct __VisualChangesProcessor_RenderChain_VisualsProcessingType_Unwrapped : int32_t {
    __E_Head = static_cast<int32_t>(0x0),
    __E_Tail = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisualChangesProcessor_RenderChain_VisualsProcessingType_Unwrapped() const noexcept {
    return static_cast<__VisualChangesProcessor_RenderChain_VisualsProcessingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualChangesProcessor_RenderChain_VisualsProcessingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualChangesProcessor_RenderChain_VisualsProcessingType(int32_t value__) noexcept;

  /// @brief Field Head value: I32(0)
  static ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType const Head;

  /// @brief Field Tail value: I32(1)
  static ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType const Tail;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5329 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.UIElements.UIR.RenderChain::VisualChangesProcessor::VisualsProcessingType
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderChain/VisualChangesProcessor/EntryProcessingInfo
struct CORDL_TYPE VisualChangesProcessor_RenderChain_EntryProcessingInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualChangesProcessor_RenderChain_EntryProcessingInfo();

  // Ctor Parameters [CppParam { name: "visualElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "type", ty:
  // "::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType", modifiers: "", def_value: None }, CppParam { name: "rootEntry", ty:
  // "::UnityEngine::UIElements::UIR::Entry*", modifiers: "", def_value: None }]
  constexpr VisualChangesProcessor_RenderChain_EntryProcessingInfo(::UnityEngine::UIElements::VisualElement* visualElement,
                                                                   ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType type,
                                                                   ::UnityEngine::UIElements::UIR::Entry* rootEntry) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5330 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field visualElement, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* visualElement;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType type;

  /// @brief Field rootEntry, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Entry* rootEntry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo, visualElement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo, rootEntry) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderChain/VisualChangesProcessor
class CORDL_TYPE RenderChain_VisualChangesProcessor : public ::System::Object {
public:
  // Declarations
  using EntryProcessingInfo = ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo;

  using VisualsProcessingType = ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType;

  /// @brief Field <disposed>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_elementBuilder)) ::UnityEngine::UIElements::UIR::BaseElementBuilder* elementBuilder;

  /// @brief Field k_ConvertEntriesToCommandsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ConvertEntriesToCommandsMarker, put = setStaticF_k_ConvertEntriesToCommandsMarker)) ::Unity::Profiling::ProfilerMarker k_ConvertEntriesToCommandsMarker;

  /// @brief Field k_GenerateEntriesMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenerateEntriesMarker, put = setStaticF_k_GenerateEntriesMarker)) ::Unity::Profiling::ProfilerMarker k_GenerateEntriesMarker;

  /// @brief Field k_UpdateOpacityIdMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UpdateOpacityIdMarker, put = setStaticF_k_UpdateOpacityIdMarker)) ::Unity::Profiling::ProfilerMarker k_UpdateOpacityIdMarker;

  /// @brief Field m_ElementBuilder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ElementBuilder, put = __cordl_internal_set_m_ElementBuilder)) ::UnityEngine::UIElements::UIR::BaseElementBuilder* m_ElementBuilder;

  /// @brief Field m_EntryProcessingList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntryProcessingList,
                      put = __cordl_internal_set_m_EntryProcessingList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo>*
      m_EntryProcessingList;

  /// @brief Field m_MeshGenerationContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshGenerationContext, put = __cordl_internal_set_m_MeshGenerationContext)) Il2CppObject* m_MeshGenerationContext;

  /// @brief Field m_Processors, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Processors,
                      put = __cordl_internal_set_m_Processors)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* m_Processors;

  /// @brief Field m_RenderChain, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderChain, put = __cordl_internal_set_m_RenderChain)) ::UnityEngine::UIElements::UIR::RenderChain* m_RenderChain;

  __declspec(property(get = get_meshGenerationContext)) Il2CppObject* meshGenerationContext;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ConvertEntriesToCommands, addr 0x6b1c21c, size 0x2a0, virtual false, abstract: false, final false
  inline void ConvertEntriesToCommands(::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method DepthFirstOnVisualsChanged, addr 0x6b1edc0, size 0x504, virtual false, abstract: false, final false
  inline void DepthFirstOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, bool hierarchical, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method Dispose, addr 0x6b1b904, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6b1f4fc, size 0x3c, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DoUpdateOpacityId, addr 0x6b1f3f4, size 0xf8, virtual false, abstract: false, final false
  static inline void DoUpdateOpacityId(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::MeshHandle* mesh);

  static inline ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor* New_ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  /// @brief Method ProcessOnVisualsChanged, addr 0x6b1c1b4, size 0x44, virtual false, abstract: false, final false
  inline void ProcessOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ScheduleMeshGenerationJobs, addr 0x6b1c1f8, size 0x24, virtual false, abstract: false, final false
  inline void ScheduleMeshGenerationJobs();

  /// @brief Method UpdateOpacityId, addr 0x6b1f2c4, size 0xf8, virtual false, abstract: false, final false
  static inline void UpdateOpacityId(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  /// @brief Method UpdateWorldFlipsWinding, addr 0x6b1f3bc, size 0x38, virtual false, abstract: false, final false
  static inline void UpdateWorldFlipsWinding(::UnityEngine::UIElements::VisualElement* ve);

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::BaseElementBuilder* const& __cordl_internal_get_m_ElementBuilder() const;

  constexpr ::UnityEngine::UIElements::UIR::BaseElementBuilder*& __cordl_internal_get_m_ElementBuilder();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo>* const& __cordl_internal_get_m_EntryProcessingList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo>*& __cordl_internal_get_m_EntryProcessingList();

  constexpr Il2CppObject* const& __cordl_internal_get_m_MeshGenerationContext() const;

  constexpr Il2CppObject*& __cordl_internal_get_m_MeshGenerationContext();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* const& __cordl_internal_get_m_Processors() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>*& __cordl_internal_get_m_Processors();

  constexpr ::UnityEngine::UIElements::UIR::RenderChain* const& __cordl_internal_get_m_RenderChain() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChain*& __cordl_internal_get_m_RenderChain();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_ElementBuilder(::UnityEngine::UIElements::UIR::BaseElementBuilder* value);

  constexpr void __cordl_internal_set_m_EntryProcessingList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo>* value);

  constexpr void __cordl_internal_set_m_MeshGenerationContext(Il2CppObject* value);

  constexpr void __cordl_internal_set_m_Processors(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* value);

  constexpr void __cordl_internal_set_m_RenderChain(::UnityEngine::UIElements::UIR::RenderChain* value);

  /// @brief Method .ctor, addr 0x6b1b45c, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ConvertEntriesToCommandsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateEntriesMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateOpacityIdMarker();

  /// @brief Method get_disposed, addr 0x6b1f4ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_elementBuilder, addr 0x6b1edb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* get_elementBuilder();

  /// @brief Method get_meshGenerationContext, addr 0x6b1edb8, size 0x8, virtual false, abstract: false, final false
  inline Il2CppObject* get_meshGenerationContext();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_k_ConvertEntriesToCommandsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateEntriesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateOpacityIdMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_disposed, addr 0x6b1f4f4, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChain_VisualChangesProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderChain_VisualChangesProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderChain_VisualChangesProcessor(RenderChain_VisualChangesProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderChain_VisualChangesProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderChain_VisualChangesProcessor(RenderChain_VisualChangesProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5331 };

  /// @brief Field m_RenderChain, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChain* ___m_RenderChain;

  /// @brief Field m_MeshGenerationContext, offset: 0x18, size: 0x8, def value: None
  Il2CppObject* ___m_MeshGenerationContext;

  /// @brief Field m_ElementBuilder, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BaseElementBuilder* ___m_ElementBuilder;

  /// @brief Field m_EntryProcessingList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo>* ___m_EntryProcessingList;

  /// @brief Field m_Processors, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* ___m_Processors;

  /// @brief Field <disposed>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor, ___m_RenderChain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor, ___m_MeshGenerationContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor, ___m_ElementBuilder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor, ___m_EntryProcessingList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor, ___m_Processors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor, ____disposed_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderChain/<>c
class CORDL_TYPE RenderChain___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIR::RenderChain___c* __9;

  /// @brief Field <>9__31_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_0, put = setStaticF___9__31_0)) ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* __9__31_0;

  /// @brief Field <>9__31_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_1, put = setStaticF___9__31_1)) ::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* __9__31_1;

  /// @brief Field <>9__31_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_2, put = setStaticF___9__31_2)) ::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* __9__31_2;

  /// @brief Field <>9__31_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_3, put = setStaticF___9__31_3)) ::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* __9__31_3;

  static inline ::UnityEngine::UIElements::UIR::RenderChain___c* New_ctor();

  /// @brief Method <.ctor>b__31_0, addr 0x6b20a84, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* __ctor_b__31_0();

  /// @brief Method <.ctor>b__31_1, addr 0x6b20afc, size 0x30, virtual false, abstract: false, final false
  inline void __ctor_b__31_1(::UnityEngine::UIElements::UIR::RenderChainCommand* r);

  /// @brief Method <.ctor>b__31_2, addr 0x6b20b2c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* __ctor_b__31_2();

  /// @brief Method <.ctor>b__31_3, addr 0x6b20be0, size 0x14, virtual false, abstract: false, final false
  inline void __ctor_b__31_3(::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* e);

  /// @brief Method .ctor, addr 0x6b20a80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::RenderChain___c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* getStaticF___9__31_0();

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* getStaticF___9__31_1();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* getStaticF___9__31_2();

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* getStaticF___9__31_3();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::RenderChain___c* value);

  static inline void setStaticF___9__31_0(::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

  static inline void setStaticF___9__31_1(::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

  static inline void setStaticF___9__31_2(::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* value);

  static inline void setStaticF___9__31_3(::System::Action_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChain___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderChain___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderChain___c(RenderChain___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderChain___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderChain___c(RenderChain___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5332 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChain___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.UIR.ChainBuilderStats, UnityEngine.UIElements.UIR.RenderChain::DepthOrderedDirtyTracking
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderChain
class CORDL_TYPE RenderChain : public ::System::Object {
public:
  // Declarations
  using DepthOrderedDirtyTracking = ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking;

  using VisualChangesProcessor = ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor;

  using __c = ::UnityEngine::UIElements::UIR::RenderChain___c;

  /// @brief Field <atlas>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__atlas_k__BackingField, put = __cordl_internal_set__atlas_k__BackingField)) ::UnityEngine::UIElements::AtlasBase* _atlas_k__BackingField;

  /// @brief Field <device>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__device_k__BackingField, put = __cordl_internal_set__device_k__BackingField)) ::UnityEngine::UIElements::UIR::UIRenderDevice* _device_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <drawInCameras>k__BackingField, offset 0x151, size 0x1
  __declspec(property(get = __cordl_internal_get__drawInCameras_k__BackingField, put = __cordl_internal_set__drawInCameras_k__BackingField)) bool _drawInCameras_k__BackingField;

  /// @brief Field <drawStats>k__BackingField, offset 0x150, size 0x1
  __declspec(property(get = __cordl_internal_get__drawStats_k__BackingField, put = __cordl_internal_set__drawStats_k__BackingField)) bool _drawStats_k__BackingField;

  /// @brief Field <forceGammaRendering>k__BackingField, offset 0x153, size 0x1
  __declspec(property(get = __cordl_internal_get__forceGammaRendering_k__BackingField, put = __cordl_internal_set__forceGammaRendering_k__BackingField)) bool _forceGammaRendering_k__BackingField;

  /// @brief Field <isFlat>k__BackingField, offset 0x152, size 0x1
  __declspec(property(get = __cordl_internal_get__isFlat_k__BackingField, put = __cordl_internal_set__isFlat_k__BackingField)) bool _isFlat_k__BackingField;

  /// @brief Field <jobManager>k__BackingField, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__jobManager_k__BackingField,
                      put = __cordl_internal_set__jobManager_k__BackingField)) ::UnityEngine::UIElements::UIR::JobManager* _jobManager_k__BackingField;

  /// @brief Field <meshGenerationNodeManager>k__BackingField, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__meshGenerationNodeManager_k__BackingField,
                      put = __cordl_internal_set__meshGenerationNodeManager_k__BackingField)) ::UnityEngine::UIElements::MeshGenerationNodeManager* _meshGenerationNodeManager_k__BackingField;

  /// @brief Field <meshWriteDataPool>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__meshWriteDataPool_k__BackingField,
                      put = __cordl_internal_set__meshWriteDataPool_k__BackingField)) ::UnityEngine::UIElements::UIR::MeshWriteDataPool* _meshWriteDataPool_k__BackingField;

  /// @brief Field <opacityIdAccelerator>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__opacityIdAccelerator_k__BackingField,
                      put = __cordl_internal_set__opacityIdAccelerator_k__BackingField)) ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* _opacityIdAccelerator_k__BackingField;

  /// @brief Field <panel>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__panel_k__BackingField, put = __cordl_internal_set__panel_k__BackingField)) ::UnityEngine::UIElements::BaseVisualElementPanel* _panel_k__BackingField;

  /// @brief Field <tempMeshAllocator>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__tempMeshAllocator_k__BackingField,
                      put = __cordl_internal_set__tempMeshAllocator_k__BackingField)) ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* _tempMeshAllocator_k__BackingField;

  /// @brief Field <vectorImageManager>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__vectorImageManager_k__BackingField,
                      put = __cordl_internal_set__vectorImageManager_k__BackingField)) ::UnityEngine::UIElements::UIR::VectorImageManager* _vectorImageManager_k__BackingField;

  __declspec(property(get = get_atlas, put = set_atlas)) ::UnityEngine::UIElements::AtlasBase* atlas;

  __declspec(property(get = get_device, put = set_device)) ::UnityEngine::UIElements::UIR::UIRenderDevice* device;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_drawInCameras)) bool drawInCameras;

  __declspec(property(get = get_drawStats, put = set_drawStats)) bool drawStats;

  __declspec(property(get = get_elementBuilder)) ::UnityEngine::UIElements::UIR::BaseElementBuilder* elementBuilder;

  __declspec(property(get = get_entryPool)) ::UnityEngine::UIElements::UIR::EntryPool* entryPool;

  /// @brief Field entryRecorder, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_entryRecorder, put = __cordl_internal_set_entryRecorder)) ::UnityEngine::UIElements::UIR::EntryRecorder* entryRecorder;

  __declspec(property(get = get_forceGammaRendering)) bool forceGammaRendering;

  __declspec(property(get = get_isFlat)) bool isFlat;

  __declspec(property(get = get_jobManager, put = set_jobManager)) ::UnityEngine::UIElements::UIR::JobManager* jobManager;

  /// @brief Field k_MarkerClipProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerClipProcessing, put = setStaticF_k_MarkerClipProcessing)) ::Unity::Profiling::ProfilerMarker k_MarkerClipProcessing;

  /// @brief Field k_MarkerColorsProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerColorsProcessing, put = setStaticF_k_MarkerColorsProcessing)) ::Unity::Profiling::ProfilerMarker k_MarkerColorsProcessing;

  /// @brief Field k_MarkerOpacityProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerOpacityProcessing, put = setStaticF_k_MarkerOpacityProcessing)) ::Unity::Profiling::ProfilerMarker k_MarkerOpacityProcessing;

  /// @brief Field k_MarkerProcess, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerProcess, put = setStaticF_k_MarkerProcess)) ::Unity::Profiling::ProfilerMarker k_MarkerProcess;

  /// @brief Field k_MarkerSerialize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerSerialize, put = setStaticF_k_MarkerSerialize)) ::Unity::Profiling::ProfilerMarker k_MarkerSerialize;

  /// @brief Field k_MarkerTransformProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerTransformProcessing, put = setStaticF_k_MarkerTransformProcessing)) ::Unity::Profiling::ProfilerMarker k_MarkerTransformProcessing;

  /// @brief Field k_MarkerVisualsProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerVisualsProcessing, put = setStaticF_k_MarkerVisualsProcessing)) ::Unity::Profiling::ProfilerMarker k_MarkerVisualsProcessing;

  /// @brief Field m_BlockDirtyRegistration, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BlockDirtyRegistration, put = __cordl_internal_set_m_BlockDirtyRegistration)) bool m_BlockDirtyRegistration;

  /// @brief Field m_CommandPool, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandPool,
                      put = __cordl_internal_set_m_CommandPool)) ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* m_CommandPool;

  /// @brief Field m_DefaultMat, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultMat, put = __cordl_internal_set_m_DefaultMat)) ::UnityW<::UnityEngine::Material> m_DefaultMat;

  /// @brief Field m_DirtyTracker, offset 0x18, size 0x28
  __declspec(property(get = __cordl_internal_get_m_DirtyTracker, put = __cordl_internal_set_m_DirtyTracker)) ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking m_DirtyTracker;

  /// @brief Field m_ExtraData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtraData,
                      put = __cordl_internal_set_m_ExtraData)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*,
                                                                                                            ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* m_ExtraData;

  /// @brief Field m_ExtraDataPool, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtraDataPool,
                      put = __cordl_internal_set_m_ExtraDataPool)) ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* m_ExtraDataPool;

  /// @brief Field m_FirstCommand, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstCommand, put = __cordl_internal_set_m_FirstCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* m_FirstCommand;

  /// @brief Field m_MeshGenerationDeferrer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshGenerationDeferrer,
                      put = __cordl_internal_set_m_MeshGenerationDeferrer)) ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* m_MeshGenerationDeferrer;

  /// @brief Field m_MeshHandleNodePool, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshHandleNodePool,
                      put = __cordl_internal_set_m_MeshHandleNodePool)) ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* m_MeshHandleNodePool;

  /// @brief Field m_Stats, offset 0x84, size 0x5c
  __declspec(property(get = __cordl_internal_get_m_Stats, put = __cordl_internal_set_m_Stats)) ::UnityEngine::UIElements::UIR::ChainBuilderStats m_Stats;

  /// @brief Field m_StatsElementsAdded, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StatsElementsAdded, put = __cordl_internal_set_m_StatsElementsAdded)) uint32_t m_StatsElementsAdded;

  /// @brief Field m_StatsElementsRemoved, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StatsElementsRemoved, put = __cordl_internal_set_m_StatsElementsRemoved)) uint32_t m_StatsElementsRemoved;

  /// @brief Field m_TexturePool, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TexturePool,
                      put = __cordl_internal_set_m_TexturePool)) ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* m_TexturePool;

  /// @brief Field m_TextureRegistry, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureRegistry, put = __cordl_internal_set_m_TextureRegistry)) ::UnityEngine::UIElements::TextureRegistry* m_TextureRegistry;

  /// @brief Field m_VisualChangesProcessor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualChangesProcessor,
                      put = __cordl_internal_set_m_VisualChangesProcessor)) ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor* m_VisualChangesProcessor;

  __declspec(property(get = get_meshGenerationDeferrer)) ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* meshGenerationDeferrer;

  __declspec(property(get = get_meshGenerationNodeManager, put = set_meshGenerationNodeManager)) ::UnityEngine::UIElements::MeshGenerationNodeManager* meshGenerationNodeManager;

  __declspec(property(get = get_meshWriteDataPool)) ::UnityEngine::UIElements::UIR::MeshWriteDataPool* meshWriteDataPool;

  __declspec(property(get = get_opacityIdAccelerator, put = set_opacityIdAccelerator)) ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* opacityIdAccelerator;

  __declspec(property(get = get_panel, put = set_panel)) ::UnityEngine::UIElements::BaseVisualElementPanel* panel;

  /// @brief Field s_SharedEntryPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SharedEntryPool, put = setStaticF_s_SharedEntryPool)) ::UnityEngine::UIElements::UIR::EntryPool* s_SharedEntryPool;

  /// @brief Field shaderInfoAllocator, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_shaderInfoAllocator, put = __cordl_internal_set_shaderInfoAllocator)) ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* shaderInfoAllocator;

  __declspec(property(get = get_statsByRef)) ::UnityEngine::UIElements::UIR::ChainBuilderStats statsByRef;

  __declspec(property(get = get_tempMeshAllocator, put = set_tempMeshAllocator)) ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* tempMeshAllocator;

  __declspec(property(get = get_vectorImageManager, put = set_vectorImageManager)) ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AllocCommand, addr 0x6b1e4f8, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* AllocCommand();

  /// @brief Method ChildWillBeRemoved, addr 0x6b1e434, size 0xc4, virtual false, abstract: false, final false
  inline void ChildWillBeRemoved(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Dispose, addr 0x6b1b5cc, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6b1b634, size 0x194, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawStats, addr 0x6b1cbb8, size 0xb84, virtual false, abstract: false, final false
  inline void DrawStats();

  /// @brief Method EnsureFitsDepth, addr 0x6b1e304, size 0x8, virtual false, abstract: false, final false
  inline void EnsureFitsDepth(int32_t depth);

  /// @brief Method FreeCommand, addr 0x6b1e54c, size 0x80, virtual false, abstract: false, final false
  inline void FreeCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method FreeExtraData, addr 0x6b1e7dc, size 0x114, virtual false, abstract: false, final false
  inline void FreeExtraData(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method FreeExtraMeshes, addr 0x6b1e9bc, size 0xf4, virtual false, abstract: false, final false
  inline void FreeExtraMeshes(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetFirstElementInPanel, addr 0x6b1b7c8, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* GetFirstElementInPanel(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetOrAddExtraData, addr 0x6b1e6dc, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* GetOrAddExtraData(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method InsertExtraMesh, addr 0x6b1e8f0, size 0xcc, virtual false, abstract: false, final false
  inline void InsertExtraMesh(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::MeshHandle* mesh);

  /// @brief Method InsertTexture, addr 0x6b1eab0, size 0xc8, virtual false, abstract: false, final false
  inline void InsertTexture(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Texture* src, ::UnityEngine::UIElements::TextureId id, bool isAtlas);

  static inline ::UnityEngine::UIElements::UIR::RenderChain* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  static inline ::UnityEngine::UIElements::UIR::RenderChain* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                                      ::UnityEngine::UIElements::AtlasBase* atlas, ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageManager);

  /// @brief Method OnRenderCommandAdded, addr 0x6b1e5cc, size 0x20, virtual false, abstract: false, final false
  inline void OnRenderCommandAdded(::UnityEngine::UIElements::UIR::RenderChainCommand* command);

  /// @brief Method OnRenderCommandsRemoved, addr 0x6b1e5ec, size 0x28, virtual false, abstract: false, final false
  inline void OnRenderCommandsRemoved(::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand);

  /// @brief Method ProcessChanges, addr 0x6b1b974, size 0x6a8, virtual false, abstract: false, final false
  inline void ProcessChanges();

  /// @brief Method Render, addr 0x6b1c81c, size 0x39c, virtual false, abstract: false, final false
  inline void Render();

  /// @brief Method RepaintTexturedElements, addr 0x6b1e614, size 0xc8, virtual false, abstract: false, final false
  inline void RepaintTexturedElements();

  /// @brief Method ResetTextures, addr 0x6b1b7e8, size 0x11c, virtual false, abstract: false, final false
  inline void ResetTextures(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method SerializeCommandsForCameras, addr 0x6b1c4bc, size 0x360, virtual false, abstract: false, final false
  inline void SerializeCommandsForCameras();

  /// @brief Method UIEOnChildAdded, addr 0x6b1d73c, size 0x1ac, virtual false, abstract: false, final false
  inline void UIEOnChildAdded(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnChildRemoving, addr 0x6b1dc34, size 0x10c, virtual false, abstract: false, final false
  inline void UIEOnChildRemoving(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnChildrenReordered, addr 0x6b1da8c, size 0x1a8, virtual false, abstract: false, final false
  inline void UIEOnChildrenReordered(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnClippingChanged, addr 0x6b1d8e8, size 0x8c, virtual false, abstract: false, final false
  inline void UIEOnClippingChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  /// @brief Method UIEOnColorChanged, addr 0x6b1dfd8, size 0x80, virtual false, abstract: false, final false
  inline void UIEOnColorChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnDisableRenderingChanged, addr 0x6b1e168, size 0x80, virtual false, abstract: false, final false
  inline void UIEOnDisableRenderingChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnOpacityChanged, addr 0x6b1d974, size 0x8c, virtual false, abstract: false, final false
  inline void UIEOnOpacityChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  /// @brief Method UIEOnOpacityIdChanged, addr 0x6b1e0e8, size 0x80, virtual false, abstract: false, final false
  inline void UIEOnOpacityIdChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnRenderHintsChanged, addr 0x6b1dd40, size 0xc4, virtual false, abstract: false, final false
  inline void UIEOnRenderHintsChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnTransformOrSizeChanged, addr 0x6b1e058, size 0x90, virtual false, abstract: false, final false
  inline void UIEOnTransformOrSizeChanged(::UnityEngine::UIElements::VisualElement* ve, bool transformChanged, bool clipRectSizeChanged);

  /// @brief Method UIEOnVisualsChanged, addr 0x6b1da00, size 0x8c, virtual false, abstract: false, final false
  inline void UIEOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  constexpr ::UnityEngine::UIElements::AtlasBase* const& __cordl_internal_get__atlas_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::AtlasBase*& __cordl_internal_get__atlas_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice* const& __cordl_internal_get__device_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice*& __cordl_internal_get__device_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr bool const& __cordl_internal_get__drawInCameras_k__BackingField() const;

  constexpr bool& __cordl_internal_get__drawInCameras_k__BackingField();

  constexpr bool const& __cordl_internal_get__drawStats_k__BackingField() const;

  constexpr bool& __cordl_internal_get__drawStats_k__BackingField();

  constexpr bool const& __cordl_internal_get__forceGammaRendering_k__BackingField() const;

  constexpr bool& __cordl_internal_get__forceGammaRendering_k__BackingField();

  constexpr bool const& __cordl_internal_get__isFlat_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isFlat_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::JobManager* const& __cordl_internal_get__jobManager_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::JobManager*& __cordl_internal_get__jobManager_k__BackingField();

  constexpr ::UnityEngine::UIElements::MeshGenerationNodeManager* const& __cordl_internal_get__meshGenerationNodeManager_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::MeshGenerationNodeManager*& __cordl_internal_get__meshGenerationNodeManager_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::MeshWriteDataPool* const& __cordl_internal_get__meshWriteDataPool_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshWriteDataPool*& __cordl_internal_get__meshWriteDataPool_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* const& __cordl_internal_get__opacityIdAccelerator_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::OpacityIdAccelerator*& __cordl_internal_get__opacityIdAccelerator_k__BackingField();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get__panel_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get__panel_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* const& __cordl_internal_get__tempMeshAllocator_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*& __cordl_internal_get__tempMeshAllocator_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::VectorImageManager* const& __cordl_internal_get__vectorImageManager_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::VectorImageManager*& __cordl_internal_get__vectorImageManager_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::EntryRecorder* const& __cordl_internal_get_entryRecorder() const;

  constexpr ::UnityEngine::UIElements::UIR::EntryRecorder*& __cordl_internal_get_entryRecorder();

  constexpr bool const& __cordl_internal_get_m_BlockDirtyRegistration() const;

  constexpr bool& __cordl_internal_get_m_BlockDirtyRegistration();

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* const& __cordl_internal_get_m_CommandPool() const;

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*& __cordl_internal_get_m_CommandPool();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DefaultMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DefaultMat();

  constexpr ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking const& __cordl_internal_get_m_DirtyTracker() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking& __cordl_internal_get_m_DirtyTracker();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* const&
  __cordl_internal_get_m_ExtraData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*& __cordl_internal_get_m_ExtraData();

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* const& __cordl_internal_get_m_ExtraDataPool() const;

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>*& __cordl_internal_get_m_ExtraDataPool();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_m_FirstCommand() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_m_FirstCommand();

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* const& __cordl_internal_get_m_MeshGenerationDeferrer() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*& __cordl_internal_get_m_MeshGenerationDeferrer();

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* const& __cordl_internal_get_m_MeshHandleNodePool() const;

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& __cordl_internal_get_m_MeshHandleNodePool();

  constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats const& __cordl_internal_get_m_Stats() const;

  constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats& __cordl_internal_get_m_Stats();

  constexpr uint32_t const& __cordl_internal_get_m_StatsElementsAdded() const;

  constexpr uint32_t& __cordl_internal_get_m_StatsElementsAdded();

  constexpr uint32_t const& __cordl_internal_get_m_StatsElementsRemoved() const;

  constexpr uint32_t& __cordl_internal_get_m_StatsElementsRemoved();

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* const& __cordl_internal_get_m_TexturePool() const;

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>*& __cordl_internal_get_m_TexturePool();

  constexpr ::UnityEngine::UIElements::TextureRegistry* const& __cordl_internal_get_m_TextureRegistry() const;

  constexpr ::UnityEngine::UIElements::TextureRegistry*& __cordl_internal_get_m_TextureRegistry();

  constexpr ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor* const& __cordl_internal_get_m_VisualChangesProcessor() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*& __cordl_internal_get_m_VisualChangesProcessor();

  constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* const& __cordl_internal_get_shaderInfoAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*& __cordl_internal_get_shaderInfoAllocator();

  constexpr void __cordl_internal_set__atlas_k__BackingField(::UnityEngine::UIElements::AtlasBase* value);

  constexpr void __cordl_internal_set__device_k__BackingField(::UnityEngine::UIElements::UIR::UIRenderDevice* value);

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__drawInCameras_k__BackingField(bool value);

  constexpr void __cordl_internal_set__drawStats_k__BackingField(bool value);

  constexpr void __cordl_internal_set__forceGammaRendering_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isFlat_k__BackingField(bool value);

  constexpr void __cordl_internal_set__jobManager_k__BackingField(::UnityEngine::UIElements::UIR::JobManager* value);

  constexpr void __cordl_internal_set__meshGenerationNodeManager_k__BackingField(::UnityEngine::UIElements::MeshGenerationNodeManager* value);

  constexpr void __cordl_internal_set__meshWriteDataPool_k__BackingField(::UnityEngine::UIElements::UIR::MeshWriteDataPool* value);

  constexpr void __cordl_internal_set__opacityIdAccelerator_k__BackingField(::UnityEngine::UIElements::UIR::OpacityIdAccelerator* value);

  constexpr void __cordl_internal_set__panel_k__BackingField(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set__tempMeshAllocator_k__BackingField(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* value);

  constexpr void __cordl_internal_set__vectorImageManager_k__BackingField(::UnityEngine::UIElements::UIR::VectorImageManager* value);

  constexpr void __cordl_internal_set_entryRecorder(::UnityEngine::UIElements::UIR::EntryRecorder* value);

  constexpr void __cordl_internal_set_m_BlockDirtyRegistration(bool value);

  constexpr void __cordl_internal_set_m_CommandPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

  constexpr void __cordl_internal_set_m_DefaultMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DirtyTracker(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking value);

  constexpr void
  __cordl_internal_set_m_ExtraData(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* value);

  constexpr void __cordl_internal_set_m_ExtraDataPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* value);

  constexpr void __cordl_internal_set_m_FirstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_m_MeshGenerationDeferrer(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* value);

  constexpr void __cordl_internal_set_m_MeshHandleNodePool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);

  constexpr void __cordl_internal_set_m_Stats(::UnityEngine::UIElements::UIR::ChainBuilderStats value);

  constexpr void __cordl_internal_set_m_StatsElementsAdded(uint32_t value);

  constexpr void __cordl_internal_set_m_StatsElementsRemoved(uint32_t value);

  constexpr void __cordl_internal_set_m_TexturePool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* value);

  constexpr void __cordl_internal_set_m_TextureRegistry(::UnityEngine::UIElements::TextureRegistry* value);

  constexpr void __cordl_internal_set_m_VisualChangesProcessor(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor* value);

  constexpr void __cordl_internal_set_shaderInfoAllocator(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* value);

  /// @brief Method .ctor, addr 0x6b1a93c, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method .ctor, addr 0x6b1aab4, size 0x934, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel, ::UnityEngine::UIElements::UIR::UIRenderDevice* device, ::UnityEngine::UIElements::AtlasBase* atlas,
                    ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageManager);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerClipProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerColorsProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerOpacityProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerProcess();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerSerialize();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerTransformProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerVisualsProcessing();

  static inline ::UnityEngine::UIElements::UIR::EntryPool* getStaticF_s_SharedEntryPool();

  /// @brief Method get_atlas, addr 0x6b1e220, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::AtlasBase* get_atlas();

  /// @brief Method get_device, addr 0x6b1e1f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::UIRenderDevice* get_device();

  /// @brief Method get_disposed, addr 0x6b1b5bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_drawInCameras, addr 0x6b1e2ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawInCameras();

  /// @brief Method get_drawStats, addr 0x6b1e2dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawStats();

  /// @brief Method get_elementBuilder, addr 0x6b1e208, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* get_elementBuilder();

  /// @brief Method get_entryPool, addr 0x6b1e258, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::EntryPool* get_entryPool();

  /// @brief Method get_forceGammaRendering, addr 0x6b1e2fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_forceGammaRendering();

  /// @brief Method get_isFlat, addr 0x6b1e2f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFlat();

  /// @brief Method get_jobManager, addr 0x6b1e2cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::JobManager* get_jobManager();

  /// @brief Method get_meshGenerationDeferrer, addr 0x6b1e2b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* get_meshGenerationDeferrer();

  /// @brief Method get_meshGenerationNodeManager, addr 0x6b1e2bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshGenerationNodeManager* get_meshGenerationNodeManager();

  /// @brief Method get_meshWriteDataPool, addr 0x6b1e250, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool* get_meshWriteDataPool();

  /// @brief Method get_opacityIdAccelerator, addr 0x6b1a92c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* get_opacityIdAccelerator();

  /// @brief Method get_panel, addr 0x6b1e1e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseVisualElementPanel* get_panel();

  /// @brief Method get_statsByRef, addr 0x6b1b96c, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> get_statsByRef();

  /// @brief Method get_tempMeshAllocator, addr 0x6b1e240, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* get_tempMeshAllocator();

  /// @brief Method get_vectorImageManager, addr 0x6b1e230, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::VectorImageManager* get_vectorImageManager();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_k_MarkerClipProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerColorsProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerOpacityProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerProcess(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerSerialize(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerTransformProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerVisualsProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_SharedEntryPool(::UnityEngine::UIElements::UIR::EntryPool* value);

  /// @brief Method set_atlas, addr 0x6b1e228, size 0x8, virtual false, abstract: false, final false
  inline void set_atlas(::UnityEngine::UIElements::AtlasBase* value);

  /// @brief Method set_device, addr 0x6b1e200, size 0x8, virtual false, abstract: false, final false
  inline void set_device(::UnityEngine::UIElements::UIR::UIRenderDevice* value);

  /// @brief Method set_disposed, addr 0x6b1b5c4, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method set_drawStats, addr 0x6b1e2e4, size 0x8, virtual false, abstract: false, final false
  inline void set_drawStats(bool value);

  /// @brief Method set_jobManager, addr 0x6b1e2d4, size 0x8, virtual false, abstract: false, final false
  inline void set_jobManager(::UnityEngine::UIElements::UIR::JobManager* value);

  /// @brief Method set_meshGenerationNodeManager, addr 0x6b1e2c4, size 0x8, virtual false, abstract: false, final false
  inline void set_meshGenerationNodeManager(::UnityEngine::UIElements::MeshGenerationNodeManager* value);

  /// @brief Method set_opacityIdAccelerator, addr 0x6b1a934, size 0x8, virtual false, abstract: false, final false
  inline void set_opacityIdAccelerator(::UnityEngine::UIElements::UIR::OpacityIdAccelerator* value);

  /// @brief Method set_panel, addr 0x6b1e1f0, size 0x8, virtual false, abstract: false, final false
  inline void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  /// @brief Method set_tempMeshAllocator, addr 0x6b1e248, size 0x8, virtual false, abstract: false, final false
  inline void set_tempMeshAllocator(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* value);

  /// @brief Method set_vectorImageManager, addr 0x6b1e238, size 0x8, virtual false, abstract: false, final false
  inline void set_vectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderChain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderChain(RenderChain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderChain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderChain(RenderChain const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5333 };

  /// @brief Field m_FirstCommand, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___m_FirstCommand;

  /// @brief Field m_DirtyTracker, offset: 0x18, size: 0x28, def value: None
  ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking ___m_DirtyTracker;

  /// @brief Field m_VisualChangesProcessor, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor* ___m_VisualChangesProcessor;

  /// @brief Field m_CommandPool, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* ___m_CommandPool;

  /// @brief Field m_ExtraDataPool, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* ___m_ExtraDataPool;

  /// @brief Field m_MeshHandleNodePool, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* ___m_MeshHandleNodePool;

  /// @brief Field m_TexturePool, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* ___m_TexturePool;

  /// @brief Field m_ExtraData, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*>* ___m_ExtraData;

  /// @brief Field m_MeshGenerationDeferrer, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* ___m_MeshGenerationDeferrer;

  /// @brief Field m_DefaultMat, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DefaultMat;

  /// @brief Field m_BlockDirtyRegistration, offset: 0x80, size: 0x1, def value: None
  bool ___m_BlockDirtyRegistration;

  /// @brief Field m_Stats, offset: 0x84, size: 0x5c, def value: None
  ::UnityEngine::UIElements::UIR::ChainBuilderStats ___m_Stats;

  /// @brief Field m_StatsElementsAdded, offset: 0xe0, size: 0x4, def value: None
  uint32_t ___m_StatsElementsAdded;

  /// @brief Field m_StatsElementsRemoved, offset: 0xe4, size: 0x4, def value: None
  uint32_t ___m_StatsElementsRemoved;

  /// @brief Field m_TextureRegistry, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextureRegistry* ___m_TextureRegistry;

  /// @brief Field <opacityIdAccelerator>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* ____opacityIdAccelerator_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset: 0xf8, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field <panel>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ____panel_k__BackingField;

  /// @brief Field <device>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::UIRenderDevice* ____device_k__BackingField;

  /// @brief Field <atlas>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UIElements::AtlasBase* ____atlas_k__BackingField;

  /// @brief Field <vectorImageManager>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::VectorImageManager* ____vectorImageManager_k__BackingField;

  /// @brief Field <tempMeshAllocator>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* ____tempMeshAllocator_k__BackingField;

  /// @brief Field <meshWriteDataPool>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshWriteDataPool* ____meshWriteDataPool_k__BackingField;

  /// @brief Field entryRecorder, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::EntryRecorder* ___entryRecorder;

  /// @brief Field <meshGenerationNodeManager>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshGenerationNodeManager* ____meshGenerationNodeManager_k__BackingField;

  /// @brief Field <jobManager>k__BackingField, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::JobManager* ____jobManager_k__BackingField;

  /// @brief Field shaderInfoAllocator, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* ___shaderInfoAllocator;

  /// @brief Field <drawStats>k__BackingField, offset: 0x150, size: 0x1, def value: None
  bool ____drawStats_k__BackingField;

  /// @brief Field <drawInCameras>k__BackingField, offset: 0x151, size: 0x1, def value: None
  bool ____drawInCameras_k__BackingField;

  /// @brief Field <isFlat>k__BackingField, offset: 0x152, size: 0x1, def value: None
  bool ____isFlat_k__BackingField;

  /// @brief Field <forceGammaRendering>k__BackingField, offset: 0x153, size: 0x1, def value: None
  bool ____forceGammaRendering_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_FirstCommand) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DirtyTracker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_VisualChangesProcessor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_CommandPool) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_ExtraDataPool) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_MeshHandleNodePool) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_TexturePool) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_ExtraData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_MeshGenerationDeferrer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DefaultMat) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_BlockDirtyRegistration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_Stats) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_StatsElementsAdded) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_StatsElementsRemoved) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_TextureRegistry) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____opacityIdAccelerator_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____disposed_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____panel_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____device_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____atlas_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____vectorImageManager_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____tempMeshAllocator_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____meshWriteDataPool_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___entryRecorder) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____meshGenerationNodeManager_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____jobManager_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___shaderInfoAllocator) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____drawStats_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____drawInCameras_k__BackingField) == 0x151, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____isFlat_k__BackingField) == 0x152, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____forceGammaRendering_k__BackingField) == 0x153, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChain, 0x158>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_VisualsProcessingType, "UnityEngine.UIElements.UIR",
                       "RenderChain/VisualChangesProcessor/VisualsProcessingType");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::RenderChain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChain*, "UnityEngine.UIElements.UIR", "RenderChain");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChain_VisualChangesProcessor*, "UnityEngine.UIElements.UIR", "RenderChain/VisualChangesProcessor");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::RenderChain___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChain___c*, "UnityEngine.UIElements.UIR", "RenderChain/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, "UnityEngine.UIElements.UIR", "RenderChain/DepthOrderedDirtyTracking");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderChain_EntryProcessingInfo, "UnityEngine.UIElements.UIR", "RenderChain/VisualChangesProcessor/EntryProcessingInfo");
