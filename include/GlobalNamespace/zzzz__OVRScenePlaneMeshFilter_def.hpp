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
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Vector2;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJob;
}
namespace GlobalNamespace {
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System {
class IDisposable;
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
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9927), inst: 101 }), TypeDefinitionIndex(TypeDefinitionIndex(9927))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8818))
// CS Name: ::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::NList
struct CORDL_TYPE __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList {
public:
  // Declarations
  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Item)) int32_t Item[];

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method get_Count addr 0x26218a4 size 0x8 virtual false final false
  inline int32_t get_Count();

  /// @brief Method set_Count addr 0x26218ac size 0x8 virtual false final false
  inline void set_Count(int32_t value);

  /// @brief Method .ctor addr 0x26216c4 size 0xa4 virtual false final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::Allocator allocator);

  /// @brief Method RemoveAt addr 0x2621868 size 0x3c virtual false final false
  inline void RemoveAt(int32_t index);

  /// @brief Method GetAt addr 0x2621774 size 0x3c virtual false final false
  inline int32_t GetAt(int32_t index);

  /// @brief Method get_Item addr 0x2621768 size 0xc virtual false final false
  inline int32_t get_Item(int32_t index);

  /// @brief Method Dispose addr 0x26218b4 size 0x48 virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_data", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }]
  constexpr __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList(int32_t _Count_k__BackingField, ::Unity::Collections::NativeArray_1<int32_t> _data) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList();

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
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9927), inst: 406 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9927), inst: 101 }),
// TypeDefinitionIndex(TypeDefinitionIndex(9927)), TypeDefinitionIndex(TypeDefinitionIndex(10170))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8819)) CS Name:
// ::OVRScenePlaneMeshFilter::TriangulateBoundaryJob
struct CORDL_TYPE __OVRScenePlaneMeshFilter__TriangulateBoundaryJob {
public:
  // Declarations
  using NList = ::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList;

  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute addr 0x2621330 size 0x394 virtual true final true
  inline void Execute();

  /// @brief Method Cross addr 0x26217b0 size 0x10 virtual false final false
  static inline float_t Cross(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method PointInTriangle addr 0x26217c0 size 0xa8 virtual false final false
  static inline bool PointInTriangle(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c);

  // Ctor Parameters [CppParam { name: "Boundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "Triangles", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr __OVRScenePlaneMeshFilter__TriangulateBoundaryJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> Boundary, ::Unity::Collections::NativeArray_1<int32_t> Triangles) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRScenePlaneMeshFilter__TriangulateBoundaryJob();

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
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9927), inst: 406 }), TypeDefinitionIndex(TypeDefinitionIndex(9927)),
// TypeDefinitionIndex(TypeDefinitionIndex(9905)), TypeDefinitionIndex(TypeDefinitionIndex(10152)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9927), inst: 101 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2446)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4643 }), TypeDefinitionIndex(TypeDefinitionIndex(10170))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(8820)) CS Name: ::OVRScenePlaneMeshFilter*
class CORDL_TYPE OVRScenePlaneMeshFilter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TriangulateBoundaryJob = ::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob;

  /// @brief Field _meshFilter, offset 0x18, size 0x8
  __declspec(property(get = __get__meshFilter, put = __set__meshFilter))::UnityEngine::MeshFilter* _meshFilter;

  /// @brief Field _mesh, offset 0x20, size 0x8
  __declspec(property(get = __get__mesh, put = __set__mesh))::UnityEngine::Mesh* _mesh;

  /// @brief Field _jobHandle, offset 0x28, size 0x18
  __declspec(property(get = __get__jobHandle, put = __set__jobHandle))::System::Nullable_1<::Unity::Jobs::JobHandle> _jobHandle;

  /// @brief Field _meshRequested, offset 0x40, size 0x1
  __declspec(property(get = __get__meshRequested, put = __set__meshRequested)) bool _meshRequested;

  /// @brief Field _boundary, offset 0x48, size 0x10
  __declspec(property(get = __get__boundary, put = __set__boundary))::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> _boundary;

  /// @brief Field _triangles, offset 0x58, size 0x10
  __declspec(property(get = __get__triangles, put = __set__triangles))::Unity::Collections::NativeArray_1<int32_t> _triangles;

  constexpr ::UnityEngine::MeshFilter*& __get__meshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__meshFilter() const;

  constexpr void __set__meshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::Mesh*& __get__mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__mesh() const;

  constexpr void __set__mesh(::UnityEngine::Mesh* value);

  constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle>& __get__jobHandle();

  constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle> const& __get__jobHandle() const;

  constexpr void __set__jobHandle(::System::Nullable_1<::Unity::Jobs::JobHandle> value);

  constexpr bool& __get__meshRequested();

  constexpr bool const& __get__meshRequested() const;

  constexpr void __set__meshRequested(bool value);

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __get__boundary();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __get__boundary() const;

  constexpr void __set__boundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value);

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __get__triangles();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __get__triangles() const;

  constexpr void __set__triangles(::Unity::Collections::NativeArray_1<int32_t> value);

  /// @brief Method Start addr 0x26203f0 size 0x1ac virtual false final false
  inline void Start();

  /// @brief Method ScheduleMeshGeneration addr 0x262059c size 0x5c8 virtual false final false
  inline void ScheduleMeshGeneration();

  /// @brief Method Update addr 0x2620b64 size 0x734 virtual false final false
  inline void Update();

  /// @brief Method RequestMeshGeneration addr 0x2620038 size 0x30 virtual false final false
  inline void RequestMeshGeneration();

  /// @brief Method OnDisable addr 0x2621298 size 0x90 virtual false final false
  inline void OnDisable();

  static inline ::GlobalNamespace::OVRScenePlaneMeshFilter* New_ctor();

  /// @brief Method .ctor addr 0x2621328 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRScenePlaneMeshFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRScenePlaneMeshFilter(OVRScenePlaneMeshFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRScenePlaneMeshFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRScenePlaneMeshFilter(OVRScenePlaneMeshFilter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRScenePlaneMeshFilter();

public:
  /// @brief Field _meshFilter, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____meshFilter;

  /// @brief Field _mesh, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____mesh;

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
