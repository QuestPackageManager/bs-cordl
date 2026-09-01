#pragma once
// IWYU pragma private; include "UnityEngine\Mesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::Mesh*);
MARK_VAL_T(::UnityEngine::Mesh_MeshData);
MARK_VAL_T(::UnityEngine::Mesh_MeshDataArray);
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh*, "UnityEngine", "Mesh");
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh_MeshData, "UnityEngine", "Mesh/MeshData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh_MeshDataArray, "UnityEngine", "Mesh/MeshDataArray");
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

  /// @brief Method GetIndexDataPtr, addr 0x6ab4438, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetIndexDataPtr(::System::IntPtr self);

  /// @brief Method GetIndexDataSize, addr 0x6ab4474, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t GetIndexDataSize(::System::IntPtr self);

  /// @brief Method GetVertexBufferCount, addr 0x6ab4374, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVertexBufferCount(::System::IntPtr self);

  /// @brief Method GetVertexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetVertexData(int32_t stream);

  /// @brief Method GetVertexDataPtr, addr 0x6ab43b0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexDataPtr(::System::IntPtr self, int32_t stream);

  /// @brief Method GetVertexDataSize, addr 0x6ab43f4, size 0x44, virtual false, abstract: false, final false
  static inline uint64_t GetVertexDataSize(::System::IntPtr self, int32_t stream);

  /// @brief Method SetIndexBufferParams, addr 0x6ab4774, size 0x54, virtual false, abstract: false, final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndexBufferParamsImpl, addr 0x6ab45e0, size 0x54, virtual false, abstract: false, final false
  static inline void SetIndexBufferParamsImpl(::System::IntPtr self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat indexFormat);

  /// @brief Method SetSubMesh, addr 0x6ab480c, size 0x74, virtual false, abstract: false, final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshCount, addr 0x6ab4634, size 0x44, virtual false, abstract: false, final false
  static inline void SetSubMeshCount(::System::IntPtr self, int32_t count);

  /// @brief Method SetSubMeshImpl, addr 0x6ab4678, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMeshImpl(::System::IntPtr self, int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshImpl_Injected, addr 0x6ab46d4, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMeshImpl_Injected(::System::IntPtr self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferParams, addr 0x6ab476c, size 0x8, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParamsFromArray, addr 0x6ab44b0, size 0xdc, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray(::System::IntPtr self, int32_t vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0x6ab458c, size 0x54, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr self, int32_t vertexCount, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// @brief Method get_vertexBufferCount, addr 0x6ab4730, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method set_subMeshCount, addr 0x6ab47c8, size 0x44, virtual false, abstract: false, final false
  inline void set_subMeshCount(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_MeshData();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr Mesh_MeshData(::System::IntPtr m_Ptr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10214 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Mesh_MeshData, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Mesh_MeshData) == 0x8, "Size mismatch!");

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

  /// @brief Method AcquireMeshDataCopy, addr 0x6ab4a60, size 0xb4, virtual false, abstract: false, final false
  static inline void AcquireMeshDataCopy(::UnityEngine::Mesh* mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireMeshDataCopy_Injected, addr 0x6ab4b14, size 0x44, virtual false, abstract: false, final false
  static inline void AcquireMeshDataCopy_Injected(::System::IntPtr mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireMeshDatasCopy, addr 0x6ab4b58, size 0x94, virtual false, abstract: false, final false
  static inline void AcquireMeshDatasCopy(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireMeshDatasCopy_Injected, addr 0x6ab4bec, size 0x54, virtual false, abstract: false, final false
  static inline void AcquireMeshDatasCopy_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6ab4880, size 0xb4, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireReadOnlyMeshData_Injected, addr 0x6ab4934, size 0x44, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshData_Injected(::System::IntPtr mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireReadOnlyMeshDatas, addr 0x6ab4978, size 0x94, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshDatas(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireReadOnlyMeshDatas_Injected, addr 0x6ab4a0c, size 0x54, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshDatas_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method ApplyToMeshAndDispose, addr 0x6ab0d2c, size 0xc8, virtual false, abstract: false, final false
  inline void ApplyToMeshAndDispose(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshImpl, addr 0x6ab4dc8, size 0xbc, virtual false, abstract: false, final false
  static inline void ApplyToMeshImpl(::UnityEngine::Mesh* mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshImpl_Injected, addr 0x6ab4e84, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyToMeshImpl_Injected(::System::IntPtr mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesAndDispose, addr 0x6ab0f34, size 0x1d8, virtual false, abstract: false, final false
  inline void ApplyToMeshesAndDispose(::ArrayW<::UnityEngine::Mesh*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesImpl, addr 0x6ab4cc8, size 0xa4, virtual false, abstract: false, final false
  static inline void ApplyToMeshesImpl(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesImpl_Injected, addr 0x6ab4d6c, size 0x5c, virtual false, abstract: false, final false
  static inline void ApplyToMeshesImpl_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method CreateNewMeshDatas, addr 0x6ab4c84, size 0x44, virtual false, abstract: false, final false
  static inline void CreateNewMeshDatas(::System::IntPtr* datas, int32_t count);

  /// @brief Method Dispose, addr 0x6ab4eec, size 0xc0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ReleaseMeshDatas, addr 0x6ab4c40, size 0x44, virtual false, abstract: false, final false
  static inline void ReleaseMeshDatas(::System::IntPtr* datas, int32_t count);

  /// @brief Method .ctor, addr 0x6ab01f0, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, bool checkReadWrite, bool createAsCopy);

  /// @brief Method .ctor, addr 0x6ab04c0, size 0x2cc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Mesh*> meshes, int32_t meshesCount, bool checkReadWrite, bool createAsCopy);

  /// @brief Method .ctor, addr 0x6ab08a4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(int32_t meshesCount);

  /// @brief Method get_Item, addr 0x6ab4ee0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh_MeshData get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x6ab4ed8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_MeshDataArray();

  // Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::System::IntPtr*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Mesh_MeshDataArray(::System::IntPtr* m_Ptrs, int32_t m_Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10215 };

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

static_assert(sizeof(::UnityEngine::Mesh_MeshDataArray) == 0x10, "Size mismatch!");

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

  __declspec(property(get = get_bindposes, put = set_bindposes)) ::ArrayW<::UnityEngine::Matrix4x4> bindposes;

  __declspec(property(get = get_blendShapeCount)) int32_t blendShapeCount;

  __declspec(property(get = get_boneWeights, put = set_boneWeights)) ::ArrayW<::UnityEngine::BoneWeight> boneWeights;

  __declspec(property(get = get_bounds, put = set_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_canAccess)) bool canAccess;

  __declspec(property(get = get_colors, put = set_colors)) ::ArrayW<::UnityEngine::Color> colors;

  __declspec(property(get = get_colors32, put = set_colors32)) ::ArrayW<::UnityEngine::Color32> colors32;

  __declspec(property(get = get_indexBufferTarget, put = set_indexBufferTarget)) ::UnityEngine::GraphicsBuffer_Target indexBufferTarget;

  __declspec(property(get = get_indexFormat, put = set_indexFormat)) ::UnityEngine::Rendering::IndexFormat indexFormat;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_normals, put = set_normals)) ::ArrayW<::UnityEngine::Vector3> normals;

  __declspec(property(get = get_skinWeightBufferLayout)) ::UnityEngine::SkinWeights skinWeightBufferLayout;

  __declspec(property(get = get_subMeshCount, put = set_subMeshCount)) int32_t subMeshCount;

  __declspec(property(get = get_tangents, put = set_tangents)) ::ArrayW<::UnityEngine::Vector4> tangents;

  __declspec(property(get = get_triangles, put = set_triangles)) ::ArrayW<int32_t> triangles;

  __declspec(property(get = get_uv, put = set_uv)) ::ArrayW<::UnityEngine::Vector2> uv;

  __declspec(property(get = get_uv2, put = set_uv2)) ::ArrayW<::UnityEngine::Vector2> uv2;

  __declspec(property(get = get_uv3, put = set_uv3)) ::ArrayW<::UnityEngine::Vector2> uv3;

  __declspec(property(get = get_uv4, put = set_uv4)) ::ArrayW<::UnityEngine::Vector2> uv4;

  __declspec(property(get = get_uv5, put = set_uv5)) ::ArrayW<::UnityEngine::Vector2> uv5;

  __declspec(property(get = get_uv6, put = set_uv6)) ::ArrayW<::UnityEngine::Vector2> uv6;

  __declspec(property(get = get_uv7, put = set_uv7)) ::ArrayW<::UnityEngine::Vector2> uv7;

  __declspec(property(get = get_uv8, put = set_uv8)) ::ArrayW<::UnityEngine::Vector2> uv8;

  __declspec(property(get = get_vertexAttributeCount)) int32_t vertexAttributeCount;

  __declspec(property(get = get_vertexBufferCount)) int32_t vertexBufferCount;

  __declspec(property(get = get_vertexBufferTarget, put = set_vertexBufferTarget)) ::UnityEngine::GraphicsBuffer_Target vertexBufferTarget;

  __declspec(property(get = get_vertexCount)) int32_t vertexCount;

  __declspec(property(get = get_vertices, put = set_vertices)) ::ArrayW<::UnityEngine::Vector3> vertices;

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6ab01c0, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6ab0424, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::ArrayW<::UnityEngine::Mesh*> meshes);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6ab078c, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes);

  /// @brief Method AddBlendShapeFrame, addr 0x6aaacdc, size 0x264, virtual false, abstract: false, final false
  inline void AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::ArrayW<::UnityEngine::Vector3> deltaVertices, ::ArrayW<::UnityEngine::Vector3> deltaNormals,
                                 ::ArrayW<::UnityEngine::Vector3> deltaTangents);

  /// @brief Method AddBlendShapeFrame_Injected, addr 0x6aaaf40, size 0x7c, virtual false, abstract: false, final false
  static inline void AddBlendShapeFrame_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> shapeName, float_t frameWeight,
                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaNormals,
                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaTangents);

  /// @brief Method AllocateWritableMeshData, addr 0x6ab09f4, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::UnityEngine::Mesh* mesh);

  /// @brief Method AllocateWritableMeshData, addr 0x6ab087c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(int32_t meshCount);

  /// @brief Method AllocateWritableMeshData, addr 0x6ab0a24, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::ArrayW<::UnityEngine::Mesh*> meshes);

  /// @brief Method AllocateWritableMeshData, addr 0x6ab0ac0, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x6ab0bb0, size 0x17c, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x6ab0df4, size 0x140, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::ArrayW<::UnityEngine::Mesh*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x6ab110c, size 0x1ac, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method CheckCanAccessSubmesh, addr 0x6ab1a84, size 0x148, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles);

  /// @brief Method CheckCanAccessSubmeshIndices, addr 0x6ab1bd4, size 0x8, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmeshIndices(int32_t submesh);

  /// @brief Method CheckCanAccessSubmeshTriangles, addr 0x6ab1bcc, size 0x8, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmeshTriangles(int32_t submesh);

  /// @brief Method CheckIndicesArrayRange, addr 0x6ab25a4, size 0x18c, virtual false, abstract: false, final false
  inline void CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length);

  /// @brief Method Clear, addr 0x6ab3aa0, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x6ab3a9c, size 0x4, virtual false, abstract: false, final false
  inline void Clear(bool keepVertexLayout);

  /// @brief Method ClearBlendShapes, addr 0x6aaa514, size 0x80, virtual false, abstract: false, final false
  inline void ClearBlendShapes();

  /// @brief Method ClearBlendShapes_Injected, addr 0x6aaa594, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearBlendShapes_Injected(::System::IntPtr _unity_self);

  /// @brief Method ClearImpl, addr 0x6aacde8, size 0x90, virtual false, abstract: false, final false
  inline void ClearImpl(bool keepVertexLayout);

  /// @brief Method ClearImpl_Injected, addr 0x6aace78, size 0x44, virtual false, abstract: false, final false
  static inline void ClearImpl_Injected(::System::IntPtr _unity_self, bool keepVertexLayout);

  /// @brief Method CombineMeshes, addr 0x6ab4364, size 0x10, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine);

  /// @brief Method CombineMeshes, addr 0x6ab4358, size 0xc, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes);

  /// @brief Method CombineMeshes, addr 0x6ab4350, size 0x8, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices);

  /// @brief Method CombineMeshes, addr 0x6ab434c, size 0x4, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);

  /// @brief Method CombineMeshesImpl, addr 0x6aad6fc, size 0x124, virtual false, abstract: false, final false
  inline void CombineMeshesImpl(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);

  /// @brief Method CombineMeshesImpl_Injected, addr 0x6aad820, size 0x6c, virtual false, abstract: false, final false
  static inline void CombineMeshesImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> combine, bool mergeSubMeshes, bool useMatrices,
                                                bool hasLightmapData);

  /// @brief Method DefaultDimensionForChannel, addr 0x6aadb34, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method FromInstanceID, addr 0x6aa6cbc, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> FromInstanceID(int32_t id);

  /// @brief Method FromInstanceID_Injected, addr 0x6aa6ddc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromInstanceID_Injected(int32_t id);

  /// @brief Method GetAllBoneWeights, addr 0x6aab60c, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> GetAllBoneWeights();

  /// @brief Method GetAllBoneWeightsArray, addr 0x6aab670, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetAllBoneWeightsArray();

  /// @brief Method GetAllBoneWeightsArraySize, addr 0x6aab6f0, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetAllBoneWeightsArraySize();

  /// @brief Method GetAllBoneWeightsArraySize_Injected, addr 0x6aab8e0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetAllBoneWeightsArraySize_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetAllBoneWeightsArray_Injected, addr 0x6aab9d8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetAllBoneWeightsArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetAllocArrayFromChannelImpl, addr 0x6aa9864, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetAllocArrayFromChannelImpl_Injected, addr 0x6aa990c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Array* GetAllocArrayFromChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel,
                                                                       ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetArrayFromChannelImpl, addr 0x6aa9968, size 0xb0, virtual false, abstract: false, final false
  inline void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values);

  /// @brief Method GetArrayFromChannelImpl_Injected, addr 0x6aa9a18, size 0x6c, virtual false, abstract: false, final false
  static inline void GetArrayFromChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                      int32_t dim, ::System::Array* values);

  /// @brief Method GetBaseVertex, addr 0x6ab2528, size 0x7c, virtual false, abstract: false, final false
  inline uint32_t GetBaseVertex(int32_t submesh);

  /// @brief Method GetBaseVertexImpl, addr 0x6aa81b8, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetBaseVertexImpl(int32_t submesh);

  /// @brief Method GetBaseVertexImpl_Injected, addr 0x6aa8248, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetBaseVertexImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetBindposes, addr 0x6aabdf8, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> GetBindposes();

  /// @brief Method GetBindposes, addr 0x6ab3894, size 0xf8, virtual false, abstract: false, final false
  inline void GetBindposes(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* bindposes);

  /// @brief Method GetBindposesArray, addr 0x6aabe5c, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetBindposesArray();

  /// @brief Method GetBindposesArray_Injected, addr 0x6aac09c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBindposesArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetBindposesNonAllocImpl, addr 0x6aac278, size 0x15c, virtual false, abstract: false, final false
  inline void GetBindposesNonAllocImpl(::by_ref<::ArrayW<::UnityEngine::Matrix4x4>> values);

  /// @brief Method GetBindposesNonAllocImpl_Injected, addr 0x6aac3d4, size 0x44, virtual false, abstract: false, final false
  static inline void GetBindposesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values);

  /// @brief Method GetBlendShapeBuffer, addr 0x6ab17c8, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer();

  /// @brief Method GetBlendShapeBuffer, addr 0x6ab1694, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer(::UnityEngine::Rendering::BlendShapeBufferLayout layout);

  /// @brief Method GetBlendShapeBufferImpl, addr 0x6aaa04c, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBufferImpl(int32_t layout);

  /// @brief Method GetBlendShapeBufferImpl_Injected, addr 0x6aaa0f4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBlendShapeBufferImpl_Injected(::System::IntPtr _unity_self, int32_t layout);

  /// @brief Method GetBlendShapeBufferRange, addr 0x6ab18ec, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::BlendShapeBufferRange GetBlendShapeBufferRange(int32_t blendShapeIndex);

  /// @brief Method GetBlendShapeFrameCount, addr 0x6aaa91c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetBlendShapeFrameCount(int32_t shapeIndex);

  /// @brief Method GetBlendShapeFrameCount_Injected, addr 0x6aaa9ac, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetBlendShapeFrameCount_Injected(::System::IntPtr _unity_self, int32_t shapeIndex);

  /// @brief Method GetBlendShapeFrameVertices, addr 0x6aaaadc, size 0x18c, virtual false, abstract: false, final false
  inline void GetBlendShapeFrameVertices(int32_t shapeIndex, int32_t frameIndex, ::ArrayW<::UnityEngine::Vector3> deltaVertices, ::ArrayW<::UnityEngine::Vector3> deltaNormals,
                                         ::ArrayW<::UnityEngine::Vector3> deltaTangents);

  /// @brief Method GetBlendShapeFrameVertices_Injected, addr 0x6aaac68, size 0x74, virtual false, abstract: false, final false
  static inline void GetBlendShapeFrameVertices_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, int32_t frameIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaVertices,
                                                         ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaNormals, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaTangents);

  /// @brief Method GetBlendShapeFrameWeight, addr 0x6aaa9f0, size 0x98, virtual false, abstract: false, final false
  inline float_t GetBlendShapeFrameWeight(int32_t shapeIndex, int32_t frameIndex);

  /// @brief Method GetBlendShapeFrameWeight_Injected, addr 0x6aaaa88, size 0x54, virtual false, abstract: false, final false
  static inline float_t GetBlendShapeFrameWeight_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, int32_t frameIndex);

  /// @brief Method GetBlendShapeIndex, addr 0x6aaa764, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetBlendShapeIndex(::StringW blendShapeName);

  /// @brief Method GetBlendShapeIndex_Injected, addr 0x6aaa8d8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetBlendShapeIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> blendShapeName);

  /// @brief Method GetBlendShapeName, addr 0x6aaa5d0, size 0x140, virtual false, abstract: false, final false
  inline ::StringW GetBlendShapeName(int32_t shapeIndex);

  /// @brief Method GetBlendShapeName_Injected, addr 0x6aaa710, size 0x54, virtual false, abstract: false, final false
  static inline void GetBlendShapeName_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetBlendShapeOffsetInternal, addr 0x6aaafbc, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::BlendShape GetBlendShapeOffsetInternal(int32_t index);

  /// @brief Method GetBlendShapeOffsetInternal_Injected, addr 0x6aab06c, size 0x54, virtual false, abstract: false, final false
  static inline void GetBlendShapeOffsetInternal_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::BlendShape> ret);

  /// @brief Method GetBoneWeightBuffer, addr 0x6ab1408, size 0x28c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBuffer(::UnityEngine::SkinWeights layout);

  /// @brief Method GetBoneWeightBufferImpl, addr 0x6aa9f60, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBufferImpl(int32_t bonesPerVertex);

  /// @brief Method GetBoneWeightBufferImpl_Injected, addr 0x6aaa008, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBoneWeightBufferImpl_Injected(::System::IntPtr _unity_self, int32_t bonesPerVertex);

  /// @brief Method GetBoneWeightBufferLayoutInternal, addr 0x6aab91c, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetBoneWeightBufferLayoutInternal();

  /// @brief Method GetBoneWeightBufferLayoutInternal_Injected, addr 0x6aab99c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetBoneWeightBufferLayoutInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetBoneWeights, addr 0x6ab398c, size 0x104, virtual false, abstract: false, final false
  inline void GetBoneWeights(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>* boneWeights);

  /// @brief Method GetBoneWeightsImpl, addr 0x6aab17c, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::BoneWeight> GetBoneWeightsImpl();

  /// @brief Method GetBoneWeightsImpl_Injected, addr 0x6aab2dc, size 0x44, virtual false, abstract: false, final false
  static inline void GetBoneWeightsImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetBoneWeightsNonAllocImpl, addr 0x6aac0d8, size 0x15c, virtual false, abstract: false, final false
  inline void GetBoneWeightsNonAllocImpl(::by_ref<::ArrayW<::UnityEngine::BoneWeight>> values);

  /// @brief Method GetBoneWeightsNonAllocImpl_Injected, addr 0x6aac234, size 0x44, virtual false, abstract: false, final false
  static inline void GetBoneWeightsNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values);

  /// @brief Method GetBonesPerVertex, addr 0x6aab770, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetBonesPerVertex();

  /// @brief Method GetBonesPerVertexArray, addr 0x6aab860, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetBonesPerVertexArray();

  /// @brief Method GetBonesPerVertexArray_Injected, addr 0x6aaba14, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBonesPerVertexArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetColors, addr 0x6aaf638, size 0xd4, virtual false, abstract: false, final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors);

  /// @brief Method GetColors, addr 0x6aaf2f8, size 0xd0, virtual false, abstract: false, final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* colors);

  /// @brief Method GetIndexBuffer, addr 0x6ab1368, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBuffer();

  /// @brief Method GetIndexBufferImpl, addr 0x6aa9e90, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBufferImpl();

  /// @brief Method GetIndexBufferImpl_Injected, addr 0x6aa9f24, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetIndexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetIndexCount, addr 0x6ab22d4, size 0x7c, virtual false, abstract: false, final false
  inline uint32_t GetIndexCount(int32_t submesh);

  /// @brief Method GetIndexCountImpl, addr 0x6aa8010, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetIndexCountImpl(int32_t submesh);

  /// @brief Method GetIndexCountImpl_Injected, addr 0x6aa80a0, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetIndexCountImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetIndexStart, addr 0x6ab24ac, size 0x7c, virtual false, abstract: false, final false
  inline uint32_t GetIndexStart(int32_t submesh);

  /// @brief Method GetIndexStartImpl, addr 0x6aa7f3c, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetIndexStartImpl(int32_t submesh);

  /// @brief Method GetIndexStartImpl_Injected, addr 0x6aa7fcc, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetIndexStartImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetIndices, addr 0x6ab20dc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndices(int32_t submesh);

  /// @brief Method GetIndices, addr 0x6ab20e4, size 0x8c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndices(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x6ab2170, size 0x8, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh);

  /// @brief Method GetIndices, addr 0x6ab2178, size 0x15c, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x6ab2350, size 0x15c, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesImpl, addr 0x6aa845c, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndicesImpl(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesImpl_Injected, addr 0x6aa85d0, size 0x5c, virtual false, abstract: false, final false
  static inline void GetIndicesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, bool applyBaseVertex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetIndicesNonAllocImpl, addr 0x6aa8ccc, size 0x178, virtual false, abstract: false, final false
  inline void GetIndicesNonAllocImpl(::by_ref<::ArrayW<int32_t>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesNonAllocImpl16, addr 0x6aa8ea0, size 0x178, virtual false, abstract: false, final false
  inline void GetIndicesNonAllocImpl16(::by_ref<::ArrayW<uint16_t>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesNonAllocImpl16_Injected, addr 0x6aa9018, size 0x5c, virtual false, abstract: false, final false
  static inline void GetIndicesNonAllocImpl16_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesNonAllocImpl_Injected, addr 0x6aa8e44, size 0x5c, virtual false, abstract: false, final false
  static inline void GetIndicesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim);

  /// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim,
                                ::UnityEngine::Rendering::VertexAttributeFormat channelType);

  /// @brief Method GetNativeIndexBufferPtr, addr 0x6aa9ce8, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeIndexBufferPtr();

  /// @brief Method GetNativeIndexBufferPtr_Injected, addr 0x6aa9d68, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetNativeIndexBufferPtr_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetNativeVertexBufferPtr, addr 0x6aa9c14, size 0x90, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeVertexBufferPtr(int32_t index);

  /// @brief Method GetNativeVertexBufferPtr_Injected, addr 0x6aa9ca4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetNativeVertexBufferPtr_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetNormals, addr 0x6aaec78, size 0xd0, virtual false, abstract: false, final false
  inline void GetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals);

  /// @brief Method GetSubMesh, addr 0x6aac860, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t index);

  /// @brief Method GetSubMesh_Injected, addr 0x6aac920, size 0x54, virtual false, abstract: false, final false
  static inline void GetSubMesh_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor> ret);

  /// @brief Method GetTangents, addr 0x6aaefb8, size 0xd0, virtual false, abstract: false, final false
  inline void GetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method GetTopology, addr 0x6ab4294, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology GetTopology(int32_t submesh);

  /// @brief Method GetTopologyImpl, addr 0x6aad384, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology GetTopologyImpl(int32_t submesh);

  /// @brief Method GetTopologyImpl_Injected, addr 0x6aad414, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::MeshTopology GetTopologyImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetTotalIndexCount, addr 0x6aa6fa8, size 0x80, virtual false, abstract: false, final false
  inline uint32_t GetTotalIndexCount();

  /// @brief Method GetTotalIndexCount_Injected, addr 0x6aa7028, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetTotalIndexCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetTriangles, addr 0x6ab1d88, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTriangles(int32_t submesh);

  /// @brief Method GetTriangles, addr 0x6ab1d90, size 0x8c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTriangles(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6ab1e1c, size 0x8, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// @brief Method GetTriangles, addr 0x6ab1e24, size 0x15c, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6ab1f80, size 0x15c, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesCountImpl, addr 0x6aa80e4, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetTrianglesCountImpl(int32_t submesh);

  /// @brief Method GetTrianglesCountImpl_Injected, addr 0x6aa8174, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetTrianglesCountImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetTrianglesImpl, addr 0x6aa828c, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTrianglesImpl(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesImpl_Injected, addr 0x6aa8400, size 0x5c, virtual false, abstract: false, final false
  static inline void GetTrianglesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, bool applyBaseVertex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetTrianglesNonAllocImpl, addr 0x6aa8924, size 0x178, virtual false, abstract: false, final false
  inline void GetTrianglesNonAllocImpl(::by_ref<::ArrayW<int32_t>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesNonAllocImpl16, addr 0x6aa8af8, size 0x178, virtual false, abstract: false, final false
  inline void GetTrianglesNonAllocImpl16(::by_ref<::ArrayW<uint16_t>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesNonAllocImpl16_Injected, addr 0x6aa8c70, size 0x5c, virtual false, abstract: false, final false
  static inline void GetTrianglesNonAllocImpl16_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesNonAllocImpl_Injected, addr 0x6aa8a9c, size 0x5c, virtual false, abstract: false, final false
  static inline void GetTrianglesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetUVChannel, addr 0x6aadac0, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t uvIndex);

  /// @brief Method GetUVDistributionMetric, addr 0x6aad628, size 0x90, virtual false, abstract: false, final false
  inline float_t GetUVDistributionMetric(int32_t uvSetIndex);

  /// @brief Method GetUVDistributionMetric_Injected, addr 0x6aad6b8, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetUVDistributionMetric_Injected(::System::IntPtr _unity_self, int32_t uvSetIndex);

  /// @brief Method GetUVs, addr 0x6aaff9c, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// @brief Method GetUVs, addr 0x6ab0004, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// @brief Method GetUVs, addr 0x6ab006c, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method GetUVsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetUVsImpl(int32_t uvIndex, ::System::Collections::Generic::List_1<T>* uvs, int32_t dim);

  /// @brief Method GetVertexAttribute, addr 0x6aa7e40, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeDescriptor GetVertexAttribute(int32_t index);

  /// @brief Method GetVertexAttributeCountImpl, addr 0x6aa7d84, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeCountImpl();

  /// @brief Method GetVertexAttributeCountImpl_Injected, addr 0x6aa7e04, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeCountImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetVertexAttributeDimension, addr 0x6aa921c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeDimension_Injected, addr 0x6aa92ac, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeDimension_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeFormat, addr 0x6aa92f0, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeFormat_Injected, addr 0x6aa9380, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeOffset, addr 0x6aa9498, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeOffset_Injected, addr 0x6aa9528, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeOffset_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeStream, addr 0x6aa93c4, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeStream_Injected, addr 0x6aa9454, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeStream_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttribute_Injected, addr 0x6aa7ee8, size 0x54, virtual false, abstract: false, final false
  static inline void GetVertexAttribute_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::VertexAttributeDescriptor> ret);

  /// @brief Method GetVertexAttributes, addr 0x6ab00d8, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> GetVertexAttributes();

  /// @brief Method GetVertexAttributes, addr 0x6ab0148, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributes(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method GetVertexAttributes, addr 0x6ab014c, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// @brief Method GetVertexAttributesAlloc, addr 0x6aa7914, size 0x80, virtual false, abstract: false, final false
  inline ::System::Array* GetVertexAttributesAlloc();

  /// @brief Method GetVertexAttributesAlloc_Injected, addr 0x6aa7994, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Array* GetVertexAttributesAlloc_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetVertexAttributesArray, addr 0x6aa79d0, size 0x120, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributesArray(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method GetVertexAttributesArray_Injected, addr 0x6aa7af0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributesArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// @brief Method GetVertexAttributesList, addr 0x6aa7b34, size 0x20c, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributesList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// @brief Method GetVertexAttributesList_Injected, addr 0x6aa7d40, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributesList_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> attributes);

  /// @brief Method GetVertexBuffer, addr 0x6ab12b8, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer(int32_t index);

  /// @brief Method GetVertexBufferImpl, addr 0x6aa9da4, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl(int32_t index);

  /// @brief Method GetVertexBufferImpl_Injected, addr 0x6aa9e4c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexBufferImpl_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetVertexBufferStride, addr 0x6aa9b40, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexBufferStride(int32_t stream);

  /// @brief Method GetVertexBufferStride_Injected, addr 0x6aa9bd0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexBufferStride_Injected(::System::IntPtr _unity_self, int32_t stream);

  /// @brief Method GetVertices, addr 0x6aae938, size 0xd0, virtual false, abstract: false, final false
  inline void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices);

  /// @brief Method HasBoneWeights, addr 0x6aab0c0, size 0x80, virtual false, abstract: false, final false
  inline bool HasBoneWeights();

  /// @brief Method HasBoneWeights_Injected, addr 0x6aab140, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasBoneWeights_Injected(::System::IntPtr _unity_self);

  /// @brief Method HasVertexAttribute, addr 0x6aa9148, size 0x90, virtual false, abstract: false, final false
  inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method HasVertexAttribute_Injected, addr 0x6aa91d8, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVertexAttribute_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method InternalSetBoneWeights, addr 0x6aab4f0, size 0xb0, virtual false, abstract: false, final false
  inline void InternalSetBoneWeights(::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights, int32_t weightsSize);

  /// @brief Method InternalSetBoneWeights_Injected, addr 0x6aab5a0, size 0x6c, virtual false, abstract: false, final false
  static inline void InternalSetBoneWeights_Injected(::System::IntPtr _unity_self, ::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights, int32_t weightsSize);

  /// @brief Method InternalSetIndexBufferData, addr 0x6aa7150, size 0xc8, virtual false, abstract: false, final false
  inline void InternalSetIndexBufferData(::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferDataFromArray, addr 0x6aa729c, size 0xc8, virtual false, abstract: false, final false
  inline void InternalSetIndexBufferDataFromArray(::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferDataFromArray_Injected, addr 0x6aa7364, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetIndexBufferDataFromArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferData_Injected, addr 0x6aa7218, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetIndexBufferData_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                         ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferData, addr 0x6aa764c, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetVertexBufferData(int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                          ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferDataFromArray, addr 0x6aa77b0, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetVertexBufferDataFromArray(int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferDataFromArray_Injected, addr 0x6aa7888, size 0x8c, virtual false, abstract: false, final false
  static inline void InternalSetVertexBufferDataFromArray_Injected(::System::IntPtr _unity_self, int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                                   int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferData_Injected, addr 0x6aa7724, size 0x8c, virtual false, abstract: false, final false
  static inline void InternalSetVertexBufferData_Injected(::System::IntPtr _unity_self, int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                          int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method Internal_Create, addr 0x6aa6c08, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Mesh* mono);

  /// @brief Method MarkDynamic, addr 0x6ab3f98, size 0x24, virtual false, abstract: false, final false
  inline void MarkDynamic();

  /// @brief Method MarkDynamicImpl, addr 0x6aad138, size 0x80, virtual false, abstract: false, final false
  inline void MarkDynamicImpl();

  /// @brief Method MarkDynamicImpl_Injected, addr 0x6aad1b8, size 0x3c, virtual false, abstract: false, final false
  static inline void MarkDynamicImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method MarkModified, addr 0x6aad1f4, size 0x80, virtual false, abstract: false, final false
  inline void MarkModified();

  /// @brief Method MarkModified_Injected, addr 0x6aad274, size 0x3c, virtual false, abstract: false, final false
  static inline void MarkModified_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::Mesh* New_ctor();

  /// @brief Method Optimize, addr 0x6ab3ff4, size 0xe0, virtual false, abstract: false, final false
  inline void Optimize();

  /// @brief Method OptimizeImpl, addr 0x6aad88c, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeImpl();

  /// @brief Method OptimizeImpl_Injected, addr 0x6aad90c, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method OptimizeIndexBuffers, addr 0x6ab40d4, size 0xe0, virtual false, abstract: false, final false
  inline void OptimizeIndexBuffers();

  /// @brief Method OptimizeIndexBuffersImpl, addr 0x6aad948, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeIndexBuffersImpl();

  /// @brief Method OptimizeIndexBuffersImpl_Injected, addr 0x6aad9c8, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeIndexBuffersImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method OptimizeReorderVertexBuffer, addr 0x6ab41b4, size 0xe0, virtual false, abstract: false, final false
  inline void OptimizeReorderVertexBuffer();

  /// @brief Method OptimizeReorderVertexBufferImpl, addr 0x6aada04, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeReorderVertexBufferImpl();

  /// @brief Method OptimizeReorderVertexBufferImpl_Injected, addr 0x6aada84, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeReorderVertexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method PrintErrorCantAccessChannel, addr 0x6aa9074, size 0x90, virtual false, abstract: false, final false
  inline void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute ch);

  /// @brief Method PrintErrorCantAccessChannel_Injected, addr 0x6aa9104, size 0x44, virtual false, abstract: false, final false
  static inline void PrintErrorCantAccessChannel_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute ch);

  /// @brief Method PrintErrorCantAccessIndices, addr 0x6ab19c4, size 0xc0, virtual false, abstract: false, final false
  inline void PrintErrorCantAccessIndices();

  /// @brief Method RecalculateBounds, addr 0x6ab3aa8, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateBounds();

  /// @brief Method RecalculateBounds, addr 0x6ab3ab0, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateBounds(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateBoundsImpl, addr 0x6aacebc, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateBoundsImpl_Injected, addr 0x6aacf4c, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateBoundsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormals, addr 0x6ab3ba4, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateNormals();

  /// @brief Method RecalculateNormals, addr 0x6ab3bac, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateNormals(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormalsImpl, addr 0x6aacf90, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormalsImpl_Injected, addr 0x6aad020, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateNormalsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangents, addr 0x6ab3ca0, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateTangents();

  /// @brief Method RecalculateTangents, addr 0x6ab3ca8, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateTangents(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangentsImpl, addr 0x6aad064, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangentsImpl_Injected, addr 0x6aad0f4, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateTangentsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateUVDistributionMetric, addr 0x6ab3d9c, size 0x108, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetric(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricImpl, addr 0x6aad458, size 0xa0, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetricImpl(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricImpl_Injected, addr 0x6aad4f8, size 0x54, virtual false, abstract: false, final false
  static inline void RecalculateUVDistributionMetricImpl_Injected(::System::IntPtr _unity_self, int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetrics, addr 0x6ab3ea4, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetrics(float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricsImpl, addr 0x6aad54c, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetricsImpl(float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricsImpl_Injected, addr 0x6aad5dc, size 0x4c, virtual false, abstract: false, final false
  static inline void RecalculateUVDistributionMetricsImpl_Injected(::System::IntPtr _unity_self, float_t uvAreaThreshold);

  /// @brief Method SetAllSubMeshesAtOnceFromArray, addr 0x6aac974, size 0x124, virtual false, abstract: false, final false
  inline void SetAllSubMeshesAtOnceFromArray(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromArray_Injected, addr 0x6aaca98, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAllSubMeshesAtOnceFromArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> desc, int32_t start, int32_t count,
                                                             ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromNativeArray, addr 0x6aacb04, size 0xb0, virtual false, abstract: false, final false
  inline void SetAllSubMeshesAtOnceFromNativeArray(::System::IntPtr desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromNativeArray_Injected, addr 0x6aacbb4, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAllSubMeshesAtOnceFromNativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::ArrayW<T> values,
                                 ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::ArrayW<T> values, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannelImpl, addr 0x6aa956c, size 0xe0, virtual false, abstract: false, final false
  inline void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values, int32_t arraySize,
                                     int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannelImpl_Injected, addr 0x6aa964c, size 0x9c, virtual false, abstract: false, final false
  static inline void SetArrayForChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                     int32_t dim, ::System::Array* values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetBindposes, addr 0x6aabedc, size 0xd4, virtual false, abstract: false, final false
  inline void SetBindposes(::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> poses);

  /// @brief Method SetBindposesFromScript_NativeArray, addr 0x6aabfb0, size 0x98, virtual false, abstract: false, final false
  inline void SetBindposesFromScript_NativeArray(::System::IntPtr posesPtr, int32_t posesCount);

  /// @brief Method SetBindposesFromScript_NativeArray_Injected, addr 0x6aac048, size 0x54, virtual false, abstract: false, final false
  static inline void SetBindposesFromScript_NativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr posesPtr, int32_t posesCount);

  /// @brief Method SetBoneWeights, addr 0x6aab468, size 0x88, virtual false, abstract: false, final false
  inline void SetBoneWeights(::Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> weights);

  /// @brief Method SetBoneWeightsImpl, addr 0x6aab320, size 0x104, virtual false, abstract: false, final false
  inline void SetBoneWeightsImpl(::ArrayW<::UnityEngine::BoneWeight> weights);

  /// @brief Method SetBoneWeightsImpl_Injected, addr 0x6aab424, size 0x44, virtual false, abstract: false, final false
  static inline void SetBoneWeightsImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> weights);

  /// @brief Method SetColors, addr 0x6aaf830, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32> inColors);

  /// @brief Method SetColors, addr 0x6aaf8a8, size 0x74, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6aaf91c, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x6aaf4d4, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color> inColors);

  /// @brief Method SetColors, addr 0x6aaf54c, size 0x74, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6aaf5c0, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x6aaf70c, size 0x84, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors);

  /// @brief Method SetColors, addr 0x6aaf790, size 0x8, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6aaf798, size 0x98, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x6aaf3c8, size 0x84, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors);

  /// @brief Method SetColors, addr 0x6aaf44c, size 0x8, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6aaf454, size 0x80, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors);

  /// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetIndexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetIndexBufferData(::System::Collections::Generic::List_1<T>* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetIndexBufferData(::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferParams, addr 0x6aa7064, size 0x98, virtual false, abstract: false, final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndexBufferParams_Injected, addr 0x6aa70fc, size 0x54, virtual false, abstract: false, final false
  static inline void SetIndexBufferParams_Injected(::System::IntPtr _unity_self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndices, addr 0x6ab2efc, size 0xb4, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6ab2d98, size 0x70, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh);

  /// @brief Method SetIndices, addr 0x6ab2e88, size 0x74, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds);

  /// @brief Method SetIndices, addr 0x6ab2e08, size 0x80, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6ab3030, size 0xb4, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6ab2fb0, size 0x80, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6ab31a0, size 0x130, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6ab30e4, size 0xbc, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6ab338c, size 0x130, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6ab32d0, size 0xbc, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesImpl, addr 0x6aa862c, size 0xe0, virtual false, abstract: false, final false
  inline void SetIndicesImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* indices, int32_t arrayStart,
                             int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesImpl_Injected, addr 0x6aa870c, size 0x9c, virtual false, abstract: false, final false
  static inline void SetIndicesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat,
                                             ::System::Array* indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesNativeArrayImpl, addr 0x6aa87a8, size 0xe0, virtual false, abstract: false, final false
  inline void SetIndicesNativeArrayImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::IntPtr indices, int32_t arrayStart,
                                        int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesNativeArrayImpl_Injected, addr 0x6aa8888, size 0x9c, virtual false, abstract: false, final false
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

  /// @brief Method SetNativeArrayForChannelImpl, addr 0x6aa96e8, size 0xe0, virtual false, abstract: false, final false
  inline void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values,
                                           int32_t arraySize, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNativeArrayForChannelImpl_Injected, addr 0x6aa97c8, size 0x9c, virtual false, abstract: false, final false
  static inline void SetNativeArrayForChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                           int32_t dim, ::System::IntPtr values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount,
                                                           ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x6aaee54, size 0x78, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals);

  /// @brief Method SetNormals, addr 0x6aaeecc, size 0x74, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x6aaef40, size 0x78, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x6aaed48, size 0x84, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals);

  /// @brief Method SetNormals, addr 0x6aaedcc, size 0x8, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x6aaedd4, size 0x80, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSizedArrayForChannel, addr 0x6aadbd0, size 0x21c, virtual false, abstract: false, final false
  inline void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values,
                                      int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSizedNativeArrayForChannel, addr 0x6aaddec, size 0x218, virtual false, abstract: false, final false
  inline void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values,
                                            int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMesh, addr 0x6aac75c, size 0xa8, virtual false, abstract: false, final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMesh_Injected, addr 0x6aac804, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMesh_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6ab372c, size 0x28, virtual false, abstract: false, final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6ab34bc, size 0x270, virtual false, abstract: false, final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6ab37ec, size 0xa8, virtual false, abstract: false, final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6ab3754, size 0x98, virtual false, abstract: false, final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x6aaf194, size 0x78, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents);

  /// @brief Method SetTangents, addr 0x6aaf20c, size 0x74, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x6aaf280, size 0x78, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x6aaf088, size 0x84, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents);

  /// @brief Method SetTangents, addr 0x6aaf10c, size 0x8, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x6aaf114, size 0x80, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTriangles, addr 0x6ab2730, size 0x54, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh);

  /// @brief Method SetTriangles, addr 0x6ab27e8, size 0x60, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles, addr 0x6ab2784, size 0x64, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6ab2848, size 0xa8, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6ab28f0, size 0x64, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6ab2954, size 0xa8, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6ab29fc, size 0xc, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// @brief Method SetTriangles, addr 0x6ab2aa8, size 0x8, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles, addr 0x6ab2a08, size 0xa0, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6ab2ab0, size 0x124, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6ab2bd4, size 0xa0, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6ab2c74, size 0x124, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTrianglesImpl, addr 0x6ab1d08, size 0x80, virtual false, abstract: false, final false
  inline void SetTrianglesImpl(int32_t submesh, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* triangles, int32_t trianglesArrayLength, int32_t start, int32_t length,
                               bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetUVs, addr 0x6aafe10, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs);

  /// @brief Method SetUVs, addr 0x6aafe64, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6aaff54, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6aafe7c, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs);

  /// @brief Method SetUVs, addr 0x6aafed0, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6aaff6c, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6aafee8, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs);

  /// @brief Method SetUVs, addr 0x6aaff3c, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6aaff84, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6aaf994, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// @brief Method SetUVs, addr 0x6aafa20, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6aafb50, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6aafa28, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// @brief Method SetUVs, addr 0x6aafab4, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6aafbe0, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6aafabc, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method SetUVs, addr 0x6aafb48, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6aafc70, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUvsImpl, addr 0x6aafd00, size 0x110, virtual false, abstract: false, final false
  inline void SetUvsImpl(int32_t uvIndex, int32_t dim, ::System::Array* uvs, int32_t arrayStart, int32_t arraySize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUvsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetUvsImpl(int32_t uvIndex, int32_t dim, ::System::Collections::Generic::List_1<T>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetVertexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetVertexBufferData(::System::Collections::Generic::List_1<T>* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream,
                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetVertexBufferData(::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream,
                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferParams, addr 0x6ab0150, size 0x4, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParams, addr 0x6ab0154, size 0x6c, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParamsFromArray, addr 0x6aa74ec, size 0x10c, virtual false, abstract: false, final false
  inline void SetVertexBufferParamsFromArray(int32_t vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0x6aa75f8, size 0x54, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr _unity_self, int32_t vertexCount, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// @brief Method SetVertexBufferParamsFromPtr, addr 0x6aa73e8, size 0xa8, virtual false, abstract: false, final false
  inline void SetVertexBufferParamsFromPtr(int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount);

  /// @brief Method SetVertexBufferParamsFromPtr_Injected, addr 0x6aa7490, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromPtr_Injected(::System::IntPtr _unity_self, int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount);

  /// @brief Method SetVertices, addr 0x6aaeb14, size 0x78, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices);

  /// @brief Method SetVertices, addr 0x6aaeb8c, size 0x74, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x6aaec00, size 0x78, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices, addr 0x6aaea08, size 0x84, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices);

  /// @brief Method SetVertices, addr 0x6aaea8c, size 0x8, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x6aaea94, size 0x80, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method UploadMeshData, addr 0x6ab3fbc, size 0x38, virtual false, abstract: false, final false
  inline void UploadMeshData(bool markNoLongerReadable);

  /// @brief Method UploadMeshDataImpl, addr 0x6aad2b0, size 0x90, virtual false, abstract: false, final false
  inline void UploadMeshDataImpl(bool markNoLongerReadable);

  /// @brief Method UploadMeshDataImpl_Injected, addr 0x6aad340, size 0x44, virtual false, abstract: false, final false
  static inline void UploadMeshDataImpl_Injected(::System::IntPtr _unity_self, bool markNoLongerReadable);

  /// @brief Method .ctor, addr 0x6aa6c44, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bindposeCount, addr 0x6aaba50, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_bindposeCount();

  /// @brief Method get_bindposeCount_Injected, addr 0x6aabad0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_bindposeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bindposes, addr 0x6aabb0c, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> get_bindposes();

  /// @brief Method get_bindposes_Injected, addr 0x6aabc6c, size 0x44, virtual false, abstract: false, final false
  static inline void get_bindposes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_blendShapeCount, addr 0x6aaa458, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_blendShapeCount();

  /// @brief Method get_blendShapeCount_Injected, addr 0x6aaa4d8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_blendShapeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_boneWeights, addr 0x6ab3a90, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::BoneWeight> get_boneWeights();

  /// @brief Method get_bounds, addr 0x6aacc20, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x6aaccd0, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret);

  /// @brief Method get_canAccess, addr 0x6aac4d4, size 0x80, virtual false, abstract: false, final false
  inline bool get_canAccess();

  /// @brief Method get_canAccess_Injected, addr 0x6aac554, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canAccess_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_colors, addr 0x6aae7c0, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> get_colors();

  /// @brief Method get_colors32, addr 0x6aae874, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32> get_colors32();

  /// @brief Method get_indexBufferTarget, addr 0x6aaa2c8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget();

  /// @brief Method get_indexBufferTarget_Injected, addr 0x6aaa348, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_indexFormat, addr 0x6aa6e18, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndexFormat get_indexFormat();

  /// @brief Method get_indexFormat_Injected, addr 0x6aa6e98, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::IndexFormat get_indexFormat_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isReadable, addr 0x6aac418, size 0x80, virtual false, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x6aac498, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_normals, addr 0x6aae0b8, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3> get_normals();

  /// @brief Method get_skinWeightBufferLayout, addr 0x6ab3a98, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::SkinWeights get_skinWeightBufferLayout();

  /// @brief Method get_subMeshCount, addr 0x6aac5cc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_subMeshCount();

  /// @brief Method get_subMeshCount_Injected, addr 0x6aac64c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subMeshCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_tangents, addr 0x6aae16c, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> get_tangents();

  /// @brief Method get_triangles, addr 0x6ab1bdc, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> get_triangles();

  /// @brief Method get_uv, addr 0x6aae220, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv();

  /// @brief Method get_uv2, addr 0x6aae2d4, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv2();

  /// @brief Method get_uv3, addr 0x6aae388, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv3();

  /// @brief Method get_uv4, addr 0x6aae43c, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv4();

  /// @brief Method get_uv5, addr 0x6aae4f0, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv5();

  /// @brief Method get_uv6, addr 0x6aae5a4, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv6();

  /// @brief Method get_uv7, addr 0x6aae658, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv7();

  /// @brief Method get_uv8, addr 0x6aae70c, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv8();

  /// @brief Method get_vertexAttributeCount, addr 0x6ab00d4, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_vertexAttributeCount();

  /// @brief Method get_vertexBufferCount, addr 0x6aa9a84, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method get_vertexBufferCount_Injected, addr 0x6aa9b04, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_vertexBufferCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertexBufferTarget, addr 0x6aaa138, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget();

  /// @brief Method get_vertexBufferTarget_Injected, addr 0x6aaa1b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertexCount, addr 0x6aab7e0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_vertexCount();

  /// @brief Method get_vertexCount_Injected, addr 0x6aac590, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_vertexCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertices, addr 0x6aae004, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3> get_vertices();

  /// @brief Method set_bindposes, addr 0x6aabcb0, size 0x104, virtual false, abstract: false, final false
  inline void set_bindposes(::ArrayW<::UnityEngine::Matrix4x4> value);

  /// @brief Method set_bindposes_Injected, addr 0x6aabdb4, size 0x44, virtual false, abstract: false, final false
  static inline void set_bindposes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_boneWeights, addr 0x6ab3a94, size 0x4, virtual false, abstract: false, final false
  inline void set_boneWeights(::ArrayW<::UnityEngine::BoneWeight> value);

  /// @brief Method set_bounds, addr 0x6aacd14, size 0x90, virtual false, abstract: false, final false
  inline void set_bounds(::UnityEngine::Bounds value);

  /// @brief Method set_bounds_Injected, addr 0x6aacda4, size 0x44, virtual false, abstract: false, final false
  static inline void set_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> value);

  /// @brief Method set_colors, addr 0x6aae810, size 0x64, virtual false, abstract: false, final false
  inline void set_colors(::ArrayW<::UnityEngine::Color> value);

  /// @brief Method set_colors32, addr 0x6aae8cc, size 0x6c, virtual false, abstract: false, final false
  inline void set_colors32(::ArrayW<::UnityEngine::Color32> value);

  /// @brief Method set_indexBufferTarget, addr 0x6aaa384, size 0x90, virtual false, abstract: false, final false
  inline void set_indexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_indexBufferTarget_Injected, addr 0x6aaa414, size 0x44, virtual false, abstract: false, final false
  static inline void set_indexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_indexFormat, addr 0x6aa6ed4, size 0x90, virtual false, abstract: false, final false
  inline void set_indexFormat(::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method set_indexFormat_Injected, addr 0x6aa6f64, size 0x44, virtual false, abstract: false, final false
  static inline void set_indexFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method set_normals, addr 0x6aae108, size 0x64, virtual false, abstract: false, final false
  inline void set_normals(::ArrayW<::UnityEngine::Vector3> value);

  /// @brief Method set_subMeshCount, addr 0x6aac688, size 0x90, virtual false, abstract: false, final false
  inline void set_subMeshCount(int32_t value);

  /// @brief Method set_subMeshCount_Injected, addr 0x6aac718, size 0x44, virtual false, abstract: false, final false
  static inline void set_subMeshCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_tangents, addr 0x6aae1bc, size 0x64, virtual false, abstract: false, final false
  inline void set_tangents(::ArrayW<::UnityEngine::Vector4> value);

  /// @brief Method set_triangles, addr 0x6ab1c54, size 0xb4, virtual false, abstract: false, final false
  inline void set_triangles(::ArrayW<int32_t> value);

  /// @brief Method set_uv, addr 0x6aae270, size 0x64, virtual false, abstract: false, final false
  inline void set_uv(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv2, addr 0x6aae324, size 0x64, virtual false, abstract: false, final false
  inline void set_uv2(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv3, addr 0x6aae3d8, size 0x64, virtual false, abstract: false, final false
  inline void set_uv3(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv4, addr 0x6aae48c, size 0x64, virtual false, abstract: false, final false
  inline void set_uv4(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv5, addr 0x6aae540, size 0x64, virtual false, abstract: false, final false
  inline void set_uv5(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv6, addr 0x6aae5f4, size 0x64, virtual false, abstract: false, final false
  inline void set_uv6(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv7, addr 0x6aae6a8, size 0x64, virtual false, abstract: false, final false
  inline void set_uv7(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv8, addr 0x6aae75c, size 0x64, virtual false, abstract: false, final false
  inline void set_uv8(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_vertexBufferTarget, addr 0x6aaa1f4, size 0x90, virtual false, abstract: false, final false
  inline void set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertexBufferTarget_Injected, addr 0x6aaa284, size 0x44, virtual false, abstract: false, final false
  static inline void set_vertexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertices, addr 0x6aae054, size 0x64, virtual false, abstract: false, final false
  inline void set_vertices(::ArrayW<::UnityEngine::Vector3> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10216 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Mesh) == 0x18, "Size mismatch!");

} // namespace UnityEngine
