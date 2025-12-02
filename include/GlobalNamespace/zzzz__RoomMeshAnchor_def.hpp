#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMeshAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticLabels_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMeshAnchor)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_BakeMeshJob;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_GetTriangleMeshCountsJob;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_GetTriangleMeshJob;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_PopulateMeshDataJob;
}
namespace GlobalNamespace {
template <typename T> struct RoomMeshAnchor__EnableComponent_d__16_1;
}
namespace GlobalNamespace {
class RoomMeshAnchor__GenerateRoomMesh_d__15;
}
namespace GlobalNamespace {
struct RoomMeshAnchor__Initialize_d__14;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomMeshAnchor;
}
namespace GlobalNamespace {
class RoomMeshAnchor__GenerateRoomMesh_d__15;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_BakeMeshJob;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_GetTriangleMeshCountsJob;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_GetTriangleMeshJob;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_PopulateMeshDataJob;
}
namespace GlobalNamespace {
template <typename T> struct RoomMeshAnchor__EnableComponent_d__16_1;
}
namespace GlobalNamespace {
struct RoomMeshAnchor__Initialize_d__14;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomMeshAnchor);
MARK_REF_PTR_T(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15);
MARK_VAL_T(::GlobalNamespace::RoomMeshAnchor_BakeMeshJob);
MARK_VAL_T(::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob);
MARK_VAL_T(::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob);
MARK_VAL_T(::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob);
MARK_GEN_VAL_T(::GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1);
MARK_VAL_T(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14);
// Dependencies OVRSpace, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomMeshAnchor/GetTriangleMeshCountsJob
struct CORDL_TYPE RoomMeshAnchor_GetTriangleMeshCountsJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x581c090, size 0x9c, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshAnchor_GetTriangleMeshCountsJob();

  // Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "Results", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }]
  constexpr RoomMeshAnchor_GetTriangleMeshCountsJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<int32_t> Results) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21120 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace Space;

  /// @brief Field Results, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Results;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob, Results) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSpace, Unity.Collections.NativeArray`1<T>, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomMeshAnchor/GetTriangleMeshJob
struct CORDL_TYPE RoomMeshAnchor_GetTriangleMeshJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x581c12c, size 0x80, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshAnchor_GetTriangleMeshJob();

  // Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "Vertices", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
  // def_value: None }]
  constexpr RoomMeshAnchor_GetTriangleMeshJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices,
                                              ::Unity::Collections::NativeArray_1<int32_t> Triangles) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21121 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace Space;

  /// @brief Field Vertices, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices;

  /// @brief Field Triangles, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Triangles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob, Vertices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob, Triangles) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Mesh::MeshData, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomMeshAnchor/PopulateMeshDataJob
struct CORDL_TYPE RoomMeshAnchor_PopulateMeshDataJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x581c1ac, size 0x240, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshAnchor_PopulateMeshDataJob();

  // Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "Triangles", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "MeshData", ty: "::UnityEngine::Mesh_MeshData", modifiers: "", def_value: None }]
  constexpr RoomMeshAnchor_PopulateMeshDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices, ::Unity::Collections::NativeArray_1<int32_t> Triangles,
                                               ::UnityEngine::Mesh_MeshData MeshData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21122 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Vertices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices;

  /// @brief Field Triangles, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Triangles;

  /// @brief Field MeshData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Mesh_MeshData MeshData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob, Vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob, Triangles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob, MeshData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomMeshAnchor/BakeMeshJob
struct CORDL_TYPE RoomMeshAnchor_BakeMeshJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x581c3ec, size 0x6c, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshAnchor_BakeMeshJob();

  // Ctor Parameters [CppParam { name: "MeshID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Convex", ty: "bool", modifiers: "", def_value: None }]
  constexpr RoomMeshAnchor_BakeMeshJob(int32_t MeshID, bool Convex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21123 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field MeshID, offset: 0x0, size: 0x4, def value: None
  int32_t MeshID;

  /// @brief Field Convex, offset: 0x4, size: 0x1, def value: None
  bool Convex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_BakeMeshJob, MeshID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor_BakeMeshJob, Convex) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomMeshAnchor_BakeMeshJob, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: RoomMeshAnchor/<EnableComponent>d__16`1<T>
struct CORDL_TYPE RoomMeshAnchor__EnableComponent_d__16_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshAnchor__EnableComponent_d__16_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::RoomMeshAnchor>", modifiers:
  // "", def_value: None }, CppParam { name: "_component_5__2", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "",
  // def_value: None }]
  constexpr RoomMeshAnchor__EnableComponent_d__16_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                    ::UnityW<::GlobalNamespace::RoomMeshAnchor> __4__this, T _component_5__2, ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21124 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomMeshAnchor> __4__this;

  /// @brief Field <component>5__2, offset: 0x28, size: 0x8, def value: None
  T _component_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.Mesh::MeshDataArray
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomMeshAnchor/<GenerateRoomMesh>d__15
class CORDL_TYPE RoomMeshAnchor__GenerateRoomMesh_d__15 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::RoomMeshAnchor> __4__this;

  /// @brief Field <collider>5__4, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__collider_5__4, put = __cordl_internal_set__collider_5__4)) ::UnityW<::UnityEngine::MeshCollider> _collider_5__4;

  /// @brief Field <disposeVerticesJob>5__3, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__disposeVerticesJob_5__3, put = __cordl_internal_set__disposeVerticesJob_5__3)) ::Unity::Jobs::JobHandle _disposeVerticesJob_5__3;

  /// @brief Field <job>5__6, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__job_5__6, put = __cordl_internal_set__job_5__6)) ::Unity::Jobs::JobHandle _job_5__6;

  /// @brief Field <meshCountResults>5__5, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__meshCountResults_5__5, put = __cordl_internal_set__meshCountResults_5__5)) ::Unity::Collections::NativeArray_1<int32_t> _meshCountResults_5__5;

  /// @brief Field <meshDataArray>5__2, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__meshDataArray_5__2, put = __cordl_internal_set__meshDataArray_5__2)) ::UnityEngine::Mesh_MeshDataArray _meshDataArray_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x581c474, size 0x61c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x581cae4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x581caec, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x581cb24, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x581c458, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::RoomMeshAnchor> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::RoomMeshAnchor>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__collider_5__4() const;

  constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__collider_5__4();

  constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__disposeVerticesJob_5__3() const;

  constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__disposeVerticesJob_5__3();

  constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__job_5__6() const;

  constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__job_5__6();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get__meshCountResults_5__5() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get__meshCountResults_5__5();

  constexpr ::UnityEngine::Mesh_MeshDataArray const& __cordl_internal_get__meshDataArray_5__2() const;

  constexpr ::UnityEngine::Mesh_MeshDataArray& __cordl_internal_get__meshDataArray_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomMeshAnchor> value);

  constexpr void __cordl_internal_set__collider_5__4(::UnityW<::UnityEngine::MeshCollider> value);

  constexpr void __cordl_internal_set__disposeVerticesJob_5__3(::Unity::Jobs::JobHandle value);

  constexpr void __cordl_internal_set__job_5__6(::Unity::Jobs::JobHandle value);

  constexpr void __cordl_internal_set__meshCountResults_5__5(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set__meshDataArray_5__2(::UnityEngine::Mesh_MeshDataArray value);

  /// @brief Method <>m__Finally1, addr 0x581ca90, size 0x54, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x581bce8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshAnchor__GenerateRoomMesh_d__15();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshAnchor__GenerateRoomMesh_d__15", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomMeshAnchor__GenerateRoomMesh_d__15(RoomMeshAnchor__GenerateRoomMesh_d__15&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshAnchor__GenerateRoomMesh_d__15", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomMeshAnchor__GenerateRoomMesh_d__15(RoomMeshAnchor__GenerateRoomMesh_d__15 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21125 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomMeshAnchor> _____4__this;

  /// @brief Field <meshDataArray>5__2, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Mesh_MeshDataArray ____meshDataArray_5__2;

  /// @brief Field <disposeVerticesJob>5__3, offset: 0x38, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle ____disposeVerticesJob_5__3;

  /// @brief Field <collider>5__4, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshCollider> ____collider_5__4;

  /// @brief Field <meshCountResults>5__5, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ____meshCountResults_5__5;

  /// @brief Field <job>5__6, offset: 0x60, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle ____job_5__6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, ____meshDataArray_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, ____disposeVerticesJob_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, ____collider_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, ____meshCountResults_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, ____job_5__6) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRSemanticLabels, OVRTriangleMesh, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomMeshAnchor/<Initialize>d__14
struct CORDL_TYPE RoomMeshAnchor__Initialize_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x581cb2c, size 0x59c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x581d0c8, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshAnchor__Initialize_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::RoomMeshAnchor>", modifiers: "",
  // def_value: None }, CppParam { name: "anchor", ty: "::GlobalNamespace::OVRAnchor", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRSemanticLabels>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRTriangleMesh>", modifiers: "", def_value: None }]
  constexpr RoomMeshAnchor__Initialize_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::RoomMeshAnchor> __4__this,
                                             ::GlobalNamespace::OVRAnchor anchor, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRSemanticLabels> __u__1,
                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRTriangleMesh> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21126 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomMeshAnchor> __4__this;

  /// @brief Field anchor, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::OVRAnchor anchor;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRSemanticLabels> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRTriangleMesh> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, anchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, __u__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRAnchor, OVRSemanticLabels, OVRTriangleMesh, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomMeshAnchor
class CORDL_TYPE RoomMeshAnchor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BakeMeshJob = ::GlobalNamespace::RoomMeshAnchor_BakeMeshJob;

  using GetTriangleMeshCountsJob = ::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob;

  using GetTriangleMeshJob = ::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob;

  using PopulateMeshDataJob = ::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob;

  template <typename T> using _EnableComponent_d__16_1 = ::GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1<T>;

  using _GenerateRoomMesh_d__15 = ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15;

  using _Initialize_d__14 = ::GlobalNamespace::RoomMeshAnchor__Initialize_d__14;

  __declspec(property(get = get_IsCompleted, put = set_IsCompleted)) bool IsCompleted;

  /// @brief Field RotateY180, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_RotateY180, put = setStaticF_RotateY180)) ::UnityEngine::Quaternion RotateY180;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Field <IsCompleted>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsCompleted_k__BackingField, put = __cordl_internal_set__IsCompleted_k__BackingField)) bool _IsCompleted_k__BackingField;

  /// @brief Field _anchor, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get__anchor, put = __cordl_internal_set__anchor)) ::GlobalNamespace::OVRAnchor _anchor;

  /// @brief Field _labels, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__labels, put = __cordl_internal_set__labels)) ::GlobalNamespace::OVRSemanticLabels _labels;

  /// @brief Field _mesh, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _meshFilter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  /// @brief Field _triangleMeshComponent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__triangleMeshComponent, put = __cordl_internal_set__triangleMeshComponent)) ::GlobalNamespace::OVRTriangleMesh _triangleMeshComponent;

  /// @brief Method Awake, addr 0x581bad4, size 0xfc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method EnableComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* EnableComponent();

  /// @brief Method GenerateRoomMesh, addr 0x581bc94, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GenerateRoomMesh();

  /// @brief Method Initialize, addr 0x581bbd0, size 0xc4, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IsComponentEnabled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool IsComponentEnabled();

  /// @brief Method IsJobDone, addr 0x581bfa0, size 0x84, virtual false, abstract: false, final false
  static inline bool IsJobDone(::Unity::Jobs::JobHandle job);

  static inline ::GlobalNamespace::RoomMeshAnchor* New_ctor();

  /// @brief Method OnDestroy, addr 0x581bf40, size 0x60, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method TryUpdateTransform, addr 0x581bcf0, size 0x250, virtual false, abstract: false, final false
  inline bool TryUpdateTransform();

  constexpr bool const& __cordl_internal_get__IsCompleted_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsCompleted_k__BackingField();

  constexpr ::GlobalNamespace::OVRAnchor const& __cordl_internal_get__anchor() const;

  constexpr ::GlobalNamespace::OVRAnchor& __cordl_internal_get__anchor();

  constexpr ::GlobalNamespace::OVRSemanticLabels const& __cordl_internal_get__labels() const;

  constexpr ::GlobalNamespace::OVRSemanticLabels& __cordl_internal_get__labels();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter();

  constexpr ::GlobalNamespace::OVRTriangleMesh const& __cordl_internal_get__triangleMeshComponent() const;

  constexpr ::GlobalNamespace::OVRTriangleMesh& __cordl_internal_get__triangleMeshComponent();

  constexpr void __cordl_internal_set__IsCompleted_k__BackingField(bool value);

  constexpr void __cordl_internal_set__anchor(::GlobalNamespace::OVRAnchor value);

  constexpr void __cordl_internal_set__labels(::GlobalNamespace::OVRSemanticLabels value);

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__triangleMeshComponent(::GlobalNamespace::OVRTriangleMesh value);

  /// @brief Method .ctor, addr 0x581c024, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Quaternion getStaticF_RotateY180();

  /// @brief Method get_IsCompleted, addr 0x581ba64, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method get_Valid, addr 0x581ba74, size 0x60, virtual false, abstract: false, final false
  inline bool get_Valid();

  static inline void setStaticF_RotateY180(::UnityEngine::Quaternion value);

  /// @brief Method set_IsCompleted, addr 0x581ba6c, size 0x8, virtual false, abstract: false, final false
  inline void set_IsCompleted(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshAnchor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshAnchor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomMeshAnchor(RoomMeshAnchor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshAnchor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomMeshAnchor(RoomMeshAnchor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21127 };

  /// @brief Field <IsCompleted>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsCompleted_k__BackingField;

  /// @brief Field _anchor, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::OVRAnchor ____anchor;

  /// @brief Field _labels, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRSemanticLabels ____labels;

  /// @brief Field _triangleMeshComponent, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OVRTriangleMesh ____triangleMeshComponent;

  /// @brief Field _mesh, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  /// @brief Field _meshFilter, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____IsCompleted_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____anchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____labels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____triangleMeshComponent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____mesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____meshFilter) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomMeshAnchor, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomMeshAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomMeshAnchor*, "", "RoomMeshAnchor");
NEED_NO_BOX(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*, "", "RoomMeshAnchor/<GenerateRoomMesh>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomMeshAnchor_BakeMeshJob, "", "RoomMeshAnchor/BakeMeshJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob, "", "RoomMeshAnchor/GetTriangleMeshCountsJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob, "", "RoomMeshAnchor/GetTriangleMeshJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob, "", "RoomMeshAnchor/PopulateMeshDataJob");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1, "", "RoomMeshAnchor/<EnableComponent>d__16`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, "", "RoomMeshAnchor/<Initialize>d__14");
