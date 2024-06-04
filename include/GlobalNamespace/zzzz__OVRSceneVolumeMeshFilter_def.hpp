#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneVolumeMeshFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneVolumeMeshFilter)
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
struct OVRSpace;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__BakeMeshJob;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__GetTriangleMeshJob;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__PopulateMeshDataJob;
}
namespace GlobalNamespace {
class __OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
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
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct __Mesh__MeshData;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneVolumeMeshFilter;
}
namespace GlobalNamespace {
class __OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__BakeMeshJob;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__GetTriangleMeshJob;
}
namespace GlobalNamespace {
struct __OVRSceneVolumeMeshFilter__PopulateMeshDataJob;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneVolumeMeshFilter);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7);
MARK_VAL_T(::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob);
MARK_VAL_T(::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob);
MARK_VAL_T(::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob);
MARK_VAL_T(::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob);
// Type: ::GetTriangleMeshCountsJob
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSceneVolumeMeshFilter::GetTriangleMeshCountsJob
struct CORDL_TYPE __OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x2b82d24, size 0x98, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob();

  // Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "Results", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }]
  constexpr __OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<int32_t> Results) noexcept;

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace Space;

  /// @brief Field Results, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Results;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob, Results) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetTriangleMeshJob
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSceneVolumeMeshFilter::GetTriangleMeshJob
struct CORDL_TYPE __OVRSceneVolumeMeshFilter__GetTriangleMeshJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x2b82dbc, size 0x7c, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneVolumeMeshFilter__GetTriangleMeshJob();

  // Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: None }, CppParam { name: "Vertices", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
  // def_value: None }]
  constexpr __OVRSceneVolumeMeshFilter__GetTriangleMeshJob(::GlobalNamespace::OVRSpace Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices,
                                                           ::Unity::Collections::NativeArray_1<int32_t> Triangles) noexcept;

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::OVRSpace Space;

  /// @brief Field Vertices, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices;

  /// @brief Field Triangles, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Triangles;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob, Vertices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob, Triangles) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PopulateMeshDataJob
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSceneVolumeMeshFilter::PopulateMeshDataJob
struct CORDL_TYPE __OVRSceneVolumeMeshFilter__PopulateMeshDataJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x2b82e38, size 0x220, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneVolumeMeshFilter__PopulateMeshDataJob();

  // Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "Triangles", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "MeshData", ty: "::UnityEngine::__Mesh__MeshData", modifiers: "", def_value: None }]
  constexpr __OVRSceneVolumeMeshFilter__PopulateMeshDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices, ::Unity::Collections::NativeArray_1<int32_t> Triangles,
                                                            ::UnityEngine::__Mesh__MeshData MeshData) noexcept;

  /// @brief Field Vertices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices;

  /// @brief Field Triangles, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Triangles;

  /// @brief Field MeshData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::__Mesh__MeshData MeshData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob, Vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob, Triangles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob, MeshData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BakeMeshJob
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 21, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSceneVolumeMeshFilter::BakeMeshJob
struct CORDL_TYPE __OVRSceneVolumeMeshFilter__BakeMeshJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x2b83058, size 0x14, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSceneVolumeMeshFilter__BakeMeshJob();

  // Ctor Parameters [CppParam { name: "MeshID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Convex", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRSceneVolumeMeshFilter__BakeMeshJob(int32_t MeshID, bool Convex) noexcept;

  /// @brief Field MeshID, offset: 0x0, size: 0x4, def value: None
  int32_t MeshID;

  /// @brief Field Convex, offset: 0x4, size: 0x1, def value: None
  bool Convex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob, MeshID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob, Convex) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CreateVolumeMesh>d__7
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneVolumeMeshFilter::<CreateVolumeMesh>d__7*
class CORDL_TYPE __OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OVRSceneVolumeMeshFilter> __4__this;

  /// @brief Field <collider>5__5, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__collider_5__5, put = __cordl_internal_set__collider_5__5))::UnityW<::UnityEngine::MeshCollider> _collider_5__5;

  /// @brief Field <disposeVerticesJob>5__4, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__disposeVerticesJob_5__4, put = __cordl_internal_set__disposeVerticesJob_5__4))::Unity::Jobs::JobHandle _disposeVerticesJob_5__4;

  /// @brief Field <job>5__7, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__job_5__7, put = __cordl_internal_set__job_5__7))::Unity::Jobs::JobHandle _job_5__7;

  /// @brief Field <meshCountResults>5__6, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__meshCountResults_5__6, put = __cordl_internal_set__meshCountResults_5__6))::Unity::Collections::NativeArray_1<int32_t> _meshCountResults_5__6;

  /// @brief Field <meshDataArray>5__3, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__meshDataArray_5__3, put = __cordl_internal_set__meshDataArray_5__3))::UnityEngine::__Mesh__MeshDataArray _meshDataArray_5__3;

  /// @brief Field <sceneAnchor>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneAnchor_5__2, put = __cordl_internal_set__sceneAnchor_5__2))::UnityW<::GlobalNamespace::OVRSceneAnchor> _sceneAnchor_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2b83088, size 0x56c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2b83644, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2b8364c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2b8368c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2b8306c, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneVolumeMeshFilter> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneVolumeMeshFilter>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__collider_5__5() const;

  constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__collider_5__5();

  constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__disposeVerticesJob_5__4() const;

  constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__disposeVerticesJob_5__4();

  constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__job_5__7() const;

  constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__job_5__7();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get__meshCountResults_5__6() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get__meshCountResults_5__6();

  constexpr ::UnityEngine::__Mesh__MeshDataArray const& __cordl_internal_get__meshDataArray_5__3() const;

  constexpr ::UnityEngine::__Mesh__MeshDataArray& __cordl_internal_get__meshDataArray_5__3();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get__sceneAnchor_5__2() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get__sceneAnchor_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneVolumeMeshFilter> value);

  constexpr void __cordl_internal_set__collider_5__5(::UnityW<::UnityEngine::MeshCollider> value);

  constexpr void __cordl_internal_set__disposeVerticesJob_5__4(::Unity::Jobs::JobHandle value);

  constexpr void __cordl_internal_set__job_5__7(::Unity::Jobs::JobHandle value);

  constexpr void __cordl_internal_set__meshCountResults_5__6(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set__meshDataArray_5__3(::UnityEngine::__Mesh__MeshDataArray value);

  constexpr void __cordl_internal_set__sceneAnchor_5__2(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  /// @brief Method <>m__Finally1, addr 0x2b835f4, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2b82cb4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7(__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7(__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneVolumeMeshFilter> _____4__this;

  /// @brief Field <sceneAnchor>5__2, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ____sceneAnchor_5__2;

  /// @brief Field <meshDataArray>5__3, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::__Mesh__MeshDataArray ____meshDataArray_5__3;

  /// @brief Field <disposeVerticesJob>5__4, offset: 0x40, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle ____disposeVerticesJob_5__4;

  /// @brief Field <collider>5__5, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshCollider> ____collider_5__5;

  /// @brief Field <meshCountResults>5__6, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ____meshCountResults_5__6;

  /// @brief Field <job>5__7, offset: 0x68, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle ____job_5__7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7, ____sceneAnchor_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7, ____meshDataArray_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7, ____disposeVerticesJob_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7, ____collider_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7, ____meshCountResults_5__6) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7, ____job_5__7) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSceneVolumeMeshFilter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneVolumeMeshFilter*
class CORDL_TYPE OVRSceneVolumeMeshFilter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BakeMeshJob = ::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob;

  using GetTriangleMeshCountsJob = ::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob;

  using GetTriangleMeshJob = ::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob;

  using PopulateMeshDataJob = ::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob;

  using _CreateVolumeMesh_d__7 = ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7;

  __declspec(property(get = get_IsCompleted, put = set_IsCompleted)) bool IsCompleted;

  /// @brief Field <IsCompleted>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__IsCompleted_k__BackingField, put = __cordl_internal_set__IsCompleted_k__BackingField)) bool _IsCompleted_k__BackingField;

  /// @brief Field _mesh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh))::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _meshFilter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter))::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  /// @brief Method CreateVolumeMesh, addr 0x2b82c4c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CreateVolumeMesh();

  /// @brief Method IsJobDone, addr 0x2b82cdc, size 0x40, virtual false, abstract: false, final false
  static inline bool IsJobDone(::Unity::Jobs::JobHandle job);

  static inline ::GlobalNamespace::OVRSceneVolumeMeshFilter* New_ctor();

  /// @brief Method Start, addr 0x2b82b78, size 0xd4, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__IsCompleted_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsCompleted_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter();

  constexpr void __cordl_internal_set__IsCompleted_k__BackingField(bool value);

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  /// @brief Method .ctor, addr 0x2b82d1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsCompleted, addr 0x2b82b64, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method set_IsCompleted, addr 0x2b82b6c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsCompleted(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneVolumeMeshFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneVolumeMeshFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneVolumeMeshFilter(OVRSceneVolumeMeshFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneVolumeMeshFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneVolumeMeshFilter(OVRSceneVolumeMeshFilter const&) = delete;

  /// @brief Field <IsCompleted>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____IsCompleted_k__BackingField;

  /// @brief Field _mesh, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  /// @brief Field _meshFilter, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneVolumeMeshFilter, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter, ____IsCompleted_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter, ____mesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolumeMeshFilter, ____meshFilter) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneVolumeMeshFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneVolumeMeshFilter*, "", "OVRSceneVolumeMeshFilter");
NEED_NO_BOX(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*, "", "OVRSceneVolumeMeshFilter/<CreateVolumeMesh>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob, "", "OVRSceneVolumeMeshFilter/BakeMeshJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob, "", "OVRSceneVolumeMeshFilter/GetTriangleMeshCountsJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob, "", "OVRSceneVolumeMeshFilter/GetTriangleMeshJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob, "", "OVRSceneVolumeMeshFilter/PopulateMeshDataJob");
