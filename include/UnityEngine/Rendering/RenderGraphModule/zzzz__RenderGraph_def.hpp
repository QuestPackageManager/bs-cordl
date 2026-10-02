#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ExtendedFeatureFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphState_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderTextureUVOriginStrategy_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFence_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraph)
namespace GlobalNamespace {
class RenderGraphCompilationCache;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2_ValueCollection;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassAttachment;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
class NativePassCompiler;
}
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct ResourceUnversionedData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_BufferResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugData_RenderGraph_PassData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugData_RenderGraph_PassScriptInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_ResourceDataLists;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugData_RenderGraph_ResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename T> class DebugData_RenderGraph_ResourceLists_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_SerializableNativePassAttachment;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_TextureResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IComputeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRasterRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IUnsafeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ImportResourceParams;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class InternalRenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class PassData_DebugData_RenderGraph_NRPInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class PassData_DebugData_RenderGraph_ResourceIdLists;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RayTracingAccelerationStructureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphBuilders;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDefaultResources;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphParameters;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphResourceType;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphState;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_CompiledGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraph_CompiledPassInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraph_CompiledResourceInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugDataSerialization;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugExecutionItem;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_ICompiledGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_OnExecutionRegisteredDelegate;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_OnGraphRegisteredDelegate;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_ProfilingScopePassData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_RenderGraphExceptionMessages;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph___c;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderTargetInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderTextureUVOriginStrategy;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureUVOriginSelection;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListDesc;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class DebugUI_Panel;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
namespace UnityEngine::Rendering {
struct GizmoSubset;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct RendererListParams;
}
namespace UnityEngine::Rendering {
template <typename K, typename V> class SerializedDictionary_2;
}
namespace UnityEngine::Rendering {
struct ShadowDrawingSettings;
}
namespace UnityEngine::Rendering {
struct UISubset;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_BufferResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_ResourceDataLists;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename T> class DebugData_RenderGraph_ResourceLists_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_SerializableNativePassAttachment;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugData_RenderGraph_TextureResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class PassData_DebugData_RenderGraph_NRPInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class PassData_DebugData_RenderGraph_ResourceIdLists;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_CompiledGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugDataSerialization;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugExecutionItem;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_ICompiledGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_OnExecutionRegisteredDelegate;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_OnGraphRegisteredDelegate;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_ProfilingScopePassData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_RenderGraphExceptionMessages;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph___c;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugData_RenderGraph_PassData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugData_RenderGraph_PassScriptInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugData_RenderGraph_ResourceData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraph_CompiledPassInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraph_CompiledResourceInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceDataLists*);
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceLists_1);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugDataSerialization*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_RenderGraphExceptionMessages*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/BufferResourceData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceDataLists*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/ResourceDataLists");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceLists_1, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/ResourceLists`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment*, "UnityEngine.Rendering.RenderGraphModule",
                    "RenderGraph/DebugData/SerializableNativePassAttachment");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/TextureResourceData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo*, "UnityEngine.Rendering.RenderGraphModule",
                    "RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*, "UnityEngine.Rendering.RenderGraphModule",
                    "RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo/AttachmentInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/PassData/NRPInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists*, "UnityEngine.Rendering.RenderGraphModule",
                    "RenderGraph/DebugData/PassData/ResourceIdLists");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/CompiledGraph");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugDataSerialization*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugDataSerialization");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugExecutionItem");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/ICompiledGraph");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/OnExecutionRegisteredDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/OnGraphRegisteredDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/ProfilingScopePassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_RenderGraphExceptionMessages*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/RenderGraphExceptionMessages");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/PassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/PassScriptInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/DebugData/ResourceData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo, "UnityEngine.Rendering.RenderGraphModule",
                    "RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo/PassCompatibilityInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/CompiledPassInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraph/CompiledResourceInfo");
// Dependencies System.Object, UnityEngine.EntityId
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugExecutionItem
class CORDL_TYPE RenderGraph_DebugExecutionItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field <id>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField)) ::UnityEngine::EntityId _id_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField)) ::StringW _name_k__BackingField;

  __declspec(property(get = get_id)) ::UnityEngine::EntityId id;

  __declspec(property(get = get_name)) ::StringW name;

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem* New_ctor(::UnityEngine::EntityId id, ::StringW name);

  constexpr ::UnityEngine::EntityId const& __cordl_internal_get__id_k__BackingField() const;

  constexpr ::UnityEngine::EntityId& __cordl_internal_get__id_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr void __cordl_internal_set__id_k__BackingField(::UnityEngine::EntityId value);

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6bfdd18, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EntityId id, ::StringW name);

  /// [CompilerGenerated]
  /// @brief Method get_id, addr 0x6bff42c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EntityId get_id();

  /// [CompilerGenerated]
  /// @brief Method get_name, addr 0x6bff434, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_DebugExecutionItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_DebugExecutionItem", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_DebugExecutionItem(RenderGraph_DebugExecutionItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_DebugExecutionItem", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_DebugExecutionItem(RenderGraph_DebugExecutionItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9279 };

  /// [CompilerGenerated]
  /// @brief Field <id>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EntityId ____id_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem, ____id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem, ____name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// [DefaultMember("Item")]
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/ResourceLists`1<T>
class CORDL_TYPE DebugData_RenderGraph_ResourceLists_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) ::System::Collections::Generic::List_1<T>* Item[];

  /// @brief Field m_AccelerationStructures, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AccelerationStructures, put = __cordl_internal_set_m_AccelerationStructures)) ::System::Collections::Generic::List_1<T>* m_AccelerationStructures;

  /// @brief Field m_Buffers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Buffers, put = __cordl_internal_set_m_Buffers)) ::System::Collections::Generic::List_1<T>* m_Buffers;

  /// @brief Field m_Textures, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Textures, put = __cordl_internal_set_m_Textures)) ::System::Collections::Generic::List_1<T>* m_Textures;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceLists_1<T>* New_ctor();

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_m_AccelerationStructures() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_AccelerationStructures();

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_m_Buffers() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_Buffers();

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_m_Textures() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_Textures();

  constexpr void __cordl_internal_set_m_AccelerationStructures(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set_m_Buffers(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set_m_Textures(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Collections::Generic::List_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_ResourceLists_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_ResourceLists_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugData_RenderGraph_ResourceLists_1(DebugData_RenderGraph_ResourceLists_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_ResourceLists_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugData_RenderGraph_ResourceLists_1(DebugData_RenderGraph_ResourceLists_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9280 };

  /// [SerializeField]
  /// @brief Field m_Textures, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_Textures;

  /// [SerializeField]
  /// @brief Field m_Buffers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_Buffers;

  /// [SerializeField]
  /// @brief Field m_AccelerationStructures, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_AccelerationStructures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
// [DebuggerDisplay("ResourceDebug: {name} [{creationPassIndex}:{releasePassIndex}]")]
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/ResourceData
struct CORDL_TYPE DebugData_RenderGraph_ResourceData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_ResourceData();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "imported", ty: "bool", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "creationPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "releasePassIndex", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "consumerList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "producerList", ty:
  // "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "memoryless", ty: "bool", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "textureData", ty: "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "bufferData", ty: "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*", modifiers: "", def_value: None, comment: None }]
  constexpr DebugData_RenderGraph_ResourceData(::StringW name, bool imported, int32_t creationPassIndex, int32_t releasePassIndex, ::System::Collections::Generic::List_1<int32_t>* consumerList,
                                               ::System::Collections::Generic::List_1<int32_t>* producerList, bool memoryless,
                                               ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData* textureData,
                                               ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData* bufferData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9291 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field imported, offset: 0x8, size: 0x1, def value: None
  bool imported;

  /// @brief Field creationPassIndex, offset: 0xc, size: 0x4, def value: None
  int32_t creationPassIndex;

  /// @brief Field releasePassIndex, offset: 0x10, size: 0x4, def value: None
  int32_t releasePassIndex;

  /// @brief Field consumerList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* consumerList;

  /// @brief Field producerList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* producerList;

  /// @brief Field memoryless, offset: 0x28, size: 0x1, def value: None
  bool memoryless;

  /// [SerializeReference]
  /// @brief Field textureData, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData* textureData;

  /// [SerializeReference]
  /// @brief Field bufferData, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData* bufferData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, imported) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, creationPassIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, releasePassIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, consumerList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, producerList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, memoryless) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, textureData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData, bufferData) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraph::DebugData::ResourceData, UnityEngine.Rendering.RenderGraphModule.RenderGraph::DebugData::ResourceLists`1<T>
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/ResourceDataLists
class CORDL_TYPE DebugData_RenderGraph_ResourceDataLists
    : public ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceLists_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceDataLists* New_ctor();

  /// @brief Method .ctor, addr 0x6bff4ec, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_ResourceDataLists();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_ResourceDataLists", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugData_RenderGraph_ResourceDataLists(DebugData_RenderGraph_ResourceDataLists&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_ResourceDataLists", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugData_RenderGraph_ResourceDataLists(DebugData_RenderGraph_ResourceDataLists const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9281 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceDataLists) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.Rendering.RenderBufferLoadAction, UnityEngine.Rendering.RenderBufferStoreAction
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/SerializableNativePassAttachment
class CORDL_TYPE DebugData_RenderGraph_SerializableNativePassAttachment : public ::System::Object {
public:
  // Declarations
  /// @brief Field depthSlice, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_depthSlice, put = __cordl_internal_set_depthSlice)) int32_t depthSlice;

  /// @brief Field loadAction, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_loadAction, put = __cordl_internal_set_loadAction)) ::UnityEngine::Rendering::RenderBufferLoadAction loadAction;

  /// @brief Field memoryless, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_memoryless, put = __cordl_internal_set_memoryless)) bool memoryless;

  /// @brief Field mipLevel, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_mipLevel, put = __cordl_internal_set_mipLevel)) int32_t mipLevel;

  /// @brief Field storeAction, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_storeAction, put = __cordl_internal_set_storeAction)) ::UnityEngine::Rendering::RenderBufferStoreAction storeAction;

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment*
  New_ctor(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment att);

  constexpr int32_t const& __cordl_internal_get_depthSlice() const;

  constexpr int32_t& __cordl_internal_get_depthSlice();

  constexpr ::UnityEngine::Rendering::RenderBufferLoadAction const& __cordl_internal_get_loadAction() const;

  constexpr ::UnityEngine::Rendering::RenderBufferLoadAction& __cordl_internal_get_loadAction();

  constexpr bool const& __cordl_internal_get_memoryless() const;

  constexpr bool& __cordl_internal_get_memoryless();

  constexpr int32_t const& __cordl_internal_get_mipLevel() const;

  constexpr int32_t& __cordl_internal_get_mipLevel();

  constexpr ::UnityEngine::Rendering::RenderBufferStoreAction const& __cordl_internal_get_storeAction() const;

  constexpr ::UnityEngine::Rendering::RenderBufferStoreAction& __cordl_internal_get_storeAction();

  constexpr void __cordl_internal_set_depthSlice(int32_t value);

  constexpr void __cordl_internal_set_loadAction(::UnityEngine::Rendering::RenderBufferLoadAction value);

  constexpr void __cordl_internal_set_memoryless(bool value);

  constexpr void __cordl_internal_set_mipLevel(int32_t value);

  constexpr void __cordl_internal_set_storeAction(::UnityEngine::Rendering::RenderBufferStoreAction value);

  /// @brief Method .ctor, addr 0x6bff538, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment att);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_SerializableNativePassAttachment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_SerializableNativePassAttachment", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugData_RenderGraph_SerializableNativePassAttachment(DebugData_RenderGraph_SerializableNativePassAttachment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_SerializableNativePassAttachment", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugData_RenderGraph_SerializableNativePassAttachment(DebugData_RenderGraph_SerializableNativePassAttachment const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9282 };

  /// @brief Field loadAction, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferLoadAction ___loadAction;

  /// @brief Field storeAction, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferStoreAction ___storeAction;

  /// @brief Field memoryless, offset: 0x18, size: 0x1, def value: None
  bool ___memoryless;

  /// @brief Field mipLevel, offset: 0x1c, size: 0x4, def value: None
  int32_t ___mipLevel;

  /// @brief Field depthSlice, offset: 0x20, size: 0x4, def value: None
  int32_t ___depthSlice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment, ___loadAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment, ___storeAction) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment, ___memoryless) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment, ___mipLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment, ___depthSlice) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraph::DebugData::ResourceLists`1<T>
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData/ResourceIdLists
class CORDL_TYPE PassData_DebugData_RenderGraph_ResourceIdLists : public ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceLists_1<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists* New_ctor();

  /// @brief Method .ctor, addr 0x6bff00c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PassData_DebugData_RenderGraph_ResourceIdLists();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PassData_DebugData_RenderGraph_ResourceIdLists", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PassData_DebugData_RenderGraph_ResourceIdLists(PassData_DebugData_RenderGraph_ResourceIdLists&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PassData_DebugData_RenderGraph_ResourceIdLists", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PassData_DebugData_RenderGraph_ResourceIdLists(PassData_DebugData_RenderGraph_ResourceIdLists const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9283 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo/AttachmentInfo
class CORDL_TYPE NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field attachment, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_attachment,
                      put = __cordl_internal_set_attachment)) ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment* attachment;

  /// @brief Field attachmentIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_attachmentIndex, put = __cordl_internal_set_attachmentIndex)) int32_t attachmentIndex;

  /// @brief Field loadReason, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_loadReason, put = __cordl_internal_set_loadReason)) ::StringW loadReason;

  /// @brief Field resourceName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceName, put = __cordl_internal_set_resourceName)) ::StringW resourceName;

  /// @brief Field storeMsaaReason, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_storeMsaaReason, put = __cordl_internal_set_storeMsaaReason)) ::StringW storeMsaaReason;

  /// @brief Field storeReason, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_storeReason, put = __cordl_internal_set_storeReason)) ::StringW storeReason;

  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment* const& __cordl_internal_get_attachment() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment*& __cordl_internal_get_attachment();

  constexpr int32_t const& __cordl_internal_get_attachmentIndex() const;

  constexpr int32_t& __cordl_internal_get_attachmentIndex();

  constexpr ::StringW const& __cordl_internal_get_loadReason() const;

  constexpr ::StringW& __cordl_internal_get_loadReason();

  constexpr ::StringW const& __cordl_internal_get_resourceName() const;

  constexpr ::StringW& __cordl_internal_get_resourceName();

  constexpr ::StringW const& __cordl_internal_get_storeMsaaReason() const;

  constexpr ::StringW& __cordl_internal_get_storeMsaaReason();

  constexpr ::StringW const& __cordl_internal_get_storeReason() const;

  constexpr ::StringW& __cordl_internal_get_storeReason();

  constexpr void __cordl_internal_set_attachment(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment* value);

  constexpr void __cordl_internal_set_attachmentIndex(int32_t value);

  constexpr void __cordl_internal_set_loadReason(::StringW value);

  constexpr void __cordl_internal_set_resourceName(::StringW value);

  constexpr void __cordl_internal_set_storeMsaaReason(::StringW value);

  constexpr void __cordl_internal_set_storeReason(::StringW value);

  /// @brief Method .ctor, addr 0x6bff600, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo(NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo(NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9284 };

  /// @brief Field resourceName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourceName;

  /// @brief Field loadReason, offset: 0x18, size: 0x8, def value: None
  ::StringW ___loadReason;

  /// @brief Field storeReason, offset: 0x20, size: 0x8, def value: None
  ::StringW ___storeReason;

  /// @brief Field storeMsaaReason, offset: 0x28, size: 0x8, def value: None
  ::StringW ___storeMsaaReason;

  /// @brief Field attachmentIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___attachmentIndex;

  /// @brief Field attachment, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment* ___attachment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___resourceName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___loadReason) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___storeReason) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___storeMsaaReason) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___attachmentIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo, ___attachment) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo/PassCompatibilityInfo
struct CORDL_TYPE NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo();

  // Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "isCompatible", ty: "bool", modifiers: "", def_value: None,
  // comment: None }]
  constexpr NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo(::StringW message, bool isCompatible) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9285 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field message, offset: 0x0, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field isCompatible, offset: 0x8, size: 0x1, def value: None
  bool isCompatible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo, message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo, isCompatible) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData/NRPInfo/NativeRenderPassInfo
class CORDL_TYPE NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo : public ::System::Object {
public:
  // Declarations
  using AttachmentInfo = ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo;

  using PassCompatibilityInfo = ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo;

  /// @brief Field attachmentInfos, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_attachmentInfos, put = __cordl_internal_set_attachmentInfos)) ::System::Collections::Generic::List_1<
      ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>* attachmentInfos;

  /// @brief Field mergedPassIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mergedPassIds, put = __cordl_internal_set_mergedPassIds)) ::System::Collections::Generic::List_1<int32_t>* mergedPassIds;

  /// @brief Field passBreakReasoning, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_passBreakReasoning, put = __cordl_internal_set_passBreakReasoning)) ::StringW passBreakReasoning;

  /// @brief Field passCompatibility, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_passCompatibility, put = __cordl_internal_set_passCompatibility)) ::UnityEngine::Rendering::SerializedDictionary_2<
      int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>* passCompatibility;

  static inline ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>* const&
  __cordl_internal_get_attachmentInfos() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>*&
  __cordl_internal_get_attachmentInfos();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_mergedPassIds() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_mergedPassIds();

  constexpr ::StringW const& __cordl_internal_get_passBreakReasoning() const;

  constexpr ::StringW& __cordl_internal_get_passBreakReasoning();

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<int32_t,
                                                             ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>* const&
  __cordl_internal_get_passCompatibility() const;

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>*&
  __cordl_internal_get_passCompatibility();

  constexpr void __cordl_internal_set_attachmentInfos(
      ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>* value);

  constexpr void __cordl_internal_set_mergedPassIds(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_passBreakReasoning(::StringW value);

  constexpr void __cordl_internal_set_passCompatibility(
      ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>* value);

  /// @brief Method .ctor, addr 0x6bff5fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo(NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo(NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9286 };

  /// @brief Field passBreakReasoning, offset: 0x10, size: 0x8, def value: None
  ::StringW ___passBreakReasoning;

  /// @brief Field attachmentInfos, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>* ___attachmentInfos;

  /// @brief Field passCompatibility, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>*
      ___passCompatibility;

  /// @brief Field mergedPassIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___mergedPassIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo, ___passBreakReasoning) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo, ___attachmentInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo, ___passCompatibility) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo, ___mergedPassIds) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData/NRPInfo
class CORDL_TYPE PassData_DebugData_RenderGraph_NRPInfo : public ::System::Object {
public:
  // Declarations
  using NativeRenderPassInfo = ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo;

  /// @brief Field hasDepth, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDepth, put = __cordl_internal_set_hasDepth)) bool hasDepth;

  /// @brief Field height, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) int32_t height;

  /// @brief Field nativePassInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nativePassInfo,
                      put = __cordl_internal_set_nativePassInfo)) ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* nativePassInfo;

  /// @brief Field samples, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_samples, put = __cordl_internal_set_samples)) int32_t samples;

  /// @brief Field setGlobals, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_setGlobals, put = __cordl_internal_set_setGlobals)) ::System::Collections::Generic::List_1<int32_t>* setGlobals;

  /// @brief Field textureFBFetchList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_textureFBFetchList, put = __cordl_internal_set_textureFBFetchList)) ::System::Collections::Generic::List_1<int32_t>* textureFBFetchList;

  /// @brief Field volumeDepth, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_volumeDepth, put = __cordl_internal_set_volumeDepth)) int32_t volumeDepth;

  /// @brief Field width, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) int32_t width;

  static inline ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo* New_ctor();

  constexpr bool const& __cordl_internal_get_hasDepth() const;

  constexpr bool& __cordl_internal_get_hasDepth();

  constexpr int32_t const& __cordl_internal_get_height() const;

  constexpr int32_t& __cordl_internal_get_height();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* const& __cordl_internal_get_nativePassInfo() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo*& __cordl_internal_get_nativePassInfo();

  constexpr int32_t const& __cordl_internal_get_samples() const;

  constexpr int32_t& __cordl_internal_get_samples();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_setGlobals() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_setGlobals();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_textureFBFetchList() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_textureFBFetchList();

  constexpr int32_t const& __cordl_internal_get_volumeDepth() const;

  constexpr int32_t& __cordl_internal_get_volumeDepth();

  constexpr int32_t const& __cordl_internal_get_width() const;

  constexpr int32_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_hasDepth(bool value);

  constexpr void __cordl_internal_set_height(int32_t value);

  constexpr void __cordl_internal_set_nativePassInfo(::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* value);

  constexpr void __cordl_internal_set_samples(int32_t value);

  constexpr void __cordl_internal_set_setGlobals(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_textureFBFetchList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_volumeDepth(int32_t value);

  constexpr void __cordl_internal_set_width(int32_t value);

  /// @brief Method .ctor, addr 0x6bff568, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PassData_DebugData_RenderGraph_NRPInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PassData_DebugData_RenderGraph_NRPInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PassData_DebugData_RenderGraph_NRPInfo(PassData_DebugData_RenderGraph_NRPInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PassData_DebugData_RenderGraph_NRPInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PassData_DebugData_RenderGraph_NRPInfo(PassData_DebugData_RenderGraph_NRPInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9287 };

  /// [SerializeReference]
  /// @brief Field nativePassInfo, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* ___nativePassInfo;

  /// @brief Field textureFBFetchList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___textureFBFetchList;

  /// @brief Field setGlobals, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___setGlobals;

  /// @brief Field width, offset: 0x28, size: 0x4, def value: None
  int32_t ___width;

  /// @brief Field height, offset: 0x2c, size: 0x4, def value: None
  int32_t ___height;

  /// @brief Field volumeDepth, offset: 0x30, size: 0x4, def value: None
  int32_t ___volumeDepth;

  /// @brief Field samples, offset: 0x34, size: 0x4, def value: None
  int32_t ___samples;

  /// @brief Field hasDepth, offset: 0x38, size: 0x1, def value: None
  bool ___hasDepth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___nativePassInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___textureFBFetchList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___setGlobals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___volumeDepth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___samples) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo, ___hasDepth) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassScriptInfo
struct CORDL_TYPE DebugData_RenderGraph_PassScriptInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_PassScriptInfo();

  // Ctor Parameters [CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "line", ty: "int32_t", modifiers: "", def_value: None, comment:
  // None }]
  constexpr DebugData_RenderGraph_PassScriptInfo(::StringW filePath, int32_t line) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9292 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field filePath, offset: 0x0, size: 0x8, def value: None
  ::StringW filePath;

  /// @brief Field line, offset: 0x8, size: 0x4, def value: None
  int32_t line;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo, filePath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo, line) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// [DebuggerDisplay("PassDebug: {name}")]
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraph::DebugData::PassScriptInfo, UnityEngine.Rendering.RenderGraphModule.RenderGraphPassType
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/PassData
struct CORDL_TYPE DebugData_RenderGraph_PassData {
public:
  // Declarations
  using NRPInfo = ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo;

  using ResourceIdLists = ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_PassData();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType", modifiers: "", def_value: None, comment: None }, CppParam { name: "resourceReadLists", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists*", modifiers: "", def_value: None, comment: None }, CppParam { name: "resourceWriteLists", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists*", modifiers: "", def_value: None, comment: None }, CppParam { name: "culled", ty: "bool", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "async", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "nativeSubPassIndex", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "syncFromPassIndex", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "generateDebugData", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "nrpInfo", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "scriptInfo", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo", modifiers: "", def_value: None, comment: None }]
  constexpr DebugData_RenderGraph_PassData(::StringW name, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType type,
                                           ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists* resourceReadLists,
                                           ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists* resourceWriteLists, bool culled, bool async,
                                           int32_t nativeSubPassIndex, int32_t syncToPassIndex, int32_t syncFromPassIndex, bool generateDebugData,
                                           ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo* nrpInfo,
                                           ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo scriptInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9288 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType type;

  /// @brief Field resourceReadLists, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists* resourceReadLists;

  /// @brief Field resourceWriteLists, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_ResourceIdLists* resourceWriteLists;

  /// @brief Field culled, offset: 0x20, size: 0x1, def value: None
  bool culled;

  /// @brief Field async, offset: 0x21, size: 0x1, def value: None
  bool async;

  /// @brief Field nativeSubPassIndex, offset: 0x24, size: 0x4, def value: None
  int32_t nativeSubPassIndex;

  /// @brief Field syncToPassIndex, offset: 0x28, size: 0x4, def value: None
  int32_t syncToPassIndex;

  /// @brief Field syncFromPassIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t syncFromPassIndex;

  /// @brief Field generateDebugData, offset: 0x30, size: 0x1, def value: None
  bool generateDebugData;

  /// [SerializeReference]
  /// @brief Field nrpInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo* nrpInfo;

  /// @brief Field scriptInfo, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo scriptInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, resourceReadLists) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, resourceWriteLists) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, culled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, async) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, nativeSubPassIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, syncToPassIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, syncFromPassIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, generateDebugData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, nrpInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData, scriptInfo) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData) == 0x50, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.GraphicsBuffer::Target, UnityEngine.GraphicsBuffer::UsageFlags
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/BufferResourceData
class CORDL_TYPE DebugData_RenderGraph_BufferResourceData : public ::System::Object {
public:
  // Declarations
  /// @brief Field count, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field stride, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_stride, put = __cordl_internal_set_stride)) int32_t stride;

  /// @brief Field target, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::UnityEngine::GraphicsBuffer_Target target;

  /// @brief Field usage, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_usage, put = __cordl_internal_set_usage)) ::UnityEngine::GraphicsBuffer_UsageFlags usage;

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_stride() const;

  constexpr int32_t& __cordl_internal_get_stride();

  constexpr ::UnityEngine::GraphicsBuffer_Target const& __cordl_internal_get_target() const;

  constexpr ::UnityEngine::GraphicsBuffer_Target& __cordl_internal_get_target();

  constexpr ::UnityEngine::GraphicsBuffer_UsageFlags const& __cordl_internal_get_usage() const;

  constexpr ::UnityEngine::GraphicsBuffer_UsageFlags& __cordl_internal_get_usage();

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_stride(int32_t value);

  constexpr void __cordl_internal_set_target(::UnityEngine::GraphicsBuffer_Target value);

  constexpr void __cordl_internal_set_usage(::UnityEngine::GraphicsBuffer_UsageFlags value);

  /// @brief Method .ctor, addr 0x6bff008, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_BufferResourceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_BufferResourceData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugData_RenderGraph_BufferResourceData(DebugData_RenderGraph_BufferResourceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_BufferResourceData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugData_RenderGraph_BufferResourceData(DebugData_RenderGraph_BufferResourceData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9289 };

  /// @brief Field count, offset: 0x10, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field stride, offset: 0x14, size: 0x4, def value: None
  int32_t ___stride;

  /// @brief Field target, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::GraphicsBuffer_Target ___target;

  /// @brief Field usage, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::GraphicsBuffer_UsageFlags ___usage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData, ___count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData, ___stride) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData, ___target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData, ___usage) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.Experimental.Rendering.GraphicsFormat
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData/TextureResourceData
class CORDL_TYPE DebugData_RenderGraph_TextureResourceData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bindMS, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_bindMS, put = __cordl_internal_set_bindMS)) bool bindMS;

  /// @brief Field clearBuffer, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_clearBuffer, put = __cordl_internal_set_clearBuffer)) bool clearBuffer;

  /// @brief Field depth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field format, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_format, put = __cordl_internal_set_format)) ::UnityEngine::Experimental::Rendering::GraphicsFormat format;

  /// @brief Field height, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) int32_t height;

  /// @brief Field samples, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_samples, put = __cordl_internal_set_samples)) int32_t samples;

  /// @brief Field width, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) int32_t width;

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData* New_ctor();

  constexpr bool const& __cordl_internal_get_bindMS() const;

  constexpr bool& __cordl_internal_get_bindMS();

  constexpr bool const& __cordl_internal_get_clearBuffer() const;

  constexpr bool& __cordl_internal_get_clearBuffer();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_format() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_format();

  constexpr int32_t const& __cordl_internal_get_height() const;

  constexpr int32_t& __cordl_internal_get_height();

  constexpr int32_t const& __cordl_internal_get_samples() const;

  constexpr int32_t& __cordl_internal_get_samples();

  constexpr int32_t const& __cordl_internal_get_width() const;

  constexpr int32_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_bindMS(bool value);

  constexpr void __cordl_internal_set_clearBuffer(bool value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_format(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_height(int32_t value);

  constexpr void __cordl_internal_set_samples(int32_t value);

  constexpr void __cordl_internal_set_width(int32_t value);

  /// @brief Method .ctor, addr 0x6bff004, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData_RenderGraph_TextureResourceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_TextureResourceData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugData_RenderGraph_TextureResourceData(DebugData_RenderGraph_TextureResourceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugData_RenderGraph_TextureResourceData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugData_RenderGraph_TextureResourceData(DebugData_RenderGraph_TextureResourceData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9290 };

  /// @brief Field width, offset: 0x10, size: 0x4, def value: None
  int32_t ___width;

  /// @brief Field height, offset: 0x14, size: 0x4, def value: None
  int32_t ___height;

  /// @brief Field depth, offset: 0x18, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field bindMS, offset: 0x1c, size: 0x1, def value: None
  bool ___bindMS;

  /// @brief Field samples, offset: 0x20, size: 0x4, def value: None
  int32_t ___samples;

  /// @brief Field format, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___format;

  /// @brief Field clearBuffer, offset: 0x28, size: 0x1, def value: None
  bool ___clearBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___width) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___height) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___depth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___bindMS) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___samples) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___format) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData, ___clearBuffer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugData
class CORDL_TYPE RenderGraph_DebugData : public ::System::Object {
public:
  // Declarations
  using BufferResourceData = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData;

  using PassData = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData;

  using PassScriptInfo = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo;

  using ResourceData = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData;

  using ResourceDataLists = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceDataLists;

  template <typename T> using ResourceLists_1 = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceLists_1<T>;

  using SerializableNativePassAttachment = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_SerializableNativePassAttachment;

  using TextureResourceData = ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData;

  /// @brief Field executionName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_executionName, put = __cordl_internal_set_executionName)) ::StringW executionName;

  /// @brief Field graphHash, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_graphHash, put = __cordl_internal_set_graphHash)) int32_t graphHash;

  /// @brief Field isNRPCompiler, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isNRPCompiler, put = __cordl_internal_set_isNRPCompiler)) bool isNRPCompiler;

  /// @brief Field passList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_passList,
                      put = __cordl_internal_set_passList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>* passList;

  /// @brief Field resourceLists, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceLists,
                      put = __cordl_internal_set_resourceLists)) ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceDataLists* resourceLists;

  /// @brief Field valid, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_valid, put = __cordl_internal_set_valid)) bool valid;

  /// @brief Method Clear, addr 0x6bfde5c, size 0x9c, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* New_ctor(::StringW executionName);

  constexpr ::StringW const& __cordl_internal_get_executionName() const;

  constexpr ::StringW& __cordl_internal_get_executionName();

  constexpr int32_t const& __cordl_internal_get_graphHash() const;

  constexpr int32_t& __cordl_internal_get_graphHash();

  constexpr bool const& __cordl_internal_get_isNRPCompiler() const;

  constexpr bool& __cordl_internal_get_isNRPCompiler();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>* const& __cordl_internal_get_passList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>*& __cordl_internal_get_passList();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceDataLists* const& __cordl_internal_get_resourceLists() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceDataLists*& __cordl_internal_get_resourceLists();

  constexpr bool const& __cordl_internal_get_valid() const;

  constexpr bool& __cordl_internal_get_valid();

  constexpr void __cordl_internal_set_executionName(::StringW value);

  constexpr void __cordl_internal_set_graphHash(int32_t value);

  constexpr void __cordl_internal_set_isNRPCompiler(bool value);

  constexpr void __cordl_internal_set_passList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>* value);

  constexpr void __cordl_internal_set_resourceLists(::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceDataLists* value);

  constexpr void __cordl_internal_set_valid(bool value);

  /// @brief Method .ctor, addr 0x6bff43c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::StringW executionName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_DebugData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_DebugData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_DebugData(RenderGraph_DebugData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_DebugData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_DebugData(RenderGraph_DebugData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9293 };

  /// @brief Field executionName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___executionName;

  /// @brief Field valid, offset: 0x18, size: 0x1, def value: None
  bool ___valid;

  /// @brief Field graphHash, offset: 0x1c, size: 0x4, def value: None
  int32_t ___graphHash;

  /// @brief Field isNRPCompiler, offset: 0x20, size: 0x1, def value: None
  bool ___isNRPCompiler;

  /// @brief Field passList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>* ___passList;

  /// @brief Field resourceLists, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceDataLists* ___resourceLists;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData, ___executionName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData, ___valid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData, ___graphHash) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData, ___isNRPCompiler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData, ___passList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData, ___resourceLists) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/DebugDataSerialization
class CORDL_TYPE RenderGraph_DebugDataSerialization : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromJson, addr 0x6bf30d0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* FromJson(::StringW json);

  /// @brief Method ToJson, addr 0x6bf3098, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW ToJson(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* debugData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_DebugDataSerialization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_DebugDataSerialization", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_DebugDataSerialization(RenderGraph_DebugDataSerialization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_DebugDataSerialization", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_DebugDataSerialization(RenderGraph_DebugDataSerialization const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9294 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugDataSerialization) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/RenderGraphExceptionMessages
class CORDL_TYPE RenderGraph_RenderGraphExceptionMessages : public ::System::Object {
public:
  // Declarations
  /// @brief Field enableCaller, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_enableCaller, put = setStaticF_enableCaller)) bool enableCaller;

  /// @brief Field m_RenderGraphStateMessages, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_m_RenderGraphStateMessages,
      put = setStaticF_m_RenderGraphStateMessages)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraphState, ::StringW>* m_RenderGraphStateMessages;

  /// @brief Method GetExceptionMessage, addr 0x6bf5bc8, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW GetExceptionMessage(::UnityEngine::Rendering::RenderGraphModule::RenderGraphState state);

  /// @brief Method GetHigherCaller, addr 0x6c000b0, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW GetHigherCaller();

  /// @brief Method IncompatibleTextureUVOrigin, addr 0x6bffbb0, size 0x234, virtual false, abstract: false, final false
  static inline ::StringW IncompatibleTextureUVOrigin(::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection origin, ::StringW attachmentType, ::StringW attachmentName,
                                                      ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType attachmentResourceType, int32_t attachmentResourceIndex,
                                                      ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection attachmentOrigin);

  /// @brief Method IncompatibleTextureUVOriginStore, addr 0x6bfff28, size 0x188, virtual false, abstract: false, final false
  static inline ::StringW IncompatibleTextureUVOriginStore(::StringW firstAttachmentName, ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection firstAttachmentOrigin,
                                                           ::StringW secondAttachmentName, ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection secondAttachmentOrigin);

  /// @brief Method IncompatibleTextureUVOriginUseTexture, addr 0x6bffde4, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW IncompatibleTextureUVOriginUseTexture(::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection origin);

  /// @brief Method MismatchInDimensions, addr 0x6bff604, size 0x244, virtual false, abstract: false, final false
  static inline ::StringW MismatchInDimensions(::StringW name, int32_t fragWidth, int32_t fragHeight, int32_t fragVolumeDepth,
                                               ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData resInfo);

  /// @brief Method MismatchInMSAASamlpes, addr 0x6bff848, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW MismatchInMSAASamlpes(::StringW name, int32_t expectedSamples, int32_t actualSamples);

  /// @brief Method NoGlobalTextureAtPropertyID, addr 0x6bff9e0, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW NoGlobalTextureAtPropertyID(int32_t propertyId);

  /// @brief Method UseDepthWithColorFormat, addr 0x6bffa74, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW UseDepthWithColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat);

  /// @brief Method UseTransientTextureInWrongPass, addr 0x6bffb1c, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW UseTransientTextureInWrongPass(int32_t transientIndex);

  /// @brief Method UsingLegacyRenderGraph, addr 0x6bffebc, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW UsingLegacyRenderGraph(::StringW passName);

  static inline bool getStaticF_enableCaller();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraphState, ::StringW>* getStaticF_m_RenderGraphStateMessages();

  static inline void setStaticF_enableCaller(bool value);

  static inline void setStaticF_m_RenderGraphStateMessages(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraphState, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_RenderGraphExceptionMessages();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_RenderGraphExceptionMessages", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_RenderGraphExceptionMessages(RenderGraph_RenderGraphExceptionMessages&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_RenderGraphExceptionMessages", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_RenderGraphExceptionMessages(RenderGraph_RenderGraphExceptionMessages const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9295 };

  /// @brief Field k_AddingOlderAttachmentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AddingOlderAttachmentVersion{
    u"The pass adds an older version while a higher version is already registered with the pass. Make sure you only access the latest version."
  };

  /// @brief Field k_AttachmentsDoNotMatch offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AttachmentsDoNotMatch{ u"Low level rendergraph error: Attachments in renderpass do not match." };

  /// @brief Field k_BeginNoActivePass offset 0xffffffff size 0x8
  static constexpr ::ConstString k_BeginNoActivePass{ u"Compiler error: Pass is marked as beginning a native sub pass but no pass is currently active." };

  /// @brief Field k_CannotDetermineSubPassFlagNoDepth offset 0xffffffff size 0x8
  static constexpr ::ConstString k_CannotDetermineSubPassFlagNoDepth{
    u"SubPassFlag for merging cannot be determined if native pass doesn\'t have a depth attachment. Make sure your pass has a depth attachment."
  };

  /// @brief Field k_ErrorDefaultMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ErrorDefaultMessage{ u"Invalid render graph state, impossible to log the exception." };

  /// @brief Field k_InvalidDepthAndColorTargets offset 0xffffffff size 0x8
  static constexpr ::ConstString k_InvalidDepthAndColorTargets{ u"Neither depth nor color render targets are correctly set up." };

  /// @brief Field k_InvalidGetRenderTargetInfoResultsError offset 0xffffffff size 0x8
  static constexpr ::ConstString k_InvalidGetRenderTargetInfoResultsError{ u"GetRenderTargetInfo returned invalid results. Check that the width, height, and number of MSAA samples is not 0." };

  /// @brief Field k_InvalidMRTSetup offset 0xffffffff size 0x8
  static constexpr ::ConstString k_InvalidMRTSetup{ u"Multiple render texture (MRT) setup is invalid. Some indices are not used." };

  /// @brief Field k_InvalidResource offset 0xffffffff size 0x8
  static constexpr ::ConstString k_InvalidResource{ u"Using an invalid resource. Invalid resources can be resources leftover from a previous execution." };

  /// @brief Field k_InvalidResourceType offset 0xffffffff size 0x8
  static constexpr ::ConstString k_InvalidResourceType{ u"Invalid resource type, expected texture or buffer" };

  /// @brief Field k_LoadingMemorylessResource offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LoadingMemorylessResource{ u"This pass is loading a resource marked as memoryless." };

  /// @brief Field k_MoreThanOneResourceForMRTIndex offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MoreThanOneResourceForMRTIndex{ u"You can only bind a single texture to a single index in a multiple render texture (MRT). Verify your indexes are correct." };

  /// @brief Field k_MoreThanOneTextureForFragInputIndex offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MoreThanOneTextureForFragInputIndex{ u"You can only bind a single texture to a fragment input index. Verify your indexes are correct." };

  /// @brief Field k_MoreThanOneTextureRandomWriteInputIndex offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MoreThanOneTextureRandomWriteInputIndex{ u"You can only bind a single texture to a random write input index. Verify your indexes are correct." };

  /// @brief Field k_MultipleDepthTextures offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MultipleDepthTextures{ u"You can only set a single depth texture per pass." };

  /// @brief Field k_MultisampledShaderResolveInputAttachmentNotMemoryless offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MultisampledShaderResolveInputAttachmentNotMemoryless{
    u"Low level rendergraph error: last subpass with shader resolve must have all input attachments as memoryless attachments."
  };

  /// @brief Field k_MultisampledShaderResolveInvalidAttachmentSetup offset 0xffffffff size 0x8
  static constexpr ::ConstString k_MultisampledShaderResolveInvalidAttachmentSetup{ u"Low level rendergraph error: last subpass with shader resolve must have one color attachment." };

  /// @brief Field k_NoActivePassForSubpass offset 0xffffffff size 0x8
  static constexpr ::ConstString k_NoActivePassForSubpass{ u"Compiler error: Generated a subpass pass but no pass is currently active." };

  /// @brief Field k_NoDepthBufferMRT offset 0xffffffff size 0x8
  static constexpr ::ConstString k_NoDepthBufferMRT{ u"Setting multiple render textures (MRTs) without a depth buffer is not supported." };

  /// @brief Field k_NoRenderFunction offset 0xffffffff size 0x8
  static constexpr ::ConstString k_NoRenderFunction{ u"RenderPass was not provided with an execute function." };

  /// @brief Field k_NonIncrementalCreationCall offset 0xffffffff size 0x8
  static constexpr ::ConstString k_NonIncrementalCreationCall{
    u"Something went wrong when compiling the graph. The Creation lists must be set-up incrementally for all passes, but AddFirstUse is called in an arbitrary non-incremental way."
  };

  /// @brief Field k_NonIncrementalDestructionCall offset 0xffffffff size 0x8
  static constexpr ::ConstString k_NonIncrementalDestructionCall{
    u"Something went wrong when compiling the graph. The Destruction lists must be set-up incrementally for all passes, AddLastUse is called in an arbitrary non-incremental way."
  };

  /// @brief Field k_NonTextureAsAttachmentError offset 0xffffffff size 0x8
  static constexpr ::ConstString k_NonTextureAsAttachmentError{ u"Only textures can be used as a fragment attachment." };

  /// @brief Field k_OneResourceTwoVersionsError offset 0xffffffff size 0x8
  static constexpr ::ConstString k_OneResourceTwoVersionsError{ u"A pass is using SetAttachment or UseTexture on two versions of the same resource. Make sure you only access the latest version." };

  /// @brief Field k_ReadWriteTransient offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ReadWriteTransient{
    u"This pass is reading or writing a transient resource. Transient resources are always assumed to be both read and written using \'AccessFlags.ReadWrite\'."
  };

  /// @brief Field k_RenderGraphExecutionError offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RenderGraphExecutionError{ u"Render Graph Execution error" };

  /// @brief Field k_RenderPassHasInvalidProperties offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RenderPassHasInvalidProperties{ u"Invalid render pass properties. One or more properties are zero." };

  /// @brief Field k_RenderPassIsEmpty offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RenderPassIsEmpty{ u"Empty render pass" };

  /// @brief Field k_ResolvignMemorylessResource offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ResolvignMemorylessResource{ u"This pass is storing or resolving a resource marked as memoryless" };

  /// @brief Field k_SetRenderAttachmentOnDepthTexture offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SetRenderAttachmentOnDepthTexture{
    u"SetRenderAttachment is called on a texture that has a depth format. Use a texture with a color format instead, or call SetRenderDepthAttachment."
  };

  /// @brief Field k_SetRenderAttachmentOnGlobalTexture offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SetRenderAttachmentOnGlobalTexture{ u"SetRenderAttachment is called on a texture that is currently bound to a global texture slot. Shaders might be using the "
                                                                       u"texture using samplers. Make sure textures are not set as globals when using them as fragment attachments." };

  /// @brief Field k_SetRenderAttachmentTextureAlreadyUsed offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SetRenderAttachmentTextureAlreadyUsed{
    u"SetRenderAttachment is called on a texture that is already used through UseTexture/SetRenderAttachment. Check your code and make sure the texture is only used once."
  };

  /// @brief Field k_ShadingRateImageAttachmentDoesNotMatch offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ShadingRateImageAttachmentDoesNotMatch{ u"Low level rendergraph error: Shading rate image attachment in renderpass does not match." };

  /// @brief Field k_TextureAlreadyBeingUsedThroughSetAttachment offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TextureAlreadyBeingUsedThroughSetAttachment{
    u"UseTexture is called on a texture that is already used through SetRenderAttachment. Check your code and make sure the texture is only used once."
  };

  /// @brief Field k_UndisposedBuilderPreviousPass offset 0xffffffff size 0x8
  static constexpr ::ConstString k_UndisposedBuilderPreviousPass{
    u"Finish building the previous pass first by disposing of the pass builder object before adding a new pass. You can manually dispose of the builder with \'builder.Dispose()\'."
  };

  /// @brief Field k_UseTextureRandWriteTwoVersionsError offset 0xffffffff size 0x8
  static constexpr ::ConstString k_UseTextureRandWriteTwoVersionsError{ u"A pass is using UseTextureRandomWrite on two versions of the same resource.  Make sure you only access the latest version." };

  /// @brief Field k_WriteToResourceTwice offset 0xffffffff size 0x8
  static constexpr ::ConstString k_WriteToResourceTwice{ u"The pass writes to a resource twice. You can only write the same resource once within a pass." };

  /// @brief Field k_WriteToVersionedResource offset 0xffffffff size 0x8
  static constexpr ::ConstString k_WriteToVersionedResource{
    u"The pass writes to a versioned resource handle. You can only write to unversioned resource handles to avoid branches in the resource history."
  };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_RenderGraphExceptionMessages) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/CompiledResourceInfo
struct CORDL_TYPE RenderGraph_CompiledResourceInfo {
public:
  // Declarations
  /// @brief Method Reset, addr 0x6c003a4, size 0xe8, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_CompiledResourceInfo();

  // Ctor Parameters [CppParam { name: "producers", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "consumers", ty:
  // "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "imported", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr RenderGraph_CompiledResourceInfo(::System::Collections::Generic::List_1<int32_t>* producers, ::System::Collections::Generic::List_1<int32_t>* consumers, int32_t refCount,
                                             bool imported) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9296 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field producers, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* producers;

  /// @brief Field consumers, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* consumers;

  /// @brief Field refCount, offset: 0x10, size: 0x4, def value: None
  int32_t refCount;

  /// @brief Field imported, offset: 0x14, size: 0x1, def value: None
  bool imported;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, producers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, consumers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, refCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo, imported) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// [DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
// Dependencies System.Collections.Generic.List`1<T>, UnityEngine.Rendering.GraphicsFence, UnityEngine.Rendering.RenderGraphModule.ExtendedFeatureFlags
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/CompiledPassInfo
struct CORDL_TYPE RenderGraph_CompiledPassInfo {
public:
  // Declarations
  /// @brief Method Reset, addr 0x6bfbe84, size 0x240, virtual false, abstract: false, final false
  inline void Reset(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass, int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_CompiledPassInfo();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "resourceCreateList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "resourceReleaseList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "fence", ty:
  // "::UnityEngine::Rendering::GraphicsFence", modifiers: "", def_value: None, comment: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "syncFromPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "enableAsyncCompute", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "allowPassCulling", ty: "bool", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "needGraphicsFence", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "culled", ty: "bool", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "culledByRendererList", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasSideEffect", ty: "bool", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "enableFoveatedRasterization", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "extendedFeatureFlags", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasShadingRateImage", ty: "bool", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "hasShadingRateStates", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr RenderGraph_CompiledPassInfo(::StringW name, int32_t index, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> resourceCreateList,
                                         ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> resourceReleaseList, ::UnityEngine::Rendering::GraphicsFence fence, int32_t refCount,
                                         int32_t syncToPassIndex, int32_t syncFromPassIndex, bool enableAsyncCompute, bool allowPassCulling, bool needGraphicsFence, bool culled,
                                         bool culledByRendererList, bool hasSideEffect, bool enableFoveatedRasterization,
                                         ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags, bool hasShadingRateImage, bool hasShadingRateStates) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9297 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  /// @brief Field resourceCreateList, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> resourceCreateList;

  /// @brief Field resourceReleaseList, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> resourceReleaseList;

  /// @brief Field fence, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::GraphicsFence fence;

  /// @brief Field refCount, offset: 0x30, size: 0x4, def value: None
  int32_t refCount;

  /// @brief Field syncToPassIndex, offset: 0x34, size: 0x4, def value: None
  int32_t syncToPassIndex;

  /// @brief Field syncFromPassIndex, offset: 0x38, size: 0x4, def value: None
  int32_t syncFromPassIndex;

  /// @brief Field enableAsyncCompute, offset: 0x3c, size: 0x1, def value: None
  bool enableAsyncCompute;

  /// @brief Field allowPassCulling, offset: 0x3d, size: 0x1, def value: None
  bool allowPassCulling;

  /// @brief Field needGraphicsFence, offset: 0x3e, size: 0x1, def value: None
  bool needGraphicsFence;

  /// @brief Field culled, offset: 0x3f, size: 0x1, def value: None
  bool culled;

  /// @brief Field culledByRendererList, offset: 0x40, size: 0x1, def value: None
  bool culledByRendererList;

  /// @brief Field hasSideEffect, offset: 0x41, size: 0x1, def value: None
  bool hasSideEffect;

  /// @brief Field enableFoveatedRasterization, offset: 0x42, size: 0x1, def value: None
  bool enableFoveatedRasterization;

  /// @brief Field extendedFeatureFlags, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags;

  /// @brief Field hasShadingRateImage, offset: 0x48, size: 0x1, def value: None
  bool hasShadingRateImage;

  /// @brief Field hasShadingRateStates, offset: 0x49, size: 0x1, def value: None
  bool hasShadingRateStates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, resourceCreateList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, resourceReleaseList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, fence) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, refCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, syncToPassIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, syncFromPassIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, enableAsyncCompute) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, allowPassCulling) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, needGraphicsFence) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, culled) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, culledByRendererList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, hasSideEffect) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, enableFoveatedRasterization) == 0x42, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, extendedFeatureFlags) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, hasShadingRateImage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo, hasShadingRateStates) == 0x49, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo) == 0x50, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/ICompiledGraph
class CORDL_TYPE RenderGraph_ICompiledGraph {
public:
  // Declarations
  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_ICompiledGraph", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_ICompiledGraph(RenderGraph_ICompiledGraph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9298 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.Rendering.DynamicArray`1<T>, UnityEngine.Rendering.RenderGraphModule.RenderGraph::CompiledResourceInfo
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/CompiledGraph
class CORDL_TYPE RenderGraph_CompiledGraph : public ::System::Object {
public:
  // Declarations
  /// @brief Field compiledPassInfos, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_compiledPassInfos,
      put = __cordl_internal_set_compiledPassInfos)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* compiledPassInfos;

  /// @brief Field compiledResourcesInfos, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_compiledResourcesInfos,
      put = __cordl_internal_set_compiledResourcesInfos)) ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>
      compiledResourcesInfos;

  /// @brief Field lastExecutionFrame, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lastExecutionFrame, put = __cordl_internal_set_lastExecutionFrame)) int32_t lastExecutionFrame;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*() noexcept;

  /// @brief Method Clear, addr 0x6bf7ee4, size 0xa0, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method InitResourceInfosData, addr 0x6c0048c, size 0xd8, virtual false, abstract: false, final false
  inline void InitResourceInfosData(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>* resourceInfos, int32_t count);

  /// @brief Method InitializeCompilationData, addr 0x6bfb39c, size 0x1d4, virtual false, abstract: false, final false
  inline void InitializeCompilationData(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* passes,
                                        ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* New_ctor();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* const& __cordl_internal_get_compiledPassInfos() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>*& __cordl_internal_get_compiledPassInfos();

  constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*> const&
  __cordl_internal_get_compiledResourcesInfos() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>& __cordl_internal_get_compiledResourcesInfos();

  constexpr int32_t const& __cordl_internal_get_lastExecutionFrame() const;

  constexpr int32_t& __cordl_internal_get_lastExecutionFrame();

  constexpr void __cordl_internal_set_compiledPassInfos(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* value);

  constexpr void __cordl_internal_set_compiledResourcesInfos(::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*> value);

  constexpr void __cordl_internal_set_lastExecutionFrame(int32_t value);

  /// @brief Method .ctor, addr 0x6bf409c, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph* i___UnityEngine__Rendering__RenderGraphModule__RenderGraph_ICompiledGraph() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_CompiledGraph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_CompiledGraph", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_CompiledGraph(RenderGraph_CompiledGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_CompiledGraph", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_CompiledGraph(RenderGraph_CompiledGraph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9299 };

  /// @brief Field compiledResourcesInfos, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*> ___compiledResourcesInfos;

  /// @brief Field compiledPassInfos, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* ___compiledPassInfos;

  /// @brief Field lastExecutionFrame, offset: 0x20, size: 0x4, def value: None
  int32_t ___lastExecutionFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph, ___compiledResourcesInfos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph, ___compiledPassInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph, ___lastExecutionFrame) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/ProfilingScopePassData
class CORDL_TYPE RenderGraph_ProfilingScopePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field sampler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sampler, put = __cordl_internal_set_sampler)) ::UnityEngine::Rendering::ProfilingSampler* sampler;

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData* New_ctor();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_sampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_sampler();

  constexpr void __cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x6c00564, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_ProfilingScopePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_ProfilingScopePassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_ProfilingScopePassData(RenderGraph_ProfilingScopePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_ProfilingScopePassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_ProfilingScopePassData(RenderGraph_ProfilingScopePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9300 };

  /// @brief Field sampler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___sampler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData, ___sampler) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/OnGraphRegisteredDelegate
class CORDL_TYPE RenderGraph_OnGraphRegisteredDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c005f8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW graphName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6c00618, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6c005e4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW graphName);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6c00568, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_OnGraphRegisteredDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_OnGraphRegisteredDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_OnGraphRegisteredDelegate(RenderGraph_OnGraphRegisteredDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_OnGraphRegisteredDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_OnGraphRegisteredDelegate(RenderGraph_OnGraphRegisteredDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9301 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/OnExecutionRegisteredDelegate
class CORDL_TYPE RenderGraph_OnExecutionRegisteredDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c006bc, size 0x9c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW graphName, ::UnityEngine::EntityId executionId, ::StringW executionName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6c00758, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6c006a4, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::StringW graphName, ::UnityEngine::EntityId executionId, ::StringW executionName);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6c00624, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph_OnExecutionRegisteredDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_OnExecutionRegisteredDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph_OnExecutionRegisteredDelegate(RenderGraph_OnExecutionRegisteredDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph_OnExecutionRegisteredDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph_OnExecutionRegisteredDelegate(RenderGraph_OnExecutionRegisteredDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9302 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph/<>c
class CORDL_TYPE RenderGraph___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* __9;

  /// @brief Field <>9__134_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__134_0,
                      put = setStaticF___9__134_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__134_0;

  /// @brief Field <>9__135_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__135_0,
                      put = setStaticF___9__135_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__135_0;

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* New_ctor();

  /// @brief Method <BeginProfilingSampler>b__134_0, addr 0x6c007bc, size 0x88, virtual false, abstract: false, final false
  inline void _BeginProfilingSampler_b__134_0(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData* data,
                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx);

  /// @brief Method <EndProfilingSampler>b__135_0, addr 0x6c00844, size 0x88, virtual false, abstract: false, final false
  inline void _EndProfilingSampler_b__135_0(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData* data,
                                            ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx);

  /// @brief Method .ctor, addr 0x6c007b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__134_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__135_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* value);

  static inline void setStaticF___9__134_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__135_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph___c(RenderGraph___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph___c(RenderGraph___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9303 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// [MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
// Dependencies System.Collections.Generic.List`1<T>, System.Nullable`1<T>, System.Object, UnityEngine.EntityId, UnityEngine.Rendering.RenderGraphModule.RenderGraphState,
// UnityEngine.Rendering.RenderGraphModule.RenderTextureUVOriginStrategy, UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraph
class CORDL_TYPE RenderGraph : public ::System::Object {
public:
  // Declarations
  using CompiledGraph = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph;

  using CompiledPassInfo = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo;

  using CompiledResourceInfo = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo;

  using DebugData = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData;

  using DebugDataSerialization = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugDataSerialization;

  using DebugExecutionItem = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem;

  using ICompiledGraph = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph;

  using OnExecutionRegisteredDelegate = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate;

  using OnGraphRegisteredDelegate = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate;

  using ProfilingScopePassData = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData;

  using RenderGraphExceptionMessages = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_RenderGraphExceptionMessages;

  using __c = ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c;

  __declspec(property(get = get_RenderGraphState, put = set_RenderGraphState)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState RenderGraphState;

  /// @brief Field <enableValidityChecks>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__enableValidityChecks_k__BackingField, put = setStaticF__enableValidityChecks_k__BackingField)) bool _enableValidityChecks_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField)) ::StringW _name_k__BackingField;

  /// @brief Field <nativeRenderPassesEnabled>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__nativeRenderPassesEnabled_k__BackingField,
                      put = __cordl_internal_set__nativeRenderPassesEnabled_k__BackingField)) bool _nativeRenderPassesEnabled_k__BackingField;

  __declspec(property(get = get_areAnySettingsActive)) bool areAnySettingsActive;

  __declspec(property(get = get_debugParams)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* debugParams;

  __declspec(property(get = get_defaultResources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* defaultResources;

  /// @brief Field kMaxMRTCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kMaxMRTCount, put = setStaticF_kMaxMRTCount)) int32_t kMaxMRTCount;

  /// @brief Field m_CompilationCache, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CompilationCache, put = __cordl_internal_set_m_CompilationCache)) ::GlobalNamespace::RenderGraphCompilationCache* m_CompilationCache;

  /// @brief Field m_CullingStack, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CullingStack, put = __cordl_internal_set_m_CullingStack)) ::System::Collections::Generic::Stack_1<int32_t>* m_CullingStack;

  /// @brief Field m_CurrentCompiledGraph, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentCompiledGraph,
                      put = __cordl_internal_set_m_CurrentCompiledGraph)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* m_CurrentCompiledGraph;

  /// @brief Field m_CurrentExecutionCanGenerateDebugData, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CurrentExecutionCanGenerateDebugData,
                      put = __cordl_internal_set_m_CurrentExecutionCanGenerateDebugData)) bool m_CurrentExecutionCanGenerateDebugData;

  /// @brief Field m_CurrentExecutionId, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentExecutionId, put = __cordl_internal_set_m_CurrentExecutionId)) ::UnityEngine::EntityId m_CurrentExecutionId;

  /// @brief Field m_CurrentFrameIndex, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentFrameIndex, put = __cordl_internal_set_m_CurrentFrameIndex)) int32_t m_CurrentFrameIndex;

  /// @brief Field m_CurrentImmediatePassIndex, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentImmediatePassIndex, put = __cordl_internal_set_m_CurrentImmediatePassIndex)) int32_t m_CurrentImmediatePassIndex;

  /// @brief Field m_DebugParameters, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugParameters,
                      put = __cordl_internal_set_m_DebugParameters)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* m_DebugParameters;

  /// @brief Field m_DefaultCompiledGraph, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultCompiledGraph,
                      put = __cordl_internal_set_m_DefaultCompiledGraph)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* m_DefaultCompiledGraph;

  /// @brief Field m_DefaultProfilingSamplers, offset 0x60, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_DefaultProfilingSamplers,
      put = __cordl_internal_set_m_DefaultProfilingSamplers)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* m_DefaultProfilingSamplers;

  /// @brief Field m_DefaultResources, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultResources,
                      put = __cordl_internal_set_m_DefaultResources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* m_DefaultResources;

  /// @brief Field m_EnableCompilationCaching, offset 0xae, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableCompilationCaching, put = __cordl_internal_set_m_EnableCompilationCaching)) bool m_EnableCompilationCaching;

  /// @brief Field m_ExecutionCount, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ExecutionCount, put = __cordl_internal_set_m_ExecutionCount)) int32_t m_ExecutionCount;

  /// @brief Field m_ExecutionExceptionWasRaised, offset 0xac, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExecutionExceptionWasRaised, put = __cordl_internal_set_m_ExecutionExceptionWasRaised)) bool m_ExecutionExceptionWasRaised;

  /// @brief Field m_FrameInformationLogger, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FrameInformationLogger,
                      put = __cordl_internal_set_m_FrameInformationLogger)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* m_FrameInformationLogger;

  /// @brief Field m_ImmediateModeResourceList, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ImmediateModeResourceList, put = __cordl_internal_set_m_ImmediateModeResourceList)) ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>
      m_ImmediateModeResourceList;

  /// @brief Field m_PreviousCommandBuffer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousCommandBuffer, put = __cordl_internal_set_m_PreviousCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* m_PreviousCommandBuffer;

  /// @brief Field m_RenderGraphContext, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphContext,
                      put = __cordl_internal_set_m_RenderGraphContext)) ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* m_RenderGraphContext;

  /// @brief Field m_RenderGraphPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphPool,
                      put = __cordl_internal_set_m_RenderGraphPool)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* m_RenderGraphPool;

  /// @brief Field m_RenderGraphState, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderGraphState, put = __cordl_internal_set_m_RenderGraphState)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState m_RenderGraphState;

  /// @brief Field m_RenderPasses, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderPasses,
                      put = __cordl_internal_set_m_RenderPasses)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* m_RenderPasses;

  /// @brief Field m_RendererListCulling, offset 0xad, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RendererListCulling, put = __cordl_internal_set_m_RendererListCulling)) bool m_RendererListCulling;

  /// @brief Field m_RendererLists, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RendererLists,
                      put = __cordl_internal_set_m_RendererLists)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* m_RendererLists;

  /// @brief Field m_Resources, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resources, put = __cordl_internal_set_m_Resources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources;

  /// @brief Field m_TempMRTArrays, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempMRTArrays, put = __cordl_internal_set_m_TempMRTArrays)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> m_TempMRTArrays;

  /// @brief Field m_builderInstance, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_builderInstance, put = __cordl_internal_set_m_builderInstance)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* m_builderInstance;

  /// @brief Field m_renderTextureUVOriginStrategy, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_renderTextureUVOriginStrategy,
                      put = __cordl_internal_set_m_renderTextureUVOriginStrategy)) ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy m_renderTextureUVOriginStrategy;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  /// @brief Field nativeCompiler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nativeCompiler,
                      put = __cordl_internal_set_nativeCompiler)) ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* nativeCompiler;

  __declspec(property(get = get_nativeRenderPassesEnabled, put = set_nativeRenderPassesEnabled)) bool nativeRenderPassesEnabled;

  /// @brief Field onExecutionRegistered, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onExecutionRegistered,
                      put = setStaticF_onExecutionRegistered)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* onExecutionRegistered;

  /// @brief Field onGraphRegistered, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onGraphRegistered, put = setStaticF_onGraphRegistered)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* onGraphRegistered;

  /// @brief Field onGraphUnregistered, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onGraphUnregistered,
                      put = setStaticF_onGraphUnregistered)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* onGraphUnregistered;

  /// @brief Field registeredGlobals, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredGlobals,
                      put =
                          __cordl_internal_set_registeredGlobals)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* registeredGlobals;

  __declspec(property(get = get_renderTextureUVOriginStrategy,
                      put = set_renderTextureUVOriginStrategy)) ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy renderTextureUVOriginStrategy;

  /// @brief Field s_DebugSessionWasActive, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_DebugSessionWasActive, put = setStaticF_s_DebugSessionWasActive)) bool s_DebugSessionWasActive;

  /// @brief Field s_EnableCompilationCachingForTests, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_s_EnableCompilationCachingForTests, put = setStaticF_s_EnableCompilationCachingForTests)) ::System::Nullable_1<bool> s_EnableCompilationCachingForTests;

  /// @brief Field s_RegisteredExecutions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RegisteredExecutions, put = setStaticF_s_RegisteredExecutions)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*>*
      s_RegisteredExecutions;

  /// @brief Method AddComputePass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder* AddComputePass(::StringW passName, ::by_ref<PassData> passData, /* [CallerFilePath] */ ::StringW file,
                                                                                                 /* [CallerLineNumber] */ int32_t line);

  /// @brief Method AddComputePass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder* AddComputePass(::StringW passName, ::by_ref<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler,
                                                                                                 /* [CallerFilePath] */ ::StringW file, /* [CallerLineNumber] */ int32_t line);

  /// [Conditional("UNITY_EDITOR")]
  /// [Conditional("DEVELOPMENT_BUILD")]
  /// @brief Method AddPassDebugMetadata, addr 0x6bf3284, size 0x4, virtual false, abstract: false, final false
  inline void AddPassDebugMetadata(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* renderPass, ::StringW file, int32_t line);

  /// @brief Method AddRasterRenderPass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* AddRasterRenderPass(::StringW passName, ::by_ref<PassData> passData, /* [CallerFilePath] */ ::StringW file,
                                                                                                     /* [CallerLineNumber] */ int32_t line);

  /// @brief Method AddRasterRenderPass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* AddRasterRenderPass(::StringW passName, ::by_ref<PassData> passData,
                                                                                                     ::UnityEngine::Rendering::ProfilingSampler* sampler, /* [CallerFilePath] */ ::StringW file,
                                                                                                     /* [CallerLineNumber] */ int32_t line);

  /// [Obsolete("AddRenderPass() is deprecated, use AddRasterRenderPass/AddComputePass/AddUnsafePass() instead.")]
  /// @brief Method AddRenderPass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder AddRenderPass(::StringW passName, ::by_ref<PassData> passData, /* [CallerFilePath] */ ::StringW file,
                                                                                       /* [CallerLineNumber] */ int32_t line);

  /// [Obsolete("AddRenderPass() is deprecated, use AddRasterRenderPass/AddComputePass/AddUnsafePass() instead.")]
  /// @brief Method AddRenderPass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder AddRenderPass(::StringW passName, ::by_ref<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler,
                                                                                       /* [CallerFilePath] */ ::StringW file, /* [CallerLineNumber] */ int32_t line);

  /// @brief Method AddUnsafePass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* AddUnsafePass(::StringW passName, ::by_ref<PassData> passData, /* [CallerFilePath] */ ::StringW file,
                                                                                               /* [CallerLineNumber] */ int32_t line);

  /// @brief Method AddUnsafePass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* AddUnsafePass(::StringW passName, ::by_ref<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler,
                                                                                               /* [CallerFilePath] */ ::StringW file, /* [CallerLineNumber] */ int32_t line);

  /// @brief Method AllGlobals, addr 0x6bff27c, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2_ValueCollection<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* AllGlobals();

  /// @brief Method AllocateCulledPassResources, addr 0x6bfa358, size 0x36c, virtual false, abstract: false, final false
  inline void AllocateCulledPassResources(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo);

  /// @brief Method AreRendererListsEmpty, addr 0x6bfafcc, size 0x1d4, virtual false, abstract: false, final false
  inline bool AreRendererListsEmpty(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* rendererLists);

  /// @brief Method BeginProfilingSampler, addr 0x6bf75c0, size 0x3d8, virtual false, abstract: false, final false
  inline void BeginProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* sampler, /* [CallerFilePath] */ ::StringW file, /* [CallerLineNumber] */ int32_t line);

  /// @brief Method BeginRecording, addr 0x6bf6468, size 0x304, virtual false, abstract: false, final false
  inline void BeginRecording(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters> parameters);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckNotUsedWhenActive, addr 0x6bf6264, size 0x104, virtual false, abstract: false, final false
  inline void CheckNotUsedWhenActive();

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckNotUsedWhenExecuting, addr 0x6bf5ac4, size 0x104, virtual false, abstract: false, final false
  inline void CheckNotUsedWhenExecuting();

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckNotUsedWhenIdle, addr 0x6bf6368, size 0x100, virtual false, abstract: false, final false
  inline void CheckNotUsedWhenIdle();

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckNotUsedWhenRecordPassOrExecute, addr 0x6bf5e64, size 0x10c, virtual false, abstract: false, final false
  inline void CheckNotUsedWhenRecordPassOrExecute();

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckNotUsedWhenRecordingGraph, addr 0x6bf5d60, size 0x104, virtual false, abstract: false, final false
  inline void CheckNotUsedWhenRecordingGraph();

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckNotUsedWhenRecordingPass, addr 0x6bf5f70, size 0x104, virtual false, abstract: false, final false
  inline void CheckNotUsedWhenRecordingPass();

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckNotUsingNativeRenderPassCompiler, addr 0x6bf6074, size 0xf4, virtual false, abstract: false, final false
  inline void CheckNotUsingNativeRenderPassCompiler();

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckUsingNativeRenderPassCompiler, addr 0x6bf6168, size 0xfc, virtual false, abstract: false, final false
  inline void CheckUsingNativeRenderPassCompiler();

  /// @brief Method Cleanup, addr 0x6bf43d0, size 0x2c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CleanupResourcesAndGraph, addr 0x6bf4308, size 0xbc, virtual false, abstract: false, final false
  inline void CleanupResourcesAndGraph();

  /// @brief Method ClearCacheIfNewActiveDebugSession, addr 0x6bfd650, size 0xe0, virtual false, abstract: false, final false
  inline void ClearCacheIfNewActiveDebugSession();

  /// @brief Method ClearCompiledGraph, addr 0x6bf6e90, size 0xd0, virtual false, abstract: false, final false
  inline void ClearCompiledGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* compiledGraph, bool useCompilationCaching);

  /// @brief Method ClearCurrentCompiledGraph, addr 0x6bf43c4, size 0xc, virtual false, abstract: false, final false
  inline void ClearCurrentCompiledGraph();

  /// @brief Method ClearGlobalBindings, addr 0x6bf73e0, size 0x1e0, virtual false, abstract: false, final false
  inline void ClearGlobalBindings();

  /// @brief Method ClearRenderPasses, addr 0x6bf7d88, size 0x15c, virtual false, abstract: false, final false
  inline void ClearRenderPasses();

  /// @brief Method CompileNativeRenderGraph, addr 0x6bf3288, size 0x2e0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* CompileNativeRenderGraph(int32_t graphHash);

  /// @brief Method CompilePassImmediatly, addr 0x6bfb688, size 0x7fc, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> CompilePassImmediatly(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method CompileRenderGraph, addr 0x6bf71b0, size 0x120, virtual false, abstract: false, final false
  inline void CompileRenderGraph(int32_t graphHash);

  /// @brief Method ComputeGraphHash, addr 0x6bf7098, size 0x118, virtual false, abstract: false, final false
  inline int32_t ComputeGraphHash();

  /// @brief Method CountReferences, addr 0x6bf8578, size 0x6b4, virtual false, abstract: false, final false
  inline void CountReferences();

  /// @brief Method CreateBuffer, addr 0x6bf5a00, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc);

  /// @brief Method CreateBuffer, addr 0x6bf5a28, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> graphicsBuffer);

  /// @brief Method CreateGizmoRendererList, addr 0x6bf57dc, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateGizmoRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                 /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GizmoSubset> gizmoSubset);

  /// @brief Method CreateRendererList, addr 0x6bf5784, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RendererListParams> desc);

  /// @brief Method CreateRendererList, addr 0x6bf5760, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc);

  /// @brief Method CreateRendererLists, addr 0x6bf9efc, size 0x148, virtual false, abstract: false, final false
  inline void CreateRendererLists();

  /// @brief Method CreateShadowRendererList, addr 0x6bf57a8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateShadowRendererList(::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings> shadowDrawingSettings);

  /// [Obsolete("CreateSharedTexture() and shared texture workflow are deprecated, use ImportTexture() workflow instead.")]
  /// @brief Method CreateSharedTexture, addr 0x6bf5464, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateSharedTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc,
                                                                                        bool explicitRelease);

  /// @brief Method CreateSkyboxRendererList, addr 0x6bf58c0, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera*> camera);

  /// @brief Method CreateSkyboxRendererList, addr 0x6bf58f4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera*> camera, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                                                  ::UnityEngine::Matrix4x4 viewMatrix);

  /// @brief Method CreateSkyboxRendererList, addr 0x6bf595c, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                  ::UnityEngine::Matrix4x4 projectionMatrixL, ::UnityEngine::Matrix4x4 viewMatrixL,
                                                                                                  ::UnityEngine::Matrix4x4 projectionMatrixR, ::UnityEngine::Matrix4x4 viewMatrixR);

  /// @brief Method CreateTexture, addr 0x6bf5448, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method CreateTexture, addr 0x6bf54e4, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method CreateTexture, addr 0x6bf552c, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture, ::StringW name, bool clear);

  /// @brief Method CreateTextureIfInvalid, addr 0x6bf55d0, size 0x140, virtual false, abstract: false, final false
  inline void CreateTextureIfInvalid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc,
                                     ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture);

  /// @brief Method CreateUIOverlayRendererList, addr 0x6bf5814, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateUIOverlayRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera*> camera);

  /// @brief Method CreateUIOverlayRendererList, addr 0x6bf5854, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateUIOverlayRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UISubset> uiSubset);

  /// @brief Method CreateWireOverlayRendererList, addr 0x6bf588c, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateWireOverlayRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera*> camera);

  /// @brief Method CullRendererLists, addr 0x6bfb284, size 0x118, virtual false, abstract: false, final false
  inline void CullRendererLists();

  /// @brief Method CullUnusedPasses, addr 0x6bf8c2c, size 0x5b8, virtual false, abstract: false, final false
  inline void CullUnusedPasses();

  /// @brief Method EndFrame, addr 0x6bf50a8, size 0x70, virtual false, abstract: false, final false
  inline void EndFrame();

  /// @brief Method EndProfilingSampler, addr 0x6bf7998, size 0x3d8, virtual false, abstract: false, final false
  inline void EndProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* sampler, /* [CallerFilePath] */ ::StringW file, /* [CallerLineNumber] */ int32_t line);

  /// @brief Method EndRecordingAndExecute, addr 0x6bf6c0c, size 0x68, virtual false, abstract: false, final false
  inline void EndRecordingAndExecute();

  /// @brief Method Execute, addr 0x6bf6c74, size 0xd0, virtual false, abstract: false, final false
  inline void Execute();

  /// @brief Method ExecuteCompiledPass, addr 0x6bfc0c4, size 0x374, virtual false, abstract: false, final false
  inline void ExecuteCompiledPass(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo);

  /// @brief Method ExecuteNativeRenderGraph, addr 0x6bf3568, size 0x9c, virtual false, abstract: false, final false
  inline void ExecuteNativeRenderGraph();

  /// @brief Method ExecutePassImmediately, addr 0x6bf7fbc, size 0x1c, virtual false, abstract: false, final false
  inline void ExecutePassImmediately(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method ExecuteRenderGraph, addr 0x6bf72d0, size 0x110, virtual false, abstract: false, final false
  inline void ExecuteRenderGraph();

  /// @brief Method FindTextureProducer, addr 0x6bf9aec, size 0x12c, virtual false, abstract: false, final false
  inline int32_t FindTextureProducer(int32_t consumerPass, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info, ::by_ref<int32_t> index);

  /// @brief Method GenerateCompilerDebugData, addr 0x6bfdef8, size 0x1048, virtual false, abstract: false, final false
  inline void GenerateCompilerDebugData(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*> debugData);

  /// @brief Method GenerateDebugData, addr 0x6bfd730, size 0x5e8, virtual false, abstract: false, final false
  inline void GenerateDebugData(int32_t graphHash);

  /// @brief Method GetBufferDesc, addr 0x6bf5a68, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferDesc GetBufferDesc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> graphicsBuffer);

  /// @brief Method GetCompiledPassInfos, addr 0x6bf7d70, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* GetCompiledPassInfos();

  /// @brief Method GetDefaultProfilingSampler, addr 0x6bfd4dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* GetDefaultProfilingSampler(::StringW name);

  /// @brief Method GetExecutionNameAllocates, addr 0x6bf678c, size 0x114, virtual false, abstract: false, final false
  static inline ::StringW GetExecutionNameAllocates(::UnityEngine::EntityId entityId);

  /// @brief Method GetFirstValidConsumerIndex, addr 0x6bf9990, size 0x15c, virtual false, abstract: false, final false
  inline int32_t GetFirstValidConsumerIndex(int32_t passIndex, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info);

  /// @brief Method GetFirstValidWriteIndex, addr 0x6bf9d08, size 0x104, virtual false, abstract: false, final false
  inline int32_t GetFirstValidWriteIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info);

  /// @brief Method GetGlobal, addr 0x6bff2d0, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle GetGlobal(int32_t globalPropertyId);

  /// @brief Method GetImportedFallback, addr 0x6bfa044, size 0x314, virtual false, abstract: false, final false
  inline bool GetImportedFallback(::UnityEngine::Rendering::RenderGraphModule::TextureDesc desc, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> fallback);

  /// @brief Method GetLatestProducerIndex, addr 0x6bf9820, size 0x170, virtual false, abstract: false, final false
  inline int32_t GetLatestProducerIndex(int32_t passIndex, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info);

  /// @brief Method GetLatestValidReadIndex, addr 0x6bf9c18, size 0xf0, virtual false, abstract: false, final false
  inline int32_t GetLatestValidReadIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info);

  /// @brief Method GetLatestValidWriteIndex, addr 0x6bf9e0c, size 0xf0, virtual false, abstract: false, final false
  inline int32_t GetLatestValidWriteIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info);

  /// @brief Method GetRegisteredExecutions, addr 0x6bf504c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                             ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*>*
  GetRegisteredExecutions();

  /// @brief Method GetRegisteredRenderGraphs, addr 0x6bf4f74, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>* GetRegisteredRenderGraphs();

  /// @brief Method GetRenderTargetInfo, addr 0x6bf5710, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo GetRenderTargetInfo(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method GetTextureDesc, addr 0x6bf559c, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc GetTextureDesc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture);

  /// @brief Method GetWidgetList, addr 0x6bf44bc, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* GetWidgetList();

  /// @brief Method ImportBackbuffer, addr 0x6bf53e4, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method ImportBackbuffer, addr 0x6bf53a8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo info,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams importParams);

  /// @brief Method ImportBuffer, addr 0x6bee560, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ImportBuffer(::UnityEngine::GraphicsBuffer* graphicsBuffer);

  /// [Obsolete("ImportBuffer with forceRelease parameter is deprecated. Use ImportBuffer without it instead. #from(6000.3)")]
  /// @brief Method ImportBuffer, addr 0x6bf59ec, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ImportBuffer(::UnityEngine::GraphicsBuffer* graphicsBuffer, bool forceRelease);

  /// @brief Method ImportRayTracingAccelerationStructure, addr 0x6bf5aa0, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle
  ImportRayTracingAccelerationStructure(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure*> accelStruct, ::StringW name);

  /// @brief Method ImportShadingRateImageTexture, addr 0x6bedc4c, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportShadingRateImageTexture(::UnityEngine::Rendering::RTHandle* rt);

  /// @brief Method ImportTexture, addr 0x6bedd40, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::UnityEngine::Rendering::RTHandle* rt);

  /// @brief Method ImportTexture, addr 0x6bf5300, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::UnityEngine::Rendering::RTHandle* rt,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams importParams);

  /// @brief Method ImportTexture, addr 0x6bf5328, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::UnityEngine::Rendering::RTHandle* rt, ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo info,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams importParams);

  /// @brief Method ImportTexture, addr 0x6bf5368, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::UnityEngine::Rendering::RTHandle* rt, bool isBuiltin);

  /// @brief Method InvalidateContext, addr 0x6bf6f60, size 0x20, virtual false, abstract: false, final false
  inline void InvalidateContext();

  /// @brief Method IsGlobal, addr 0x6bff200, size 0x7c, virtual false, abstract: false, final false
  inline bool IsGlobal(int32_t globalPropertyId);

  /// @brief Method LogCulledPasses, addr 0x6bf9274, size 0x448, virtual false, abstract: false, final false
  inline void LogCulledPasses();

  /// @brief Method LogFrameInformation, addr 0x6bf69e0, size 0x22c, virtual false, abstract: false, final false
  inline void LogFrameInformation();

  /// @brief Method LogRenderPassBegin, addr 0x6bfc438, size 0x35c, virtual false, abstract: false, final false
  inline void LogRenderPassBegin(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo);

  /// @brief Method LogRendererListsCreation, addr 0x6bfb570, size 0x118, virtual false, abstract: false, final false
  inline void LogRendererListsCreation();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* New_ctor(::StringW name);

  /// @brief Method OnPassAdded, addr 0x6bf7f84, size 0x38, virtual false, abstract: false, final false
  inline void OnPassAdded(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method PostRenderPassExecute, addr 0x6bfcb14, size 0x3cc, virtual false, abstract: false, final false
  inline void PostRenderPassExecute(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass,
                                    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext);

  /// @brief Method PreRenderPassExecute, addr 0x6bfc7b8, size 0x35c, virtual false, abstract: false, final false
  inline void PreRenderPassExecute(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo,
                                   ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass, ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext);

  /// @brief Method PreRenderPassSetRenderTargets, addr 0x6bfcee0, size 0x5fc, virtual false, abstract: false, final false
  inline void PreRenderPassSetRenderTargets(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo,
                                            ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass, ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext);

  /// [Obsolete("RefreshSharedTextureDesc() and shared texture workflow are deprecated, use ImportTexture() workflow instead.")]
  /// @brief Method RefreshSharedTextureDesc, addr 0x6bf5480, size 0x34, virtual false, abstract: false, final false
  inline void RefreshSharedTextureDesc(::UnityEngine::Rendering::RenderGraphModule::TextureHandle handle, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method RegisterDebug, addr 0x6bf4d58, size 0x20, virtual false, abstract: false, final false
  inline void RegisterDebug(::UnityEngine::Rendering::DebugUI_Panel* panel);

  /// @brief Method RegisterGraph, addr 0x6bf41e8, size 0x120, virtual false, abstract: false, final false
  inline void RegisterGraph();

  /// @brief Method ReleaseImmediateModeResources, addr 0x6bf6d44, size 0x14c, virtual false, abstract: false, final false
  inline void ReleaseImmediateModeResources();

  /// [Obsolete("ReleaseSharedTexture() and shared texture workflow are deprecated, use ImportTexture() workflow instead.")]
  /// @brief Method ReleaseSharedTexture, addr 0x6bf54b4, size 0x30, virtual false, abstract: false, final false
  inline void ReleaseSharedTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method ResetGraphAndLogException, addr 0x6bf6f80, size 0x118, virtual false, abstract: false, final false
  inline bool ResetGraphAndLogException(::System::Exception* e);

  /// @brief Method SetGlobal, addr 0x6bff058, size 0x1a8, virtual false, abstract: false, final false
  inline void SetGlobal(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> h, int32_t globalPropertyId);

  /// @brief Method SetIntraFrameMemoryAliasing, addr 0x6bff34c, size 0x1c, virtual false, abstract: false, final false
  inline void SetIntraFrameMemoryAliasing(bool enabled);

  /// @brief Method TryCullPassAtIndex, addr 0x6bfb1a0, size 0xe4, virtual false, abstract: false, final false
  inline void TryCullPassAtIndex(int32_t passIndex);

  /// @brief Method UnRegisterDebug, addr 0x6bf4ef8, size 0x14, virtual false, abstract: false, final false
  inline void UnRegisterDebug();

  /// @brief Method UnregisterGraph, addr 0x6bf43fc, size 0xb8, virtual false, abstract: false, final false
  inline void UnregisterGraph();

  /// @brief Method UpdateAllSharedResourceLastFrameIndex, addr 0x6bfae9c, size 0x130, virtual false, abstract: false, final false
  inline void UpdateAllSharedResourceLastFrameIndex();

  /// @brief Method UpdateCurrentCompiledGraph, addr 0x6bf69a0, size 0x40, virtual false, abstract: false, final false
  inline bool UpdateCurrentCompiledGraph(int32_t graphHash, bool forceNoCaching);

  /// @brief Method UpdateImportedResourceLifeTime, addr 0x6bfd4e4, size 0x16c, virtual false, abstract: false, final false
  inline void UpdateImportedResourceLifeTime(::by_ref<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData> data, ::System::Collections::Generic::List_1<int32_t>* passList);

  /// @brief Method UpdatePassSynchronization, addr 0x6bf96bc, size 0x28, virtual false, abstract: false, final false
  inline void UpdatePassSynchronization(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> currentPassInfo,
                                        ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> producerPassInfo, int32_t currentPassIndex, int32_t lastProducer,
                                        ::by_ref<int32_t> intLastSyncIndex);

  /// @brief Method UpdateResourceAllocationAndSynchronization, addr 0x6bfa6c4, size 0x7d8, virtual false, abstract: false, final false
  inline void UpdateResourceAllocationAndSynchronization();

  /// @brief Method UpdateResourceSynchronization, addr 0x6bf96e4, size 0x13c, virtual false, abstract: false, final false
  inline void UpdateResourceSynchronization(::by_ref<int32_t> lastGraphicsPipeSync, ::by_ref<int32_t> lastComputePipeSync, int32_t currentPassIndex,
                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> resource);

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr bool const& __cordl_internal_get__nativeRenderPassesEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__nativeRenderPassesEnabled_k__BackingField();

  constexpr ::GlobalNamespace::RenderGraphCompilationCache* const& __cordl_internal_get_m_CompilationCache() const;

  constexpr ::GlobalNamespace::RenderGraphCompilationCache*& __cordl_internal_get_m_CompilationCache();

  constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_m_CullingStack() const;

  constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_m_CullingStack();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* const& __cordl_internal_get_m_CurrentCompiledGraph() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*& __cordl_internal_get_m_CurrentCompiledGraph();

  constexpr bool const& __cordl_internal_get_m_CurrentExecutionCanGenerateDebugData() const;

  constexpr bool& __cordl_internal_get_m_CurrentExecutionCanGenerateDebugData();

  constexpr ::UnityEngine::EntityId const& __cordl_internal_get_m_CurrentExecutionId() const;

  constexpr ::UnityEngine::EntityId& __cordl_internal_get_m_CurrentExecutionId();

  constexpr int32_t const& __cordl_internal_get_m_CurrentFrameIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentFrameIndex();

  constexpr int32_t const& __cordl_internal_get_m_CurrentImmediatePassIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentImmediatePassIndex();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* const& __cordl_internal_get_m_DebugParameters() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*& __cordl_internal_get_m_DebugParameters();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* const& __cordl_internal_get_m_DefaultCompiledGraph() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*& __cordl_internal_get_m_DefaultCompiledGraph();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* const& __cordl_internal_get_m_DefaultProfilingSamplers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>*& __cordl_internal_get_m_DefaultProfilingSamplers();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* const& __cordl_internal_get_m_DefaultResources() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*& __cordl_internal_get_m_DefaultResources();

  constexpr bool const& __cordl_internal_get_m_EnableCompilationCaching() const;

  constexpr bool& __cordl_internal_get_m_EnableCompilationCaching();

  constexpr int32_t const& __cordl_internal_get_m_ExecutionCount() const;

  constexpr int32_t& __cordl_internal_get_m_ExecutionCount();

  constexpr bool const& __cordl_internal_get_m_ExecutionExceptionWasRaised() const;

  constexpr bool& __cordl_internal_get_m_ExecutionExceptionWasRaised();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* const& __cordl_internal_get_m_FrameInformationLogger() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*& __cordl_internal_get_m_FrameInformationLogger();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_ImmediateModeResourceList() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>& __cordl_internal_get_m_ImmediateModeResourceList();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_PreviousCommandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_PreviousCommandBuffer();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* const& __cordl_internal_get_m_RenderGraphContext() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*& __cordl_internal_get_m_RenderGraphContext();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* const& __cordl_internal_get_m_RenderGraphPool() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*& __cordl_internal_get_m_RenderGraphPool();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState const& __cordl_internal_get_m_RenderGraphState() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState& __cordl_internal_get_m_RenderGraphState();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* const& __cordl_internal_get_m_RenderPasses() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*& __cordl_internal_get_m_RenderPasses();

  constexpr bool const& __cordl_internal_get_m_RendererListCulling() const;

  constexpr bool& __cordl_internal_get_m_RendererListCulling();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* const& __cordl_internal_get_m_RendererLists() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*& __cordl_internal_get_m_RendererLists();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* const& __cordl_internal_get_m_Resources() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*& __cordl_internal_get_m_Resources();

  constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> const& __cordl_internal_get_m_TempMRTArrays() const;

  constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>& __cordl_internal_get_m_TempMRTArrays();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* const& __cordl_internal_get_m_builderInstance() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*& __cordl_internal_get_m_builderInstance();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy const& __cordl_internal_get_m_renderTextureUVOriginStrategy() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy& __cordl_internal_get_m_renderTextureUVOriginStrategy();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* const& __cordl_internal_get_nativeCompiler() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*& __cordl_internal_get_nativeCompiler();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* const& __cordl_internal_get_registeredGlobals() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*& __cordl_internal_get_registeredGlobals();

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__nativeRenderPassesEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_CompilationCache(::GlobalNamespace::RenderGraphCompilationCache* value);

  constexpr void __cordl_internal_set_m_CullingStack(::System::Collections::Generic::Stack_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_CurrentCompiledGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* value);

  constexpr void __cordl_internal_set_m_CurrentExecutionCanGenerateDebugData(bool value);

  constexpr void __cordl_internal_set_m_CurrentExecutionId(::UnityEngine::EntityId value);

  constexpr void __cordl_internal_set_m_CurrentFrameIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentImmediatePassIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DebugParameters(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* value);

  constexpr void __cordl_internal_set_m_DefaultCompiledGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* value);

  constexpr void __cordl_internal_set_m_DefaultProfilingSamplers(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* value);

  constexpr void __cordl_internal_set_m_DefaultResources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* value);

  constexpr void __cordl_internal_set_m_EnableCompilationCaching(bool value);

  constexpr void __cordl_internal_set_m_ExecutionCount(int32_t value);

  constexpr void __cordl_internal_set_m_ExecutionExceptionWasRaised(bool value);

  constexpr void __cordl_internal_set_m_FrameInformationLogger(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* value);

  constexpr void __cordl_internal_set_m_ImmediateModeResourceList(::ArrayW<::System::Collections::Generic::List_1<int32_t>*> value);

  constexpr void __cordl_internal_set_m_PreviousCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_m_RenderGraphContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* value);

  constexpr void __cordl_internal_set_m_RenderGraphPool(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* value);

  constexpr void __cordl_internal_set_m_RenderGraphState(::UnityEngine::Rendering::RenderGraphModule::RenderGraphState value);

  constexpr void __cordl_internal_set_m_RenderPasses(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* value);

  constexpr void __cordl_internal_set_m_RendererListCulling(bool value);

  constexpr void __cordl_internal_set_m_RendererLists(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* value);

  constexpr void __cordl_internal_set_m_Resources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);

  constexpr void __cordl_internal_set_m_TempMRTArrays(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> value);

  constexpr void __cordl_internal_set_m_builderInstance(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* value);

  constexpr void __cordl_internal_set_m_renderTextureUVOriginStrategy(::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy value);

  constexpr void __cordl_internal_set_nativeCompiler(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* value);

  constexpr void __cordl_internal_set_registeredGlobals(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* value);

  /// @brief Method .ctor, addr 0x6bf3950, size 0x698, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// [CompilerGenerated]
  /// @brief Method add_onExecutionRegistered, addr 0x6bf8398, size 0xf0, virtual false, abstract: false, final false
  static inline void add_onExecutionRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value);

  /// [CompilerGenerated]
  /// @brief Method add_onGraphRegistered, addr 0x6bf7fd8, size 0xf0, virtual false, abstract: false, final false
  static inline void add_onGraphRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  /// [CompilerGenerated]
  /// @brief Method add_onGraphUnregistered, addr 0x6bf81b8, size 0xf0, virtual false, abstract: false, final false
  static inline void add_onGraphUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  static inline bool getStaticF__enableValidityChecks_k__BackingField();

  static inline int32_t getStaticF_kMaxMRTCount();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* getStaticF_onExecutionRegistered();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* getStaticF_onGraphRegistered();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* getStaticF_onGraphUnregistered();

  static inline bool getStaticF_s_DebugSessionWasActive();

  static inline ::System::Nullable_1<bool> getStaticF_s_EnableCompilationCachingForTests();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                             ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*>*
  getStaticF_s_RegisteredExecutions();

  /// @brief Method get_RenderGraphState, addr 0x6bf37a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState get_RenderGraphState();

  /// @brief Method get_areAnySettingsActive, addr 0x6bf4cfc, size 0x14, virtual false, abstract: false, final false
  inline bool get_areAnySettingsActive();

  /// @brief Method get_debugParams, addr 0x6bf44b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* get_debugParams();

  /// @brief Method get_defaultResources, addr 0x6bf3948, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* get_defaultResources();

  /// [CompilerGenerated]
  /// @brief Method get_enableValidityChecks, addr 0x6bf3888, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_enableValidityChecks();

  /// @brief Method get_hasAnyRenderGraphWithNativeRenderPassesEnabled, addr 0x6bf3614, size 0x180, virtual false, abstract: false, final false
  static inline bool get_hasAnyRenderGraphWithNativeRenderPassesEnabled();

  /// @brief Method get_isRenderGraphViewerActive, addr 0x6bf37c4, size 0x50, virtual false, abstract: false, final false
  static inline bool get_isRenderGraphViewerActive();

  /// [CompilerGenerated]
  /// @brief Method get_name, addr 0x6bf3794, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// [CompilerGenerated]
  /// @brief Method get_nativeRenderPassesEnabled, addr 0x6bf3604, size 0x8, virtual false, abstract: false, final false
  inline bool get_nativeRenderPassesEnabled();

  /// @brief Method get_renderTextureUVOriginStrategy, addr 0x6bf37b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy get_renderTextureUVOriginStrategy();

  /// [CompilerGenerated]
  /// @brief Method remove_onExecutionRegistered, addr 0x6bf8488, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onExecutionRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value);

  /// [CompilerGenerated]
  /// @brief Method remove_onGraphRegistered, addr 0x6bf80c8, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onGraphRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  /// [CompilerGenerated]
  /// @brief Method remove_onGraphUnregistered, addr 0x6bf82a8, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_onGraphUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  static inline void setStaticF__enableValidityChecks_k__BackingField(bool value);

  static inline void setStaticF_kMaxMRTCount(int32_t value);

  static inline void setStaticF_onExecutionRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value);

  static inline void setStaticF_onGraphRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  static inline void setStaticF_onGraphUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);

  static inline void setStaticF_s_DebugSessionWasActive(bool value);

  static inline void setStaticF_s_EnableCompilationCachingForTests(::System::Nullable_1<bool> value);

  static inline void setStaticF_s_RegisteredExecutions(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugExecutionItem*>*>* value);

  /// @brief Method set_RenderGraphState, addr 0x6bf37ac, size 0x8, virtual false, abstract: false, final false
  inline void set_RenderGraphState(::UnityEngine::Rendering::RenderGraphModule::RenderGraphState value);

  /// [CompilerGenerated]
  /// @brief Method set_enableValidityChecks, addr 0x6bf38e4, size 0x64, virtual false, abstract: false, final false
  static inline void set_enableValidityChecks(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_name, addr 0x6bf379c, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method set_nativeRenderPassesEnabled, addr 0x6bf360c, size 0x8, virtual false, abstract: false, final false
  inline void set_nativeRenderPassesEnabled(bool value);

  /// @brief Method set_renderTextureUVOriginStrategy, addr 0x6bf37bc, size 0x8, virtual false, abstract: false, final false
  inline void set_renderTextureUVOriginStrategy(::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph(RenderGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph(RenderGraph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9304 };

  /// @brief Field k_BeginProfilingSamplerPassName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_BeginProfilingSamplerPassName{ u"BeginProfile" };

  /// @brief Field k_EndProfilingSamplerPassName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_EndProfilingSamplerPassName{ u"EndProfile" };

  /// @brief Field nativeCompiler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* ___nativeCompiler;

  /// [CompilerGenerated]
  /// @brief Field <nativeRenderPassesEnabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____nativeRenderPassesEnabled_k__BackingField;

  /// @brief Field m_Resources, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* ___m_Resources;

  /// @brief Field m_RenderGraphPool, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* ___m_RenderGraphPool;

  /// @brief Field m_builderInstance, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* ___m_builderInstance;

  /// @brief Field m_RenderPasses, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* ___m_RenderPasses;

  /// @brief Field m_RendererLists, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* ___m_RendererLists;

  /// @brief Field m_DebugParameters, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* ___m_DebugParameters;

  /// @brief Field m_FrameInformationLogger, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* ___m_FrameInformationLogger;

  /// @brief Field m_DefaultResources, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* ___m_DefaultResources;

  /// @brief Field m_DefaultProfilingSamplers, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* ___m_DefaultProfilingSamplers;

  /// @brief Field m_RenderGraphContext, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* ___m_RenderGraphContext;

  /// @brief Field m_PreviousCommandBuffer, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_PreviousCommandBuffer;

  /// @brief Field m_ImmediateModeResourceList, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> ___m_ImmediateModeResourceList;

  /// @brief Field m_CompilationCache, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::RenderGraphCompilationCache* ___m_CompilationCache;

  /// @brief Field m_TempMRTArrays, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> ___m_TempMRTArrays;

  /// @brief Field m_CullingStack, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<int32_t>* ___m_CullingStack;

  /// @brief Field m_CurrentExecutionId, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::EntityId ___m_CurrentExecutionId;

  /// @brief Field m_CurrentExecutionCanGenerateDebugData, offset: 0x9c, size: 0x1, def value: None
  bool ___m_CurrentExecutionCanGenerateDebugData;

  /// @brief Field m_ExecutionCount, offset: 0xa0, size: 0x4, def value: None
  int32_t ___m_ExecutionCount;

  /// @brief Field m_CurrentFrameIndex, offset: 0xa4, size: 0x4, def value: None
  int32_t ___m_CurrentFrameIndex;

  /// @brief Field m_CurrentImmediatePassIndex, offset: 0xa8, size: 0x4, def value: None
  int32_t ___m_CurrentImmediatePassIndex;

  /// @brief Field m_ExecutionExceptionWasRaised, offset: 0xac, size: 0x1, def value: None
  bool ___m_ExecutionExceptionWasRaised;

  /// @brief Field m_RendererListCulling, offset: 0xad, size: 0x1, def value: None
  bool ___m_RendererListCulling;

  /// @brief Field m_EnableCompilationCaching, offset: 0xae, size: 0x1, def value: None
  bool ___m_EnableCompilationCaching;

  /// @brief Field m_DefaultCompiledGraph, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* ___m_DefaultCompiledGraph;

  /// @brief Field m_CurrentCompiledGraph, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* ___m_CurrentCompiledGraph;

  /// @brief Field m_RenderGraphState, offset: 0xc0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphState ___m_RenderGraphState;

  /// @brief Field m_renderTextureUVOriginStrategy, offset: 0xc4, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy ___m_renderTextureUVOriginStrategy;

  /// [CompilerGenerated]
  /// @brief Field <name>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field registeredGlobals, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* ___registeredGlobals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___nativeCompiler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ____nativeRenderPassesEnabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_Resources) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RenderGraphPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_builderInstance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RenderPasses) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RendererLists) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_DebugParameters) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_FrameInformationLogger) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_DefaultResources) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_DefaultProfilingSamplers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RenderGraphContext) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_PreviousCommandBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_ImmediateModeResourceList) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CompilationCache) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_TempMRTArrays) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CullingStack) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentExecutionId) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentExecutionCanGenerateDebugData) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_ExecutionCount) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentFrameIndex) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentImmediatePassIndex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_ExecutionExceptionWasRaised) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RendererListCulling) == 0xad, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_EnableCompilationCaching) == 0xae, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_DefaultCompiledGraph) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentCompiledGraph) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_RenderGraphState) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___m_renderTextureUVOriginStrategy) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ____name_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph, ___registeredGlobals) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraph) == 0xd8, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
