#pragma once
// IWYU pragma private; include "UnityEngine/Mesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mesh)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct BlendShapeBufferLayout;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine {
struct BlendShapeBufferRange;
}
namespace UnityEngine {
struct BlendShape;
}
namespace UnityEngine {
struct BoneWeight1;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct CombineInstance;
}
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
struct Mesh_MeshDataArray;
}
namespace UnityEngine {
struct Mesh_MeshData;
}
namespace UnityEngine {
struct SkinWeights;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Mesh_MeshData;
}
namespace UnityEngine {
struct Mesh_MeshDataArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Mesh);
MARK_VAL_T(::UnityEngine::Mesh_MeshData);
MARK_VAL_T(::UnityEngine::Mesh_MeshDataArray);
// Dependencies System.IntPtr
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mesh/MeshData
struct CORDL_TYPE Mesh_MeshData {
public:
  // Declarations
  __declspec(property(put = set_subMeshCount)) int32_t subMeshCount;

  __declspec(property(get = get_vertexBufferCount)) int32_t vertexBufferCount;

  /// @brief Method GetIndexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetIndexData();

  /// @brief Method GetIndexDataPtr, addr 0x68e993c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetIndexDataPtr(::System::IntPtr self);

  /// @brief Method GetIndexDataSize, addr 0x68e9978, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t GetIndexDataSize(::System::IntPtr self);

  /// @brief Method GetVertexBufferCount, addr 0x68e9878, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVertexBufferCount(::System::IntPtr self);

  /// @brief Method GetVertexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetVertexData(int32_t stream);

  /// @brief Method GetVertexDataPtr, addr 0x68e98b4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexDataPtr(::System::IntPtr self, int32_t stream);

  /// @brief Method GetVertexDataSize, addr 0x68e98f8, size 0x44, virtual false, abstract: false, final false
  static inline uint64_t GetVertexDataSize(::System::IntPtr self, int32_t stream);

  /// @brief Method SetIndexBufferParams, addr 0x68e9c78, size 0x54, virtual false, abstract: false, final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndexBufferParamsImpl, addr 0x68e9ae4, size 0x54, virtual false, abstract: false, final false
  static inline void SetIndexBufferParamsImpl(::System::IntPtr self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat indexFormat);

  /// @brief Method SetSubMesh, addr 0x68e9d10, size 0x74, virtual false, abstract: false, final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshCount, addr 0x68e9b38, size 0x44, virtual false, abstract: false, final false
  static inline void SetSubMeshCount(::System::IntPtr self, int32_t count);

  /// @brief Method SetSubMeshImpl, addr 0x68e9b7c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMeshImpl(::System::IntPtr self, int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshImpl_Injected, addr 0x68e9bd8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMeshImpl_Injected(::System::IntPtr self, int32_t index, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferParams, addr 0x68e9c70, size 0x8, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method SetVertexBufferParamsFromArray, addr 0x68e99b4, size 0xdc, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray(::System::IntPtr self, int32_t vertexCount,
                                                    ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0x68e9a90, size 0x54, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr self, int32_t vertexCount, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// @brief Method get_vertexBufferCount, addr 0x68e9c34, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method set_subMeshCount, addr 0x68e9ccc, size 0x44, virtual false, abstract: false, final false
  inline void set_subMeshCount(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_MeshData();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr Mesh_MeshData(::System::IntPtr m_Ptr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10194 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Mesh_MeshData, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Mesh_MeshData, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mesh/MeshDataArray
struct CORDL_TYPE Mesh_MeshDataArray {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::UnityEngine::Mesh_MeshData Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AcquireMeshDataCopy, addr 0x68e9f64, size 0xb4, virtual false, abstract: false, final false
  static inline void AcquireMeshDataCopy(::UnityEngine::Mesh* mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireMeshDataCopy_Injected, addr 0x68ea018, size 0x44, virtual false, abstract: false, final false
  static inline void AcquireMeshDataCopy_Injected(::System::IntPtr mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireMeshDatasCopy, addr 0x68ea05c, size 0x94, virtual false, abstract: false, final false
  static inline void AcquireMeshDatasCopy(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireMeshDatasCopy_Injected, addr 0x68ea0f0, size 0x54, virtual false, abstract: false, final false
  static inline void AcquireMeshDatasCopy_Injected(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x68e9d84, size 0xb4, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireReadOnlyMeshData_Injected, addr 0x68e9e38, size 0x44, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshData_Injected(::System::IntPtr mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireReadOnlyMeshDatas, addr 0x68e9e7c, size 0x94, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshDatas(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireReadOnlyMeshDatas_Injected, addr 0x68e9f10, size 0x54, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshDatas_Injected(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method ApplyToMeshAndDispose, addr 0x68e6230, size 0xc8, virtual false, abstract: false, final false
  inline void ApplyToMeshAndDispose(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshImpl, addr 0x68ea2cc, size 0xbc, virtual false, abstract: false, final false
  static inline void ApplyToMeshImpl(::UnityEngine::Mesh* mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshImpl_Injected, addr 0x68ea388, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyToMeshImpl_Injected(::System::IntPtr mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesAndDispose, addr 0x68e6438, size 0x1d8, virtual false, abstract: false, final false
  inline void ApplyToMeshesAndDispose(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesImpl, addr 0x68ea1cc, size 0xa4, virtual false, abstract: false, final false
  static inline void ApplyToMeshesImpl(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::System::IntPtr* datas, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesImpl_Injected, addr 0x68ea270, size 0x5c, virtual false, abstract: false, final false
  static inline void ApplyToMeshesImpl_Injected(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::System::IntPtr* datas, int32_t count,
                                                ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method CreateNewMeshDatas, addr 0x68ea188, size 0x44, virtual false, abstract: false, final false
  static inline void CreateNewMeshDatas(::System::IntPtr* datas, int32_t count);

  /// @brief Method Dispose, addr 0x68ea3f0, size 0xc0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ReleaseMeshDatas, addr 0x68ea144, size 0x44, virtual false, abstract: false, final false
  static inline void ReleaseMeshDatas(::System::IntPtr* datas, int32_t count);

  /// @brief Method .ctor, addr 0x68e56f4, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, bool checkReadWrite, bool createAsCopy);

  /// @brief Method .ctor, addr 0x68e59c4, size 0x2cc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, int32_t meshesCount, bool checkReadWrite, bool createAsCopy);

  /// @brief Method .ctor, addr 0x68e5da8, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(int32_t meshesCount);

  /// @brief Method get_Item, addr 0x68ea3e4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh_MeshData get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x68ea3dc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_MeshDataArray();

  // Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::System::IntPtr*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Mesh_MeshDataArray(::System::IntPtr* m_Ptrs, int32_t m_Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10195 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Ptrs, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr* m_Ptrs;

  /// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
  int32_t m_Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Mesh_MeshDataArray, m_Ptrs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Mesh_MeshDataArray, m_Length) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Mesh_MeshDataArray, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Mesh
class CORDL_TYPE Mesh : public ::UnityEngine::Object {
public:
  // Declarations
  using MeshData = ::UnityEngine::Mesh_MeshData;

  using MeshDataArray = ::UnityEngine::Mesh_MeshDataArray;

  __declspec(property(get = get_bindposeCount)) int32_t bindposeCount;

  __declspec(property(get = get_bindposes, put = set_bindposes)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> bindposes;

  __declspec(property(get = get_blendShapeCount)) int32_t blendShapeCount;

  __declspec(property(get = get_boneWeights, put = set_boneWeights)) ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> boneWeights;

  __declspec(property(get = get_bounds, put = set_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_canAccess)) bool canAccess;

  __declspec(property(get = get_colors, put = set_colors)) ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors;

  __declspec(property(get = get_colors32, put = set_colors32)) ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32;

  __declspec(property(get = get_indexBufferTarget, put = set_indexBufferTarget)) ::UnityEngine::GraphicsBuffer_Target indexBufferTarget;

  __declspec(property(get = get_indexFormat, put = set_indexFormat)) ::UnityEngine::Rendering::IndexFormat indexFormat;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_normals, put = set_normals)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals;

  __declspec(property(get = get_skinWeightBufferLayout)) ::UnityEngine::SkinWeights skinWeightBufferLayout;

  __declspec(property(get = get_subMeshCount, put = set_subMeshCount)) int32_t subMeshCount;

  __declspec(property(get = get_tangents, put = set_tangents)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents;

  __declspec(property(get = get_triangles, put = set_triangles)) ::ArrayW<int32_t, ::Array<int32_t>*> triangles;

  __declspec(property(get = get_uv, put = set_uv)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv;

  __declspec(property(get = get_uv2, put = set_uv2)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv2;

  __declspec(property(get = get_uv3, put = set_uv3)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv3;

  __declspec(property(get = get_uv4, put = set_uv4)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv4;

  __declspec(property(get = get_uv5, put = set_uv5)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv5;

  __declspec(property(get = get_uv6, put = set_uv6)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv6;

  __declspec(property(get = get_uv7, put = set_uv7)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv7;

  __declspec(property(get = get_uv8, put = set_uv8)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv8;

  __declspec(property(get = get_vertexAttributeCount)) int32_t vertexAttributeCount;

  __declspec(property(get = get_vertexBufferCount)) int32_t vertexBufferCount;

  __declspec(property(get = get_vertexBufferTarget, put = set_vertexBufferTarget)) ::UnityEngine::GraphicsBuffer_Target vertexBufferTarget;

  __declspec(property(get = get_vertexCount)) int32_t vertexCount;

  __declspec(property(get = get_vertices, put = set_vertices)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices;

  /// @brief Method AcquireReadOnlyMeshData, addr 0x68e56c4, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x68e5928, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x68e5c90, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes);

  /// @brief Method AddBlendShapeFrame, addr 0x68e01e0, size 0x264, virtual false, abstract: false, final false
  inline void AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaVertices,
                                 ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaNormals, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaTangents);

  /// @brief Method AddBlendShapeFrame_Injected, addr 0x68e0444, size 0x7c, virtual false, abstract: false, final false
  static inline void AddBlendShapeFrame_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> shapeName, float_t frameWeight,
                                                 ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> deltaVertices, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> deltaNormals,
                                                 ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> deltaTangents);

  /// @brief Method AllocateWritableMeshData, addr 0x68e5ef8, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::UnityEngine::Mesh* mesh);

  /// @brief Method AllocateWritableMeshData, addr 0x68e5d80, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(int32_t meshCount);

  /// @brief Method AllocateWritableMeshData, addr 0x68e5f28, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes);

  /// @brief Method AllocateWritableMeshData, addr 0x68e5fc4, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x68e60b4, size 0x17c, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x68e62f8, size 0x140, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x68e6610, size 0x1ac, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method CheckCanAccessSubmesh, addr 0x68e6f88, size 0x148, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles);

  /// @brief Method CheckCanAccessSubmeshIndices, addr 0x68e70d8, size 0x8, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmeshIndices(int32_t submesh);

  /// @brief Method CheckCanAccessSubmeshTriangles, addr 0x68e70d0, size 0x8, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmeshTriangles(int32_t submesh);

  /// @brief Method CheckIndicesArrayRange, addr 0x68e7aa8, size 0x18c, virtual false, abstract: false, final false
  inline void CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length);

  /// @brief Method Clear, addr 0x68e8fa4, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x68e8fa0, size 0x4, virtual false, abstract: false, final false
  inline void Clear(bool keepVertexLayout);

  /// @brief Method ClearBlendShapes, addr 0x68dfa18, size 0x80, virtual false, abstract: false, final false
  inline void ClearBlendShapes();

  /// @brief Method ClearBlendShapes_Injected, addr 0x68dfa98, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearBlendShapes_Injected(::System::IntPtr _unity_self);

  /// @brief Method ClearImpl, addr 0x68e22ec, size 0x90, virtual false, abstract: false, final false
  inline void ClearImpl(bool keepVertexLayout);

  /// @brief Method ClearImpl_Injected, addr 0x68e237c, size 0x44, virtual false, abstract: false, final false
  static inline void ClearImpl_Injected(::System::IntPtr _unity_self, bool keepVertexLayout);

  /// @brief Method CombineMeshes, addr 0x68e9868, size 0x10, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine);

  /// @brief Method CombineMeshes, addr 0x68e985c, size 0xc, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes);

  /// @brief Method CombineMeshes, addr 0x68e9854, size 0x8, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes, bool useMatrices);

  /// @brief Method CombineMeshes, addr 0x68e9850, size 0x4, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);

  /// @brief Method CombineMeshesImpl, addr 0x68e2c00, size 0x124, virtual false, abstract: false, final false
  inline void CombineMeshesImpl(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);

  /// @brief Method CombineMeshesImpl_Injected, addr 0x68e2d24, size 0x6c, virtual false, abstract: false, final false
  static inline void CombineMeshesImpl_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> combine, bool mergeSubMeshes, bool useMatrices,
                                                bool hasLightmapData);

  /// @brief Method DefaultDimensionForChannel, addr 0x68e3038, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method FromInstanceID, addr 0x68dc1c0, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> FromInstanceID(int32_t id);

  /// @brief Method FromInstanceID_Injected, addr 0x68dc2e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromInstanceID_Injected(int32_t id);

  /// @brief Method GetAllBoneWeights, addr 0x68e0b10, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> GetAllBoneWeights();

  /// @brief Method GetAllBoneWeightsArray, addr 0x68e0b74, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetAllBoneWeightsArray();

  /// @brief Method GetAllBoneWeightsArraySize, addr 0x68e0bf4, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetAllBoneWeightsArraySize();

  /// @brief Method GetAllBoneWeightsArraySize_Injected, addr 0x68e0de4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetAllBoneWeightsArraySize_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetAllBoneWeightsArray_Injected, addr 0x68e0edc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetAllBoneWeightsArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::ArrayW<T, ::Array<T>*> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetAllocArrayFromChannelImpl, addr 0x68ded68, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetAllocArrayFromChannelImpl_Injected, addr 0x68dee10, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Array* GetAllocArrayFromChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel,
                                                                       ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetArrayFromChannelImpl, addr 0x68dee6c, size 0xb0, virtual false, abstract: false, final false
  inline void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values);

  /// @brief Method GetArrayFromChannelImpl_Injected, addr 0x68def1c, size 0x6c, virtual false, abstract: false, final false
  static inline void GetArrayFromChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                      int32_t dim, ::System::Array* values);

  /// @brief Method GetBaseVertex, addr 0x68e7a2c, size 0x7c, virtual false, abstract: false, final false
  inline uint32_t GetBaseVertex(int32_t submesh);

  /// @brief Method GetBaseVertexImpl, addr 0x68dd6bc, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetBaseVertexImpl(int32_t submesh);

  /// @brief Method GetBaseVertexImpl_Injected, addr 0x68dd74c, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetBaseVertexImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetBindposes, addr 0x68e12fc, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> GetBindposes();

  /// @brief Method GetBindposes, addr 0x68e8d98, size 0xf8, virtual false, abstract: false, final false
  inline void GetBindposes(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* bindposes);

  /// @brief Method GetBindposesArray, addr 0x68e1360, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetBindposesArray();

  /// @brief Method GetBindposesArray_Injected, addr 0x68e15a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBindposesArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetBindposesNonAllocImpl, addr 0x68e177c, size 0x15c, virtual false, abstract: false, final false
  inline void GetBindposesNonAllocImpl(::ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> values);

  /// @brief Method GetBindposesNonAllocImpl_Injected, addr 0x68e18d8, size 0x44, virtual false, abstract: false, final false
  static inline void GetBindposesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> values);

  /// @brief Method GetBlendShapeBuffer, addr 0x68e6ccc, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer();

  /// @brief Method GetBlendShapeBuffer, addr 0x68e6b98, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer(::UnityEngine::Rendering::BlendShapeBufferLayout layout);

  /// @brief Method GetBlendShapeBufferImpl, addr 0x68df550, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBufferImpl(int32_t layout);

  /// @brief Method GetBlendShapeBufferImpl_Injected, addr 0x68df5f8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBlendShapeBufferImpl_Injected(::System::IntPtr _unity_self, int32_t layout);

  /// @brief Method GetBlendShapeBufferRange, addr 0x68e6df0, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::BlendShapeBufferRange GetBlendShapeBufferRange(int32_t blendShapeIndex);

  /// @brief Method GetBlendShapeFrameCount, addr 0x68dfe20, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetBlendShapeFrameCount(int32_t shapeIndex);

  /// @brief Method GetBlendShapeFrameCount_Injected, addr 0x68dfeb0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetBlendShapeFrameCount_Injected(::System::IntPtr _unity_self, int32_t shapeIndex);

  /// @brief Method GetBlendShapeFrameVertices, addr 0x68dffe0, size 0x18c, virtual false, abstract: false, final false
  inline void GetBlendShapeFrameVertices(int32_t shapeIndex, int32_t frameIndex, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaVertices,
                                         ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaNormals,
                                         ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaTangents);

  /// @brief Method GetBlendShapeFrameVertices_Injected, addr 0x68e016c, size 0x74, virtual false, abstract: false, final false
  static inline void GetBlendShapeFrameVertices_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, int32_t frameIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> deltaVertices,
                                                         ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> deltaNormals, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> deltaTangents);

  /// @brief Method GetBlendShapeFrameWeight, addr 0x68dfef4, size 0x98, virtual false, abstract: false, final false
  inline float_t GetBlendShapeFrameWeight(int32_t shapeIndex, int32_t frameIndex);

  /// @brief Method GetBlendShapeFrameWeight_Injected, addr 0x68dff8c, size 0x54, virtual false, abstract: false, final false
  static inline float_t GetBlendShapeFrameWeight_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, int32_t frameIndex);

  /// @brief Method GetBlendShapeIndex, addr 0x68dfc68, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetBlendShapeIndex(::StringW blendShapeName);

  /// @brief Method GetBlendShapeIndex_Injected, addr 0x68dfddc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetBlendShapeIndex_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> blendShapeName);

  /// @brief Method GetBlendShapeName, addr 0x68dfad4, size 0x140, virtual false, abstract: false, final false
  inline ::StringW GetBlendShapeName(int32_t shapeIndex);

  /// @brief Method GetBlendShapeName_Injected, addr 0x68dfc14, size 0x54, virtual false, abstract: false, final false
  static inline void GetBlendShapeName_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetBlendShapeOffsetInternal, addr 0x68e04c0, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::BlendShape GetBlendShapeOffsetInternal(int32_t index);

  /// @brief Method GetBlendShapeOffsetInternal_Injected, addr 0x68e0570, size 0x54, virtual false, abstract: false, final false
  static inline void GetBlendShapeOffsetInternal_Injected(::System::IntPtr _unity_self, int32_t index, ::ByRef<::UnityEngine::BlendShape> ret);

  /// @brief Method GetBoneWeightBuffer, addr 0x68e690c, size 0x28c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBuffer(::UnityEngine::SkinWeights layout);

  /// @brief Method GetBoneWeightBufferImpl, addr 0x68df464, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBufferImpl(int32_t bonesPerVertex);

  /// @brief Method GetBoneWeightBufferImpl_Injected, addr 0x68df50c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBoneWeightBufferImpl_Injected(::System::IntPtr _unity_self, int32_t bonesPerVertex);

  /// @brief Method GetBoneWeightBufferLayoutInternal, addr 0x68e0e20, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetBoneWeightBufferLayoutInternal();

  /// @brief Method GetBoneWeightBufferLayoutInternal_Injected, addr 0x68e0ea0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetBoneWeightBufferLayoutInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetBoneWeights, addr 0x68e8e90, size 0x104, virtual false, abstract: false, final false
  inline void GetBoneWeights(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>* boneWeights);

  /// @brief Method GetBoneWeightsImpl, addr 0x68e0680, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> GetBoneWeightsImpl();

  /// @brief Method GetBoneWeightsImpl_Injected, addr 0x68e07e0, size 0x44, virtual false, abstract: false, final false
  static inline void GetBoneWeightsImpl_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetBoneWeightsNonAllocImpl, addr 0x68e15dc, size 0x15c, virtual false, abstract: false, final false
  inline void GetBoneWeightsNonAllocImpl(::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>> values);

  /// @brief Method GetBoneWeightsNonAllocImpl_Injected, addr 0x68e1738, size 0x44, virtual false, abstract: false, final false
  static inline void GetBoneWeightsNonAllocImpl_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> values);

  /// @brief Method GetBonesPerVertex, addr 0x68e0c74, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetBonesPerVertex();

  /// @brief Method GetBonesPerVertexArray, addr 0x68e0d64, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetBonesPerVertexArray();

  /// @brief Method GetBonesPerVertexArray_Injected, addr 0x68e0f18, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBonesPerVertexArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetColors, addr 0x68e4b3c, size 0xd4, virtual false, abstract: false, final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors);

  /// @brief Method GetColors, addr 0x68e47fc, size 0xd0, virtual false, abstract: false, final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* colors);

  /// @brief Method GetIndexBuffer, addr 0x68e686c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBuffer();

  /// @brief Method GetIndexBufferImpl, addr 0x68df394, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBufferImpl();

  /// @brief Method GetIndexBufferImpl_Injected, addr 0x68df428, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetIndexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetIndexCount, addr 0x68e77d8, size 0x7c, virtual false, abstract: false, final false
  inline uint32_t GetIndexCount(int32_t submesh);

  /// @brief Method GetIndexCountImpl, addr 0x68dd514, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetIndexCountImpl(int32_t submesh);

  /// @brief Method GetIndexCountImpl_Injected, addr 0x68dd5a4, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetIndexCountImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetIndexStart, addr 0x68e79b0, size 0x7c, virtual false, abstract: false, final false
  inline uint32_t GetIndexStart(int32_t submesh);

  /// @brief Method GetIndexStartImpl, addr 0x68dd440, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetIndexStartImpl(int32_t submesh);

  /// @brief Method GetIndexStartImpl_Injected, addr 0x68dd4d0, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetIndexStartImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetIndices, addr 0x68e75e0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIndices(int32_t submesh);

  /// @brief Method GetIndices, addr 0x68e75e8, size 0x8c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIndices(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x68e7674, size 0x8, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh);

  /// @brief Method GetIndices, addr 0x68e767c, size 0x15c, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x68e7854, size 0x15c, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesImpl, addr 0x68dd960, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIndicesImpl(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesImpl_Injected, addr 0x68ddad4, size 0x5c, virtual false, abstract: false, final false
  static inline void GetIndicesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, bool applyBaseVertex, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetIndicesNonAllocImpl, addr 0x68de1d0, size 0x178, virtual false, abstract: false, final false
  inline void GetIndicesNonAllocImpl(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesNonAllocImpl16, addr 0x68de3a4, size 0x178, virtual false, abstract: false, final false
  inline void GetIndicesNonAllocImpl16(::ByRef<::ArrayW<uint16_t, ::Array<uint16_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesNonAllocImpl16_Injected, addr 0x68de51c, size 0x5c, virtual false, abstract: false, final false
  static inline void GetIndicesNonAllocImpl16_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesNonAllocImpl_Injected, addr 0x68de348, size 0x5c, virtual false, abstract: false, final false
  static inline void GetIndicesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim);

  /// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim,
                                ::UnityEngine::Rendering::VertexAttributeFormat channelType);

  /// @brief Method GetNativeIndexBufferPtr, addr 0x68df1ec, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeIndexBufferPtr();

  /// @brief Method GetNativeIndexBufferPtr_Injected, addr 0x68df26c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetNativeIndexBufferPtr_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetNativeVertexBufferPtr, addr 0x68df118, size 0x90, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeVertexBufferPtr(int32_t index);

  /// @brief Method GetNativeVertexBufferPtr_Injected, addr 0x68df1a8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetNativeVertexBufferPtr_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetNormals, addr 0x68e417c, size 0xd0, virtual false, abstract: false, final false
  inline void GetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals);

  /// @brief Method GetSubMesh, addr 0x68e1d64, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t index);

  /// @brief Method GetSubMesh_Injected, addr 0x68e1e24, size 0x54, virtual false, abstract: false, final false
  static inline void GetSubMesh_Injected(::System::IntPtr _unity_self, int32_t index, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> ret);

  /// @brief Method GetTangents, addr 0x68e44bc, size 0xd0, virtual false, abstract: false, final false
  inline void GetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method GetTopology, addr 0x68e9798, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology GetTopology(int32_t submesh);

  /// @brief Method GetTopologyImpl, addr 0x68e2888, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology GetTopologyImpl(int32_t submesh);

  /// @brief Method GetTopologyImpl_Injected, addr 0x68e2918, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::MeshTopology GetTopologyImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetTotalIndexCount, addr 0x68dc4ac, size 0x80, virtual false, abstract: false, final false
  inline uint32_t GetTotalIndexCount();

  /// @brief Method GetTotalIndexCount_Injected, addr 0x68dc52c, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetTotalIndexCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetTriangles, addr 0x68e728c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTriangles(int32_t submesh);

  /// @brief Method GetTriangles, addr 0x68e7294, size 0x8c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTriangles(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x68e7320, size 0x8, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// @brief Method GetTriangles, addr 0x68e7328, size 0x15c, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x68e7484, size 0x15c, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesCountImpl, addr 0x68dd5e8, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetTrianglesCountImpl(int32_t submesh);

  /// @brief Method GetTrianglesCountImpl_Injected, addr 0x68dd678, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetTrianglesCountImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetTrianglesImpl, addr 0x68dd790, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTrianglesImpl(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesImpl_Injected, addr 0x68dd904, size 0x5c, virtual false, abstract: false, final false
  static inline void GetTrianglesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, bool applyBaseVertex, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetTrianglesNonAllocImpl, addr 0x68dde28, size 0x178, virtual false, abstract: false, final false
  inline void GetTrianglesNonAllocImpl(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesNonAllocImpl16, addr 0x68ddffc, size 0x178, virtual false, abstract: false, final false
  inline void GetTrianglesNonAllocImpl16(::ByRef<::ArrayW<uint16_t, ::Array<uint16_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesNonAllocImpl16_Injected, addr 0x68de174, size 0x5c, virtual false, abstract: false, final false
  static inline void GetTrianglesNonAllocImpl16_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesNonAllocImpl_Injected, addr 0x68ddfa0, size 0x5c, virtual false, abstract: false, final false
  static inline void GetTrianglesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetUVChannel, addr 0x68e2fc4, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t uvIndex);

  /// @brief Method GetUVDistributionMetric, addr 0x68e2b2c, size 0x90, virtual false, abstract: false, final false
  inline float_t GetUVDistributionMetric(int32_t uvSetIndex);

  /// @brief Method GetUVDistributionMetric_Injected, addr 0x68e2bbc, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetUVDistributionMetric_Injected(::System::IntPtr _unity_self, int32_t uvSetIndex);

  /// @brief Method GetUVs, addr 0x68e54a0, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// @brief Method GetUVs, addr 0x68e5508, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// @brief Method GetUVs, addr 0x68e5570, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method GetUVsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetUVsImpl(int32_t uvIndex, ::System::Collections::Generic::List_1<T>* uvs, int32_t dim);

  /// @brief Method GetVertexAttribute, addr 0x68dd344, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeDescriptor GetVertexAttribute(int32_t index);

  /// @brief Method GetVertexAttributeCountImpl, addr 0x68dd288, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeCountImpl();

  /// @brief Method GetVertexAttributeCountImpl_Injected, addr 0x68dd308, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeCountImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetVertexAttributeDimension, addr 0x68de720, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeDimension_Injected, addr 0x68de7b0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeDimension_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeFormat, addr 0x68de7f4, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeFormat_Injected, addr 0x68de884, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeOffset, addr 0x68de99c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeOffset_Injected, addr 0x68dea2c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeOffset_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeStream, addr 0x68de8c8, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeStream_Injected, addr 0x68de958, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeStream_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttribute_Injected, addr 0x68dd3ec, size 0x54, virtual false, abstract: false, final false
  static inline void GetVertexAttribute_Injected(::System::IntPtr _unity_self, int32_t index, ::ByRef<::UnityEngine::Rendering::VertexAttributeDescriptor> ret);

  /// @brief Method GetVertexAttributes, addr 0x68e55dc, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> GetVertexAttributes();

  /// @brief Method GetVertexAttributes, addr 0x68e564c, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributes(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method GetVertexAttributes, addr 0x68e5650, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// @brief Method GetVertexAttributesAlloc, addr 0x68dce18, size 0x80, virtual false, abstract: false, final false
  inline ::System::Array* GetVertexAttributesAlloc();

  /// @brief Method GetVertexAttributesAlloc_Injected, addr 0x68dce98, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Array* GetVertexAttributesAlloc_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetVertexAttributesArray, addr 0x68dced4, size 0x120, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributesArray(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method GetVertexAttributesArray_Injected, addr 0x68dcff4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributesArray_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// @brief Method GetVertexAttributesList, addr 0x68dd038, size 0x20c, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributesList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// @brief Method GetVertexAttributesList_Injected, addr 0x68dd244, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributesList_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> attributes);

  /// @brief Method GetVertexBuffer, addr 0x68e67bc, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer(int32_t index);

  /// @brief Method GetVertexBufferImpl, addr 0x68df2a8, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl(int32_t index);

  /// @brief Method GetVertexBufferImpl_Injected, addr 0x68df350, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexBufferImpl_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetVertexBufferStride, addr 0x68df044, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexBufferStride(int32_t stream);

  /// @brief Method GetVertexBufferStride_Injected, addr 0x68df0d4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexBufferStride_Injected(::System::IntPtr _unity_self, int32_t stream);

  /// @brief Method GetVertices, addr 0x68e3e3c, size 0xd0, virtual false, abstract: false, final false
  inline void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices);

  /// @brief Method HasBoneWeights, addr 0x68e05c4, size 0x80, virtual false, abstract: false, final false
  inline bool HasBoneWeights();

  /// @brief Method HasBoneWeights_Injected, addr 0x68e0644, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasBoneWeights_Injected(::System::IntPtr _unity_self);

  /// @brief Method HasVertexAttribute, addr 0x68de64c, size 0x90, virtual false, abstract: false, final false
  inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method HasVertexAttribute_Injected, addr 0x68de6dc, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVertexAttribute_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method InternalSetBoneWeights, addr 0x68e09f4, size 0xb0, virtual false, abstract: false, final false
  inline void InternalSetBoneWeights(::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights, int32_t weightsSize);

  /// @brief Method InternalSetBoneWeights_Injected, addr 0x68e0aa4, size 0x6c, virtual false, abstract: false, final false
  static inline void InternalSetBoneWeights_Injected(::System::IntPtr _unity_self, ::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights, int32_t weightsSize);

  /// @brief Method InternalSetIndexBufferData, addr 0x68dc654, size 0xc8, virtual false, abstract: false, final false
  inline void InternalSetIndexBufferData(::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferDataFromArray, addr 0x68dc7a0, size 0xc8, virtual false, abstract: false, final false
  inline void InternalSetIndexBufferDataFromArray(::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferDataFromArray_Injected, addr 0x68dc868, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetIndexBufferDataFromArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferData_Injected, addr 0x68dc71c, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetIndexBufferData_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                         ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferData, addr 0x68dcb50, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetVertexBufferData(int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                          ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferDataFromArray, addr 0x68dccb4, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetVertexBufferDataFromArray(int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferDataFromArray_Injected, addr 0x68dcd8c, size 0x8c, virtual false, abstract: false, final false
  static inline void InternalSetVertexBufferDataFromArray_Injected(::System::IntPtr _unity_self, int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                                   int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferData_Injected, addr 0x68dcc28, size 0x8c, virtual false, abstract: false, final false
  static inline void InternalSetVertexBufferData_Injected(::System::IntPtr _unity_self, int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                          int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method Internal_Create, addr 0x68dc10c, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Mesh* mono);

  /// @brief Method MarkDynamic, addr 0x68e949c, size 0x24, virtual false, abstract: false, final false
  inline void MarkDynamic();

  /// @brief Method MarkDynamicImpl, addr 0x68e263c, size 0x80, virtual false, abstract: false, final false
  inline void MarkDynamicImpl();

  /// @brief Method MarkDynamicImpl_Injected, addr 0x68e26bc, size 0x3c, virtual false, abstract: false, final false
  static inline void MarkDynamicImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method MarkModified, addr 0x68e26f8, size 0x80, virtual false, abstract: false, final false
  inline void MarkModified();

  /// @brief Method MarkModified_Injected, addr 0x68e2778, size 0x3c, virtual false, abstract: false, final false
  static inline void MarkModified_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::Mesh* New_ctor();

  /// @brief Method Optimize, addr 0x68e94f8, size 0xe0, virtual false, abstract: false, final false
  inline void Optimize();

  /// @brief Method OptimizeImpl, addr 0x68e2d90, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeImpl();

  /// @brief Method OptimizeImpl_Injected, addr 0x68e2e10, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method OptimizeIndexBuffers, addr 0x68e95d8, size 0xe0, virtual false, abstract: false, final false
  inline void OptimizeIndexBuffers();

  /// @brief Method OptimizeIndexBuffersImpl, addr 0x68e2e4c, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeIndexBuffersImpl();

  /// @brief Method OptimizeIndexBuffersImpl_Injected, addr 0x68e2ecc, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeIndexBuffersImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method OptimizeReorderVertexBuffer, addr 0x68e96b8, size 0xe0, virtual false, abstract: false, final false
  inline void OptimizeReorderVertexBuffer();

  /// @brief Method OptimizeReorderVertexBufferImpl, addr 0x68e2f08, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeReorderVertexBufferImpl();

  /// @brief Method OptimizeReorderVertexBufferImpl_Injected, addr 0x68e2f88, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeReorderVertexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method PrintErrorCantAccessChannel, addr 0x68de578, size 0x90, virtual false, abstract: false, final false
  inline void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute ch);

  /// @brief Method PrintErrorCantAccessChannel_Injected, addr 0x68de608, size 0x44, virtual false, abstract: false, final false
  static inline void PrintErrorCantAccessChannel_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute ch);

  /// @brief Method PrintErrorCantAccessIndices, addr 0x68e6ec8, size 0xc0, virtual false, abstract: false, final false
  inline void PrintErrorCantAccessIndices();

  /// @brief Method RecalculateBounds, addr 0x68e8fac, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateBounds();

  /// @brief Method RecalculateBounds, addr 0x68e8fb4, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateBounds(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateBoundsImpl, addr 0x68e23c0, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateBoundsImpl_Injected, addr 0x68e2450, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateBoundsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormals, addr 0x68e90a8, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateNormals();

  /// @brief Method RecalculateNormals, addr 0x68e90b0, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateNormals(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormalsImpl, addr 0x68e2494, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormalsImpl_Injected, addr 0x68e2524, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateNormalsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangents, addr 0x68e91a4, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateTangents();

  /// @brief Method RecalculateTangents, addr 0x68e91ac, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateTangents(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangentsImpl, addr 0x68e2568, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangentsImpl_Injected, addr 0x68e25f8, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateTangentsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateUVDistributionMetric, addr 0x68e92a0, size 0x108, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetric(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricImpl, addr 0x68e295c, size 0xa0, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetricImpl(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricImpl_Injected, addr 0x68e29fc, size 0x54, virtual false, abstract: false, final false
  static inline void RecalculateUVDistributionMetricImpl_Injected(::System::IntPtr _unity_self, int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetrics, addr 0x68e93a8, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetrics(float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricsImpl, addr 0x68e2a50, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetricsImpl(float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricsImpl_Injected, addr 0x68e2ae0, size 0x4c, virtual false, abstract: false, final false
  static inline void RecalculateUVDistributionMetricsImpl_Injected(::System::IntPtr _unity_self, float_t uvAreaThreshold);

  /// @brief Method SetAllSubMeshesAtOnceFromArray, addr 0x68e1e78, size 0x124, virtual false, abstract: false, final false
  inline void SetAllSubMeshesAtOnceFromArray(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor, ::Array<::UnityEngine::Rendering::SubMeshDescriptor>*> desc, int32_t start, int32_t count,
                                             ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromArray_Injected, addr 0x68e1f9c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAllSubMeshesAtOnceFromArray_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> desc, int32_t start, int32_t count,
                                                             ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromNativeArray, addr 0x68e2008, size 0xb0, virtual false, abstract: false, final false
  inline void SetAllSubMeshesAtOnceFromNativeArray(::System::IntPtr desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromNativeArray_Injected, addr 0x68e20b8, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAllSubMeshesAtOnceFromNativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::ArrayW<T, ::Array<T>*> values,
                                 ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::ArrayW<T, ::Array<T>*> values, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannelImpl, addr 0x68dea70, size 0xe0, virtual false, abstract: false, final false
  inline void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values, int32_t arraySize,
                                     int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannelImpl_Injected, addr 0x68deb50, size 0x9c, virtual false, abstract: false, final false
  static inline void SetArrayForChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                     int32_t dim, ::System::Array* values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetBindposes, addr 0x68e13e0, size 0xd4, virtual false, abstract: false, final false
  inline void SetBindposes(::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> poses);

  /// @brief Method SetBindposesFromScript_NativeArray, addr 0x68e14b4, size 0x98, virtual false, abstract: false, final false
  inline void SetBindposesFromScript_NativeArray(::System::IntPtr posesPtr, int32_t posesCount);

  /// @brief Method SetBindposesFromScript_NativeArray_Injected, addr 0x68e154c, size 0x54, virtual false, abstract: false, final false
  static inline void SetBindposesFromScript_NativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr posesPtr, int32_t posesCount);

  /// @brief Method SetBoneWeights, addr 0x68e096c, size 0x88, virtual false, abstract: false, final false
  inline void SetBoneWeights(::Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> weights);

  /// @brief Method SetBoneWeightsImpl, addr 0x68e0824, size 0x104, virtual false, abstract: false, final false
  inline void SetBoneWeightsImpl(::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> weights);

  /// @brief Method SetBoneWeightsImpl_Injected, addr 0x68e0928, size 0x44, virtual false, abstract: false, final false
  static inline void SetBoneWeightsImpl_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> weights);

  /// @brief Method SetColors, addr 0x68e49d8, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> inColors);

  /// @brief Method SetColors, addr 0x68e4a50, size 0x74, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x68e4ac4, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x68e4d34, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> inColors);

  /// @brief Method SetColors, addr 0x68e4dac, size 0x74, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x68e4e20, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x68e4c10, size 0x84, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors);

  /// @brief Method SetColors, addr 0x68e4c94, size 0x8, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x68e4c9c, size 0x98, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x68e48cc, size 0x84, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors);

  /// @brief Method SetColors, addr 0x68e4950, size 0x8, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x68e4958, size 0x80, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors);

  /// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetIndexBufferData(::ArrayW<T, ::Array<T>*> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetIndexBufferData(::System::Collections::Generic::List_1<T>* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetIndexBufferData(::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferParams, addr 0x68dc568, size 0x98, virtual false, abstract: false, final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndexBufferParams_Injected, addr 0x68dc600, size 0x54, virtual false, abstract: false, final false
  static inline void SetIndexBufferParams_Injected(::System::IntPtr _unity_self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndices, addr 0x68e8400, size 0xb4, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x68e829c, size 0x70, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh);

  /// @brief Method SetIndices, addr 0x68e838c, size 0x74, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds);

  /// @brief Method SetIndices, addr 0x68e830c, size 0x80, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x68e8534, size 0xb4, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x68e84b4, size 0x80, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x68e86a4, size 0x130, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x68e85e8, size 0xbc, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x68e8890, size 0x130, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x68e87d4, size 0xbc, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesImpl, addr 0x68ddb30, size 0xe0, virtual false, abstract: false, final false
  inline void SetIndicesImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* indices, int32_t arrayStart,
                             int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesImpl_Injected, addr 0x68ddc10, size 0x9c, virtual false, abstract: false, final false
  static inline void SetIndicesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat,
                                             ::System::Array* indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesNativeArrayImpl, addr 0x68ddcac, size 0xe0, virtual false, abstract: false, final false
  inline void SetIndicesNativeArrayImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::IntPtr indices, int32_t arrayStart,
                                        int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesNativeArrayImpl_Injected, addr 0x68ddd8c, size 0x9c, virtual false, abstract: false, final false
  static inline void SetIndicesNativeArrayImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat,
                                                        ::System::IntPtr indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
                                ::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length,
                                ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNativeArrayForChannelImpl, addr 0x68debec, size 0xe0, virtual false, abstract: false, final false
  inline void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values,
                                           int32_t arraySize, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNativeArrayForChannelImpl_Injected, addr 0x68deccc, size 0x9c, virtual false, abstract: false, final false
  static inline void SetNativeArrayForChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                           int32_t dim, ::System::IntPtr values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount,
                                                           ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x68e4358, size 0x78, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inNormals);

  /// @brief Method SetNormals, addr 0x68e43d0, size 0x74, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x68e4444, size 0x78, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x68e424c, size 0x84, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals);

  /// @brief Method SetNormals, addr 0x68e42d0, size 0x8, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x68e42d8, size 0x80, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSizedArrayForChannel, addr 0x68e30d4, size 0x21c, virtual false, abstract: false, final false
  inline void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values,
                                      int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSizedNativeArrayForChannel, addr 0x68e32f0, size 0x218, virtual false, abstract: false, final false
  inline void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values,
                                            int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMesh, addr 0x68e1c60, size 0xa8, virtual false, abstract: false, final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMesh_Injected, addr 0x68e1d08, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMesh_Injected(::System::IntPtr _unity_self, int32_t index, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x68e8c30, size 0x28, virtual false, abstract: false, final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor, ::Array<::UnityEngine::Rendering::SubMeshDescriptor>*> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x68e89c0, size 0x270, virtual false, abstract: false, final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor, ::Array<::UnityEngine::Rendering::SubMeshDescriptor>*> desc, int32_t start, int32_t count,
                           ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x68e8cf0, size 0xa8, virtual false, abstract: false, final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x68e8c58, size 0x98, virtual false, abstract: false, final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x68e4698, size 0x78, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> inTangents);

  /// @brief Method SetTangents, addr 0x68e4710, size 0x74, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x68e4784, size 0x78, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x68e458c, size 0x84, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents);

  /// @brief Method SetTangents, addr 0x68e4610, size 0x8, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x68e4618, size 0x80, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTriangles, addr 0x68e7c34, size 0x54, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t submesh);

  /// @brief Method SetTriangles, addr 0x68e7cec, size 0x60, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles, addr 0x68e7c88, size 0x64, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x68e7d4c, size 0xa8, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x68e7df4, size 0x64, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t, ::Array<uint16_t>*> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x68e7e58, size 0xa8, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t, ::Array<uint16_t>*> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x68e7f00, size 0xc, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// @brief Method SetTriangles, addr 0x68e7fac, size 0x8, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles, addr 0x68e7f0c, size 0xa0, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x68e7fb4, size 0x124, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x68e80d8, size 0xa0, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x68e8178, size 0x124, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTrianglesImpl, addr 0x68e720c, size 0x80, virtual false, abstract: false, final false
  inline void SetTrianglesImpl(int32_t submesh, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* triangles, int32_t trianglesArrayLength, int32_t start, int32_t length,
                               bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetUVs, addr 0x68e5314, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs);

  /// @brief Method SetUVs, addr 0x68e5368, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x68e5458, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x68e5380, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uvs);

  /// @brief Method SetUVs, addr 0x68e53d4, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x68e5470, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x68e53ec, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs);

  /// @brief Method SetUVs, addr 0x68e5440, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x68e5488, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x68e4e98, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// @brief Method SetUVs, addr 0x68e4f24, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x68e5054, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x68e4f2c, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// @brief Method SetUVs, addr 0x68e4fb8, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x68e50e4, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x68e4fc0, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method SetUVs, addr 0x68e504c, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x68e5174, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUvsImpl, addr 0x68e5204, size 0x110, virtual false, abstract: false, final false
  inline void SetUvsImpl(int32_t uvIndex, int32_t dim, ::System::Array* uvs, int32_t arrayStart, int32_t arraySize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUvsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetUvsImpl(int32_t uvIndex, int32_t dim, ::System::Collections::Generic::List_1<T>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetVertexBufferData(::ArrayW<T, ::Array<T>*> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetVertexBufferData(::System::Collections::Generic::List_1<T>* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream,
                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetVertexBufferData(::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream,
                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferParams, addr 0x68e5654, size 0x4, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method SetVertexBufferParams, addr 0x68e5658, size 0x6c, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParamsFromArray, addr 0x68dc9f0, size 0x10c, virtual false, abstract: false, final false
  inline void SetVertexBufferParamsFromArray(int32_t vertexCount,
                                             ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0x68dcafc, size 0x54, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr _unity_self, int32_t vertexCount, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// @brief Method SetVertexBufferParamsFromPtr, addr 0x68dc8ec, size 0xa8, virtual false, abstract: false, final false
  inline void SetVertexBufferParamsFromPtr(int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount);

  /// @brief Method SetVertexBufferParamsFromPtr_Injected, addr 0x68dc994, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromPtr_Injected(::System::IntPtr _unity_self, int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount);

  /// @brief Method SetVertices, addr 0x68e4018, size 0x78, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inVertices);

  /// @brief Method SetVertices, addr 0x68e4090, size 0x74, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x68e4104, size 0x78, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices, addr 0x68e3f0c, size 0x84, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices);

  /// @brief Method SetVertices, addr 0x68e3f90, size 0x8, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x68e3f98, size 0x80, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method UploadMeshData, addr 0x68e94c0, size 0x38, virtual false, abstract: false, final false
  inline void UploadMeshData(bool markNoLongerReadable);

  /// @brief Method UploadMeshDataImpl, addr 0x68e27b4, size 0x90, virtual false, abstract: false, final false
  inline void UploadMeshDataImpl(bool markNoLongerReadable);

  /// @brief Method UploadMeshDataImpl_Injected, addr 0x68e2844, size 0x44, virtual false, abstract: false, final false
  static inline void UploadMeshDataImpl_Injected(::System::IntPtr _unity_self, bool markNoLongerReadable);

  /// @brief Method .ctor, addr 0x68dc148, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bindposeCount, addr 0x68e0f54, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_bindposeCount();

  /// @brief Method get_bindposeCount_Injected, addr 0x68e0fd4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_bindposeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bindposes, addr 0x68e1010, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_bindposes();

  /// @brief Method get_bindposes_Injected, addr 0x68e1170, size 0x44, virtual false, abstract: false, final false
  static inline void get_bindposes_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_blendShapeCount, addr 0x68df95c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_blendShapeCount();

  /// @brief Method get_blendShapeCount_Injected, addr 0x68df9dc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_blendShapeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_boneWeights, addr 0x68e8f94, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> get_boneWeights();

  /// @brief Method get_bounds, addr 0x68e2124, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x68e21d4, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_canAccess, addr 0x68e19d8, size 0x80, virtual false, abstract: false, final false
  inline bool get_canAccess();

  /// @brief Method get_canAccess_Injected, addr 0x68e1a58, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canAccess_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_colors, addr 0x68e3cc4, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> get_colors();

  /// @brief Method get_colors32, addr 0x68e3d78, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> get_colors32();

  /// @brief Method get_indexBufferTarget, addr 0x68df7cc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget();

  /// @brief Method get_indexBufferTarget_Injected, addr 0x68df84c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_indexFormat, addr 0x68dc31c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndexFormat get_indexFormat();

  /// @brief Method get_indexFormat_Injected, addr 0x68dc39c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::IndexFormat get_indexFormat_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isReadable, addr 0x68e191c, size 0x80, virtual false, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x68e199c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_normals, addr 0x68e35bc, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_normals();

  /// @brief Method get_skinWeightBufferLayout, addr 0x68e8f9c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::SkinWeights get_skinWeightBufferLayout();

  /// @brief Method get_subMeshCount, addr 0x68e1ad0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_subMeshCount();

  /// @brief Method get_subMeshCount_Injected, addr 0x68e1b50, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subMeshCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_tangents, addr 0x68e3670, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> get_tangents();

  /// @brief Method get_triangles, addr 0x68e70e0, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_triangles();

  /// @brief Method get_uv, addr 0x68e3724, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv();

  /// @brief Method get_uv2, addr 0x68e37d8, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv2();

  /// @brief Method get_uv3, addr 0x68e388c, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv3();

  /// @brief Method get_uv4, addr 0x68e3940, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv4();

  /// @brief Method get_uv5, addr 0x68e39f4, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv5();

  /// @brief Method get_uv6, addr 0x68e3aa8, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv6();

  /// @brief Method get_uv7, addr 0x68e3b5c, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv7();

  /// @brief Method get_uv8, addr 0x68e3c10, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv8();

  /// @brief Method get_vertexAttributeCount, addr 0x68e55d8, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_vertexAttributeCount();

  /// @brief Method get_vertexBufferCount, addr 0x68def88, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method get_vertexBufferCount_Injected, addr 0x68df008, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_vertexBufferCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertexBufferTarget, addr 0x68df63c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget();

  /// @brief Method get_vertexBufferTarget_Injected, addr 0x68df6bc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertexCount, addr 0x68e0ce4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_vertexCount();

  /// @brief Method get_vertexCount_Injected, addr 0x68e1a94, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_vertexCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertices, addr 0x68e3508, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_vertices();

  /// @brief Method set_bindposes, addr 0x68e11b4, size 0x104, virtual false, abstract: false, final false
  inline void set_bindposes(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  /// @brief Method set_bindposes_Injected, addr 0x68e12b8, size 0x44, virtual false, abstract: false, final false
  static inline void set_bindposes_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_boneWeights, addr 0x68e8f98, size 0x4, virtual false, abstract: false, final false
  inline void set_boneWeights(::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> value);

  /// @brief Method set_bounds, addr 0x68e2218, size 0x90, virtual false, abstract: false, final false
  inline void set_bounds(::UnityEngine::Bounds value);

  /// @brief Method set_bounds_Injected, addr 0x68e22a8, size 0x44, virtual false, abstract: false, final false
  static inline void set_bounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_colors, addr 0x68e3d14, size 0x64, virtual false, abstract: false, final false
  inline void set_colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  /// @brief Method set_colors32, addr 0x68e3dd0, size 0x6c, virtual false, abstract: false, final false
  inline void set_colors32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value);

  /// @brief Method set_indexBufferTarget, addr 0x68df888, size 0x90, virtual false, abstract: false, final false
  inline void set_indexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_indexBufferTarget_Injected, addr 0x68df918, size 0x44, virtual false, abstract: false, final false
  static inline void set_indexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_indexFormat, addr 0x68dc3d8, size 0x90, virtual false, abstract: false, final false
  inline void set_indexFormat(::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method set_indexFormat_Injected, addr 0x68dc468, size 0x44, virtual false, abstract: false, final false
  static inline void set_indexFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method set_normals, addr 0x68e360c, size 0x64, virtual false, abstract: false, final false
  inline void set_normals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method set_subMeshCount, addr 0x68e1b8c, size 0x90, virtual false, abstract: false, final false
  inline void set_subMeshCount(int32_t value);

  /// @brief Method set_subMeshCount_Injected, addr 0x68e1c1c, size 0x44, virtual false, abstract: false, final false
  static inline void set_subMeshCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_tangents, addr 0x68e36c0, size 0x64, virtual false, abstract: false, final false
  inline void set_tangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method set_triangles, addr 0x68e7158, size 0xb4, virtual false, abstract: false, final false
  inline void set_triangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method set_uv, addr 0x68e3774, size 0x64, virtual false, abstract: false, final false
  inline void set_uv(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv2, addr 0x68e3828, size 0x64, virtual false, abstract: false, final false
  inline void set_uv2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv3, addr 0x68e38dc, size 0x64, virtual false, abstract: false, final false
  inline void set_uv3(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv4, addr 0x68e3990, size 0x64, virtual false, abstract: false, final false
  inline void set_uv4(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv5, addr 0x68e3a44, size 0x64, virtual false, abstract: false, final false
  inline void set_uv5(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv6, addr 0x68e3af8, size 0x64, virtual false, abstract: false, final false
  inline void set_uv6(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv7, addr 0x68e3bac, size 0x64, virtual false, abstract: false, final false
  inline void set_uv7(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv8, addr 0x68e3c60, size 0x64, virtual false, abstract: false, final false
  inline void set_uv8(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_vertexBufferTarget, addr 0x68df6f8, size 0x90, virtual false, abstract: false, final false
  inline void set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertexBufferTarget_Injected, addr 0x68df788, size 0x44, virtual false, abstract: false, final false
  static inline void set_vertexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertices, addr 0x68e3558, size 0x64, virtual false, abstract: false, final false
  inline void set_vertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mesh(Mesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mesh(Mesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10196 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Mesh, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Mesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mesh*, "UnityEngine", "Mesh");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mesh_MeshData, "UnityEngine", "Mesh/MeshData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mesh_MeshDataArray, "UnityEngine", "Mesh/MeshDataArray");
