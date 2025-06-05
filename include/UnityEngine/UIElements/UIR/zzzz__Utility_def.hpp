#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Utility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Utility)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::Rendering {
struct StencilState;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::UIElements::UIR {
struct GfxUpdateBufferRange;
}
namespace UnityEngine::UIElements::UIR {
struct Utility_GPUBufferType;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class Utility_GPUBuffer_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RectInt;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct Utility_GPUBufferType;
}
namespace UnityEngine::UIElements::UIR {
class Utility;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class Utility_GPUBuffer_1;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::Utility_GPUBufferType);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Utility);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.Utility/GPUBufferType
struct CORDL_TYPE Utility_GPUBufferType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Utility_GPUBufferType_Unwrapped
  enum struct __Utility_GPUBufferType_Unwrapped : int32_t {
    __E_Vertex = static_cast<int32_t>(0x0),
    __E_Index = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Utility_GPUBufferType_Unwrapped() const noexcept {
    return static_cast<__Utility_GPUBufferType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Utility_GPUBufferType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Utility_GPUBufferType(int32_t value__) noexcept;

  /// @brief Field Index value: I32(1)
  static ::UnityEngine::UIElements::UIR::Utility_GPUBufferType const Index;

  /// @brief Field Vertex value: I32(0)
  static ::UnityEngine::UIElements::UIR::Utility_GPUBufferType const Vertex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6353 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::Utility_GPUBufferType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Utility_GPUBufferType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.IDisposable, System.IntPtr, System.Object
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<T>
class CORDL_TYPE Utility_GPUBuffer_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BufferPointer)) ::System::IntPtr BufferPointer;

  __declspec(property(get = get_ElementStride)) int32_t ElementStride;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::System::IntPtr buffer;

  /// @brief Field elemCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_elemCount, put = __cordl_internal_set_elemCount)) int32_t elemCount;

  /// @brief Field elemStride, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_elemStride, put = __cordl_internal_set_elemStride)) int32_t elemStride;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>* New_ctor(int32_t elementCount, ::UnityEngine::UIElements::UIR::Utility_GPUBufferType type);

  /// @brief Method UpdateRanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateRanges(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> ranges, int32_t rangesMin, int32_t rangesMax);

  constexpr ::System::IntPtr const& __cordl_internal_get_buffer() const;

  constexpr ::System::IntPtr& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_elemCount() const;

  constexpr int32_t& __cordl_internal_get_elemCount();

  constexpr int32_t const& __cordl_internal_get_elemStride() const;

  constexpr int32_t& __cordl_internal_get_elemStride();

  constexpr void __cordl_internal_set_buffer(::System::IntPtr value);

  constexpr void __cordl_internal_set_elemCount(int32_t value);

  constexpr void __cordl_internal_set_elemStride(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t elementCount, ::UnityEngine::UIElements::UIR::Utility_GPUBufferType type);

  /// @brief Method get_BufferPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::IntPtr get_BufferPointer();

  /// @brief Method get_ElementStride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_ElementStride();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utility_GPUBuffer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utility_GPUBuffer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utility_GPUBuffer_1(Utility_GPUBuffer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utility_GPUBuffer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utility_GPUBuffer_1(Utility_GPUBuffer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6354 };

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___buffer;

  /// @brief Field elemCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___elemCount;

  /// @brief Field elemStride, offset: 0x1c, size: 0x4, def value: None
  int32_t ___elemStride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Utility
class CORDL_TYPE Utility : public ::System::Object {
public:
  // Declarations
  using GPUBufferType = ::UnityEngine::UIElements::UIR::Utility_GPUBufferType;

  template <typename T> using GPUBuffer_1 = ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<T>;

  /// @brief Field EngineUpdate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EngineUpdate, put = setStaticF_EngineUpdate)) ::System::Action* EngineUpdate;

  /// @brief Field FlushPendingResources, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FlushPendingResources, put = setStaticF_FlushPendingResources)) ::System::Action* FlushPendingResources;

  /// @brief Field GraphicsResourcesRecreate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GraphicsResourcesRecreate, put = setStaticF_GraphicsResourcesRecreate)) ::System::Action_1<bool>* GraphicsResourcesRecreate;

  /// @brief Field RegisterIntermediateRenderers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RegisterIntermediateRenderers,
                      put = setStaticF_RegisterIntermediateRenderers)) ::System::Action_1<::UnityW<::UnityEngine::Camera>>* RegisterIntermediateRenderers;

  /// @brief Field RenderNodeAdd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RenderNodeAdd, put = setStaticF_RenderNodeAdd)) ::System::Action_1<::System::IntPtr>* RenderNodeAdd;

  /// @brief Field RenderNodeCleanup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RenderNodeCleanup, put = setStaticF_RenderNodeCleanup)) ::System::Action_1<::System::IntPtr>* RenderNodeCleanup;

  /// @brief Field RenderNodeExecute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RenderNodeExecute, put = setStaticF_RenderNodeExecute)) ::System::Action_1<::System::IntPtr>* RenderNodeExecute;

  /// @brief Field s_MarkerRaiseEngineUpdate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerRaiseEngineUpdate, put = setStaticF_s_MarkerRaiseEngineUpdate)) ::Unity::Profiling::ProfilerMarker s_MarkerRaiseEngineUpdate;

  /// @brief Method AllocateBuffer, addr 0x49a6a80, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr AllocateBuffer(int32_t elementCount, int32_t elementStride, bool vertexBuffer);

  /// @brief Method CPUFencePassed, addr 0x49a70a8, size 0x3c, virtual false, abstract: false, final false
  static inline bool CPUFencePassed(uint32_t fence);

  /// @brief Method CreateStencilState, addr 0x49a6f54, size 0x84, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateStencilState(::UnityEngine::Rendering::StencilState stencilState);

  /// @brief Method CreateStencilState_Injected, addr 0x49a6fd8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateStencilState_Injected(::ByRef<::UnityEngine::Rendering::StencilState> stencilState);

  /// @brief Method DisableScissor, addr 0x49a6f2c, size 0x28, virtual false, abstract: false, final false
  static inline void DisableScissor();

  /// @brief Method DrawRanges, addr 0x49a6dc0, size 0x74, virtual false, abstract: false, final false
  static inline void DrawRanges(::System::IntPtr ib, ::cordl_internals::Ptr<::System::IntPtr> vertexStreams, int32_t streamCount, ::System::IntPtr ranges, int32_t rangeCount,
                                ::System::IntPtr vertexDecl);

  /// @brief Method FreeBuffer, addr 0x49a6ad4, size 0x3c, virtual false, abstract: false, final false
  static inline void FreeBuffer(::System::IntPtr buffer);

  /// @brief Method GetActiveViewport, addr 0x49a7148, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::RectInt GetActiveViewport();

  /// @brief Method GetActiveViewport_Injected, addr 0x49a71cc, size 0x3c, virtual false, abstract: false, final false
  static inline void GetActiveViewport_Injected(::ByRef<::UnityEngine::RectInt> ret);

  /// @brief Method GetUnityProjectionMatrix, addr 0x49a7294, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetUnityProjectionMatrix();

  /// @brief Method GetUnityProjectionMatrix_Injected, addr 0x49a7330, size 0x3c, virtual false, abstract: false, final false
  static inline void GetUnityProjectionMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetVertexDeclaration, addr 0x49a6bd8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexDeclaration(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> vertexAttributes);

  /// @brief Method HasMappedBufferRange, addr 0x49a7058, size 0x28, virtual false, abstract: false, final false
  static inline bool HasMappedBufferRange();

  /// @brief Method InsertCPUFence, addr 0x49a7080, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t InsertCPUFence();

  /// @brief Method NotifyOfUIREvents, addr 0x49a7258, size 0x3c, virtual false, abstract: false, final false
  static inline void NotifyOfUIREvents(bool subscribe);

  /// @brief Method ProfileDrawChainBegin, addr 0x49a7208, size 0x28, virtual false, abstract: false, final false
  static inline void ProfileDrawChainBegin();

  /// @brief Method ProfileDrawChainEnd, addr 0x49a7230, size 0x28, virtual false, abstract: false, final false
  static inline void ProfileDrawChainEnd();

  /// @brief Method RaiseEngineUpdate, addr 0x49a6788, size 0x94, virtual false, abstract: false, final false
  static inline void RaiseEngineUpdate();

  /// @brief Method RaiseFlushPendingResources, addr 0x49a681c, size 0x74, virtual false, abstract: false, final false
  static inline void RaiseFlushPendingResources();

  /// @brief Method RaiseGraphicsResourcesRecreate, addr 0x49a670c, size 0x7c, virtual false, abstract: false, final false
  static inline void RaiseGraphicsResourcesRecreate(bool recreate);

  /// @brief Method RaiseRegisterIntermediateRenderers, addr 0x49a6890, size 0x7c, virtual false, abstract: false, final false
  static inline void RaiseRegisterIntermediateRenderers(::UnityEngine::Camera* camera);

  /// @brief Method RaiseRenderNodeAdd, addr 0x49a690c, size 0x7c, virtual false, abstract: false, final false
  static inline void RaiseRenderNodeAdd(::System::IntPtr userData);

  /// @brief Method RaiseRenderNodeCleanup, addr 0x49a6a04, size 0x7c, virtual false, abstract: false, final false
  static inline void RaiseRenderNodeCleanup(::System::IntPtr userData);

  /// @brief Method RaiseRenderNodeExecute, addr 0x49a6988, size 0x7c, virtual false, abstract: false, final false
  static inline void RaiseRenderNodeExecute(::System::IntPtr userData);

  /// @brief Method RegisterIntermediateRenderer, addr 0x49a6c14, size 0xec, virtual false, abstract: false, final false
  static inline void RegisterIntermediateRenderer(::UnityEngine::Camera* camera, ::UnityEngine::Material* material, ::UnityEngine::Matrix4x4 transform, ::UnityEngine::Bounds aabb, int32_t renderLayer,
                                                  int32_t shadowCasting, bool receiveShadows, int32_t sameDistanceSortPriority, uint64_t sceneCullingMask, int32_t rendererCallbackFlags,
                                                  ::System::IntPtr userData, int32_t userDataSize);

  /// @brief Method RegisterIntermediateRenderer_Injected, addr 0x49a6d00, size 0xc0, virtual false, abstract: false, final false
  static inline void RegisterIntermediateRenderer_Injected(::UnityEngine::Camera* camera, ::UnityEngine::Material* material, ::ByRef<::UnityEngine::Matrix4x4> transform,
                                                           ::ByRef<::UnityEngine::Bounds> aabb, int32_t renderLayer, int32_t shadowCasting, bool receiveShadows, int32_t sameDistanceSortPriority,
                                                           uint64_t sceneCullingMask, int32_t rendererCallbackFlags, ::System::IntPtr userData, int32_t userDataSize);

  /// @brief Method SetPropertyBlock, addr 0x49a6e34, size 0x3c, virtual false, abstract: false, final false
  static inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* props);

  /// @brief Method SetScissorRect, addr 0x49a6e70, size 0x80, virtual false, abstract: false, final false
  static inline void SetScissorRect(::UnityEngine::RectInt scissorRect);

  /// @brief Method SetScissorRect_Injected, addr 0x49a6ef0, size 0x3c, virtual false, abstract: false, final false
  static inline void SetScissorRect_Injected(::ByRef<::UnityEngine::RectInt> scissorRect);

  /// @brief Method SetStencilState, addr 0x49a7014, size 0x44, virtual false, abstract: false, final false
  static inline void SetStencilState(::System::IntPtr stencilState, int32_t stencilRef);

  /// @brief Method SetVectorArray, addr 0x49a6b7c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVectorArray(::UnityEngine::MaterialPropertyBlock* props, int32_t name, ::System::IntPtr vector4s, int32_t count);

  /// @brief Method SetVectorArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SetVectorArray(::UnityEngine::MaterialPropertyBlock* props, int32_t name, ::Unity::Collections::NativeSlice_1<T> vector4s);

  /// @brief Method SyncRenderThread, addr 0x49a7120, size 0x28, virtual false, abstract: false, final false
  static inline void SyncRenderThread();

  /// @brief Method UpdateBufferRanges, addr 0x49a6b10, size 0x6c, virtual false, abstract: false, final false
  static inline void UpdateBufferRanges(::System::IntPtr buffer, ::System::IntPtr ranges, int32_t rangeCount, int32_t writeRangeStart, int32_t writeRangeEnd);

  /// @brief Method WaitForCPUFencePassed, addr 0x49a70e4, size 0x3c, virtual false, abstract: false, final false
  static inline void WaitForCPUFencePassed(uint32_t fence);

  /// @brief Method add_EngineUpdate, addr 0x49a5fcc, size 0xdc, virtual false, abstract: false, final false
  static inline void add_EngineUpdate(::System::Action* value);

  /// @brief Method add_FlushPendingResources, addr 0x49a6184, size 0xdc, virtual false, abstract: false, final false
  static inline void add_FlushPendingResources(::System::Action* value);

  /// @brief Method add_GraphicsResourcesRecreate, addr 0x49a5dec, size 0xf0, virtual false, abstract: false, final false
  static inline void add_GraphicsResourcesRecreate(::System::Action_1<bool>* value);

  /// @brief Method add_RegisterIntermediateRenderers, addr 0x49a633c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_RegisterIntermediateRenderers(::System::Action_1<::UnityW<::UnityEngine::Camera>>* value);

  /// @brief Method add_RenderNodeExecute, addr 0x49a6524, size 0xf4, virtual false, abstract: false, final false
  static inline void add_RenderNodeExecute(::System::Action_1<::System::IntPtr>* value);

  static inline ::System::Action* getStaticF_EngineUpdate();

  static inline ::System::Action* getStaticF_FlushPendingResources();

  static inline ::System::Action_1<bool>* getStaticF_GraphicsResourcesRecreate();

  static inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* getStaticF_RegisterIntermediateRenderers();

  static inline ::System::Action_1<::System::IntPtr>* getStaticF_RenderNodeAdd();

  static inline ::System::Action_1<::System::IntPtr>* getStaticF_RenderNodeCleanup();

  static inline ::System::Action_1<::System::IntPtr>* getStaticF_RenderNodeExecute();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerRaiseEngineUpdate();

  /// @brief Method remove_EngineUpdate, addr 0x49a60a8, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_EngineUpdate(::System::Action* value);

  /// @brief Method remove_FlushPendingResources, addr 0x49a6260, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_FlushPendingResources(::System::Action* value);

  /// @brief Method remove_GraphicsResourcesRecreate, addr 0x49a5edc, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_GraphicsResourcesRecreate(::System::Action_1<bool>* value);

  /// @brief Method remove_RegisterIntermediateRenderers, addr 0x49a6430, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_RegisterIntermediateRenderers(::System::Action_1<::UnityW<::UnityEngine::Camera>>* value);

  /// @brief Method remove_RenderNodeExecute, addr 0x49a6618, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_RenderNodeExecute(::System::Action_1<::System::IntPtr>* value);

  static inline void setStaticF_EngineUpdate(::System::Action* value);

  static inline void setStaticF_FlushPendingResources(::System::Action* value);

  static inline void setStaticF_GraphicsResourcesRecreate(::System::Action_1<bool>* value);

  static inline void setStaticF_RegisterIntermediateRenderers(::System::Action_1<::UnityW<::UnityEngine::Camera>>* value);

  static inline void setStaticF_RenderNodeAdd(::System::Action_1<::System::IntPtr>* value);

  static inline void setStaticF_RenderNodeCleanup(::System::Action_1<::System::IntPtr>* value);

  static inline void setStaticF_RenderNodeExecute(::System::Action_1<::System::IntPtr>* value);

  static inline void setStaticF_s_MarkerRaiseEngineUpdate(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utility(Utility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utility(Utility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Utility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Utility_GPUBufferType, "UnityEngine.UIElements.UIR", "Utility/GPUBufferType");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Utility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Utility*, "UnityEngine.UIElements.UIR", "Utility");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1, "UnityEngine.UIElements.UIR", "Utility/GPUBuffer`1");
