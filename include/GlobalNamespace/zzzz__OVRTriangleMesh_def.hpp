#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTriangleMesh)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_FlipTriangleWindingJob;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_GetMeshJob;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_NegateXJob;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_Triangle;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTriangleMesh;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_FlipTriangleWindingJob;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_GetMeshJob;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_NegateXJob;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_Triangle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh);
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob);
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh_GetMeshJob);
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh_NegateXJob);
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh_Triangle);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Jobs.IJob, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTriangleMesh/GetMeshJob
struct CORDL_TYPE OVRTriangleMesh_GetMeshJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x3faf8ac, size 0xd4, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTriangleMesh_GetMeshJob();

  // Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>",
  // modifiers: "", def_value: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr OVRTriangleMesh_GetMeshJob(uint64_t Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions, ::Unity::Collections::NativeArray_1<int32_t> Indices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7837 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  uint64_t Space;

  /// @brief Field Positions, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions;

  /// @brief Field Indices, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Indices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_GetMeshJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_GetMeshJob, Positions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_GetMeshJob, Indices) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTriangleMesh_GetMeshJob, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTriangleMesh/Triangle
struct CORDL_TYPE OVRTriangleMesh_Triangle {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTriangleMesh_Triangle();

  // Ctor Parameters [CppParam { name: "A", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "B", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "C", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr OVRTriangleMesh_Triangle(int32_t A, int32_t B, int32_t C) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7838 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field A, offset: 0x0, size: 0x4, def value: None
  int32_t A;

  /// @brief Field B, offset: 0x4, size: 0x4, def value: None
  int32_t B;

  /// @brief Field C, offset: 0x8, size: 0x4, def value: None
  int32_t C;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_Triangle, A) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_Triangle, B) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_Triangle, C) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTriangleMesh_Triangle, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTriangleMesh::Triangle, Unity.Collections.NativeArray`1<T>, Unity.Jobs.IJobParallelFor
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTriangleMesh/FlipTriangleWindingJob
struct CORDL_TYPE OVRTriangleMesh_FlipTriangleWindingJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x3faf980, size 0x1c, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTriangleMesh_FlipTriangleWindingJob();

  // Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRTriangleMesh_Triangle>", modifiers: "", def_value: None }]
  constexpr OVRTriangleMesh_FlipTriangleWindingJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRTriangleMesh_Triangle> Triangles) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7839 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Triangles, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRTriangleMesh_Triangle> Triangles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob, Triangles) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Jobs.IJobParallelFor, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTriangleMesh/NegateXJob
struct CORDL_TYPE OVRTriangleMesh_NegateXJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x3faf99c, size 0x1c, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTriangleMesh_NegateXJob();

  // Ctor Parameters [CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }]
  constexpr OVRTriangleMesh_NegateXJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7840 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Positions, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_NegateXJob, Positions) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTriangleMesh_NegateXJob, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IOVRAnchorComponent`1<T>, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTriangleMesh
struct CORDL_TYPE OVRTriangleMesh {
public:
  // Declarations
  using FlipTriangleWindingJob = ::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob;

  using GetMeshJob = ::GlobalNamespace::OVRTriangleMesh_GetMeshJob;

  using NegateXJob = ::GlobalNamespace::OVRTriangleMesh_NegateXJob;

  using Triangle = ::GlobalNamespace::OVRTriangleMesh_Triangle;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRTriangleMesh__get_Handle)) uint64_t IOVRAnchorComponent_OVRTriangleMesh__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRTriangleMesh__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRTriangleMesh__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRTriangleMesh Null;

  __declspec(property(get = get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType Type;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*();

  /// @brief Method Equals, addr 0x3faf2f4, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3faf1b0, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRTriangleMesh other);

  /// @brief Method GetHashCode, addr 0x3faf384, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor, addr 0x3faef84, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTriangleMesh IOVRAnchorComponent_OVRTriangleMesh__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync, addr 0x3faf164, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.get_Handle, addr 0x3faef30, size 0x54, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRTriangleMesh__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.get_Type, addr 0x3faeed0, size 0x54, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRTriangleMesh__get_Type();

  /// @brief Method ScheduleGetMeshJob, addr 0x3faf724, size 0x184, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleGetMeshJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> indices,
                                                     ::Unity::Jobs::JobHandle dependencies);

  /// @brief Method ToString, addr 0x3faf41c, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetCounts, addr 0x3faf4cc, size 0x98, virtual false, abstract: false, final false
  inline bool TryGetCounts(::ByRef<int32_t> vertexCount, ::ByRef<int32_t> triangleCount);

  /// @brief Method TryGetMesh, addr 0x3faf614, size 0x110, virtual false, abstract: false, final false
  inline bool TryGetMesh(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> indices);

  /// @brief Method TryGetMeshRawUntransformed, addr 0x3faf564, size 0xb0, virtual false, abstract: false, final false
  inline bool TryGetMeshRawUntransformed(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> indices);

  /// @brief Method .ctor, addr 0x3faefb4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRTriangleMesh getStaticF_Null();

  /// @brief Method get_Handle, addr 0x3faf4c4, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x3faf074, size 0xf0, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x3faf018, size 0x5c, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x3faef24, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRTriangleMesh_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>* i___System__IEquatable_1___GlobalNamespace__OVRTriangleMesh_();

  /// @brief Method op_Equality, addr 0x3faf218, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRTriangleMesh lhs, ::GlobalNamespace::OVRTriangleMesh rhs);

  /// @brief Method op_Inequality, addr 0x3faf284, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRTriangleMesh lhs, ::GlobalNamespace::OVRTriangleMesh rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRTriangleMesh value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTriangleMesh();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRTriangleMesh(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7841 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTriangleMesh, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTriangleMesh, "", "OVRTriangleMesh");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob, "", "OVRTriangleMesh/FlipTriangleWindingJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTriangleMesh_GetMeshJob, "", "OVRTriangleMesh/GetMeshJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTriangleMesh_NegateXJob, "", "OVRTriangleMesh/NegateXJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTriangleMesh_Triangle, "", "OVRTriangleMesh/Triangle");
