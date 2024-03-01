#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScenePlaneMeshFilter)
namespace GlobalNamespace {
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob;
}
namespace GlobalNamespace {
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJob;
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
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob;
}
namespace GlobalNamespace {
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRScenePlaneMeshFilter);
MARK_VAL_T(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob);
MARK_VAL_T(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList);
// Type: ::NList
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::NList
struct CORDL_TYPE __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList {
public:
  // Declarations
  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Item)) int32_t Item[];

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x287bc5c, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetAt, addr 0x287bb1c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetAt(int32_t index);

  /// @brief Method RemoveAt, addr 0x287bc10, size 0x3c, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method .ctor, addr 0x287ba6c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::Allocator allocator);

  /// @brief Method get_Count, addr 0x287bc4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x287bb10, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_Count, addr 0x287bc54, size 0x8, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList();

  // Ctor Parameters [CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_data", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }]
  constexpr __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList(int32_t _Count_k__BackingField, ::Unity::Collections::NativeArray_1<int32_t> _data) noexcept;

  /// @brief Field <Count>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _Count_k__BackingField;

  /// @brief Field _data, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> _data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList, _Count_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList, _data) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TriangulateBoundaryJob
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRScenePlaneMeshFilter::TriangulateBoundaryJob
struct CORDL_TYPE __OVRScenePlaneMeshFilter__TriangulateBoundaryJob {
public:
  // Declarations
  using NList = ::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList;

  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Cross, addr 0x287bb58, size 0x10, virtual false, abstract: false, final false
  static inline float_t Cross(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method Execute, addr 0x287b6d8, size 0x394, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method PointInTriangle, addr 0x287bb68, size 0xa8, virtual false, abstract: false, final false
  static inline bool PointInTriangle(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c);

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRScenePlaneMeshFilter__TriangulateBoundaryJob();

  // Ctor Parameters [CppParam { name: "Boundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "Triangles", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr __OVRScenePlaneMeshFilter__TriangulateBoundaryJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary, ::Unity::Collections::NativeArray_1<int32_t> Triangles) noexcept;

  /// @brief Field Boundary, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary;

  /// @brief Field Triangles, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Triangles;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob, Boundary) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob, Triangles) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRScenePlaneMeshFilter
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRScenePlaneMeshFilter*
class CORDL_TYPE OVRScenePlaneMeshFilter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TriangulateBoundaryJob = ::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob;

  /// @brief Field _boundary, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__boundary, put = __cordl_internal_set__boundary))::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> _boundary;

  /// @brief Field _jobHandle, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get__jobHandle, put = __cordl_internal_set__jobHandle))::System::Nullable_1<::Unity::Jobs::JobHandle> _jobHandle;

  /// @brief Field _mesh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh))::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _meshFilter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter))::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  /// @brief Field _meshRequested, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__meshRequested, put = __cordl_internal_set__meshRequested)) bool _meshRequested;

  /// @brief Field _triangles, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__triangles, put = __cordl_internal_set__triangles))::Unity::Collections::NativeArray_1<int32_t> _triangles;

  static inline ::GlobalNamespace::OVRScenePlaneMeshFilter* New_ctor();

  /// @brief Method OnDisable, addr 0x287b640, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method RequestMeshGeneration, addr 0x287a3e8, size 0x30, virtual false, abstract: false, final false
  inline void RequestMeshGeneration();

  /// @brief Method ScheduleMeshGeneration, addr 0x287a944, size 0x5c8, virtual false, abstract: false, final false
  inline void ScheduleMeshGeneration();

  /// @brief Method Start, addr 0x287a798, size 0x1ac, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x287af0c, size 0x734, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x287b6d0, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _meshFilter, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  /// @brief Field _mesh, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  /// @brief Field _jobHandle, offset: 0x28, size: 0x18, def value: None
  ::System::Nullable_1<::Unity::Jobs::JobHandle> ____jobHandle;

  /// @brief Field _meshRequested, offset: 0x40, size: 0x1, def value: None
  bool ____meshRequested;

  /// @brief Field _boundary, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> ____boundary;

  /// @brief Field _triangles, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ____triangles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScenePlaneMeshFilter, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____meshFilter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____mesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____jobHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____meshRequested) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____boundary) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlaneMeshFilter, ____triangles) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRScenePlaneMeshFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePlaneMeshFilter*, "", "OVRScenePlaneMeshFilter");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob/NList");
