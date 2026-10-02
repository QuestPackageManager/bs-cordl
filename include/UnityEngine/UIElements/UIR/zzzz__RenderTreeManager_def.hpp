#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureSlotCount_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTreeManager)
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
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
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
class ExtraRenderData;
}
namespace UnityEngine::UIElements::UIR {
struct GraphicEntry;
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
struct RenderDataDirtyTypeClasses;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
namespace UnityEngine::UIElements::UIR {
class RenderData;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeCompositor;
}
namespace UnityEngine::UIElements::UIR {
struct RenderTreeManager_ElementInsertionData;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager_VisualChangesProcessor;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager___c;
}
namespace UnityEngine::UIElements::UIR {
class RenderTree;
}
namespace UnityEngine::UIElements::UIR {
class TempMeshAllocatorImpl;
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
struct VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo;
}
namespace UnityEngine::UIElements::UIR {
struct VisualChangesProcessor_RenderTreeManager_VisualsProcessingType;
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
struct TextureSlotCount;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct VisualChangesProcessor_RenderTreeManager_VisualsProcessingType;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager_VisualChangesProcessor;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager___c;
}
namespace UnityEngine::UIElements::UIR {
struct RenderTreeManager_ElementInsertionData;
}
namespace UnityEngine::UIElements::UIR {
struct VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType);
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderTreeManager*);
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*);
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderTreeManager___c*);
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData);
MARK_VAL_T(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType, "UnityEngine.UIElements.UIR",
                    "RenderTreeManager/VisualChangesProcessor/VisualsProcessingType");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTreeManager*, "UnityEngine.UIElements.UIR", "RenderTreeManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*, "UnityEngine.UIElements.UIR", "RenderTreeManager/VisualChangesProcessor");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTreeManager___c*, "UnityEngine.UIElements.UIR", "RenderTreeManager/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData, "UnityEngine.UIElements.UIR", "RenderTreeManager/ElementInsertionData");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo, "UnityEngine.UIElements.UIR",
                    "RenderTreeManager/VisualChangesProcessor/EntryProcessingInfo");
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderTreeManager/ElementInsertionData
struct CORDL_TYPE RenderTreeManager_ElementInsertionData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTreeManager_ElementInsertionData();

  // Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "canceled", ty: "bool", modifiers:
  // "", def_value: None, comment: None }]
  constexpr RenderTreeManager_ElementInsertionData(::UnityEngine::UIElements::VisualElement* element, bool canceled) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5453 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field element, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* element;

  /// @brief Field canceled, offset: 0x8, size: 0x1, def value: None
  bool canceled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData, element) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData, canceled) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderTreeManager/VisualChangesProcessor/VisualsProcessingType
struct CORDL_TYPE VisualChangesProcessor_RenderTreeManager_VisualsProcessingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisualChangesProcessor_RenderTreeManager_VisualsProcessingType_Unwrapped
  enum struct __VisualChangesProcessor_RenderTreeManager_VisualsProcessingType_Unwrapped : int32_t {
    __E_Head = static_cast<int32_t>(0x0),
    __E_Tail = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisualChangesProcessor_RenderTreeManager_VisualsProcessingType_Unwrapped() const noexcept {
    return static_cast<__VisualChangesProcessor_RenderTreeManager_VisualsProcessingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualChangesProcessor_RenderTreeManager_VisualsProcessingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr VisualChangesProcessor_RenderTreeManager_VisualsProcessingType(int32_t value__) noexcept;

  /// @brief Field Head value: I32(0)
  static ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType const Head;

  /// @brief Field Tail value: I32(1)
  static ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType const Tail;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5454 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.UIElements.UIR.RenderTreeManager::VisualChangesProcessor::VisualsProcessingType
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderTreeManager/VisualChangesProcessor/EntryProcessingInfo
struct CORDL_TYPE VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo();

  // Ctor Parameters [CppParam { name: "renderData", ty: "::UnityEngine::UIElements::UIR::RenderData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty:
  // "::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType", modifiers: "", def_value: None, comment: None }, CppParam { name: "rootEntry", ty:
  // "::UnityEngine::UIElements::UIR::Entry*", modifiers: "", def_value: None, comment: None }]
  constexpr VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo(::UnityEngine::UIElements::UIR::RenderData* renderData,
                                                                         ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType type,
                                                                         ::UnityEngine::UIElements::UIR::Entry* rootEntry) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5455 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field renderData, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderData* renderData;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType type;

  /// @brief Field rootEntry, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Entry* rootEntry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo, renderData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo, rootEntry) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderTreeManager/VisualChangesProcessor
class CORDL_TYPE RenderTreeManager_VisualChangesProcessor : public ::System::Object {
public:
  // Declarations
  using EntryProcessingInfo = ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo;

  using VisualsProcessingType = ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType;

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
  __declspec(property(get = __cordl_internal_get_m_EntryProcessingList, put = __cordl_internal_set_m_EntryProcessingList)) ::System::Collections::Generic::List_1<
      ::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo>* m_EntryProcessingList;

  /// @brief Field m_MeshGenerationContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshGenerationContext, put = __cordl_internal_set_m_MeshGenerationContext)) Il2CppObject* m_MeshGenerationContext;

  /// @brief Field m_Processors, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Processors,
                      put = __cordl_internal_set_m_Processors)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* m_Processors;

  /// @brief Field m_RenderTreeManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderTreeManager, put = __cordl_internal_set_m_RenderTreeManager)) ::UnityEngine::UIElements::UIR::RenderTreeManager* m_RenderTreeManager;

  __declspec(property(get = get_meshGenerationContext)) Il2CppObject* meshGenerationContext;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ConvertEntriesToCommands, addr 0x7183c34, size 0x2b4, virtual false, abstract: false, final false
  inline void ConvertEntriesToCommands(::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method DepthFirstOnVisualsChanged, addr 0x718361c, size 0x4b8, virtual false, abstract: false, final false
  inline void DepthFirstOnVisualsChanged(::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID, bool hierarchical,
                                         ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method Dispose, addr 0x7184314, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x718437c, size 0x3c, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DoUpdateOpacityId, addr 0x7183ee8, size 0xf0, virtual false, abstract: false, final false
  static inline void DoUpdateOpacityId(::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                       ::UnityEngine::UIElements::UIR::MeshHandle* mesh);

  static inline ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* New_ctor(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager);

  /// @brief Method ProcessOnVisualsChanged, addr 0x71835d8, size 0x44, virtual false, abstract: false, final false
  inline void ProcessOnVisualsChanged(::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ScheduleMeshGenerationJobs, addr 0x71835b4, size 0x24, virtual false, abstract: false, final false
  inline void ScheduleMeshGenerationJobs();

  /// @brief Method UpdateOpacityId, addr 0x7183ad4, size 0xfc, virtual false, abstract: false, final false
  static inline void UpdateOpacityId(::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager);

  /// @brief Method UpdateWorldFlipsWinding, addr 0x7183bd0, size 0x2c, virtual false, abstract: false, final false
  static inline void UpdateWorldFlipsWinding(::UnityEngine::UIElements::UIR::RenderData* renderData);

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::BaseElementBuilder* const& __cordl_internal_get_m_ElementBuilder() const;

  constexpr ::UnityEngine::UIElements::UIR::BaseElementBuilder*& __cordl_internal_get_m_ElementBuilder();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo>* const&
  __cordl_internal_get_m_EntryProcessingList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo>*& __cordl_internal_get_m_EntryProcessingList();

  constexpr Il2CppObject* const& __cordl_internal_get_m_MeshGenerationContext() const;

  constexpr Il2CppObject*& __cordl_internal_get_m_MeshGenerationContext();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* const& __cordl_internal_get_m_Processors() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>*& __cordl_internal_get_m_Processors();

  constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager* const& __cordl_internal_get_m_RenderTreeManager() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager*& __cordl_internal_get_m_RenderTreeManager();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_ElementBuilder(::UnityEngine::UIElements::UIR::BaseElementBuilder* value);

  constexpr void
  __cordl_internal_set_m_EntryProcessingList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo>* value);

  constexpr void __cordl_internal_set_m_MeshGenerationContext(Il2CppObject* value);

  constexpr void __cordl_internal_set_m_Processors(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* value);

  constexpr void __cordl_internal_set_m_RenderTreeManager(::UnityEngine::UIElements::UIR::RenderTreeManager* value);

  /// @brief Method .ctor, addr 0x7183454, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ConvertEntriesToCommandsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateEntriesMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateOpacityIdMarker();

  /// [CompilerGenerated]
  /// @brief Method get_disposed, addr 0x7184304, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_elementBuilder, addr 0x7183444, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* get_elementBuilder();

  /// @brief Method get_meshGenerationContext, addr 0x718344c, size 0x8, virtual false, abstract: false, final false
  inline Il2CppObject* get_meshGenerationContext();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_k_ConvertEntriesToCommandsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateEntriesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateOpacityIdMarker(::Unity::Profiling::ProfilerMarker value);

  /// [CompilerGenerated]
  /// @brief Method set_disposed, addr 0x718430c, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTreeManager_VisualChangesProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTreeManager_VisualChangesProcessor", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTreeManager_VisualChangesProcessor(RenderTreeManager_VisualChangesProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTreeManager_VisualChangesProcessor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTreeManager_VisualChangesProcessor(RenderTreeManager_VisualChangesProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5456 };

  /// @brief Field m_RenderTreeManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderTreeManager* ___m_RenderTreeManager;

  /// @brief Field m_MeshGenerationContext, offset: 0x18, size: 0x8, def value: None
  Il2CppObject* ___m_MeshGenerationContext;

  /// @brief Field m_ElementBuilder, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BaseElementBuilder* ___m_ElementBuilder;

  /// @brief Field m_EntryProcessingList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo>* ___m_EntryProcessingList;

  /// @brief Field m_Processors, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* ___m_Processors;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <disposed>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor, ___m_RenderTreeManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor, ___m_MeshGenerationContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor, ___m_ElementBuilder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor, ___m_EntryProcessingList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor, ___m_Processors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor, ____disposed_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor) == 0x40, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderTreeManager/<>c
class CORDL_TYPE RenderTreeManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIR::RenderTreeManager___c* __9;

  /// @brief Field <>9__40_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__40_0, put = setStaticF___9__40_0)) ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* __9__40_0;

  /// @brief Field <>9__40_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__40_1, put = setStaticF___9__40_1)) ::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* __9__40_1;

  /// @brief Field <>9__40_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__40_2, put = setStaticF___9__40_2)) ::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>* __9__40_2;

  /// @brief Field <>9__40_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__40_3, put = setStaticF___9__40_3)) ::System::Func_1<::UnityEngine::UIElements::UIR::RenderData*>* __9__40_3;

  /// @brief Field <>9__40_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__40_4, put = setStaticF___9__40_4)) ::System::Func_1<::UnityEngine::UIElements::UIR::RenderTree*>* __9__40_4;

  static inline ::UnityEngine::UIElements::UIR::RenderTreeManager___c* New_ctor();

  /// @brief Method <.ctor>b__40_0, addr 0x718450c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* __ctor_b__40_0();

  /// @brief Method <.ctor>b__40_1, addr 0x71845a4, size 0x14, virtual false, abstract: false, final false
  inline void __ctor_b__40_1(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method <.ctor>b__40_2, addr 0x718463c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::ExtraRenderData* __ctor_b__40_2();

  /// @brief Method <.ctor>b__40_3, addr 0x71846b4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderData* __ctor_b__40_3();

  /// @brief Method <.ctor>b__40_4, addr 0x71846f8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderTree* __ctor_b__40_4();

  /// @brief Method .ctor, addr 0x7184508, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::RenderTreeManager___c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* getStaticF___9__40_0();

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* getStaticF___9__40_1();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>* getStaticF___9__40_2();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderData*>* getStaticF___9__40_3();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderTree*>* getStaticF___9__40_4();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::RenderTreeManager___c* value);

  static inline void setStaticF___9__40_0(::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

  static inline void setStaticF___9__40_1(::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

  static inline void setStaticF___9__40_2(::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>* value);

  static inline void setStaticF___9__40_3(::System::Func_1<::UnityEngine::UIElements::UIR::RenderData*>* value);

  static inline void setStaticF___9__40_4(::System::Func_1<::UnityEngine::UIElements::UIR::RenderTree*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTreeManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTreeManager___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTreeManager___c(RenderTreeManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTreeManager___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTreeManager___c(RenderTreeManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTreeManager___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.TextureSlotCount, UnityEngine.UIElements.UIR.ChainBuilderStats
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderTreeManager
class CORDL_TYPE RenderTreeManager : public ::System::Object {
public:
  // Declarations
  using ElementInsertionData = ::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData;

  using VisualChangesProcessor = ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor;

  using __c = ::UnityEngine::UIElements::UIR::RenderTreeManager___c;

  /// @brief Field <atlas>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__atlas_k__BackingField, put = __cordl_internal_set__atlas_k__BackingField)) ::UnityEngine::UIElements::AtlasBase* _atlas_k__BackingField;

  /// @brief Field <blockDirtyRegistration>k__BackingField, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get__blockDirtyRegistration_k__BackingField,
                      put = __cordl_internal_set__blockDirtyRegistration_k__BackingField)) bool _blockDirtyRegistration_k__BackingField;

  /// @brief Field <device>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__device_k__BackingField, put = __cordl_internal_set__device_k__BackingField)) ::UnityEngine::UIElements::UIR::UIRenderDevice* _device_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0xf0, size 0x1
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

  /// @brief Field <opacityIdAccelerator>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__opacityIdAccelerator_k__BackingField,
                      put = __cordl_internal_set__opacityIdAccelerator_k__BackingField)) ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* _opacityIdAccelerator_k__BackingField;

  /// @brief Field <panel>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__panel_k__BackingField, put = __cordl_internal_set__panel_k__BackingField)) ::UnityEngine::UIElements::BaseVisualElementPanel* _panel_k__BackingField;

  /// @brief Field <tempMeshAllocator>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__tempMeshAllocator_k__BackingField,
                      put = __cordl_internal_set__tempMeshAllocator_k__BackingField)) ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* _tempMeshAllocator_k__BackingField;

  /// @brief Field <textureSlotCount>k__BackingField, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get__textureSlotCount_k__BackingField,
                      put = __cordl_internal_set__textureSlotCount_k__BackingField)) ::UnityEngine::UIElements::TextureSlotCount _textureSlotCount_k__BackingField;

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

  /// @brief Field k_MarkerProcess, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerProcess, put = setStaticF_k_MarkerProcess)) ::Unity::Profiling::ProfilerMarker k_MarkerProcess;

  /// @brief Field k_MarkerSerialize, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MarkerSerialize, put = setStaticF_k_MarkerSerialize)) ::Unity::Profiling::ProfilerMarker k_MarkerSerialize;

  /// @brief Field m_BlockDirtyRegistration, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BlockDirtyRegistration, put = __cordl_internal_set_m_BlockDirtyRegistration)) bool m_BlockDirtyRegistration;

  /// @brief Field m_CommandPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandPool,
                      put = __cordl_internal_set_m_CommandPool)) ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* m_CommandPool;

  /// @brief Field m_Compositor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Compositor, put = __cordl_internal_set_m_Compositor)) ::UnityEngine::UIElements::UIR::RenderTreeCompositor* m_Compositor;

  /// @brief Field m_DefaultMat, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultMat, put = __cordl_internal_set_m_DefaultMat)) ::UnityW<::UnityEngine::Material> m_DefaultMat;

  /// @brief Field m_ExtraData, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ExtraData,
      put = __cordl_internal_set_m_ExtraData)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::ExtraRenderData*>* m_ExtraData;

  /// @brief Field m_ExtraDataPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtraDataPool,
                      put = __cordl_internal_set_m_ExtraDataPool)) ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>* m_ExtraDataPool;

  /// @brief Field m_GraphicEntryPool, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GraphicEntryPool,
                      put = __cordl_internal_set_m_GraphicEntryPool)) ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::GraphicEntry>* m_GraphicEntryPool;

  /// @brief Field m_InsertionList, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InsertionList,
                      put = __cordl_internal_set_m_InsertionList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData>* m_InsertionList;

  /// @brief Field m_MeshGenerationDeferrer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshGenerationDeferrer,
                      put = __cordl_internal_set_m_MeshGenerationDeferrer)) ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* m_MeshGenerationDeferrer;

  /// @brief Field m_MeshHandleNodePool, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshHandleNodePool,
                      put = __cordl_internal_set_m_MeshHandleNodePool)) ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* m_MeshHandleNodePool;

  /// @brief Field m_RenderDataPool, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderDataPool,
                      put = __cordl_internal_set_m_RenderDataPool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderData*>* m_RenderDataPool;

  /// @brief Field m_RenderTreePool, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderTreePool,
                      put = __cordl_internal_set_m_RenderTreePool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTree*>* m_RenderTreePool;

  /// @brief Field m_RootRenderTree, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RootRenderTree, put = __cordl_internal_set_m_RootRenderTree)) ::UnityEngine::UIElements::UIR::RenderTree* m_RootRenderTree;

  /// @brief Field m_Stats, offset 0x64, size 0x5c
  __declspec(property(get = __cordl_internal_get_m_Stats, put = __cordl_internal_set_m_Stats)) ::UnityEngine::UIElements::UIR::ChainBuilderStats m_Stats;

  /// @brief Field m_StatsElementsAdded, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StatsElementsAdded, put = __cordl_internal_set_m_StatsElementsAdded)) uint32_t m_StatsElementsAdded;

  /// @brief Field m_StatsElementsRemoved, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StatsElementsRemoved, put = __cordl_internal_set_m_StatsElementsRemoved)) uint32_t m_StatsElementsRemoved;

  /// @brief Field m_TextureRegistry, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureRegistry, put = __cordl_internal_set_m_TextureRegistry)) ::UnityEngine::UIElements::TextureRegistry* m_TextureRegistry;

  /// @brief Field m_VisualChangesProcessor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualChangesProcessor,
                      put = __cordl_internal_set_m_VisualChangesProcessor)) ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* m_VisualChangesProcessor;

  __declspec(property(get = get_meshGenerationDeferrer)) ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* meshGenerationDeferrer;

  __declspec(property(get = get_meshGenerationNodeManager, put = set_meshGenerationNodeManager)) ::UnityEngine::UIElements::MeshGenerationNodeManager* meshGenerationNodeManager;

  __declspec(property(get = get_meshWriteDataPool)) ::UnityEngine::UIElements::UIR::MeshWriteDataPool* meshWriteDataPool;

  __declspec(property(get = get_opacityIdAccelerator, put = set_opacityIdAccelerator)) ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* opacityIdAccelerator;

  __declspec(property(get = get_panel, put = set_panel)) ::UnityEngine::UIElements::BaseVisualElementPanel* panel;

  __declspec(property(put = set_rootRenderTree)) ::UnityEngine::UIElements::UIR::RenderTree* rootRenderTree;

  /// @brief Field s_SharedEntryPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SharedEntryPool, put = setStaticF_s_SharedEntryPool)) ::UnityEngine::UIElements::UIR::EntryPool* s_SharedEntryPool;

  /// @brief Field shaderInfoAllocator, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_shaderInfoAllocator, put = __cordl_internal_set_shaderInfoAllocator)) ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* shaderInfoAllocator;

  __declspec(property(get = get_statsByRef)) ::UnityEngine::UIElements::UIR::ChainBuilderStats statsByRef;

  __declspec(property(get = get_tempMeshAllocator, put = set_tempMeshAllocator)) ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* tempMeshAllocator;

  __declspec(property(get = get_textureRegistry)) ::UnityEngine::UIElements::TextureRegistry* textureRegistry;

  __declspec(property(get = get_textureSlotCount, put = set_textureSlotCount)) ::UnityEngine::UIElements::TextureSlotCount textureSlotCount;

  __declspec(property(get = get_vectorImageManager, put = set_vectorImageManager)) ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageManager;

  __declspec(property(get = get_visualChangesProcessor)) ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* visualChangesProcessor;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AllocCommand, addr 0x7182aac, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* AllocCommand();

  /// @brief Method CancelInsertion, addr 0x7179190, size 0x118, virtual false, abstract: false, final false
  inline void CancelInsertion(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method DepthFirstProcessChanges, addr 0x7181010, size 0x4c, virtual false, abstract: false, final false
  inline void DepthFirstProcessChanges(::UnityEngine::UIElements::UIR::RenderTree* renderTree);

  /// @brief Method DepthFirstRepaintTextured, addr 0x7182bec, size 0x64, virtual false, abstract: false, final false
  inline void DepthFirstRepaintTextured(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method DepthFirstRepaintTextured, addr 0x7182b9c, size 0x50, virtual false, abstract: false, final false
  inline void DepthFirstRepaintTextured(::UnityEngine::UIElements::UIR::RenderTree* renderTree);

  /// @brief Method Dispose, addr 0x7180c54, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x7180cbc, size 0x2c4, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawStats, addr 0x7181820, size 0xbe0, virtual false, abstract: false, final false
  inline void DrawStats();

  /// @brief Method FreeCommand, addr 0x7182b00, size 0x8c, virtual false, abstract: false, final false
  inline void FreeCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method FreeExtraData, addr 0x717ace8, size 0x114, virtual false, abstract: false, final false
  inline void FreeExtraData(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method FreeExtraMeshes, addr 0x717abf4, size 0xf4, virtual false, abstract: false, final false
  inline void FreeExtraMeshes(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method GetOrAddExtraData, addr 0x717ba08, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::ExtraRenderData* GetOrAddExtraData(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method GetPooledRenderData, addr 0x71792a8, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderData* GetPooledRenderData();

  /// @brief Method GetPooledRenderTree, addr 0x7179310, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderTree* GetPooledRenderTree(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                         ::UnityEngine::UIElements::UIR::RenderData* rootRenderData);

  /// @brief Method InsertExtraMesh, addr 0x7182c50, size 0xcc, virtual false, abstract: false, final false
  inline void InsertExtraMesh(::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::MeshHandle* mesh);

  /// @brief Method InsertTexture, addr 0x7182d1c, size 0xc8, virtual false, abstract: false, final false
  inline void InsertTexture(::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::Texture* src, ::UnityEngine::UIElements::TextureId id, bool isAtlas);

  /// @brief Method InsertVectorImage, addr 0x7182de4, size 0x13c, virtual false, abstract: false, final false
  inline void InsertVectorImage(::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::VectorImage* vi);

  static inline ::UnityEngine::UIElements::UIR::RenderTreeManager* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method ProcessChanges, addr 0x718105c, size 0x260, virtual false, abstract: false, final false
  inline void ProcessChanges();

  /// @brief Method ProcessChildAdded, addr 0x71812bc, size 0x1e4, virtual false, abstract: false, final false
  inline void ProcessChildAdded(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method RegisterDirty, addr 0x7182860, size 0xb8, virtual false, abstract: false, final false
  inline void RegisterDirty(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes,
                            ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyClasses);

  /// @brief Method RenderNestedTrees, addr 0x71814a0, size 0x18, virtual false, abstract: false, final false
  inline void RenderNestedTrees();

  /// @brief Method RenderRootTree, addr 0x7181648, size 0x1d8, virtual false, abstract: false, final false
  inline void RenderRootTree();

  /// @brief Method RenderSingleTree, addr 0x717f4b8, size 0x670, virtual false, abstract: false, final false
  inline void RenderSingleTree(::UnityEngine::UIElements::UIR::RenderTree* renderTree, ::UnityEngine::RenderTexture* nestedTreeRT, ::UnityEngine::RectInt nestedTreeViewport,
                               ::UnityEngine::Rect bounds);

  /// @brief Method RepaintTexturedElements, addr 0x7182b8c, size 0x10, virtual false, abstract: false, final false
  inline void RepaintTexturedElements();

  /// @brief Method ResetGraphicEntries, addr 0x717aaa8, size 0x14c, virtual false, abstract: false, final false
  inline void ResetGraphicEntries(::UnityEngine::UIElements::UIR::RenderData* renderData);

  /// @brief Method ReturnPoolRenderData, addr 0x717adfc, size 0x9c, virtual false, abstract: false, final false
  inline void ReturnPoolRenderData(::UnityEngine::UIElements::UIR::RenderData* data);

  /// @brief Method ReturnPoolRenderTree, addr 0x717aa20, size 0x88, virtual false, abstract: false, final false
  inline void ReturnPoolRenderTree(::UnityEngine::UIElements::UIR::RenderTree* tree);

  /// @brief Method ReverseDepthFirstDisposeRenderTrees, addr 0x7180f80, size 0x88, virtual false, abstract: false, final false
  static inline void ReverseDepthFirstDisposeRenderTrees(::UnityEngine::UIElements::UIR::RenderTree* renderTree);

  /// @brief Method SerializeRootTreeCommands, addr 0x71814b8, size 0x190, virtual false, abstract: false, final false
  inline void SerializeRootTreeCommands();

  /// @brief Method UIEOnChildAdded, addr 0x7182400, size 0xd4, virtual false, abstract: false, final false
  inline void UIEOnChildAdded(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnChildRemoving, addr 0x718268c, size 0x108, virtual false, abstract: false, final false
  inline void UIEOnChildRemoving(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnChildrenReordered, addr 0x71824f4, size 0x198, virtual false, abstract: false, final false
  inline void UIEOnChildrenReordered(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnClippingChanged, addr 0x7179538, size 0x28, virtual false, abstract: false, final false
  inline void UIEOnClippingChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  /// @brief Method UIEOnColorChanged, addr 0x7182918, size 0x10, virtual false, abstract: false, final false
  inline void UIEOnColorChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnDisableRenderingChanged, addr 0x7182928, size 0x80, virtual false, abstract: false, final false
  inline void UIEOnDisableRenderingChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnOpacityChanged, addr 0x7179560, size 0x28, virtual false, abstract: false, final false
  inline void UIEOnOpacityChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  /// @brief Method UIEOnRenderHintsChanged, addr 0x7182794, size 0xcc, virtual false, abstract: false, final false
  inline void UIEOnRenderHintsChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnTransformOrSizeChanged, addr 0x71824d4, size 0x20, virtual false, abstract: false, final false
  inline void UIEOnTransformOrSizeChanged(::UnityEngine::UIElements::VisualElement* ve, bool transformChanged, bool clipRectSizeChanged);

  /// @brief Method UIEOnVisualsChanged, addr 0x7179588, size 0x28, virtual false, abstract: false, final false
  inline void UIEOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  constexpr ::UnityEngine::UIElements::AtlasBase* const& __cordl_internal_get__atlas_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::AtlasBase*& __cordl_internal_get__atlas_k__BackingField();

  constexpr bool const& __cordl_internal_get__blockDirtyRegistration_k__BackingField() const;

  constexpr bool& __cordl_internal_get__blockDirtyRegistration_k__BackingField();

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

  constexpr ::UnityEngine::UIElements::TextureSlotCount const& __cordl_internal_get__textureSlotCount_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::TextureSlotCount& __cordl_internal_get__textureSlotCount_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::VectorImageManager* const& __cordl_internal_get__vectorImageManager_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::VectorImageManager*& __cordl_internal_get__vectorImageManager_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::EntryRecorder* const& __cordl_internal_get_entryRecorder() const;

  constexpr ::UnityEngine::UIElements::UIR::EntryRecorder*& __cordl_internal_get_entryRecorder();

  constexpr bool const& __cordl_internal_get_m_BlockDirtyRegistration() const;

  constexpr bool& __cordl_internal_get_m_BlockDirtyRegistration();

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* const& __cordl_internal_get_m_CommandPool() const;

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*& __cordl_internal_get_m_CommandPool();

  constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor* const& __cordl_internal_get_m_Compositor() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor*& __cordl_internal_get_m_Compositor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DefaultMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DefaultMat();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::ExtraRenderData*>* const&
  __cordl_internal_get_m_ExtraData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::ExtraRenderData*>*& __cordl_internal_get_m_ExtraData();

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>* const& __cordl_internal_get_m_ExtraDataPool() const;

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>*& __cordl_internal_get_m_ExtraDataPool();

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::GraphicEntry>* const& __cordl_internal_get_m_GraphicEntryPool() const;

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::GraphicEntry>*& __cordl_internal_get_m_GraphicEntryPool();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData>* const& __cordl_internal_get_m_InsertionList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData>*& __cordl_internal_get_m_InsertionList();

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* const& __cordl_internal_get_m_MeshGenerationDeferrer() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*& __cordl_internal_get_m_MeshGenerationDeferrer();

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* const& __cordl_internal_get_m_MeshHandleNodePool() const;

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& __cordl_internal_get_m_MeshHandleNodePool();

  constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderData*>* const& __cordl_internal_get_m_RenderDataPool() const;

  constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderData*>*& __cordl_internal_get_m_RenderDataPool();

  constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTree*>* const& __cordl_internal_get_m_RenderTreePool() const;

  constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTree*>*& __cordl_internal_get_m_RenderTreePool();

  constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& __cordl_internal_get_m_RootRenderTree() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderTree*& __cordl_internal_get_m_RootRenderTree();

  constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats const& __cordl_internal_get_m_Stats() const;

  constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats& __cordl_internal_get_m_Stats();

  constexpr uint32_t const& __cordl_internal_get_m_StatsElementsAdded() const;

  constexpr uint32_t& __cordl_internal_get_m_StatsElementsAdded();

  constexpr uint32_t const& __cordl_internal_get_m_StatsElementsRemoved() const;

  constexpr uint32_t& __cordl_internal_get_m_StatsElementsRemoved();

  constexpr ::UnityEngine::UIElements::TextureRegistry* const& __cordl_internal_get_m_TextureRegistry() const;

  constexpr ::UnityEngine::UIElements::TextureRegistry*& __cordl_internal_get_m_TextureRegistry();

  constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* const& __cordl_internal_get_m_VisualChangesProcessor() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*& __cordl_internal_get_m_VisualChangesProcessor();

  constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* const& __cordl_internal_get_shaderInfoAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*& __cordl_internal_get_shaderInfoAllocator();

  constexpr void __cordl_internal_set__atlas_k__BackingField(::UnityEngine::UIElements::AtlasBase* value);

  constexpr void __cordl_internal_set__blockDirtyRegistration_k__BackingField(bool value);

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

  constexpr void __cordl_internal_set__textureSlotCount_k__BackingField(::UnityEngine::UIElements::TextureSlotCount value);

  constexpr void __cordl_internal_set__vectorImageManager_k__BackingField(::UnityEngine::UIElements::UIR::VectorImageManager* value);

  constexpr void __cordl_internal_set_entryRecorder(::UnityEngine::UIElements::UIR::EntryRecorder* value);

  constexpr void __cordl_internal_set_m_BlockDirtyRegistration(bool value);

  constexpr void __cordl_internal_set_m_CommandPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

  constexpr void __cordl_internal_set_m_Compositor(::UnityEngine::UIElements::UIR::RenderTreeCompositor* value);

  constexpr void __cordl_internal_set_m_DefaultMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_ExtraData(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::ExtraRenderData*>* value);

  constexpr void __cordl_internal_set_m_ExtraDataPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>* value);

  constexpr void __cordl_internal_set_m_GraphicEntryPool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::GraphicEntry>* value);

  constexpr void __cordl_internal_set_m_InsertionList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData>* value);

  constexpr void __cordl_internal_set_m_MeshGenerationDeferrer(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* value);

  constexpr void __cordl_internal_set_m_MeshHandleNodePool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);

  constexpr void __cordl_internal_set_m_RenderDataPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderData*>* value);

  constexpr void __cordl_internal_set_m_RenderTreePool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTree*>* value);

  constexpr void __cordl_internal_set_m_RootRenderTree(::UnityEngine::UIElements::UIR::RenderTree* value);

  constexpr void __cordl_internal_set_m_Stats(::UnityEngine::UIElements::UIR::ChainBuilderStats value);

  constexpr void __cordl_internal_set_m_StatsElementsAdded(uint32_t value);

  constexpr void __cordl_internal_set_m_StatsElementsRemoved(uint32_t value);

  constexpr void __cordl_internal_set_m_TextureRegistry(::UnityEngine::UIElements::TextureRegistry* value);

  constexpr void __cordl_internal_set_m_VisualChangesProcessor(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* value);

  constexpr void __cordl_internal_set_shaderInfoAllocator(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* value);

  /// @brief Method .ctor, addr 0x718011c, size 0xb28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerProcess();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerSerialize();

  static inline ::UnityEngine::UIElements::UIR::EntryPool* getStaticF_s_SharedEntryPool();

  /// [CompilerGenerated]
  /// @brief Method get_atlas, addr 0x71829c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::AtlasBase* get_atlas();

  /// [CompilerGenerated]
  /// @brief Method get_device, addr 0x71829b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::UIRenderDevice* get_device();

  /// [CompilerGenerated]
  /// @brief Method get_disposed, addr 0x7180c44, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// [CompilerGenerated]
  /// @brief Method get_drawInCameras, addr 0x7182a94, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawInCameras();

  /// [CompilerGenerated]
  /// @brief Method get_drawStats, addr 0x7182a84, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawStats();

  /// @brief Method get_elementBuilder, addr 0x717bb08, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* get_elementBuilder();

  /// @brief Method get_entryPool, addr 0x7182a00, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::EntryPool* get_entryPool();

  /// [CompilerGenerated]
  /// @brief Method get_forceGammaRendering, addr 0x7182aa4, size 0x8, virtual false, abstract: false, final false
  inline bool get_forceGammaRendering();

  /// [CompilerGenerated]
  /// @brief Method get_isFlat, addr 0x7182a9c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFlat();

  /// [CompilerGenerated]
  /// @brief Method get_jobManager, addr 0x7182a74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::JobManager* get_jobManager();

  /// @brief Method get_meshGenerationDeferrer, addr 0x7182a5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* get_meshGenerationDeferrer();

  /// [CompilerGenerated]
  /// @brief Method get_meshGenerationNodeManager, addr 0x7182a64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshGenerationNodeManager* get_meshGenerationNodeManager();

  /// [CompilerGenerated]
  /// @brief Method get_meshWriteDataPool, addr 0x71829f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool* get_meshWriteDataPool();

  /// [CompilerGenerated]
  /// @brief Method get_opacityIdAccelerator, addr 0x71800fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* get_opacityIdAccelerator();

  /// [CompilerGenerated]
  /// @brief Method get_panel, addr 0x71829a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseVisualElementPanel* get_panel();

  /// @brief Method get_statsByRef, addr 0x7181008, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> get_statsByRef();

  /// [CompilerGenerated]
  /// @brief Method get_tempMeshAllocator, addr 0x71829e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* get_tempMeshAllocator();

  /// @brief Method get_textureRegistry, addr 0x71800ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextureRegistry* get_textureRegistry();

  /// [CompilerGenerated]
  /// @brief Method get_textureSlotCount, addr 0x718010c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextureSlotCount get_textureSlotCount();

  /// [CompilerGenerated]
  /// @brief Method get_vectorImageManager, addr 0x71829d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::VectorImageManager* get_vectorImageManager();

  /// @brief Method get_visualChangesProcessor, addr 0x71800f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* get_visualChangesProcessor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_k_MarkerProcess(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_MarkerSerialize(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_SharedEntryPool(::UnityEngine::UIElements::UIR::EntryPool* value);

  /// [CompilerGenerated]
  /// @brief Method set_atlas, addr 0x71829d0, size 0x8, virtual false, abstract: false, final false
  inline void set_atlas(::UnityEngine::UIElements::AtlasBase* value);

  /// [CompilerGenerated]
  /// @brief Method set_device, addr 0x71829c0, size 0x8, virtual false, abstract: false, final false
  inline void set_device(::UnityEngine::UIElements::UIR::UIRenderDevice* value);

  /// [CompilerGenerated]
  /// @brief Method set_disposed, addr 0x7180c4c, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_drawStats, addr 0x7182a8c, size 0x8, virtual false, abstract: false, final false
  inline void set_drawStats(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_jobManager, addr 0x7182a7c, size 0x8, virtual false, abstract: false, final false
  inline void set_jobManager(::UnityEngine::UIElements::UIR::JobManager* value);

  /// [CompilerGenerated]
  /// @brief Method set_meshGenerationNodeManager, addr 0x7182a6c, size 0x8, virtual false, abstract: false, final false
  inline void set_meshGenerationNodeManager(::UnityEngine::UIElements::MeshGenerationNodeManager* value);

  /// [CompilerGenerated]
  /// @brief Method set_opacityIdAccelerator, addr 0x7180104, size 0x8, virtual false, abstract: false, final false
  inline void set_opacityIdAccelerator(::UnityEngine::UIElements::UIR::OpacityIdAccelerator* value);

  /// [CompilerGenerated]
  /// @brief Method set_panel, addr 0x71829b0, size 0x8, virtual false, abstract: false, final false
  inline void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  /// @brief Method set_rootRenderTree, addr 0x7179390, size 0x78, virtual false, abstract: false, final false
  inline void set_rootRenderTree(::UnityEngine::UIElements::UIR::RenderTree* value);

  /// [CompilerGenerated]
  /// @brief Method set_tempMeshAllocator, addr 0x71829f0, size 0x8, virtual false, abstract: false, final false
  inline void set_tempMeshAllocator(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* value);

  /// [CompilerGenerated]
  /// @brief Method set_textureSlotCount, addr 0x7180114, size 0x8, virtual false, abstract: false, final false
  inline void set_textureSlotCount(::UnityEngine::UIElements::TextureSlotCount value);

  /// [CompilerGenerated]
  /// @brief Method set_vectorImageManager, addr 0x71829e0, size 0x8, virtual false, abstract: false, final false
  inline void set_vectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTreeManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTreeManager", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTreeManager(RenderTreeManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTreeManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTreeManager(RenderTreeManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5458 };

  /// @brief Field m_Compositor, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderTreeCompositor* ___m_Compositor;

  /// @brief Field m_VisualChangesProcessor, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* ___m_VisualChangesProcessor;

  /// @brief Field m_CommandPool, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* ___m_CommandPool;

  /// @brief Field m_ExtraDataPool, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>* ___m_ExtraDataPool;

  /// @brief Field m_MeshHandleNodePool, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* ___m_MeshHandleNodePool;

  /// @brief Field m_GraphicEntryPool, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::GraphicEntry>* ___m_GraphicEntryPool;

  /// @brief Field m_ExtraData, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::ExtraRenderData*>* ___m_ExtraData;

  /// @brief Field m_InsertionList, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderTreeManager_ElementInsertionData>* ___m_InsertionList;

  /// @brief Field m_MeshGenerationDeferrer, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* ___m_MeshGenerationDeferrer;

  /// @brief Field m_DefaultMat, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DefaultMat;

  /// @brief Field m_BlockDirtyRegistration, offset: 0x60, size: 0x1, def value: None
  bool ___m_BlockDirtyRegistration;

  /// @brief Field m_Stats, offset: 0x64, size: 0x5c, def value: None
  ::UnityEngine::UIElements::UIR::ChainBuilderStats ___m_Stats;

  /// @brief Field m_StatsElementsAdded, offset: 0xc0, size: 0x4, def value: None
  uint32_t ___m_StatsElementsAdded;

  /// @brief Field m_StatsElementsRemoved, offset: 0xc4, size: 0x4, def value: None
  uint32_t ___m_StatsElementsRemoved;

  /// @brief Field m_TextureRegistry, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextureRegistry* ___m_TextureRegistry;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <opacityIdAccelerator>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* ____opacityIdAccelerator_k__BackingField;

  /// @brief Field m_RenderDataPool, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderData*>* ___m_RenderDataPool;

  /// @brief Field m_RenderTreePool, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTree*>* ___m_RenderTreePool;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <blockDirtyRegistration>k__BackingField, offset: 0xe8, size: 0x1, def value: None
  bool ____blockDirtyRegistration_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <textureSlotCount>k__BackingField, offset: 0xec, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureSlotCount ____textureSlotCount_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <disposed>k__BackingField, offset: 0xf0, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field m_RootRenderTree, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderTree* ___m_RootRenderTree;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <panel>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ____panel_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <device>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::UIRenderDevice* ____device_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <atlas>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UIElements::AtlasBase* ____atlas_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <vectorImageManager>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::VectorImageManager* ____vectorImageManager_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <tempMeshAllocator>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* ____tempMeshAllocator_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <meshWriteDataPool>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshWriteDataPool* ____meshWriteDataPool_k__BackingField;

  /// @brief Field entryRecorder, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::EntryRecorder* ___entryRecorder;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <meshGenerationNodeManager>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshGenerationNodeManager* ____meshGenerationNodeManager_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <jobManager>k__BackingField, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::JobManager* ____jobManager_k__BackingField;

  /// @brief Field shaderInfoAllocator, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* ___shaderInfoAllocator;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <drawStats>k__BackingField, offset: 0x150, size: 0x1, def value: None
  bool ____drawStats_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <drawInCameras>k__BackingField, offset: 0x151, size: 0x1, def value: None
  bool ____drawInCameras_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <isFlat>k__BackingField, offset: 0x152, size: 0x1, def value: None
  bool ____isFlat_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <forceGammaRendering>k__BackingField, offset: 0x153, size: 0x1, def value: None
  bool ____forceGammaRendering_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_Compositor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_VisualChangesProcessor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_CommandPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_ExtraDataPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_MeshHandleNodePool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_GraphicEntryPool) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_ExtraData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_InsertionList) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_MeshGenerationDeferrer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_DefaultMat) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_BlockDirtyRegistration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_Stats) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_StatsElementsAdded) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_StatsElementsRemoved) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_TextureRegistry) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____opacityIdAccelerator_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_RenderDataPool) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_RenderTreePool) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____blockDirtyRegistration_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____textureSlotCount_k__BackingField) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____disposed_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___m_RootRenderTree) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____panel_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____device_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____atlas_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____vectorImageManager_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____tempMeshAllocator_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____meshWriteDataPool_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___entryRecorder) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____meshGenerationNodeManager_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____jobManager_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ___shaderInfoAllocator) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____drawStats_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____drawInCameras_k__BackingField) == 0x151, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____isFlat_k__BackingField) == 0x152, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeManager, ____forceGammaRendering_k__BackingField) == 0x153, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTreeManager) == 0x158, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
