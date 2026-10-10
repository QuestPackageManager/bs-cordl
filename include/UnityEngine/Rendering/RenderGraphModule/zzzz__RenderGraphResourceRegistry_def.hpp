#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphResourceRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderGraphResource_def.hpp"
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
  /// @brief Method BeginInvoke, addr 0x6c13310, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6c13338, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6c132fc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCreateCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6c0e6a4, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourceRegistry_ResourceCreateCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_ResourceCreateCallback", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourceRegistry_ResourceCreateCallback(RenderGraphResourceRegistry_ResourceCreateCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_ResourceCreateCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourceRegistry_ResourceCreateCallback(RenderGraphResourceRegistry_ResourceCreateCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9363 };

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
  /// @brief Method BeginInvoke, addr 0x6c13370, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6c13398, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6c1335c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6c0e7ec, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourceRegistry_ResourceCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_ResourceCallback", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourceRegistry_ResourceCallback(RenderGraphResourceRegistry_ResourceCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_ResourceCallback", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourceRegistry_ResourceCallback(RenderGraphResourceRegistry_ResourceCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ResourceCallback) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.IRenderGraphResource
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
  template <typename ResType>
    requires(::cordl_internals::type_constraint<ResType, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource*> && ::cordl_internals::default_constructor_constraint<ResType>)
  inline int32_t AddNewRenderGraphResource(::by_ref<ResType> outRes, bool pooledResource);

  /// @brief Method Cleanup, addr 0x6c1316c, size 0xc8, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x6c12f9c, size 0xb4, virtual false, abstract: false, final false
  inline void Clear(bool onException, int32_t frameIndex);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RenderGraphResourcesData* New_ctor();

  /// @brief Method PurgeUnusedGraphicsResources, addr 0x6c130b8, size 0x18, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x6c0e5e8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourceRegistry_RenderGraphResourcesData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_RenderGraphResourcesData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourceRegistry_RenderGraphResourcesData(RenderGraphResourceRegistry_RenderGraphResourcesData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry_RenderGraphResourcesData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourceRegistry_RenderGraphResourcesData(RenderGraphResourceRegistry_RenderGraphResourcesData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9365 };

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

  /// @brief Method BeginExecute, addr 0x6c0eb2c, size 0xb0, virtual false, abstract: false, final false
  inline void BeginExecute(int32_t currentFrameIndex);

  /// @brief Method BeginRenderGraph, addr 0x6c0e9a8, size 0xc0, virtual false, abstract: false, final false
  inline void BeginRenderGraph(int32_t executionCount);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckBufferResource, addr 0x6c0dd04, size 0xa8, virtual false, abstract: false, final false
  inline void CheckBufferResource(::UnityEngine::Rendering::RenderGraphModule::BufferResource* bufferResource);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckHandleValidity, addr 0x6c0ee28, size 0x4, virtual false, abstract: false, final false
  inline void CheckHandleValidity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckHandleValidity, addr 0x6c0ee2c, size 0x1d4, virtual false, abstract: false, final false
  inline void CheckHandleValidity(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckTextureResource, addr 0x6c0d780, size 0xb0, virtual false, abstract: false, final false
  inline void CheckTextureResource(::UnityEngine::Rendering::RenderGraphModule::TextureResource* texResource);

  /// @brief Method Cleanup, addr 0x6c130d0, size 0x9c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x6c12ce4, size 0xec, virtual false, abstract: false, final false
  inline void Clear(bool onException);

  /// @brief Method ClearResource, addr 0x6c120b0, size 0x108, virtual false, abstract: false, final false
  inline bool ClearResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, int32_t type, int32_t index);

  /// @brief Method ClearTexture, addr 0x6c11f40, size 0x170, virtual false, abstract: false, final false
  inline void ClearTexture(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::TextureResource* resource);

  /// @brief Method CreateBuffer, addr 0x6c117d8, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const> desc,
                                                                                int32_t transientPassIndex);

  /// @brief Method CreateGizmoRendererList, addr 0x6c111a8, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateGizmoRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                 /* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera* const> camera,
                                                                                                 /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GizmoSubset const> gizmoSubset);

  /// @brief Method CreatePooledResource, addr 0x6c11d9c, size 0xb4, virtual false, abstract: false, final false
  inline bool CreatePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle);

  /// @brief Method CreatePooledResource, addr 0x6c11c24, size 0x178, virtual false, abstract: false, final false
  inline bool CreatePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, int32_t type, int32_t index);

  /// @brief Method CreateRendererList, addr 0x6c1101c, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RendererListParams const> desc);

  /// @brief Method CreateRendererList, addr 0x6c10ed4, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc const> desc);

  /// @brief Method CreateRendererLists, addr 0x6c12a00, size 0x2e4, virtual false, abstract: false, final false
  inline void CreateRendererLists(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* rendererLists,
                                  ::UnityEngine::Rendering::ScriptableRenderContext context, bool manualDispatch);

  /// @brief Method CreateShadowRendererList, addr 0x6c110e8, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateShadowRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                  ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings> shadowDrawinSettings);

  /// @brief Method CreateSharedTexture, addr 0x6c10134, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateSharedTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> desc,
                                                                                        bool explicitRelease);

  /// @brief Method CreateSkyboxRendererList, addr 0x6c11414, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera* const> camera);

  /// @brief Method CreateSkyboxRendererList, addr 0x6c114d8, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera* const> camera,
                                                                                                  ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix);

  /// @brief Method CreateSkyboxRendererList, addr 0x6c115d4, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera* const> camera,
                                                                                                  ::UnityEngine::Matrix4x4 projectionMatrixL, ::UnityEngine::Matrix4x4 viewMatrixL,
                                                                                                  ::UnityEngine::Matrix4x4 projectionMatrixR, ::UnityEngine::Matrix4x4 viewMatrixR);

  /// @brief Method CreateTexture, addr 0x6c10c98, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> desc,
                                                                                  int32_t transientPassIndex);

  /// @brief Method CreateTextureCallback, addr 0x6c11e50, size 0xf0, virtual false, abstract: false, final false
  inline bool CreateTextureCallback(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res);

  /// @brief Method CreateUIOverlayRendererList, addr 0x6c1127c, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateUIOverlayRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera* const> camera,
                                                                                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UISubset const> uiSubset);

  /// @brief Method CreateWireOverlayRendererList, addr 0x6c11350, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateWireOverlayRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                       /* [IsReadOnly] */ ::by_ref<::UnityEngine::Camera* const> camera);

  /// @brief Method EnableIntraFrameMemoryAliasing, addr 0x6c0edd0, size 0x58, virtual false, abstract: false, final false
  inline void EnableIntraFrameMemoryAliasing(bool enabled);

  /// @brief Method EndExecute, addr 0x6c0ed3c, size 0x94, virtual false, abstract: false, final false
  inline void EndExecute();

  /// @brief Method FlushLogs, addr 0x6c13234, size 0x18, virtual false, abstract: false, final false
  inline void FlushLogs();

  /// @brief Method GetBuffer, addr 0x6c0d084, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const> handle);

  /// @brief Method GetBuffer, addr 0x6c0debc, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBuffer(int32_t index);

  /// @brief Method GetBufferResource, addr 0x6c0ddac, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferResource* GetBufferResource(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle);

  /// @brief Method GetBufferResource, addr 0x6c0ded8, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferResource* GetBufferResource(int32_t index);

  /// @brief Method GetBufferResourceCount, addr 0x6c11a2c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetBufferResourceCount();

  /// @brief Method GetBufferResourceDesc, addr 0x6c118b4, size 0x178, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> GetBufferResourceDesc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle,
                                                                                                 bool noThrowOnInvalidDesc);

  /// @brief Method GetFormat, addr 0x6c10a90, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat color,
                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencil);

  /// @brief Method GetLatestVersionHandle, addr 0x6c0f2b8, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle GetLatestVersionHandle(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// @brief Method GetRayTracingAccelerationStructure, addr 0x6c0cd28, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RayTracingAccelerationStructure*
  GetRayTracingAccelerationStructure(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle const> handle);

  /// @brief Method GetRayTracingAccelerationStructureResource, addr 0x6c0dfbc, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*
  GetRayTracingAccelerationStructureResource(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle);

  /// @brief Method GetRayTracingAccelerationStructureResourceCount, addr 0x6c11a34, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetRayTracingAccelerationStructureResourceCount();

  /// @brief Method GetRenderGraphResourceName, addr 0x6c0f514, size 0x10c, virtual false, abstract: false, final false
  inline ::StringW GetRenderGraphResourceName(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// @brief Method GetRenderGraphResourceName, addr 0x6c0f620, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetRenderGraphResourceName(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method GetRenderGraphResourceTransientIndex, addr 0x6c0fa90, size 0x108, virtual false, abstract: false, final false
  inline int32_t GetRenderGraphResourceTransientIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// @brief Method GetRenderTargetInfo, addr 0x6c106a0, size 0x3f0, virtual false, abstract: false, final false
  inline void GetRenderTargetInfo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res,
                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo> outInfo);

  /// @brief Method GetRendererList, addr 0x6c0dba4, size 0x158, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList GetRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const> handle);

  /// @brief Method GetResourceCount, addr 0x6c10e4c, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetResourceCount(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type);

  /// @brief Method GetResourceLowLevel, addr 0x6c0f414, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* GetResourceLowLevel(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// @brief Method GetSharedResourceCount, addr 0x6c0e0cc, size 0x38, virtual false, abstract: false, final false
  inline int32_t GetSharedResourceCount(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type);

  /// @brief Method GetTexture, addr 0x6c0d830, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> handle);

  /// @brief Method GetTexture, addr 0x6c0d964, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetTexture(int32_t index);

  /// @brief Method GetTextureResource, addr 0x6c0ba5c, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource* GetTextureResource(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle);

  /// @brief Method GetTextureResource, addr 0x6c0d980, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource* GetTextureResource(int32_t index);

  /// @brief Method GetTextureResourceCount, addr 0x6c10ecc, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetTextureResourceCount();

  /// @brief Method GetTextureResourceDesc, addr 0x6c0bb68, size 0x174, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>
  GetTextureResourceDesc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle, bool noThrowOnInvalidDesc);

  /// @brief Method GetZeroVersionHandle, addr 0x6c0f3e4, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle GetZeroVersionHandle(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// @brief Method ImportBackbuffer, addr 0x6c10400, size 0x1d8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt,
                                                                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo const> info,
                                                                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams const> importParams);

  /// @brief Method ImportBuffer, addr 0x6c1170c, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ImportBuffer(::UnityEngine::GraphicsBuffer* graphicsBuffer);

  /// @brief Method ImportRayTracingAccelerationStructure, addr 0x6c11a3c, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle
  ImportRayTracingAccelerationStructure(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure* const> accelStruct, ::StringW name);

  /// @brief Method ImportTexture, addr 0x6c0fbc4, size 0x26c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RTHandle* const> rt,
                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams const> importParams,
                                                                                  bool isBuiltin);

  /// @brief Method ImportTexture, addr 0x6c0ff40, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RTHandle* const> rt,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo info,
                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams const> importParams);

  /// @brief Method ImportTexture, addr 0x6c0fb98, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ImportTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RTHandle* const> rt, bool isBuiltin);

  /// @brief Method IncrementReadCount, addr 0x6c0f1ac, size 0x10c, virtual false, abstract: false, final false
  inline void IncrementReadCount(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// @brief Method IncrementWriteCount, addr 0x6c0f000, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle IncrementWriteCount(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// @brief Method IsGraphicsResourceCreated, addr 0x6c0f774, size 0x10c, virtual false, abstract: false, final false
  inline bool IsGraphicsResourceCreated(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// @brief Method IsRenderGraphResourceImported, addr 0x6c0b954, size 0x108, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceImported(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// @brief Method IsRenderGraphResourceImported, addr 0x6c0f9ec, size 0xa4, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceImported(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method IsRenderGraphResourceShared, addr 0x6c0f708, size 0x6c, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceShared(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// @brief Method IsRenderGraphResourceShared, addr 0x6c0f6c8, size 0x40, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceShared(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method IsRendererListCreated, addr 0x6c0f880, size 0x16c, virtual false, abstract: false, final false
  inline bool IsRendererListCreated(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const> res);

  /// @brief Method LogResources, addr 0x6c12dd0, size 0x1cc, virtual false, abstract: false, final false
  inline void LogResources();

  /// @brief Method ManageSharedRenderGraphResources, addr 0x6c0ebdc, size 0x160, virtual false, abstract: false, final false
  inline void ManageSharedRenderGraphResources();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* New_ctor();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* New_ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger);

  /// @brief Method PurgeUnusedGraphicsResources, addr 0x6c13050, size 0x68, virtual false, abstract: false, final false
  inline void PurgeUnusedGraphicsResources();

  /// @brief Method RefreshSharedTextureDesc, addr 0x6c102f0, size 0x44, virtual false, abstract: false, final false
  inline void RefreshSharedTextureDesc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> texture,
                                       /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> desc);

  /// @brief Method ReleasePooledResource, addr 0x6c122e4, size 0xb4, virtual false, abstract: false, final false
  inline void ReleasePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext,
                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle);

  /// @brief Method ReleasePooledResource, addr 0x6c121b8, size 0x12c, virtual false, abstract: false, final false
  inline void ReleasePooledResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, int32_t type, int32_t index);

  /// @brief Method ReleaseSharedTexture, addr 0x6c10334, size 0xcc, virtual false, abstract: false, final false
  inline void ReleaseSharedTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> texture);

  /// @brief Method ReleaseTextureCallback, addr 0x6c12398, size 0x174, virtual false, abstract: false, final false
  inline void ReleaseTextureCallback(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext, ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResource* res);

  /// @brief Method SetTextureAsMemoryLess, addr 0x6c10d84, size 0xc8, virtual false, abstract: false, final false
  inline void SetTextureAsMemoryLess(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle);

  /// @brief Method TextureNeedsFallback, addr 0x6c0da60, size 0x144, virtual false, abstract: false, final false
  inline bool TextureNeedsFallback(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> handle);

  /// @brief Method UpdateSharedResourceLastFrameIndex, addr 0x6c11bb8, size 0x6c, virtual false, abstract: false, final false
  inline void UpdateSharedResourceLastFrameIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle);

  /// @brief Method UpdateSharedResourceLastFrameIndex, addr 0x6c11b10, size 0xa8, virtual false, abstract: false, final false
  inline void UpdateSharedResourceLastFrameIndex(int32_t type, int32_t index);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method ValidateBufferDesc, addr 0x6c128e0, size 0x120, virtual false, abstract: false, final false
  inline void ValidateBufferDesc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const> desc);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method ValidateFormat, addr 0x6c10b98, size 0x100, virtual false, abstract: false, final false
  inline void ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat color, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencil);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method ValidateRenderTarget, addr 0x6c105d8, size 0xc8, virtual false, abstract: false, final false
  inline void ValidateRenderTarget(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method ValidateRendererListDesc, addr 0x6c12720, size 0x1c0, virtual false, abstract: false, final false
  inline void ValidateRendererListDesc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc const> desc);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method ValidateTextureDesc, addr 0x6c1250c, size 0x214, virtual false, abstract: false, final false
  inline void ValidateTextureDesc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> desc);

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

  /// @brief Method .ctor, addr 0x6c0e104, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6c0e270, size 0x378, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger);

  static inline ::UnityEngine::Rendering::RenderTargetIdentifier getStaticF_builtinCameraRenderTarget();

  static inline ::UnityEngine::Rendering::RenderTargetIdentifier getStaticF_emptyId();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* getStaticF_m_CurrentRegistry();

  /// @brief Method get_current, addr 0x6c0d6c4, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* get_current();

  static inline void setStaticF_builtinCameraRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  static inline void setStaticF_emptyId(::UnityEngine::Rendering::RenderTargetIdentifier value);

  static inline void setStaticF_m_CurrentRegistry(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);

  /// @brief Method set_current, addr 0x6c0d720, size 0x60, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourceRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourceRegistry(RenderGraphResourceRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourceRegistry(RenderGraphResourceRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9366 };

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
