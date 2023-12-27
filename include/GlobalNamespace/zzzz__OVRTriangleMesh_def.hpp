#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTriangleMesh)
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__Triangle;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__GetMeshJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__FlipTriangleWindingJob;
}
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__NegateXJob;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTriangleMesh;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__FlipTriangleWindingJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__GetMeshJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__NegateXJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__Triangle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__GetMeshJob);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__NegateXJob);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__Triangle);
// Type: ::GetMeshJob
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 412 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10249)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 98 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7521)) CS
// Name: ::OVRTriangleMesh::GetMeshJob
struct CORDL_TYPE __OVRTriangleMesh__GetMeshJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute addr 0x2715440 size 0xd4 virtual true final true
  inline void Execute();

  // Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>",
  // modifiers: "", def_value: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr __OVRTriangleMesh__GetMeshJob(uint64_t Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions, ::Unity::Collections::NativeArray_1<int32_t> Indices) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTriangleMesh__GetMeshJob();

  /// @brief Field Space, offset: 0x0, size: 0x8, def value: None
  uint64_t Space;

  /// @brief Field Positions, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions;

  /// @brief Field Indices, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> Indices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Triangle
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7522))
// CS Name: ::OVRTriangleMesh::Triangle
struct CORDL_TYPE __OVRTriangleMesh__Triangle {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "A", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "B", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "C", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr __OVRTriangleMesh__Triangle(int32_t A, int32_t B, int32_t C) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTriangleMesh__Triangle();

  /// @brief Field A, offset: 0x0, size: 0x4, def value: None
  int32_t A;

  /// @brief Field B, offset: 0x4, size: 0x4, def value: None
  int32_t B;

  /// @brief Field C, offset: 0x8, size: 0x4, def value: None
  int32_t C;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__Triangle, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FlipTriangleWindingJob
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7522)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 763 }),
// TypeDefinitionIndex(TypeDefinitionIndex(9999))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7523)) CS Name: ::OVRTriangleMesh::FlipTriangleWindingJob
struct CORDL_TYPE __OVRTriangleMesh__FlipTriangleWindingJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute addr 0x2715514 size 0x1c virtual true final true
  inline void Execute(int32_t index);

  // Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>", modifiers: "", def_value: None }]
  constexpr __OVRTriangleMesh__FlipTriangleWindingJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle> Triangles) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTriangleMesh__FlipTriangleWindingJob();

  /// @brief Field Triangles, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle> Triangles;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NegateXJob
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 412
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7524)) CS Name: ::OVRTriangleMesh::NegateXJob
struct CORDL_TYPE __OVRTriangleMesh__NegateXJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute addr 0x2715530 size 0x1c virtual true final true
  inline void Execute(int32_t index);

  // Ctor Parameters [CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }]
  constexpr __OVRTriangleMesh__NegateXJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTriangleMesh__NegateXJob();

  /// @brief Field Positions, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Positions;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__NegateXJob, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRTriangleMesh
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7525))
// CS Name: ::OVRTriangleMesh
struct CORDL_TYPE OVRTriangleMesh {
public:
  // Declarations
  using NegateXJob = ::GlobalNamespace::__OVRTriangleMesh__NegateXJob;

  using FlipTriangleWindingJob = ::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob;

  using Triangle = ::GlobalNamespace::__OVRTriangleMesh__Triangle;

  using GetMeshJob = ::GlobalNamespace::__OVRTriangleMesh__GetMeshJob;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::GlobalNamespace::OVRTriangleMesh Null;

  __declspec(property(get = IOVRAnchorComponent_OVRTriangleMesh__get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRTriangleMesh__Type;

  __declspec(property(get = IOVRAnchorComponent_OVRTriangleMesh__get_Handle)) uint64_t IOVRAnchorComponent_OVRTriangleMesh__Handle;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*();

  static inline void setStaticF_Null(::GlobalNamespace::OVRTriangleMesh value);

  static inline ::GlobalNamespace::OVRTriangleMesh getStaticF_Null();

  /// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.get_Type addr 0x2714e38 size 0xc virtual true final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRTriangleMesh__get_Type();

  /// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.get_Handle addr 0x2714e50 size 0x8 virtual true final true
  inline uint64_t IOVRAnchorComponent_OVRTriangleMesh__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor addr 0x2714e58 size 0x8 virtual true final true
  inline ::GlobalNamespace::OVRTriangleMesh IOVRAnchorComponent_OVRTriangleMesh__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method get_IsNull addr 0x2714e6c size 0x10 virtual true final true
  inline bool get_IsNull();

  /// @brief Method get_IsEnabled addr 0x2714e7c size 0xac virtual true final true
  inline bool get_IsEnabled();

  /// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync addr 0x2714f28 size 0x50 virtual true final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method Equals addr 0x2714f78 size 0x10 virtual true final true
  inline bool Equals(::GlobalNamespace::OVRTriangleMesh other);

  /// @brief Method op_Equality addr 0x2714f88 size 0xc virtual false final false
  static inline bool op_Equality(::GlobalNamespace::OVRTriangleMesh lhs, ::GlobalNamespace::OVRTriangleMesh rhs);

  /// @brief Method op_Inequality addr 0x2714f94 size 0xc virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::OVRTriangleMesh lhs, ::GlobalNamespace::OVRTriangleMesh rhs);

  /// @brief Method Equals addr 0x2714fa0 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2715018 size 0x50 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2715068 size 0x84 virtual true final false
  inline ::StringW ToString();

  /// @brief Method get_Type addr 0x2714e44 size 0xc virtual false final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Method get_Handle addr 0x27150ec size 0x8 virtual false final false
  inline uint64_t get_Handle();

  /// @brief Method .ctor addr 0x2714e60 size 0xc virtual false final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method TryGetCounts addr 0x27150f4 size 0x74 virtual false final false
  inline bool TryGetCounts(ByRef<int32_t> vertexCount, ByRef<int32_t> triangleCount);

  /// @brief Method TryGetMeshRawUntransformed addr 0x2715168 size 0x8c virtual false final false
  inline bool TryGetMeshRawUntransformed(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> indices);

  /// @brief Method TryGetMesh addr 0x27151f4 size 0xe8 virtual false final false
  inline bool TryGetMesh(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> indices);

  /// @brief Method ScheduleGetMeshJob addr 0x27152dc size 0x160 virtual false final false
  inline ::Unity::Jobs::JobHandle ScheduleGetMeshJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions, ::Unity::Collections::NativeArray_1<int32_t> indices,
                                                     ::Unity::Jobs::JobHandle dependencies);

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRTriangleMesh(uint64_t _Handle_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTriangleMesh();

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTriangleMesh, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTriangleMesh, "", "OVRTriangleMesh");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob, "", "OVRTriangleMesh/FlipTriangleWindingJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__GetMeshJob, "", "OVRTriangleMesh/GetMeshJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__NegateXJob, "", "OVRTriangleMesh/NegateXJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__Triangle, "", "OVRTriangleMesh/Triangle");
