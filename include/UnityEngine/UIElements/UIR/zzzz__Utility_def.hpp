#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Utility)
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements::UIR {
struct __Utility__GPUBufferType;
}
namespace System {
class Action;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Bounds;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::Rendering {
struct StencilState;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class __Utility__GPUBuffer_1;
}
namespace UnityEngine {
class Camera;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
struct GfxUpdateBufferRange;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct __Utility__GPUBufferType;
}
namespace UnityEngine::UIElements::UIR {
class Utility;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class __Utility__GPUBuffer_1;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::__Utility__GPUBufferType);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Utility);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1);
// Type: ::GPUBufferType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15381))
// CS Name: ::Utility::GPUBufferType
struct CORDL_TYPE __Utility__GPUBufferType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Utility__GPUBufferType_Unwrapped
  enum struct ____Utility__GPUBufferType_Unwrapped : int32_t {
    __E_Vertex = static_cast<int32_t>(0x0),
    __E_Index = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Utility__GPUBufferType_Unwrapped() const noexcept {
    return static_cast<____Utility__GPUBufferType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Utility__GPUBufferType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Utility__GPUBufferType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Vertex value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::UIR::__Utility__GPUBufferType const Vertex;

  /// @brief Field Index value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::UIR::__Utility__GPUBufferType const Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__Utility__GPUBufferType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Utility__GPUBufferType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::GPUBuffer`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15382))
// CS Name: ::Utility::GPUBuffer`1<T>*
class CORDL_TYPE __Utility__GPUBuffer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer)) void* buffer;

  /// @brief Field elemCount, offset 0x18, size 0x4
  __declspec(property(get = __get_elemCount, put = __set_elemCount)) int32_t elemCount;

  /// @brief Field elemStride, offset 0x1c, size 0x4
  __declspec(property(get = __get_elemStride, put = __set_elemStride)) int32_t elemStride;

  __declspec(property(get = get_ElementStride)) int32_t ElementStride;

  __declspec(property(get = get_BufferPointer)) void* BufferPointer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr void*& __get_buffer();

  constexpr void* const& __get_buffer() const;

  constexpr void __set_buffer(void* value);

  constexpr int32_t& __get_elemCount();

  constexpr int32_t const& __get_elemCount() const;

  constexpr void __set_elemCount(int32_t value);

  constexpr int32_t& __get_elemStride();

  constexpr int32_t const& __get_elemStride() const;

  constexpr void __set_elemStride(int32_t value);

  static inline ::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>* New_ctor(int32_t elementCount, ::UnityEngine::UIElements::UIR::__Utility__GPUBufferType type);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t elementCount, ::UnityEngine::UIElements::UIR::__Utility__GPUBufferType type);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method UpdateRanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateRanges(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> ranges, int32_t rangesMin, int32_t rangesMax);

  /// @brief Method get_ElementStride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_ElementStride();

  /// @brief Method get_BufferPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void* get_BufferPointer();

  // Ctor Parameters [CppParam { name: "", ty: "__Utility__GPUBuffer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Utility__GPUBuffer_1(__Utility__GPUBuffer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Utility__GPUBuffer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Utility__GPUBuffer_1(__Utility__GPUBuffer_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Utility__GPUBuffer_1();

public:
  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  void* ___buffer;

  /// @brief Field elemCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___elemCount;

  /// @brief Field elemStride, offset: 0x1c, size: 0x4, def value: None
  int32_t ___elemStride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::Utility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9966)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15383))
// CS Name: ::UnityEngine.UIElements.UIR::Utility*
class CORDL_TYPE Utility : public ::System::Object {
public:
  // Declarations
  template <typename T> using GPUBuffer_1 = ::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>;

  using GPUBufferType = ::UnityEngine::UIElements::UIR::__Utility__GPUBufferType;

  /// @brief Field GraphicsResourcesRecreate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GraphicsResourcesRecreate, put = setStaticF_GraphicsResourcesRecreate))::System::Action_1<bool>* GraphicsResourcesRecreate;

  /// @brief Field EngineUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EngineUpdate, put = setStaticF_EngineUpdate))::System::Action* EngineUpdate;

  /// @brief Field FlushPendingResources, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FlushPendingResources, put = setStaticF_FlushPendingResources))::System::Action* FlushPendingResources;

  /// @brief Field RegisterIntermediateRenderers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RegisterIntermediateRenderers, put = setStaticF_RegisterIntermediateRenderers))::System::Action_1<::UnityEngine::Camera*>* RegisterIntermediateRenderers;

  /// @brief Field RenderNodeAdd, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RenderNodeAdd, put = setStaticF_RenderNodeAdd))::System::Action_1<void*>* RenderNodeAdd;

  /// @brief Field RenderNodeExecute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RenderNodeExecute, put = setStaticF_RenderNodeExecute))::System::Action_1<void*>* RenderNodeExecute;

  /// @brief Field RenderNodeCleanup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RenderNodeCleanup, put = setStaticF_RenderNodeCleanup))::System::Action_1<void*>* RenderNodeCleanup;

  /// @brief Field s_MarkerRaiseEngineUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerRaiseEngineUpdate, put = setStaticF_s_MarkerRaiseEngineUpdate))::Unity::Profiling::ProfilerMarker s_MarkerRaiseEngineUpdate;

  static inline void setStaticF_GraphicsResourcesRecreate(::System::Action_1<bool>* value);

  static inline ::System::Action_1<bool>* getStaticF_GraphicsResourcesRecreate();

  static inline void setStaticF_EngineUpdate(::System::Action* value);

  static inline ::System::Action* getStaticF_EngineUpdate();

  static inline void setStaticF_FlushPendingResources(::System::Action* value);

  static inline ::System::Action* getStaticF_FlushPendingResources();

  static inline void setStaticF_RegisterIntermediateRenderers(::System::Action_1<::UnityEngine::Camera*>* value);

  static inline ::System::Action_1<::UnityEngine::Camera*>* getStaticF_RegisterIntermediateRenderers();

  static inline void setStaticF_RenderNodeAdd(::System::Action_1<void*>* value);

  static inline ::System::Action_1<void*>* getStaticF_RenderNodeAdd();

  static inline void setStaticF_RenderNodeExecute(::System::Action_1<void*>* value);

  static inline ::System::Action_1<void*>* getStaticF_RenderNodeExecute();

  static inline void setStaticF_RenderNodeCleanup(::System::Action_1<void*>* value);

  static inline ::System::Action_1<void*>* getStaticF_RenderNodeCleanup();

  static inline void setStaticF_s_MarkerRaiseEngineUpdate(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerRaiseEngineUpdate();

  /// @brief Method SetVectorArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SetVectorArray(::UnityEngine::MaterialPropertyBlock* props, int32_t name, ::Unity::Collections::NativeSlice_1<T> vector4s);

  /// @brief Method add_GraphicsResourcesRecreate, addr 0x2ea62b4, size 0xf0, virtual false, abstract: false, final false
  static inline void add_GraphicsResourcesRecreate(::System::Action_1<bool>* value);

  /// @brief Method remove_GraphicsResourcesRecreate, addr 0x2ea63a4, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_GraphicsResourcesRecreate(::System::Action_1<bool>* value);

  /// @brief Method add_EngineUpdate, addr 0x2ea6494, size 0xdc, virtual false, abstract: false, final false
  static inline void add_EngineUpdate(::System::Action* value);

  /// @brief Method remove_EngineUpdate, addr 0x2ea6570, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_EngineUpdate(::System::Action* value);

  /// @brief Method add_FlushPendingResources, addr 0x2ea664c, size 0xdc, virtual false, abstract: false, final false
  static inline void add_FlushPendingResources(::System::Action* value);

  /// @brief Method remove_FlushPendingResources, addr 0x2ea6728, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_FlushPendingResources(::System::Action* value);

  /// @brief Method add_RegisterIntermediateRenderers, addr 0x2ea6804, size 0xf4, virtual false, abstract: false, final false
  static inline void add_RegisterIntermediateRenderers(::System::Action_1<::UnityEngine::Camera*>* value);

  /// @brief Method remove_RegisterIntermediateRenderers, addr 0x2ea68f8, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_RegisterIntermediateRenderers(::System::Action_1<::UnityEngine::Camera*>* value);

  /// @brief Method add_RenderNodeExecute, addr 0x2ea69ec, size 0xf4, virtual false, abstract: false, final false
  static inline void add_RenderNodeExecute(::System::Action_1<void*>* value);

  /// @brief Method remove_RenderNodeExecute, addr 0x2ea6ae0, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_RenderNodeExecute(::System::Action_1<void*>* value);

  /// @brief Method RaiseGraphicsResourcesRecreate, addr 0x2ea6bd4, size 0x7c, virtual false, abstract: false, final false
  static inline void RaiseGraphicsResourcesRecreate(bool recreate);

  /// @brief Method RaiseEngineUpdate, addr 0x2ea6c50, size 0x94, virtual false, abstract: false, final false
  static inline void RaiseEngineUpdate();

  /// @brief Method RaiseFlushPendingResources, addr 0x2ea6ce4, size 0x74, virtual false, abstract: false, final false
  static inline void RaiseFlushPendingResources();

  /// @brief Method RaiseRegisterIntermediateRenderers, addr 0x2ea6d58, size 0x7c, virtual false, abstract: false, final false
  static inline void RaiseRegisterIntermediateRenderers(::UnityEngine::Camera* camera);

  /// @brief Method RaiseRenderNodeAdd, addr 0x2ea6dd4, size 0x7c, virtual false, abstract: false, final false
  static inline void RaiseRenderNodeAdd(void* userData);

  /// @brief Method RaiseRenderNodeExecute, addr 0x2ea6e50, size 0x7c, virtual false, abstract: false, final false
  static inline void RaiseRenderNodeExecute(void* userData);

  /// @brief Method RaiseRenderNodeCleanup, addr 0x2ea6ecc, size 0x7c, virtual false, abstract: false, final false
  static inline void RaiseRenderNodeCleanup(void* userData);

  /// @brief Method AllocateBuffer, addr 0x2ea6f48, size 0x54, virtual false, abstract: false, final false
  static inline void* AllocateBuffer(int32_t elementCount, int32_t elementStride, bool vertexBuffer);

  /// @brief Method FreeBuffer, addr 0x2ea6f9c, size 0x3c, virtual false, abstract: false, final false
  static inline void FreeBuffer(void* buffer);

  /// @brief Method UpdateBufferRanges, addr 0x2ea6fd8, size 0x6c, virtual false, abstract: false, final false
  static inline void UpdateBufferRanges(void* buffer, void* ranges, int32_t rangeCount, int32_t writeRangeStart, int32_t writeRangeEnd);

  /// @brief Method SetVectorArray, addr 0x2ea7044, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVectorArray(::UnityEngine::MaterialPropertyBlock* props, int32_t name, void* vector4s, int32_t count);

  /// @brief Method GetVertexDeclaration, addr 0x2ea70a0, size 0x3c, virtual false, abstract: false, final false
  static inline void* GetVertexDeclaration(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> vertexAttributes);

  /// @brief Method RegisterIntermediateRenderer, addr 0x2ea70dc, size 0xec, virtual false, abstract: false, final false
  static inline void RegisterIntermediateRenderer(::UnityEngine::Camera* camera, ::UnityEngine::Material* material, ::UnityEngine::Matrix4x4 transform, ::UnityEngine::Bounds aabb, int32_t renderLayer,
                                                  int32_t shadowCasting, bool receiveShadows, int32_t sameDistanceSortPriority, uint64_t sceneCullingMask, int32_t rendererCallbackFlags,
                                                  void* userData, int32_t userDataSize);

  /// @brief Method DrawRanges, addr 0x2ea7288, size 0x74, virtual false, abstract: false, final false
  static inline void DrawRanges(void* ib, ::cordl_internals::Ptr<void*> vertexStreams, int32_t streamCount, void* ranges, int32_t rangeCount, void* vertexDecl);

  /// @brief Method SetPropertyBlock, addr 0x2ea72fc, size 0x3c, virtual false, abstract: false, final false
  static inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* props);

  /// @brief Method SetScissorRect, addr 0x2ea7338, size 0x80, virtual false, abstract: false, final false
  static inline void SetScissorRect(::UnityEngine::RectInt scissorRect);

  /// @brief Method DisableScissor, addr 0x2ea73f4, size 0x28, virtual false, abstract: false, final false
  static inline void DisableScissor();

  /// @brief Method CreateStencilState, addr 0x2ea741c, size 0x84, virtual false, abstract: false, final false
  static inline void* CreateStencilState(::UnityEngine::Rendering::StencilState stencilState);

  /// @brief Method SetStencilState, addr 0x2ea74dc, size 0x44, virtual false, abstract: false, final false
  static inline void SetStencilState(void* stencilState, int32_t stencilRef);

  /// @brief Method HasMappedBufferRange, addr 0x2ea7520, size 0x28, virtual false, abstract: false, final false
  static inline bool HasMappedBufferRange();

  /// @brief Method InsertCPUFence, addr 0x2ea7548, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t InsertCPUFence();

  /// @brief Method CPUFencePassed, addr 0x2ea7570, size 0x3c, virtual false, abstract: false, final false
  static inline bool CPUFencePassed(uint32_t fence);

  /// @brief Method WaitForCPUFencePassed, addr 0x2ea75ac, size 0x3c, virtual false, abstract: false, final false
  static inline void WaitForCPUFencePassed(uint32_t fence);

  /// @brief Method SyncRenderThread, addr 0x2ea75e8, size 0x28, virtual false, abstract: false, final false
  static inline void SyncRenderThread();

  /// @brief Method GetActiveViewport, addr 0x2ea7610, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::RectInt GetActiveViewport();

  /// @brief Method ProfileDrawChainBegin, addr 0x2ea76d0, size 0x28, virtual false, abstract: false, final false
  static inline void ProfileDrawChainBegin();

  /// @brief Method ProfileDrawChainEnd, addr 0x2ea76f8, size 0x28, virtual false, abstract: false, final false
  static inline void ProfileDrawChainEnd();

  /// @brief Method NotifyOfUIREvents, addr 0x2ea7720, size 0x3c, virtual false, abstract: false, final false
  static inline void NotifyOfUIREvents(bool subscribe);

  /// @brief Method GetUnityProjectionMatrix, addr 0x2ea775c, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetUnityProjectionMatrix();

  /// @brief Method RegisterIntermediateRenderer_Injected, addr 0x2ea71c8, size 0xc0, virtual false, abstract: false, final false
  static inline void RegisterIntermediateRenderer_Injected(::UnityEngine::Camera* camera, ::UnityEngine::Material* material, ByRef<::UnityEngine::Matrix4x4> transform,
                                                           ByRef<::UnityEngine::Bounds> aabb, int32_t renderLayer, int32_t shadowCasting, bool receiveShadows, int32_t sameDistanceSortPriority,
                                                           uint64_t sceneCullingMask, int32_t rendererCallbackFlags, void* userData, int32_t userDataSize);

  /// @brief Method SetScissorRect_Injected, addr 0x2ea73b8, size 0x3c, virtual false, abstract: false, final false
  static inline void SetScissorRect_Injected(ByRef<::UnityEngine::RectInt> scissorRect);

  /// @brief Method CreateStencilState_Injected, addr 0x2ea74a0, size 0x3c, virtual false, abstract: false, final false
  static inline void* CreateStencilState_Injected(ByRef<::UnityEngine::Rendering::StencilState> stencilState);

  /// @brief Method GetActiveViewport_Injected, addr 0x2ea7694, size 0x3c, virtual false, abstract: false, final false
  static inline void GetActiveViewport_Injected(ByRef<::UnityEngine::RectInt> ret);

  /// @brief Method GetUnityProjectionMatrix_Injected, addr 0x2ea77f8, size 0x3c, virtual false, abstract: false, final false
  static inline void GetUnityProjectionMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Utility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utility(Utility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utility(Utility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Utility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__Utility__GPUBufferType, "UnityEngine.UIElements.UIR", "Utility/GPUBufferType");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Utility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Utility*, "UnityEngine.UIElements.UIR", "Utility");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1, "UnityEngine.UIElements.UIR", "Utility/GPUBuffer`1");
