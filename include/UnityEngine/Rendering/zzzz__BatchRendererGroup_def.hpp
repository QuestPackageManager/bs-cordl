#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BatchRendererGroup)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct BatchBufferTarget;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct BatchCullingOutput;
}
namespace UnityEngine::Rendering {
struct BatchID;
}
namespace UnityEngine::Rendering {
struct BatchMaterialID;
}
namespace UnityEngine::Rendering {
struct BatchMeshID;
}
namespace UnityEngine::Rendering {
struct BatchRendererCullingOutput;
}
namespace UnityEngine::Rendering {
struct BatchRendererGroupCreateInfo;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup_BindingsMarshaller;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup_OnFinishedCulling;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup_OnPerformCulling;
}
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine::Rendering {
struct MetadataValue;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct GraphicsBufferHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup_BindingsMarshaller;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup_OnFinishedCulling;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup_OnPerformCulling;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::BatchRendererGroup);
MARK_REF_PTR_T(::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller);
MARK_REF_PTR_T(::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling);
MARK_REF_PTR_T(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
class CORDL_TYPE BatchRendererGroup_OnPerformCulling : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6960314, size 0x78, virtual true, abstract: false, final false
  inline ::Unity::Jobs::JobHandle Invoke(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, ::UnityEngine::Rendering::BatchCullingContext cullingContext,
                                         ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext);

  static inline ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x69601cc, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererGroup_OnPerformCulling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup_OnPerformCulling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchRendererGroup_OnPerformCulling(BatchRendererGroup_OnPerformCulling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup_OnPerformCulling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchRendererGroup_OnPerformCulling(BatchRendererGroup_OnPerformCulling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10847 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BatchRendererGroup/OnFinishedCulling
class CORDL_TYPE BatchRendererGroup_OnFinishedCulling : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x69603f8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr customCullingResult);

  static inline ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x696038c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererGroup_OnFinishedCulling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup_OnFinishedCulling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchRendererGroup_OnFinishedCulling(BatchRendererGroup_OnFinishedCulling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup_OnFinishedCulling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchRendererGroup_OnFinishedCulling(BatchRendererGroup_OnFinishedCulling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BatchRendererGroup/BindingsMarshaller
class CORDL_TYPE BatchRendererGroup_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x696040c, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Rendering::BatchRendererGroup* batchRendererGroup);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererGroup_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchRendererGroup_BindingsMarshaller(BatchRendererGroup_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchRendererGroup_BindingsMarshaller(BatchRendererGroup_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10849 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BatchRendererGroup
class CORDL_TYPE BatchRendererGroup : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller;

  using OnFinishedCulling = ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling;

  using OnPerformCulling = ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling;

  /// @brief Field m_FinishedCulling, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FinishedCulling, put = __cordl_internal_set_m_FinishedCulling)) ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* m_FinishedCulling;

  /// @brief Field m_GroupHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GroupHandle, put = __cordl_internal_set_m_GroupHandle)) ::System::IntPtr m_GroupHandle;

  /// @brief Field m_PerformCulling, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PerformCulling, put = __cordl_internal_set_m_PerformCulling)) ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* m_PerformCulling;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddBatch, addr 0x695f8ac, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::BatchID AddBatch(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue> batchMetadata, ::UnityEngine::GraphicsBufferHandle buffer);

  /// @brief Method AddDrawCommandBatch, addr 0x695f794, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::BatchID AddDrawCommandBatch(::System::IntPtr values, int32_t count, ::UnityEngine::GraphicsBufferHandle buffer, uint32_t bufferOffset, uint32_t windowSize);

  /// @brief Method AddDrawCommandBatch_Injected, addr 0x695f828, size 0x84, virtual false, abstract: false, final false
  static inline void AddDrawCommandBatch_Injected(::System::IntPtr _unity_self, ::System::IntPtr values, int32_t count, ::ByRef<::UnityEngine::GraphicsBufferHandle> buffer, uint32_t bufferOffset,
                                                  uint32_t windowSize, ::ByRef<::UnityEngine::Rendering::BatchID> ret);

  /// @brief Method Create, addr 0x695f6cc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::UnityEngine::Rendering::BatchRendererGroup* group, void* userContext);

  /// @brief Method Destroy, addr 0x695f758, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr groupHandle);

  /// @brief Method Dispose, addr 0x695f710, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetBufferTarget, addr 0x695fde0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BatchBufferTarget GetBufferTarget();

  /// @brief Method InvokeOnFinishedCulling, addr 0x6960074, size 0xd0, virtual false, abstract: false, final false
  static inline void InvokeOnFinishedCulling(::UnityEngine::Rendering::BatchRendererGroup* group, ::System::IntPtr customCullingResult);

  /// @brief Method InvokeOnPerformCulling, addr 0x695fe30, size 0x244, virtual false, abstract: false, final false
  static inline void InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* group, ::ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput> context,
                                            ::ByRef<::UnityEngine::Rendering::LODParameters> lodParameters, ::System::IntPtr userContext);

  static inline ::UnityEngine::Rendering::BatchRendererGroup* New_ctor(::UnityEngine::Rendering::BatchRendererGroupCreateInfo info);

  /// @brief Method OcclusionTestAABB, addr 0x6960144, size 0x44, virtual false, abstract: false, final false
  static inline bool OcclusionTestAABB(::System::IntPtr occlusionBuffer, ::UnityEngine::Bounds aabb);

  /// @brief Method OcclusionTestAABB_Injected, addr 0x6960188, size 0x44, virtual false, abstract: false, final false
  static inline bool OcclusionTestAABB_Injected(::System::IntPtr occlusionBuffer, ::ByRef<::UnityEngine::Bounds> aabb);

  /// @brief Method RegisterMaterials, addr 0x695f9c8, size 0x118, virtual false, abstract: false, final false
  inline void RegisterMaterials(::System::ReadOnlySpan_1<int32_t> materialID, ::System::Span_1<::UnityEngine::Rendering::BatchMaterialID> batchMaterialID);

  /// @brief Method RegisterMaterials_Injected, addr 0x695fae0, size 0x54, virtual false, abstract: false, final false
  static inline void RegisterMaterials_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> materialID,
                                                ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> batchMaterialID);

  /// @brief Method RegisterMeshes, addr 0x695fbd4, size 0x118, virtual false, abstract: false, final false
  inline void RegisterMeshes(::System::ReadOnlySpan_1<int32_t> meshID, ::System::Span_1<::UnityEngine::Rendering::BatchMeshID> batchMeshID);

  /// @brief Method RegisterMeshes_Injected, addr 0x695fcec, size 0x54, virtual false, abstract: false, final false
  static inline void RegisterMeshes_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> meshID,
                                             ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> batchMeshID);

  /// @brief Method RemoveBatch, addr 0x695f9c0, size 0x8, virtual false, abstract: false, final false
  inline void RemoveBatch(::UnityEngine::Rendering::BatchID batchID);

  /// @brief Method RemoveDrawCommandBatch, addr 0x695f920, size 0x5c, virtual false, abstract: false, final false
  inline void RemoveDrawCommandBatch(::UnityEngine::Rendering::BatchID batchID);

  /// @brief Method RemoveDrawCommandBatch_Injected, addr 0x695f97c, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveDrawCommandBatch_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::BatchID> batchID);

  /// @brief Method UnregisterMaterial, addr 0x695fb34, size 0x5c, virtual false, abstract: false, final false
  inline void UnregisterMaterial(::UnityEngine::Rendering::BatchMaterialID material);

  /// @brief Method UnregisterMaterial_Injected, addr 0x695fb90, size 0x44, virtual false, abstract: false, final false
  static inline void UnregisterMaterial_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::BatchMaterialID> material);

  /// @brief Method UnregisterMesh, addr 0x695fd40, size 0x5c, virtual false, abstract: false, final false
  inline void UnregisterMesh(::UnityEngine::Rendering::BatchMeshID mesh);

  /// @brief Method UnregisterMesh_Injected, addr 0x695fd9c, size 0x44, virtual false, abstract: false, final false
  static inline void UnregisterMesh_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::BatchMeshID> mesh);

  constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* const& __cordl_internal_get_m_FinishedCulling() const;

  constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*& __cordl_internal_get_m_FinishedCulling();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_GroupHandle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_GroupHandle();

  constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* const& __cordl_internal_get_m_PerformCulling() const;

  constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*& __cordl_internal_get_m_PerformCulling();

  constexpr void __cordl_internal_set_m_FinishedCulling(::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* value);

  constexpr void __cordl_internal_set_m_GroupHandle(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_PerformCulling(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* value);

  /// @brief Method .ctor, addr 0x695f660, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::BatchRendererGroupCreateInfo info);

  /// @brief Method get_BufferTarget, addr 0x695fe08, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BatchBufferTarget get_BufferTarget();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchRendererGroup(BatchRendererGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchRendererGroup(BatchRendererGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10850 };

  /// @brief Field m_GroupHandle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_GroupHandle;

  /// @brief Field m_PerformCulling, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* ___m_PerformCulling;

  /// @brief Field m_FinishedCulling, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* ___m_FinishedCulling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroup, ___m_GroupHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroup, ___m_PerformCulling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroup, ___m_FinishedCulling) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererGroup, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::BatchRendererGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroup*, "UnityEngine.Rendering", "BatchRendererGroup");
NEED_NO_BOX(::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroup_BindingsMarshaller*, "UnityEngine.Rendering", "BatchRendererGroup/BindingsMarshaller");
NEED_NO_BOX(::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*, "UnityEngine.Rendering", "BatchRendererGroup/OnFinishedCulling");
NEED_NO_BOX(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*, "UnityEngine.Rendering", "BatchRendererGroup/OnPerformCulling");
