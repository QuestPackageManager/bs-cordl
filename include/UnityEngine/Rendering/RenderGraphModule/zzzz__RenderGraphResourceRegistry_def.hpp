#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\RenderGraphResourceRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphResourceRegistry)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
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
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class BufferResource;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphResourcePool;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphResource;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ImportResourceParams;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class InternalRenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RayTracingAccelerationStructureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RayTracingAccelerationStructureResource;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDebugParams;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry_RenderGraphResourcesData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry_ResourceCallback;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry_ResourceCreateCallback;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphResourceType;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderTargetInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListLegacyResource;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListResource;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class TextureResource;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListDesc;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
namespace UnityEngine::Rendering {
struct GizmoSubset;
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
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
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
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry_RenderGraphResourcesData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry_ResourceCallback;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry_ResourceCreateCallback;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphResourceRegistry");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*, "UnityEngine.Rendering.RenderGraphModule",
                    "RenderGraphResourceRegistry/RenderGraphResourcesData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*, "UnityEngine.Rendering.RenderGraphModule",
                    "RenderGraphResourceRegistry/ResourceCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*, "UnityEngine.Rendering.RenderGraphModule",
                    "RenderGraphResourceRegistry/ResourceCreateCallback");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCreateCallback
class CORDL_TYPE RenderGraphResourceRegistry_ResourceCreateCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x67e9ab8, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x67e9ae0, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x67e9aa4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x67e5ae8, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourceRegistry_ResourceCreateCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_ResourceCreateCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourceRegistry_ResourceCreateCallback(RenderGraphResourceRegistry_ResourceCreateCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_ResourceCreateCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourceRegistry_ResourceCreateCallback(RenderGraphResourceRegistry_ResourceCreateCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12449 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback
class CORDL_TYPE RenderGraphResourceRegistry_ResourceCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x67e9b18, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x67e9b40, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x67e9b04, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x67e5c30, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourceRegistry_ResourceCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_ResourceCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourceRegistry_ResourceCallback(RenderGraphResourceRegistry_ResourceCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_ResourceCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourceRegistry_ResourceCallback(RenderGraphResourceRegistry_ResourceCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
class CORDL_TYPE RenderGraphResourceRegistry_RenderGraphResourcesData : public ::System::Object {
public:
  // Declarations
  /// @brief Field createResourceCallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_createResourceCallback,
                      put = __cordl_internal_set_createResourceCallback)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback* createResourceCallback;

  /// @brief Field pool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_pool, put = __cordl_internal_set_pool)) ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* pool;

  /// @brief Field releaseResourceCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_releaseResourceCallback,
                      put = __cordl_internal_set_releaseResourceCallback)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback* releaseResourceCallback;

  /// @brief Field resourceArray, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceArray,
                      put = __cordl_internal_set_resourceArray)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>* resourceArray;

  /// @brief Field sharedResourcesCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sharedResourcesCount, put = __cordl_internal_set_sharedResourcesCount)) int32_t sharedResourcesCount;

  /// @brief Method AddNewRenderGraphResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ResType> inline int32_t AddNewRenderGraphResource(::by_ref<ResType> outRes, bool pooledResource);

  /// @brief Method Cleanup, addr 0x67e98ec, size 0xc8, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x67e971c, size 0xb4, virtual false, abstract: false, final false
  inline void Clear(bool onException, int32_t frameIndex);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData* New_ctor();

  /// @brief Method PurgeUnusedGraphicsResources, addr 0x67e9838, size 0x18, virtual false, abstract: false, final false
  inline void PurgeUnusedGraphicsResources(int32_t frameIndex);

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback* const& __cordl_internal_get_createResourceCallback() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback*& __cordl_internal_get_createResourceCallback();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* const& __cordl_internal_get_pool() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool*& __cordl_internal_get_pool();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback* const& __cordl_internal_get_releaseResourceCallback() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback*& __cordl_internal_get_releaseResourceCallback();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>* const& __cordl_internal_get_resourceArray() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>*& __cordl_internal_get_resourceArray();

  constexpr int32_t const& __cordl_internal_get_sharedResourcesCount() const;

  constexpr int32_t& __cordl_internal_get_sharedResourcesCount();

  constexpr void __cordl_internal_set_createResourceCallback(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback* value);

  constexpr void __cordl_internal_set_pool(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* value);

  constexpr void __cordl_internal_set_releaseResourceCallback(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback* value);

  constexpr void __cordl_internal_set_resourceArray(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>* value);

  constexpr void __cordl_internal_set_sharedResourcesCount(int32_t value);

  /// @brief Method .ctor, addr 0x67e5a2c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourceRegistry_RenderGraphResourcesData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_RenderGraphResourcesData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourceRegistry_RenderGraphResourcesData(RenderGraphResourceRegistry_RenderGraphResourcesData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_RenderGraphResourcesData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourceRegistry_RenderGraphResourcesData(RenderGraphResourceRegistry_RenderGraphResourcesData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12451 };

  /// @brief Field resourceArray, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*>* ___resourceArray;

  /// @brief Field sharedResourcesCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___sharedResourcesCount;

  /// @brief Field pool, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* ___pool;

  /// @brief Field createResourceCallback, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback* ___createResourceCallback;

  /// @brief Field releaseResourceCallback, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback* ___releaseResourceCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData, ___resourceArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData, ___sharedResourcesCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData, ___pool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData, ___createResourceCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData, ___releaseResourceCallback) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry::RenderGraphResourcesData, UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry
class CORDL_TYPE RenderGraphResourceRegistry : public ::System::Object {
public:
  // Declarations
  using RenderGraphResourcesData = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData;

  using ResourceCallback = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback;

  using ResourceCreateCallback = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback;

  /// @brief Field builtinCameraRenderTarget, offset 0xffffffff, size 0x28
  __declspec(property(get = getStaticF_builtinCameraRenderTarget, put = setStaticF_builtinCameraRenderTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier builtinCameraRenderTarget;

  /// @brief Field emptyId, offset 0xffffffff, size 0x28
  __declspec(property(get = getStaticF_emptyId, put = setStaticF_emptyId)) ::UnityEngine::Rendering::RenderTargetIdentifier emptyId;

  /// @brief Field forceManualClearOfResource, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_forceManualClearOfResource, put = __cordl_internal_set_forceManualClearOfResource)) bool forceManualClearOfResource;

  /// @brief Field m_ActiveRendererLists, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveRendererLists,
                      put = __cordl_internal_set_m_ActiveRendererLists)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* m_ActiveRendererLists;

  /// @brief Field m_CurrentBackbuffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentBackbuffer, put = __cordl_internal_set_m_CurrentBackbuffer)) ::UnityEngine::Rendering::RTHandle* m_CurrentBackbuffer;

  /// @brief Field m_CurrentFrameIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentFrameIndex, put = __cordl_internal_set_m_CurrentFrameIndex)) int32_t m_CurrentFrameIndex;

  /// @brief Field m_CurrentRegistry, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_CurrentRegistry, put = setStaticF_m_CurrentRegistry)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_CurrentRegistry;

  /// @brief Field m_ExecutionCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ExecutionCount, put = __cordl_internal_set_m_ExecutionCount)) int32_t m_ExecutionCount;

  /// @brief Field m_FrameInformationLogger, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FrameInformationLogger,
                      put = __cordl_internal_set_m_FrameInformationLogger)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* m_FrameInformationLogger;

  /// @brief Field m_RenderGraphDebug, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphDebug,
                      put = __cordl_internal_set_m_RenderGraphDebug)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* m_RenderGraphDebug;

  /// @brief Field m_RenderGraphResources, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphResources,
                      put = __cordl_internal_set_m_RenderGraphResources)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>
      m_RenderGraphResources;

  /// @brief Field m_RendererListLegacyResources, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RendererListLegacyResources,
                      put = __cordl_internal_set_m_RendererListLegacyResources)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>*
      m_RendererListLegacyResources;

  /// @brief Field m_RendererListResources, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_RendererListResources,
      put = __cordl_internal_set_m_RendererListResources)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>* m_RendererListResources;

  /// @brief Field m_ResourceLogger, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceLogger, put = __cordl_internal_set_m_ResourceLogger)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* m_ResourceLogger;

  /// @brief Method BeginExecute, addr 0x67e5f64, size 0xb0, virtual false, abstract: false, final false
  inline void BeginExecute(int32_t currentFrameIndex);

  /// @brief Method BeginRenderGraph, addr 0x67e5dec, size 0xb4, virtual false, abstract: false, final false
  inline void BeginRenderGraph(int32_t executionCount);

  /// @brief Method CheckBufferResource, addr 0x67e5150, size 0xa8, virtual false, abstract: false, final false
  inline void CheckBufferResource(::UnityEngine::Rendering::RenderGraphModule::BufferResource* bufferResource);

  /// @brief Method CheckHandleValidity, addr 0x67e6208, size 0x4, virtual false, abstract: false, final false
  inline void CheckHandleValidity(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method CheckHandleValidity, addr 0x67e620c, size 0x1d4, virtual false, abstract: false, final false
  inline void CheckHandleValidity(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method CheckTextureResource, addr 0x67e4d08, size 0xb0, virtual false, abstract: false, final false
  inline void CheckTextureResource(::UnityEngine::Rendering::RenderGraphModule::TextureResource* texResource);

  /// @brief Method Cleanup, addr 0x67e9850, size 0x9c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x67e9474, size 0xec, virtual false, abstract: false, final false
  inline void Clear(bool onException);

  /// @brief Method CreateBuffer, addr 0x67dcdcc, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc, int32_t transientPassIndex);

  /// @brief Method CreateGizmoRendererList, addr 0x67e7d00, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateGizmoRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                 ::by_ref<::UnityEngine::Rendering::GizmoSubset> gizmoSubset);

  /// @brief Method CreatePooledResource, addr 0x67e8694, size 0xb8, virtual false, abstract: false, final false
  inline bool CreatePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle);

  /// @brief Method CreatePooledResource, addr 0x67e8528, size 0x16c, virtual false, abstract: false, final false
  inline bool CreatePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, int32_t type, int32_t index);

  /// @brief Method CreateRendererList, addr 0x67e7b74, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(::by_ref<::UnityEngine::Rendering::RendererListParams> desc);

  /// @brief Method CreateRendererList, addr 0x67e7a2c, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc);

  /// @brief Method CreateRendererLists, addr 0x67e9190, size 0x2e4, virtual false, abstract: false, final false
  inline void CreateRendererLists(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* rendererLists,
                                  ::UnityEngine::Rendering::ScriptableRenderContext context, bool manualDispatch);

  /// @brief Method CreateShadowRendererList, addr 0x67e7c40, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateShadowRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                  ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings> shadowDrawinSettings);

  /// @brief Method CreateSharedTexture, addr 0x67e7250, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateSharedTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, bool explicitRelease);

  /// @brief Method CreateSkyboxRendererList, addr 0x67e7f6c, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Camera*> camera);

  /// @brief Method CreateSkyboxRendererList, addr 0x67e8030, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                  ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix);

  /// @brief Method CreateSkyboxRendererList, addr 0x67e812c, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                  ::UnityEngine::Matrix4x4 projectionMatrixL, ::UnityEngine::Matrix4x4 viewMatrixL,
                                                                                                  ::UnityEngine::Matrix4x4 projectionMatrixR, ::UnityEngine::Matrix4x4 viewMatrixR);

  /// @brief Method CreateTexture, addr 0x67dc8d0, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, int32_t transientPassIndex);

  /// @brief Method CreateTextureCallback, addr 0x67e874c, size 0x1f8, virtual false, abstract: false, final false
  inline bool CreateTextureCallback(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res);

  /// @brief Method CreateUIOverlayRendererList, addr 0x67e7dd4, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateUIOverlayRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Camera*> camera,
                                                                                                     ::by_ref<::UnityEngine::Rendering::UISubset> uiSubset);

  /// @brief Method CreateWireOverlayRendererList, addr 0x67e7ea8, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateWireOverlayRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                       ::by_ref<::UnityEngine::Camera*> camera);

  /// @brief Method EndExecute, addr 0x67e6174, size 0x94, virtual false, abstract: false, final false
  inline void EndExecute();

  /// @brief Method FlushLogs, addr 0x67e99b4, size 0x74, virtual false, abstract: false, final false
  inline void FlushLogs();

  /// @brief Method GetBuffer, addr 0x67e4614, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> handle);

  /// @brief Method GetBuffer, addr 0x67e5308, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBuffer(int32_t index);

  /// @brief Method GetBufferResource, addr 0x67e51f8, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferResource* GetBufferResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle);

  /// @brief Method GetBufferResource, addr 0x67e5324, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferResource* GetBufferResource(int32_t index);

  /// @brief Method GetBufferResourceCount, addr 0x67db554, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetBufferResourceCount();

  /// @brief Method GetBufferResourceDesc, addr 0x67dcf24, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferDesc GetBufferResourceDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle, bool noThrowOnInvalidDesc);

  /// @brief Method GetFormat, addr 0x67e77a4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat color,
                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencil);

  /// @brief Method GetLatestVersionHandle, addr 0x67de204, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle GetLatestVersionHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method GetLatestVersionNumber, addr 0x67e65d4, size 0x12c, virtual false, abstract: false, final false
  inline int32_t GetLatestVersionNumber(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method GetNewVersionedHandle, addr 0x67de4e8, size 0x15c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle GetNewVersionedHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method GetRayTracingAccelerationStructure, addr 0x67e42a0, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RayTracingAccelerationStructure*
  GetRayTracingAccelerationStructure(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle> handle);

  /// @brief Method GetRayTracingAccelerationStructureResource, addr 0x67e5408, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*
  GetRayTracingAccelerationStructureResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle);

  /// @brief Method GetRayTracingAccelerationStructureResourceCount, addr 0x67db55c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetRayTracingAccelerationStructureResourceCount();

  /// @brief Method GetRenderGraphResourceName, addr 0x67de0f0, size 0x114, virtual false, abstract: false, final false
  inline ::StringW GetRenderGraphResourceName(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method GetRenderGraphResourceName, addr 0x67e6808, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetRenderGraphResourceName(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method GetRenderGraphResourceTransientIndex, addr 0x67dd538, size 0x110, virtual false, abstract: false, final false
  inline int32_t GetRenderGraphResourceTransientIndex(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method GetRenderTargetInfo, addr 0x67df484, size 0x420, virtual false, abstract: false, final false
  inline void GetRenderTargetInfo(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> outInfo);

  /// @brief Method GetRendererList, addr 0x67e4ff0, size 0x158, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList GetRendererList(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> handle);

  /// @brief Method GetResourceCount, addr 0x67e79ac, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetResourceCount(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type);

  /// @brief Method GetResourceLowLevel, addr 0x67e6700, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* GetResourceLowLevel(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method GetSharedResourceCount, addr 0x67e5518, size 0x38, virtual false, abstract: false, final false
  inline int32_t GetSharedResourceCount(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type);

  /// @brief Method GetTexture, addr 0x67e4db8, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> handle);

  /// @brief Method GetTexture, addr 0x67e4ef4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetTexture(int32_t index);

  /// @brief Method GetTextureResource, addr 0x67dc718, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource* GetTextureResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle);

  /// @brief Method GetTextureResource, addr 0x67e4f10, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource* GetTextureResource(int32_t index);

  /// @brief Method GetTextureResourceCount, addr 0x67db54c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetTextureResourceCount();

  /// @brief Method GetTextureResourceDesc, addr 0x67dca34, size 0x188, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc GetTextureResourceDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle, bool noThrowOnInvalidDesc);

  /// @brief Method GetZeroVersionedHandle, addr 0x67de4b8, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle GetZeroVersionedHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method ImportBackbuffer, addr 0x67e751c, size 0x1c0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt,
                                                                                     ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> info,
                                                                                     ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams> importParams);

  /// @brief Method ImportBuffer, addr 0x67e8264, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ImportBuffer(::UnityEngine::GraphicsBuffer* graphicsBuffer, bool forceRelease);

  /// @brief Method ImportRayTracingAccelerationStructure, addr 0x67e833c, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle
  ImportRayTracingAccelerationStructure(::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure*> accelStruct, ::StringW name);

  /// @brief Method ImportTexture, addr 0x67e6cdc, size 0x264, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::by_ref<::UnityEngine::Rendering::RTHandle*> rt,
                                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams> importParams, bool isBuiltin);

  /// @brief Method ImportTexture, addr 0x67e7050, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::by_ref<::UnityEngine::Rendering::RTHandle*> rt, ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo info,
                                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams> importParams);

  /// @brief Method ImportTexture, addr 0x67e6cb8, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(::by_ref<::UnityEngine::Rendering::RTHandle*> rt, bool isBuiltin);

  /// @brief Method IncrementReadCount, addr 0x67de3a4, size 0x114, virtual false, abstract: false, final false
  inline void IncrementReadCount(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method IncrementWriteCount, addr 0x67dc1d4, size 0x114, virtual false, abstract: false, final false
  inline void IncrementWriteCount(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method IsGraphicsResourceCreated, addr 0x67e6994, size 0x114, virtual false, abstract: false, final false
  inline bool IsGraphicsResourceCreated(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method IsRenderGraphResourceForceReleased, addr 0x67e68b0, size 0xa4, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceForceReleased(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method IsRenderGraphResourceImported, addr 0x67dc39c, size 0x110, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceImported(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method IsRenderGraphResourceImported, addr 0x67e6c14, size 0xa4, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceImported(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method IsRenderGraphResourceShared, addr 0x67e64f4, size 0x6c, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceShared(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method IsRenderGraphResourceShared, addr 0x67e6954, size 0x40, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceShared(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method IsRendererListCreated, addr 0x67e6aa8, size 0x16c, virtual false, abstract: false, final false
  inline bool IsRendererListCreated(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> res);

  /// @brief Method LogResources, addr 0x67e9560, size 0x1bc, virtual false, abstract: false, final false
  inline void LogResources();

  /// @brief Method ManageSharedRenderGraphResources, addr 0x67e6014, size 0x160, virtual false, abstract: false, final false
  inline void ManageSharedRenderGraphResources();

  /// @brief Method NewVersion, addr 0x67e63e0, size 0x114, virtual false, abstract: false, final false
  inline void NewVersion(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* New_ctor();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* New_ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger);

  /// @brief Method PurgeUnusedGraphicsResources, addr 0x67e97d0, size 0x68, virtual false, abstract: false, final false
  inline void PurgeUnusedGraphicsResources();

  /// @brief Method RefreshSharedTextureDesc, addr 0x67e740c, size 0x44, virtual false, abstract: false, final false
  inline void RefreshSharedTextureDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method ReleasePooledResource, addr 0x67e8a70, size 0xb8, virtual false, abstract: false, final false
  inline void ReleasePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle);

  /// @brief Method ReleasePooledResource, addr 0x67e8944, size 0x12c, virtual false, abstract: false, final false
  inline void ReleasePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, int32_t type, int32_t index);

  /// @brief Method ReleaseSharedTexture, addr 0x67e7450, size 0xcc, virtual false, abstract: false, final false
  inline void ReleaseSharedTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture);

  /// @brief Method ReleaseTextureCallback, addr 0x67e8b28, size 0x174, virtual false, abstract: false, final false
  inline void ReleaseTextureCallback(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res);

  /// @brief Method TextureNeedsFallback, addr 0x67dc4ac, size 0x150, virtual false, abstract: false, final false
  inline bool TextureNeedsFallback(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> handle);

  /// @brief Method UpdateSharedResourceLastFrameIndex, addr 0x67e84bc, size 0x6c, virtual false, abstract: false, final false
  inline void UpdateSharedResourceLastFrameIndex(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle);

  /// @brief Method UpdateSharedResourceLastFrameIndex, addr 0x67e8414, size 0xa8, virtual false, abstract: false, final false
  inline void UpdateSharedResourceLastFrameIndex(int32_t type, int32_t index);

  /// @brief Method ValidateBufferDesc, addr 0x67e9070, size 0x120, virtual false, abstract: false, final false
  inline void ValidateBufferDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc);

  /// @brief Method ValidateFormat, addr 0x67e78ac, size 0x100, virtual false, abstract: false, final false
  inline void ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat color, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencil);

  /// @brief Method ValidateRenderTarget, addr 0x67e76dc, size 0xc8, virtual false, abstract: false, final false
  inline void ValidateRenderTarget(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method ValidateRendererListDesc, addr 0x67e8eb0, size 0x1c0, virtual false, abstract: false, final false
  inline void ValidateRendererListDesc(::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc);

  /// @brief Method ValidateTextureDesc, addr 0x67e8c9c, size 0x214, virtual false, abstract: false, final false
  inline void ValidateTextureDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  constexpr bool const& __cordl_internal_get_forceManualClearOfResource() const;

  constexpr bool& __cordl_internal_get_forceManualClearOfResource();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* const& __cordl_internal_get_m_ActiveRendererLists() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>*& __cordl_internal_get_m_ActiveRendererLists();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CurrentBackbuffer() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CurrentBackbuffer();

  constexpr int32_t const& __cordl_internal_get_m_CurrentFrameIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentFrameIndex();

  constexpr int32_t const& __cordl_internal_get_m_ExecutionCount() const;

  constexpr int32_t& __cordl_internal_get_m_ExecutionCount();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* const& __cordl_internal_get_m_FrameInformationLogger() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*& __cordl_internal_get_m_FrameInformationLogger();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* const& __cordl_internal_get_m_RenderGraphDebug() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*& __cordl_internal_get_m_RenderGraphDebug();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*> const& __cordl_internal_get_m_RenderGraphResources() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*>& __cordl_internal_get_m_RenderGraphResources();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>* const& __cordl_internal_get_m_RendererListLegacyResources() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>*& __cordl_internal_get_m_RendererListLegacyResources();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>* const& __cordl_internal_get_m_RendererListResources() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>*& __cordl_internal_get_m_RendererListResources();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* const& __cordl_internal_get_m_ResourceLogger() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*& __cordl_internal_get_m_ResourceLogger();

  constexpr void __cordl_internal_set_forceManualClearOfResource(bool value);

  constexpr void __cordl_internal_set_m_ActiveRendererLists(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* value);

  constexpr void __cordl_internal_set_m_CurrentBackbuffer(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CurrentFrameIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ExecutionCount(int32_t value);

  constexpr void __cordl_internal_set_m_FrameInformationLogger(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* value);

  constexpr void __cordl_internal_set_m_RenderGraphDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* value);

  constexpr void __cordl_internal_set_m_RenderGraphResources(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*> value);

  constexpr void __cordl_internal_set_m_RendererListLegacyResources(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>* value);

  constexpr void __cordl_internal_set_m_RendererListResources(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>* value);

  constexpr void __cordl_internal_set_m_ResourceLogger(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* value);

  /// @brief Method .ctor, addr 0x67e5550, size 0x168, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x67e56b8, size 0x374, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger);

  static inline ::UnityEngine::Rendering::RenderTargetIdentifier getStaticF_builtinCameraRenderTarget();

  static inline ::UnityEngine::Rendering::RenderTargetIdentifier getStaticF_emptyId();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* getStaticF_m_CurrentRegistry();

  /// @brief Method get_current, addr 0x67e4c4c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* get_current();

  static inline void setStaticF_builtinCameraRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  static inline void setStaticF_emptyId(::UnityEngine::Rendering::RenderTargetIdentifier value);

  static inline void setStaticF_m_CurrentRegistry(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);

  /// @brief Method set_current, addr 0x67e4ca8, size 0x60, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourceRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourceRegistry(RenderGraphResourceRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourceRegistry(RenderGraphResourceRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12452 };

  /// @brief Field kInitialRendererListCount offset 0xffffffff size 0x4
  static constexpr int32_t kInitialRendererListCount{ static_cast<int32_t>(0x100) };

  /// @brief Field kSharedResourceLifetime offset 0xffffffff size 0x4
  static constexpr int32_t kSharedResourceLifetime{ static_cast<int32_t>(0x1e) };

  /// @brief Field m_RenderGraphResources, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData*> ___m_RenderGraphResources;

  /// @brief Field m_RendererListResources, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>* ___m_RendererListResources;

  /// @brief Field m_RendererListLegacyResources, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>* ___m_RendererListLegacyResources;

  /// @brief Field m_RenderGraphDebug, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* ___m_RenderGraphDebug;

  /// @brief Field m_ResourceLogger, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* ___m_ResourceLogger;

  /// @brief Field m_FrameInformationLogger, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* ___m_FrameInformationLogger;

  /// @brief Field m_CurrentFrameIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_CurrentFrameIndex;

  /// @brief Field m_ExecutionCount, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_ExecutionCount;

  /// @brief Field m_CurrentBackbuffer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CurrentBackbuffer;

  /// @brief Field m_ActiveRendererLists, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* ___m_ActiveRendererLists;

  /// @brief Field forceManualClearOfResource, offset: 0x58, size: 0x1, def value: None
  bool ___forceManualClearOfResource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_RenderGraphResources) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_RendererListResources) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_RendererListLegacyResources) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_RenderGraphDebug) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_ResourceLogger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_FrameInformationLogger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_CurrentFrameIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_ExecutionCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_CurrentBackbuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_ActiveRendererLists) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___forceManualClearOfResource) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry) == 0x60, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
