#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMeshJobs)
namespace GlobalNamespace {
template <typename T> struct __OVRMeshJobs__NativeArrayHelper_1;
}
namespace GlobalNamespace {
struct __OVRMeshJobs__TransformToUnitySpaceJob;
}
namespace GlobalNamespace {
struct __OVRMeshJobs__TransformTrianglesJob;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector2f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4s;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMeshJobs;
}
namespace GlobalNamespace {
template <typename T> struct __OVRMeshJobs__NativeArrayHelper_1;
}
namespace GlobalNamespace {
struct __OVRMeshJobs__TransformToUnitySpaceJob;
}
namespace GlobalNamespace {
struct __OVRMeshJobs__TransformTrianglesJob;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMeshJobs);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1);
MARK_VAL_T(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob);
MARK_VAL_T(::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob);
// Type: ::TransformToUnitySpaceJob
// SizeInfo { instance_size: 144, native_size: 144, calculated_instance_size: 144, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRMeshJobs::TransformToUnitySpaceJob
struct CORDL_TYPE __OVRMeshJobs__TransformToUnitySpaceJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x2a86afc, size 0x180, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRMeshJobs__TransformToUnitySpaceJob();

  // Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "Normals", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "UV", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>",
  // modifiers: "", def_value: None }, CppParam { name: "BoneWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>", modifiers: "", def_value: None }, CppParam { name:
  // "MeshVerticesPosition", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "MeshNormals", ty:
  // "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "MeshUV", ty:
  // "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>", modifiers: "", def_value: None }, CppParam { name: "MeshBoneWeights", ty:
  // "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>", modifiers: "", def_value: None }, CppParam { name: "MeshBoneIndices", ty:
  // "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>", modifiers: "", def_value: None }]
  constexpr __OVRMeshJobs__TransformToUnitySpaceJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Normals,
                                                    ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> UV, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> BoneWeights,
                                                    ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> MeshVerticesPosition,
                                                    ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> MeshNormals,
                                                    ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f> MeshUV,
                                                    ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f> MeshBoneWeights,
                                                    ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s> MeshBoneIndices) noexcept;

  /// @brief Field Vertices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices;

  /// @brief Field Normals, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Normals;

  /// @brief Field UV, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> UV;

  /// @brief Field BoneWeights, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> BoneWeights;

  /// @brief Field MeshVerticesPosition, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> MeshVerticesPosition;

  /// @brief Field MeshNormals, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> MeshNormals;

  /// @brief Field MeshUV, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f> MeshUV;

  /// @brief Field MeshBoneWeights, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f> MeshBoneWeights;

  /// @brief Field MeshBoneIndices, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s> MeshBoneIndices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, Vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, Normals) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, UV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, BoneWeights) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, MeshVerticesPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, MeshNormals) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, MeshUV) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, MeshBoneWeights) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, MeshBoneIndices) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TransformTrianglesJob
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRMeshJobs::TransformTrianglesJob
struct CORDL_TYPE __OVRMeshJobs__TransformTrianglesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x2a86c7c, size 0x20, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRMeshJobs__TransformTrianglesJob();

  // Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "MeshIndices", ty:
  // "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "NumIndices", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRMeshJobs__TransformTrianglesJob(::Unity::Collections::NativeArray_1<uint32_t> Triangles, ::Unity::Collections::NativeArray_1<int16_t> MeshIndices, int32_t NumIndices) noexcept;

  /// @brief Field Triangles, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> Triangles;

  /// @brief Field MeshIndices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int16_t> MeshIndices;

  /// @brief Field NumIndices, offset: 0x20, size: 0x4, def value: None
  int32_t NumIndices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob, Triangles) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob, MeshIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob, NumIndices) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NativeArrayHelper`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::OVRMeshJobs::NativeArrayHelper`1<T>
struct CORDL_TYPE __OVRMeshJobs__NativeArrayHelper_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> ovrArray, int32_t length);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRMeshJobs__NativeArrayHelper_1();

  // Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty:
  // "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
  constexpr __OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<T> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept;

  /// @brief Field UnityNativeArray, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> UnityNativeArray;

  /// @brief Field _handle, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle _handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::OVRMeshJobs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRMeshJobs*
class CORDL_TYPE OVRMeshJobs : public ::System::Object {
public:
  // Declarations
  template <typename T> using NativeArrayHelper_1 = ::GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1<T>;

  using TransformToUnitySpaceJob = ::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob;

  using TransformTrianglesJob = ::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob;

  static inline ::GlobalNamespace::OVRMeshJobs* New_ctor();

  /// @brief Method .ctor, addr 0x2a86af4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMeshJobs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMeshJobs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMeshJobs(OVRMeshJobs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMeshJobs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMeshJobs(OVRMeshJobs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshJobs, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMeshJobs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshJobs*, "", "OVRMeshJobs");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1, "", "OVRMeshJobs/NativeArrayHelper`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, "", "OVRMeshJobs/TransformToUnitySpaceJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob, "", "OVRMeshJobs/TransformTrianglesJob");
