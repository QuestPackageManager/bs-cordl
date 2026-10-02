#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/ComputeRayTracingAccelStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__MeshBuildInfo_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__TopLevelAccelStruct_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Transform_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BuildFlags_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeRayTracingAccelStruct)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace UnityEngine::Rendering::RadeonRays {
struct BuildFlags;
}
namespace UnityEngine::Rendering::RadeonRays {
class RadeonRaysAPI;
}
namespace UnityEngine::Rendering::RadeonRays {
struct Transform;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelerationStructureOptions;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class BLASPositionsPool;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BlockAllocator_Allocation;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BuildFlags;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class ComputeRayTracingAccelStruct_MeshBlas;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class ComputeRayTracingAccelStruct_RadeonRaysInstance;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct ComputeRayTracingAccelStruct_Triangle;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingAccelStruct;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class IRayTracingShader;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct MeshInstanceDesc;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class RayTracingResources;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class ReferenceCounter;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class ComputeRayTracingAccelStruct;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class ComputeRayTracingAccelStruct_MeshBlas;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class ComputeRayTracingAccelStruct_RadeonRaysInstance;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct ComputeRayTracingAccelStruct_Triangle;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*);
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*);
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*);
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct*, "UnityEngine.Rendering.UnifiedRayTracing", "ComputeRayTracingAccelStruct");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*, "UnityEngine.Rendering.UnifiedRayTracing", "ComputeRayTracingAccelStruct/MeshBlas");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*, "UnityEngine.Rendering.UnifiedRayTracing",
                    "ComputeRayTracingAccelStruct/RadeonRaysInstance");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle, "UnityEngine.Rendering.UnifiedRayTracing", "ComputeRayTracingAccelStruct/Triangle");
// Dependencies Unity.Mathematics.float3
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingAccelStruct/Triangle
struct CORDL_TYPE ComputeRayTracingAccelStruct_Triangle {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeRayTracingAccelStruct_Triangle();

  // Ctor Parameters [CppParam { name: "v0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "v1", ty: "::Unity::Mathematics::float3", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "v2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }]
  constexpr ComputeRayTracingAccelStruct_Triangle(::Unity::Mathematics::float3 v0, ::Unity::Mathematics::float3 v1, ::Unity::Mathematics::float3 v2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20483 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field v0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 v0;

  /// @brief Field v1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 v1;

  /// @brief Field v2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::float3 v2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle, v0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle, v1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle, v2) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle) == 0x24, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies System.Object, System.ValueTuple`2<T1, T2>, UnityEngine.Rendering.RadeonRays.Transform
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingAccelStruct/RadeonRaysInstance
class CORDL_TYPE ComputeRayTracingAccelStruct_RadeonRaysInstance : public ::System::Object {
public:
  // Declarations
  /// @brief Field blas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_blas, put = __cordl_internal_set_blas)) ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* blas;

  /// @brief Field geomKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_geomKey, put = __cordl_internal_set_geomKey)) ::System::ValueTuple_2<int32_t, int32_t> geomKey;

  /// @brief Field instanceMask, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_instanceMask, put = __cordl_internal_set_instanceMask)) uint32_t instanceMask;

  /// @brief Field invertTriangleCulling, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_invertTriangleCulling, put = __cordl_internal_set_invertTriangleCulling)) bool invertTriangleCulling;

  /// @brief Field localToWorldTransform, offset 0x30, size 0x30
  __declspec(property(get = __cordl_internal_get_localToWorldTransform, put = __cordl_internal_set_localToWorldTransform)) ::UnityEngine::Rendering::RadeonRays::Transform localToWorldTransform;

  /// @brief Field opaqueGeometry, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_opaqueGeometry, put = __cordl_internal_set_opaqueGeometry)) bool opaqueGeometry;

  /// @brief Field triangleCullingEnabled, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_triangleCullingEnabled, put = __cordl_internal_set_triangleCullingEnabled)) bool triangleCullingEnabled;

  /// @brief Field userInstanceID, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_userInstanceID, put = __cordl_internal_set_userInstanceID)) uint32_t userInstanceID;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance* New_ctor();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* const& __cordl_internal_get_blas() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*& __cordl_internal_get_blas();

  constexpr ::System::ValueTuple_2<int32_t, int32_t> const& __cordl_internal_get_geomKey() const;

  constexpr ::System::ValueTuple_2<int32_t, int32_t>& __cordl_internal_get_geomKey();

  constexpr uint32_t const& __cordl_internal_get_instanceMask() const;

  constexpr uint32_t& __cordl_internal_get_instanceMask();

  constexpr bool const& __cordl_internal_get_invertTriangleCulling() const;

  constexpr bool& __cordl_internal_get_invertTriangleCulling();

  constexpr ::UnityEngine::Rendering::RadeonRays::Transform const& __cordl_internal_get_localToWorldTransform() const;

  constexpr ::UnityEngine::Rendering::RadeonRays::Transform& __cordl_internal_get_localToWorldTransform();

  constexpr bool const& __cordl_internal_get_opaqueGeometry() const;

  constexpr bool& __cordl_internal_get_opaqueGeometry();

  constexpr bool const& __cordl_internal_get_triangleCullingEnabled() const;

  constexpr bool& __cordl_internal_get_triangleCullingEnabled();

  constexpr uint32_t const& __cordl_internal_get_userInstanceID() const;

  constexpr uint32_t& __cordl_internal_get_userInstanceID();

  constexpr void __cordl_internal_set_blas(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* value);

  constexpr void __cordl_internal_set_geomKey(::System::ValueTuple_2<int32_t, int32_t> value);

  constexpr void __cordl_internal_set_instanceMask(uint32_t value);

  constexpr void __cordl_internal_set_invertTriangleCulling(bool value);

  constexpr void __cordl_internal_set_localToWorldTransform(::UnityEngine::Rendering::RadeonRays::Transform value);

  constexpr void __cordl_internal_set_opaqueGeometry(bool value);

  constexpr void __cordl_internal_set_triangleCullingEnabled(bool value);

  constexpr void __cordl_internal_set_userInstanceID(uint32_t value);

  /// @brief Method .ctor, addr 0x6e0be9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeRayTracingAccelStruct_RadeonRaysInstance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeRayTracingAccelStruct_RadeonRaysInstance", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeRayTracingAccelStruct_RadeonRaysInstance(ComputeRayTracingAccelStruct_RadeonRaysInstance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeRayTracingAccelStruct_RadeonRaysInstance", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeRayTracingAccelStruct_RadeonRaysInstance(ComputeRayTracingAccelStruct_RadeonRaysInstance const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20484 };

  /// [TupleElementNames(new[] { "mesh", "subMeshIndex" })]
  /// @brief Field geomKey, offset: 0x10, size: 0x8, def value: None
  ::System::ValueTuple_2<int32_t, int32_t> ___geomKey;

  /// @brief Field blas, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* ___blas;

  /// @brief Field instanceMask, offset: 0x20, size: 0x4, def value: None
  uint32_t ___instanceMask;

  /// @brief Field triangleCullingEnabled, offset: 0x24, size: 0x1, def value: None
  bool ___triangleCullingEnabled;

  /// @brief Field invertTriangleCulling, offset: 0x25, size: 0x1, def value: None
  bool ___invertTriangleCulling;

  /// @brief Field userInstanceID, offset: 0x28, size: 0x4, def value: None
  uint32_t ___userInstanceID;

  /// @brief Field opaqueGeometry, offset: 0x2c, size: 0x1, def value: None
  bool ___opaqueGeometry;

  /// @brief Field localToWorldTransform, offset: 0x30, size: 0x30, def value: None
  ::UnityEngine::Rendering::RadeonRays::Transform ___localToWorldTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance, ___geomKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance, ___blas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance, ___instanceMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance, ___triangleCullingEnabled) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance, ___invertTriangleCulling) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance, ___userInstanceID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance, ___opaqueGeometry) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance, ___localToWorldTransform) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance) == 0x60, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies System.Object, UnityEngine.Rendering.RadeonRays.MeshBuildInfo, UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator::Allocation
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingAccelStruct/MeshBlas
class CORDL_TYPE ComputeRayTracingAccelStruct_MeshBlas : public ::System::Object {
public:
  // Declarations
  /// @brief Field blasVertices, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_blasVertices, put = __cordl_internal_set_blasVertices)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation blasVertices;

  /// @brief Field buildInfo, offset 0x10, size 0x30
  __declspec(property(get = __cordl_internal_get_buildInfo, put = __cordl_internal_set_buildInfo)) ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo buildInfo;

  /// @brief Field bvhAlloc, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_bvhAlloc, put = __cordl_internal_set_bvhAlloc)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation bvhAlloc;

  /// @brief Field bvhBuilt, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_bvhBuilt, put = __cordl_internal_set_bvhBuilt)) bool bvhBuilt;

  /// @brief Field bvhLeavesAlloc, offset 0x4c, size 0xc
  __declspec(property(get = __cordl_internal_get_bvhLeavesAlloc, put = __cordl_internal_set_bvhLeavesAlloc)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation bvhLeavesAlloc;

  /// @brief Field refCount, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_refCount, put = __cordl_internal_set_refCount)) uint32_t refCount;

  /// @brief Method DecRef, addr 0x6e0beb0, size 0x10, virtual false, abstract: false, final false
  inline void DecRef();

  /// @brief Method IncRef, addr 0x6e0bea0, size 0x10, virtual false, abstract: false, final false
  inline void IncRef();

  /// @brief Method IsUnreferenced, addr 0x6e0bec0, size 0x10, virtual false, abstract: false, final false
  inline bool IsUnreferenced();

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* New_ctor();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const& __cordl_internal_get_blasVertices() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation& __cordl_internal_get_blasVertices();

  constexpr ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo const& __cordl_internal_get_buildInfo() const;

  constexpr ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo& __cordl_internal_get_buildInfo();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const& __cordl_internal_get_bvhAlloc() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation& __cordl_internal_get_bvhAlloc();

  constexpr bool const& __cordl_internal_get_bvhBuilt() const;

  constexpr bool& __cordl_internal_get_bvhBuilt();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const& __cordl_internal_get_bvhLeavesAlloc() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation& __cordl_internal_get_bvhLeavesAlloc();

  constexpr uint32_t const& __cordl_internal_get_refCount() const;

  constexpr uint32_t& __cordl_internal_get_refCount();

  constexpr void __cordl_internal_set_blasVertices(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation value);

  constexpr void __cordl_internal_set_buildInfo(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo value);

  constexpr void __cordl_internal_set_bvhAlloc(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation value);

  constexpr void __cordl_internal_set_bvhBuilt(bool value);

  constexpr void __cordl_internal_set_bvhLeavesAlloc(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation value);

  constexpr void __cordl_internal_set_refCount(uint32_t value);

  /// @brief Method .ctor, addr 0x6e0bed0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeRayTracingAccelStruct_MeshBlas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeRayTracingAccelStruct_MeshBlas", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeRayTracingAccelStruct_MeshBlas(ComputeRayTracingAccelStruct_MeshBlas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeRayTracingAccelStruct_MeshBlas", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeRayTracingAccelStruct_MeshBlas(ComputeRayTracingAccelStruct_MeshBlas const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20485 };

  /// @brief Field buildInfo, offset: 0x10, size: 0x30, def value: None
  ::UnityEngine::Rendering::RadeonRays::MeshBuildInfo ___buildInfo;

  /// @brief Field bvhAlloc, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation ___bvhAlloc;

  /// @brief Field bvhLeavesAlloc, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation ___bvhLeavesAlloc;

  /// @brief Field blasVertices, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation ___blasVertices;

  /// @brief Field bvhBuilt, offset: 0x64, size: 0x1, def value: None
  bool ___bvhBuilt;

  /// @brief Field refCount, offset: 0x68, size: 0x4, def value: None
  uint32_t ___refCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas, ___buildInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas, ___bvhAlloc) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas, ___bvhLeavesAlloc) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas, ___blasVertices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas, ___bvhBuilt) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas, ___refCount) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas) == 0x70, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.Rendering.RadeonRays.TopLevelAccelStruct, UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator,
// UnityEngine.Rendering.UnifiedRayTracing.BuildFlags
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingAccelStruct
class CORDL_TYPE ComputeRayTracingAccelStruct : public ::System::Object {
public:
  // Declarations
  using MeshBlas = ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas;

  using RadeonRaysInstance = ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance;

  using Triangle = ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle;

  __declspec(property(get = get_bottomLevelBvhBuffer)) ::UnityEngine::GraphicsBuffer* bottomLevelBvhBuffer;

  __declspec(property(get = get_instanceInfoBuffer)) ::UnityEngine::GraphicsBuffer* instanceInfoBuffer;

  /// @brief Field m_BlasAllocator, offset 0x38, size 0x20
  __declspec(property(get = __cordl_internal_get_m_BlasAllocator, put = __cordl_internal_set_m_BlasAllocator)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator m_BlasAllocator;

  /// @brief Field m_BlasBuffer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlasBuffer, put = __cordl_internal_set_m_BlasBuffer)) ::UnityEngine::GraphicsBuffer* m_BlasBuffer;

  /// @brief Field m_BlasLeavesAllocator, offset 0x60, size 0x20
  __declspec(property(get = __cordl_internal_get_m_BlasLeavesAllocator,
                      put = __cordl_internal_set_m_BlasLeavesAllocator)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator m_BlasLeavesAllocator;

  /// @brief Field m_BlasLeavesBuffer, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlasLeavesBuffer, put = __cordl_internal_set_m_BlasLeavesBuffer)) ::UnityEngine::GraphicsBuffer* m_BlasLeavesBuffer;

  /// @brief Field m_BlasPositions, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlasPositions, put = __cordl_internal_set_m_BlasPositions)) ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool* m_BlasPositions;

  /// @brief Field m_Blases, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Blases,
                      put = __cordl_internal_set_m_Blases)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t, int32_t>,
                                                                                                         ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>* m_Blases;

  /// @brief Field m_BuildFlags, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BuildFlags, put = __cordl_internal_set_m_BuildFlags)) ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags m_BuildFlags;

  /// @brief Field m_CopyShader, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyShader, put = __cordl_internal_set_m_CopyShader)) ::UnityW<::UnityEngine::ComputeShader> m_CopyShader;

  /// @brief Field m_Counter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Counter, put = __cordl_internal_set_m_Counter)) ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* m_Counter;

  /// @brief Field m_FreeHandles, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeHandles, put = __cordl_internal_set_m_FreeHandles)) ::System::Collections::Generic::Queue_1<uint32_t>* m_FreeHandles;

  /// @brief Field m_HandleObfuscation, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HandleObfuscation, put = __cordl_internal_set_m_HandleObfuscation)) uint32_t m_HandleObfuscation;

  /// @brief Field m_RadeonInstances, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RadeonInstances, put = __cordl_internal_set_m_RadeonInstances)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>* m_RadeonInstances;

  /// @brief Field m_RadeonRaysAPI, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RadeonRaysAPI, put = __cordl_internal_set_m_RadeonRaysAPI)) ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI* m_RadeonRaysAPI;

  /// @brief Field m_TopLevelAccelStruct, offset 0x90, size 0x28
  __declspec(property(get = __cordl_internal_get_m_TopLevelAccelStruct,
                      put = __cordl_internal_set_m_TopLevelAccelStruct)) ::System::Nullable_1<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>
      m_TopLevelAccelStruct;

  __declspec(property(get = get_topLevelBvhBuffer)) ::UnityEngine::GraphicsBuffer* topLevelBvhBuffer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct"
  constexpr operator ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct*() noexcept;

  /// @brief Method AddInstance, addr 0x6e09928, size 0x198, virtual true, abstract: false, final true
  inline int32_t AddInstance(::UnityEngine::Rendering::UnifiedRayTracing::MeshInstanceDesc meshInstance);

  /// @brief Method AllocateBlas, addr 0x6e0a5e8, size 0x598, virtual false, abstract: false, final false
  inline void AllocateBlas(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* blas);

  /// @brief Method AllocateBlasInternalNodes, addr 0x6e0ac40, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation AllocateBlasInternalNodes(int32_t allocationNodeCount);

  /// @brief Method AllocateBlasLeafNodes, addr 0x6e0ae28, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation AllocateBlasLeafNodes(int32_t allocationNodeCount);

  /// @brief Method Bind, addr 0x6e0b974, size 0x1e4, virtual false, abstract: false, final false
  inline void Bind(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name, ::UnityEngine::ComputeShader* shader, int32_t kernelIndex);

  /// @brief Method Bind, addr 0x6e0b5d0, size 0x3a4, virtual false, abstract: false, final false
  inline void Bind(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name, ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingShader* shader);

  /// @brief Method Build, addr 0x6e0a354, size 0x8c, virtual true, abstract: false, final true
  inline void Build(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer);

  /// @brief Method BuildMissingBottomLevelAccelStructs, addr 0x6e0b010, size 0x1f4, virtual false, abstract: false, final false
  inline void BuildMissingBottomLevelAccelStructs(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer);

  /// @brief Method BuildTopLevelAccelStruct, addr 0x6e0b204, size 0x3cc, virtual false, abstract: false, final false
  inline void BuildTopLevelAccelStruct(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer);

  /// [Conditional("UNITY_ASSERTIONS")]
  /// @brief Method CheckInstanceHandleIsValid, addr 0x6e0bda4, size 0xf8, virtual false, abstract: false, final false
  inline void CheckInstanceHandleIsValid(int32_t instanceHandle);

  /// @brief Method ClearInstances, addr 0x6e09f90, size 0x218, virtual true, abstract: false, final true
  inline void ClearInstances();

  /// @brief Method ConvertFlagsToGpuBuild, addr 0x6e0ac30, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RadeonRays::BuildFlags ConvertFlagsToGpuBuild(::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags flags);

  /// @brief Method ConvertTranform, addr 0x6e0bb58, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 ConvertTranform(::UnityEngine::Rendering::RadeonRays::Transform input);

  /// @brief Method ConvertTranform, addr 0x6e09d40, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::Transform ConvertTranform(::UnityEngine::Matrix4x4 input);

  /// @brief Method CreateBvh, addr 0x6e0a3f4, size 0x30, virtual false, abstract: false, final false
  inline void CreateBvh(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratchBuffer);

  /// @brief Method DeleteMeshBlas, addr 0x6e09e94, size 0xfc, virtual false, abstract: false, final false
  inline void DeleteMeshBlas(/* [TupleElementNames(new[] { "mesh", "subMeshIndex" })] */ ::System::ValueTuple_2<int32_t, int32_t> geomKey,
                             ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* blas);

  /// @brief Method Dispose, addr 0x6e09744, size 0x1e4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FreeTopLevelAccelStruct, addr 0x6e09c10, size 0x88, virtual false, abstract: false, final false
  inline void FreeTopLevelAccelStruct();

  /// @brief Method GetBuildScratchBufferRequiredSizeInBytes, addr 0x6e0a3e0, size 0x14, virtual true, abstract: false, final true
  inline uint64_t GetBuildScratchBufferRequiredSizeInBytes();

  /// @brief Method GetBvhBuildScratchBufferSizeInDwords, addr 0x6e0a424, size 0x1c4, virtual false, abstract: false, final false
  inline uint64_t GetBvhBuildScratchBufferSizeInDwords();

  /// @brief Method GetFaceIndices, addr 0x6e0bc20, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int3 GetFaceIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t triangleIdx);

  /// @brief Method GetOrAllocateMeshBlas, addr 0x6e09ac0, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas* GetOrAllocateMeshBlas(::UnityEngine::Mesh* mesh, int32_t subMeshIndex);

  /// @brief Method GetTriangle, addr 0x6e0bcc4, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_Triangle GetTriangle(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices,
                                                                                                               ::Unity::Mathematics::int3 idx);

  /// @brief Method LoadIndexBuffer, addr 0x6e0ac18, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* LoadIndexBuffer(::UnityEngine::Mesh* mesh);

  /// @brief Method LoadPositionBuffer, addr 0x6e0ab80, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* LoadPositionBuffer(::UnityEngine::Mesh* mesh, ::by_ref<int32_t> stride, ::by_ref<int32_t> offset);

  /// @brief Method NewHandle, addr 0x6e09c98, size 0xa8, virtual false, abstract: false, final false
  inline int32_t NewHandle();

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct* New_ctor(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options,
                                                                                                    ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources,
                                                                                                    ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter,
                                                                                                    int32_t blasBufferInitialSizeBytes);

  /// @brief Method ReleaseHandle, addr 0x6e09e2c, size 0x68, virtual false, abstract: false, final false
  inline void ReleaseHandle(int32_t handle);

  /// @brief Method RemoveInstance, addr 0x6e09d7c, size 0xb0, virtual true, abstract: false, final true
  inline void RemoveInstance(int32_t instanceHandle);

  /// @brief Method UpdateInstanceID, addr 0x6e0a25c, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateInstanceID(int32_t instanceHandle, uint32_t instanceID);

  /// @brief Method UpdateInstanceMask, addr 0x6e0a2d8, size 0x7c, virtual true, abstract: false, final true
  inline void UpdateInstanceMask(int32_t instanceHandle, uint32_t mask);

  /// @brief Method UpdateInstanceTransform, addr 0x6e0a1a8, size 0xb4, virtual true, abstract: false, final true
  inline void UpdateInstanceTransform(int32_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorldMatrix);

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& __cordl_internal_get_m_BlasAllocator() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& __cordl_internal_get_m_BlasAllocator();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_BlasBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_BlasBuffer();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& __cordl_internal_get_m_BlasLeavesAllocator() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& __cordl_internal_get_m_BlasLeavesAllocator();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_BlasLeavesBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_BlasLeavesBuffer();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool* const& __cordl_internal_get_m_BlasPositions() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool*& __cordl_internal_get_m_BlasPositions();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t, int32_t>, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>* const&
  __cordl_internal_get_m_Blases() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t, int32_t>, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>*&
  __cordl_internal_get_m_Blases();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags const& __cordl_internal_get_m_BuildFlags() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags& __cordl_internal_get_m_BuildFlags();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_CopyShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_CopyShader();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* const& __cordl_internal_get_m_Counter() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*& __cordl_internal_get_m_Counter();

  constexpr ::System::Collections::Generic::Queue_1<uint32_t>* const& __cordl_internal_get_m_FreeHandles() const;

  constexpr ::System::Collections::Generic::Queue_1<uint32_t>*& __cordl_internal_get_m_FreeHandles();

  constexpr uint32_t const& __cordl_internal_get_m_HandleObfuscation() const;

  constexpr uint32_t& __cordl_internal_get_m_HandleObfuscation();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>* const&
  __cordl_internal_get_m_RadeonInstances() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>*&
  __cordl_internal_get_m_RadeonInstances();

  constexpr ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI* const& __cordl_internal_get_m_RadeonRaysAPI() const;

  constexpr ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI*& __cordl_internal_get_m_RadeonRaysAPI();

  constexpr ::System::Nullable_1<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> const& __cordl_internal_get_m_TopLevelAccelStruct() const;

  constexpr ::System::Nullable_1<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>& __cordl_internal_get_m_TopLevelAccelStruct();

  constexpr void __cordl_internal_set_m_BlasAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value);

  constexpr void __cordl_internal_set_m_BlasBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_BlasLeavesAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value);

  constexpr void __cordl_internal_set_m_BlasLeavesBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_BlasPositions(::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool* value);

  constexpr void __cordl_internal_set_m_Blases(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t, int32_t>, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>* value);

  constexpr void __cordl_internal_set_m_BuildFlags(::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags value);

  constexpr void __cordl_internal_set_m_CopyShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_Counter(::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* value);

  constexpr void __cordl_internal_set_m_FreeHandles(::System::Collections::Generic::Queue_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_HandleObfuscation(uint32_t value);

  constexpr void
  __cordl_internal_set_m_RadeonInstances(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>* value);

  constexpr void __cordl_internal_set_m_RadeonRaysAPI(::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI* value);

  constexpr void __cordl_internal_set_m_TopLevelAccelStruct(::System::Nullable_1<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> value);

  /// @brief Method .ctor, addr 0x6e092e0, size 0x32c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* options, ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* resources,
                    ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* counter, int32_t blasBufferInitialSizeBytes);

  /// @brief Method get_bottomLevelBvhBuffer, addr 0x6e09674, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_bottomLevelBvhBuffer();

  /// @brief Method get_instanceInfoBuffer, addr 0x6e096dc, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_instanceInfoBuffer();

  /// @brief Method get_topLevelBvhBuffer, addr 0x6e0960c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_topLevelBvhBuffer();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct"
  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::IRayTracingAccelStruct* i___UnityEngine__Rendering__UnifiedRayTracing__IRayTracingAccelStruct() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeRayTracingAccelStruct();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeRayTracingAccelStruct", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeRayTracingAccelStruct(ComputeRayTracingAccelStruct&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeRayTracingAccelStruct", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeRayTracingAccelStruct(ComputeRayTracingAccelStruct const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20486 };

  /// @brief Field m_HandleObfuscation, offset: 0x10, size: 0x4, def value: None
  uint32_t ___m_HandleObfuscation;

  /// @brief Field m_RadeonRaysAPI, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::RadeonRays::RadeonRaysAPI* ___m_RadeonRaysAPI;

  /// @brief Field m_BuildFlags, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags ___m_BuildFlags;

  /// @brief Field m_Counter, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* ___m_Counter;

  /// [TupleElementNames(new[] { "mesh", "subMeshIndex" })]
  /// @brief Field m_Blases, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t, int32_t>, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_MeshBlas*>* ___m_Blases;

  /// @brief Field m_BlasAllocator, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator ___m_BlasAllocator;

  /// @brief Field m_BlasBuffer, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_BlasBuffer;

  /// @brief Field m_BlasLeavesAllocator, offset: 0x60, size: 0x20, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator ___m_BlasLeavesAllocator;

  /// @brief Field m_BlasLeavesBuffer, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_BlasLeavesBuffer;

  /// @brief Field m_BlasPositions, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BLASPositionsPool* ___m_BlasPositions;

  /// @brief Field m_TopLevelAccelStruct, offset: 0x90, size: 0x28, def value: None
  ::System::Nullable_1<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> ___m_TopLevelAccelStruct;

  /// @brief Field m_CopyShader, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_CopyShader;

  /// @brief Field m_RadeonInstances, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct_RadeonRaysInstance*>* ___m_RadeonInstances;

  /// @brief Field m_FreeHandles, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<uint32_t>* ___m_FreeHandles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_HandleObfuscation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_RadeonRaysAPI) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_BuildFlags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_Counter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_Blases) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_BlasAllocator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_BlasBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_BlasLeavesAllocator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_BlasLeavesBuffer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_BlasPositions) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_TopLevelAccelStruct) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_CopyShader) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_RadeonInstances) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct, ___m_FreeHandles) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeRayTracingAccelStruct) == 0xd0, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
