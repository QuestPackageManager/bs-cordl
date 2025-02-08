#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlaneMeshFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScenePlaneMeshFilter)
namespace GlobalNamespace {
struct OVRScenePlaneMeshFilter_TriangulateBoundaryJob;
}
namespace GlobalNamespace {
struct TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScenePlaneMeshFilter;
}
namespace GlobalNamespace {
struct OVRScenePlaneMeshFilter_TriangulateBoundaryJob;
}
namespace GlobalNamespace {
struct TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRScenePlaneMeshFilter);
MARK_VAL_T(::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob);
MARK_VAL_T(::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList);
// Dependencies System.IDisposable, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRScenePlaneMeshFilter/TriangulateBoundaryJob/NList
struct CORDL_TYPE TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList {
public:
  // Declarations
  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Item)) int32_t Item[];

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x40152d8, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetAt, addr 0x4015190, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetAt(int32_t index);

  /// @brief Method RemoveAt, addr 0x401528c, size 0x3c, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method .ctor, addr 0x40150dc, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::Allocator allocator);

  /// @brief Method get_Count, addr 0x40152c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x4015184, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_Count, addr 0x40152d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList();

  // Ctor Parameters [CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_data", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }]
  constexpr TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList(int32_t _Count_k__BackingField, ::Unity::Collections::NativeArray_1<int32_t> _data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8292 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <Count>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _Count_k__BackingField;

  /// @brief Field _data, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> _data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList, _Count_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList, _data) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Jobs.IJob, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRScenePlaneMeshFilter/TriangulateBoundaryJob
struct CORDL_TYPE OVRScenePlaneMeshFilter_TriangulateBoundaryJob {
public:
  // Declarations
  using NList = ::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList;

  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Cross, addr 0x40151d4, size 0x10, virtual false, abstract: false, final false
  static inline float_t Cross(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method Execute, addr 0x4014d84, size 0x358, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method PointInTriangle, addr 0x40151e4, size 0xa8, virtual false, abstract: false, final false
  static inline bool PointInTriangle(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c);

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRScenePlaneMeshFilter_TriangulateBoundaryJob();

  // Ctor Parameters [CppParam { name: "Boundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "Triangles", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr OVRScenePlaneMeshFilter_TriangulateBoundaryJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary, ::Unity::Collections::NativeArray_1<int32_t> Triangles) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8293 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Boundary, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary;

  /// @brief Field Triangles, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Triangles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob, Boundary) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob, Triangles) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Nullable`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRScenePlaneMeshFilter
class CORDL_TYPE OVRScenePlaneMeshFilter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TriangulateBoundaryJob = ::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob;

  /// @brief Field _boundary, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__boundary, put = __cordl_internal_set__boundary)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> _boundary;

  /// @brief Field _jobHandle, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get__jobHandle, put = __cordl_internal_set__jobHandle)) ::System::Nullable_1<::Unity::Jobs::JobHandle> _jobHandle;

  /// @brief Field _mesh, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _meshFilter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  /// @brief Field _meshRequested, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__meshRequested, put = __cordl_internal_set__meshRequested)) bool _meshRequested;

  /// @brief Field _triangles, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__triangles, put = __cordl_internal_set__triangles)) ::Unity::Collections::NativeArray_1<int32_t> _triangles;

  static inline ::GlobalNamespace::OVRScenePlaneMeshFilter* New_ctor();

  /// @brief Method OnDisable, addr 0x4014cfc, size 0x80, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method RequestMeshGeneration, addr 0x4013ae0, size 0x30, virtual false, abstract: false, final false
  inline void RequestMeshGeneration();

  /// @brief Method ScheduleMeshGeneration, addr 0x4013ff4, size 0x5c8, virtual false, abstract: false, final false
  inline void ScheduleMeshGeneration();

  /// @brief Method Start, addr 0x4013e50, size 0x1a4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x40145bc, size 0x740, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get__boundary() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get__boundary();

  constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle> const& __cordl_internal_get__jobHandle() const;

  constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle>& __cordl_internal_get__jobHandle();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter();

  constexpr bool const& __cordl_internal_get__meshRequested() const;

  constexpr bool& __cordl_internal_get__meshRequested();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get__triangles() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get__triangles();

  constexpr void __cordl_internal_set__boundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value);

  constexpr void __cordl_internal_set__jobHandle(::System::Nullable_1<::Unity::Jobs::JobHandle> value);

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__meshRequested(bool value);

  constexpr void __cordl_internal_set__triangles(::Unity::Collections::NativeArray_1<int32_t> value);

  /// @brief Method .ctor, addr 0x4014d7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRScenePlaneMeshFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRScenePlaneMeshFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRScenePlaneMeshFilter(OVRScenePlaneMeshFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRScenePlaneMeshFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRScenePlaneMeshFilter(OVRScenePlaneMeshFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8294 };

  /// @brief Field _meshFilter, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  /// @brief Field _mesh, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  /// @brief Field _jobHandle, offset: 0x30, size: 0x18, def value: None
  ::System::Nullable_1<::Unity::Jobs::JobHandle> ____jobHandle;

  /// @brief Field _meshRequested, offset: 0x48, size: 0x1, def value: None
  bool ____meshRequested;

  /// @brief Field _boundary, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> ____boundary;

  /// @brief Field _triangles, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ____triangles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____meshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____mesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____jobHandle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____meshRequested) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____boundary) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____triangles) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScenePlaneMeshFilter, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRScenePlaneMeshFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePlaneMeshFilter*, "", "OVRScenePlaneMeshFilter");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TriangulateBoundaryJob_OVRScenePlaneMeshFilter_NList, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob/NList");
