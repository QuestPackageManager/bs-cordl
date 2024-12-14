#pragma once
// IWYU pragma private; include "UnityEngine/Mesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
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
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
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

  /// @brief Method GetIndexDataPtr, addr 0x488de00, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetIndexDataPtr(::System::IntPtr self);

  /// @brief Method GetIndexDataSize, addr 0x488de3c, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t GetIndexDataSize(::System::IntPtr self);

  /// @brief Method GetVertexBufferCount, addr 0x488dd3c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVertexBufferCount(::System::IntPtr self);

  /// @brief Method GetVertexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetVertexData(int32_t stream);

  /// @brief Method GetVertexDataPtr, addr 0x488dd78, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexDataPtr(::System::IntPtr self, int32_t stream);

  /// @brief Method GetVertexDataSize, addr 0x488ddbc, size 0x44, virtual false, abstract: false, final false
  static inline uint64_t GetVertexDataSize(::System::IntPtr self, int32_t stream);

  /// @brief Method SetIndexBufferParams, addr 0x488e0ac, size 0x54, virtual false, abstract: false, final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndexBufferParamsImpl, addr 0x488decc, size 0x54, virtual false, abstract: false, final false
  static inline void SetIndexBufferParamsImpl(::System::IntPtr self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat indexFormat);

  /// @brief Method SetSubMesh, addr 0x488e144, size 0x74, virtual false, abstract: false, final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshCount, addr 0x488df20, size 0x44, virtual false, abstract: false, final false
  static inline void SetSubMeshCount(::System::IntPtr self, int32_t count);

  /// @brief Method SetSubMeshImpl, addr 0x488df64, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMeshImpl(::System::IntPtr self, int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshImpl_Injected, addr 0x488dfc0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMeshImpl_Injected(::System::IntPtr self, int32_t index, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferParams, addr 0x488e058, size 0x54, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method SetVertexBufferParamsFromArray, addr 0x488de78, size 0x54, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray(::System::IntPtr self, int32_t vertexCount,
                                                    ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method get_vertexBufferCount, addr 0x488e01c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method set_subMeshCount, addr 0x488e100, size 0x44, virtual false, abstract: false, final false
  inline void set_subMeshCount(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_MeshData();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr Mesh_MeshData(::System::IntPtr m_Ptr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10778 };

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
// Dependencies System.IDisposable
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

  /// @brief Method AcquireReadOnlyMeshData, addr 0x488e1b8, size 0x44, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh, ::cordl_internals::Ptr<::System::IntPtr> datas);

  /// @brief Method AcquireReadOnlyMeshDatas, addr 0x488e1fc, size 0x54, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshDatas(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::cordl_internals::Ptr<::System::IntPtr> datas, int32_t count);

  /// @brief Method ApplyToMeshAndDispose, addr 0x488a0cc, size 0x11c, virtual false, abstract: false, final false
  inline void ApplyToMeshAndDispose(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshImpl, addr 0x488e334, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyToMeshImpl(::UnityEngine::Mesh* mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesAndDispose, addr 0x488a33c, size 0x238, virtual false, abstract: false, final false
  inline void ApplyToMeshesAndDispose(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesImpl, addr 0x488e2d8, size 0x5c, virtual false, abstract: false, final false
  static inline void ApplyToMeshesImpl(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::cordl_internals::Ptr<::System::IntPtr> datas, int32_t count,
                                       ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method CreateNewMeshDatas, addr 0x488e294, size 0x44, virtual false, abstract: false, final false
  static inline void CreateNewMeshDatas(::cordl_internals::Ptr<::System::IntPtr> datas, int32_t count);

  /// @brief Method Dispose, addr 0x488e39c, size 0x88, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ReleaseMeshDatas, addr 0x488e250, size 0x44, virtual false, abstract: false, final false
  static inline void ReleaseMeshDatas(::cordl_internals::Ptr<::System::IntPtr> datas, int32_t count);

  /// @brief Method .ctor, addr 0x4889784, size 0x21c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, bool checkReadWrite);

  /// @brief Method .ctor, addr 0x4889a38, size 0x2f4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, int32_t meshesCount, bool checkReadWrite);

  /// @brief Method .ctor, addr 0x4889e30, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(int32_t meshesCount);

  /// @brief Method get_Item, addr 0x488e390, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh_MeshData get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x488e388, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_MeshDataArray();

  // Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::cordl_internals::Ptr<::System::IntPtr>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr Mesh_MeshDataArray(::cordl_internals::Ptr<::System::IntPtr> m_Ptrs, int32_t m_Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10779 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Ptrs, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::System::IntPtr> m_Ptrs;

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

  /// @brief Method AcquireReadOnlyMeshData, addr 0x4889758, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x48899a0, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x4889d2c, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes);

  /// @brief Method AddBlendShapeFrame, addr 0x4885eec, size 0x7c, virtual false, abstract: false, final false
  inline void AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaVertices,
                                 ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaNormals, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaTangents);

  /// @brief Method AllocateWritableMeshData, addr 0x4889e08, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(int32_t meshCount);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x4889f50, size 0x17c, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x488a1e8, size 0x154, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x488a574, size 0x1b0, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method CheckCanAccessSubmesh, addr 0x488af20, size 0x144, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles);

  /// @brief Method CheckCanAccessSubmeshIndices, addr 0x488b06c, size 0x8, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmeshIndices(int32_t submesh);

  /// @brief Method CheckCanAccessSubmeshTriangles, addr 0x488b064, size 0x8, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmeshTriangles(int32_t submesh);

  /// @brief Method CheckIndicesArrayRange, addr 0x488bcb0, size 0x19c, virtual false, abstract: false, final false
  inline void CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length);

  /// @brief Method Clear, addr 0x488d1d0, size 0x40, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x488d18c, size 0x44, virtual false, abstract: false, final false
  inline void Clear(bool keepVertexLayout);

  /// @brief Method ClearBlendShapes, addr 0x4885d1c, size 0x3c, virtual false, abstract: false, final false
  inline void ClearBlendShapes();

  /// @brief Method ClearImpl, addr 0x4886bb4, size 0x44, virtual false, abstract: false, final false
  inline void ClearImpl(bool keepVertexLayout);

  /// @brief Method CombineMeshes, addr 0x488dcec, size 0x50, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine);

  /// @brief Method CombineMeshes, addr 0x488dc90, size 0x5c, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes);

  /// @brief Method CombineMeshes, addr 0x488dc30, size 0x60, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes, bool useMatrices);

  /// @brief Method CombineMeshes, addr 0x488dbc4, size 0x6c, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);

  /// @brief Method CombineMeshesImpl, addr 0x4886ea8, size 0x6c, virtual false, abstract: false, final false
  inline void CombineMeshesImpl(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);

  /// @brief Method DefaultDimensionForChannel, addr 0x488703c, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method FromInstanceID, addr 0x4884c14, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> FromInstanceID(int32_t id);

  /// @brief Method GetAllBoneWeights, addr 0x4886230, size 0xb4, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> GetAllBoneWeights();

  /// @brief Method GetAllBoneWeightsArray, addr 0x48862e4, size 0x3c, virtual false, abstract: false, final false
  inline ::System::IntPtr GetAllBoneWeightsArray();

  /// @brief Method GetAllBoneWeightsArraySize, addr 0x4886320, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetAllBoneWeightsArraySize();

  /// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::ArrayW<T, ::Array<T>*> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetAllocArrayFromChannelImpl, addr 0x4885910, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetArrayFromChannelImpl, addr 0x488596c, size 0x6c, virtual false, abstract: false, final false
  inline void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values);

  /// @brief Method GetBaseVertex, addr 0x488bbf0, size 0xc0, virtual false, abstract: false, final false
  inline uint32_t GetBaseVertex(int32_t submesh);

  /// @brief Method GetBaseVertexImpl, addr 0x48852ac, size 0x44, virtual false, abstract: false, final false
  inline uint32_t GetBaseVertexImpl(int32_t submesh);

  /// @brief Method GetBindposes, addr 0x48865b0, size 0xb4, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> GetBindposes();

  /// @brief Method GetBindposes, addr 0x488ce44, size 0x130, virtual false, abstract: false, final false
  inline void GetBindposes(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* bindposes);

  /// @brief Method GetBindposesArray, addr 0x4886664, size 0x3c, virtual false, abstract: false, final false
  inline ::System::IntPtr GetBindposesArray();

  /// @brief Method GetBindposesNonAllocImpl, addr 0x48866e4, size 0x44, virtual false, abstract: false, final false
  inline void GetBindposesNonAllocImpl(::ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> values);

  /// @brief Method GetBlendShapeBuffer, addr 0x488ac74, size 0x120, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer();

  /// @brief Method GetBlendShapeBuffer, addr 0x488ab44, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer(::UnityEngine::Rendering::BlendShapeBufferLayout layout);

  /// @brief Method GetBlendShapeBufferImpl, addr 0x4885b9c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBufferImpl(int32_t layout);

  /// @brief Method GetBlendShapeBufferRange, addr 0x488ad94, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::BlendShapeBufferRange GetBlendShapeBufferRange(int32_t blendShapeIndex);

  /// @brief Method GetBlendShapeFrameCount, addr 0x4885de0, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetBlendShapeFrameCount(int32_t shapeIndex);

  /// @brief Method GetBlendShapeFrameVertices, addr 0x4885e78, size 0x74, virtual false, abstract: false, final false
  inline void GetBlendShapeFrameVertices(int32_t shapeIndex, int32_t frameIndex, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaVertices,
                                         ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaNormals,
                                         ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaTangents);

  /// @brief Method GetBlendShapeFrameWeight, addr 0x4885e24, size 0x54, virtual false, abstract: false, final false
  inline float_t GetBlendShapeFrameWeight(int32_t shapeIndex, int32_t frameIndex);

  /// @brief Method GetBlendShapeIndex, addr 0x4885d9c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetBlendShapeIndex(::StringW blendShapeName);

  /// @brief Method GetBlendShapeName, addr 0x4885d58, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetBlendShapeName(int32_t shapeIndex);

  /// @brief Method GetBlendShapeOffsetInternal, addr 0x4885f68, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::BlendShape GetBlendShapeOffsetInternal(int32_t index);

  /// @brief Method GetBlendShapeOffsetInternal_Injected, addr 0x4885fcc, size 0x54, virtual false, abstract: false, final false
  inline void GetBlendShapeOffsetInternal_Injected(int32_t index, ::ByRef<::UnityEngine::BlendShape> ret);

  /// @brief Method GetBoneWeightBuffer, addr 0x488a8ac, size 0x298, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBuffer(::UnityEngine::SkinWeights layout);

  /// @brief Method GetBoneWeightBufferImpl, addr 0x4885b58, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBufferImpl(int32_t bonesPerVertex);

  /// @brief Method GetBoneWeightBufferLayoutInternal, addr 0x48864b8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetBoneWeightBufferLayoutInternal();

  /// @brief Method GetBoneWeights, addr 0x488cf74, size 0x15c, virtual false, abstract: false, final false
  inline void GetBoneWeights(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>* boneWeights);

  /// @brief Method GetBoneWeightsImpl, addr 0x488605c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> GetBoneWeightsImpl();

  /// @brief Method GetBoneWeightsNonAllocImpl, addr 0x48866a0, size 0x44, virtual false, abstract: false, final false
  inline void GetBoneWeightsNonAllocImpl(::ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>> values);

  /// @brief Method GetBonesPerVertex, addr 0x488635c, size 0xe4, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetBonesPerVertex();

  /// @brief Method GetBonesPerVertexArray, addr 0x488647c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::IntPtr GetBonesPerVertexArray();

  /// @brief Method GetColors, addr 0x4888b24, size 0xf0, virtual false, abstract: false, final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors);

  /// @brief Method GetColors, addr 0x488880c, size 0xec, virtual false, abstract: false, final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* colors);

  /// @brief Method GetIndexBuffer, addr 0x488a7f0, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBuffer();

  /// @brief Method GetIndexBufferImpl, addr 0x4885b1c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBufferImpl();

  /// @brief Method GetIndexCount, addr 0x488b8dc, size 0xc0, virtual false, abstract: false, final false
  inline uint32_t GetIndexCount(int32_t submesh);

  /// @brief Method GetIndexCountImpl, addr 0x4885224, size 0x44, virtual false, abstract: false, final false
  inline uint32_t GetIndexCountImpl(int32_t submesh);

  /// @brief Method GetIndexStart, addr 0x488bb30, size 0xc0, virtual false, abstract: false, final false
  inline uint32_t GetIndexStart(int32_t submesh);

  /// @brief Method GetIndexStartImpl, addr 0x48851e0, size 0x44, virtual false, abstract: false, final false
  inline uint32_t GetIndexStartImpl(int32_t submesh);

  /// @brief Method GetIndices, addr 0x488b690, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIndices(int32_t submesh);

  /// @brief Method GetIndices, addr 0x488b698, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIndices(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x488b740, size 0x8, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh);

  /// @brief Method GetIndices, addr 0x488b748, size 0x194, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x488b99c, size 0x194, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesImpl, addr 0x4885344, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIndicesImpl(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesNonAllocImpl, addr 0x4885588, size 0x5c, virtual false, abstract: false, final false
  inline void GetIndicesNonAllocImpl(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesNonAllocImpl16, addr 0x48855e4, size 0x5c, virtual false, abstract: false, final false
  inline void GetIndicesNonAllocImpl16(::ByRef<::ArrayW<uint16_t, ::Array<uint16_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim);

  /// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim,
                                ::UnityEngine::Rendering::VertexAttributeFormat channelType);

  /// @brief Method GetNativeIndexBufferPtr, addr 0x4885a9c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeIndexBufferPtr();

  /// @brief Method GetNativeVertexBufferPtr, addr 0x4885a58, size 0x44, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeVertexBufferPtr(int32_t index);

  /// @brief Method GetNormals, addr 0x48881dc, size 0xec, virtual false, abstract: false, final false
  inline void GetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals);

  /// @brief Method GetSubMesh, addr 0x48868d8, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t index);

  /// @brief Method GetSubMesh_Injected, addr 0x4886954, size 0x54, virtual false, abstract: false, final false
  inline void GetSubMesh_Injected(int32_t index, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> ret);

  /// @brief Method GetTangents, addr 0x48884f4, size 0xec, virtual false, abstract: false, final false
  inline void GetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method GetTopology, addr 0x488dae0, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology GetTopology(int32_t submesh);

  /// @brief Method GetTopologyImpl, addr 0x4886d80, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology GetTopologyImpl(int32_t submesh);

  /// @brief Method GetTotalIndexCount, addr 0x4884cd0, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t GetTotalIndexCount();

  /// @brief Method GetTriangles, addr 0x488b270, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTriangles(int32_t submesh);

  /// @brief Method GetTriangles, addr 0x488b278, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTriangles(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x488b320, size 0x8, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// @brief Method GetTriangles, addr 0x488b328, size 0x1b4, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x488b4dc, size 0x1b4, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesCountImpl, addr 0x4885268, size 0x44, virtual false, abstract: false, final false
  inline uint32_t GetTrianglesCountImpl(int32_t submesh);

  /// @brief Method GetTrianglesImpl, addr 0x48852f0, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTrianglesImpl(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesNonAllocImpl, addr 0x48854d0, size 0x5c, virtual false, abstract: false, final false
  inline void GetTrianglesNonAllocImpl(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesNonAllocImpl16, addr 0x488552c, size 0x5c, virtual false, abstract: false, final false
  inline void GetTrianglesNonAllocImpl16(::ByRef<::ArrayW<uint16_t, ::Array<uint16_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetUVChannel, addr 0x4886fc8, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t uvIndex);

  /// @brief Method GetUVDistributionMetric, addr 0x4886e64, size 0x44, virtual false, abstract: false, final false
  inline float_t GetUVDistributionMetric(int32_t uvSetIndex);

  /// @brief Method GetUVs, addr 0x48893e0, size 0x64, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// @brief Method GetUVs, addr 0x4889444, size 0x64, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// @brief Method GetUVs, addr 0x48894a8, size 0x64, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method GetUVsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetUVsImpl(int32_t uvIndex, ::System::Collections::Generic::List_1<T>* uvs, int32_t dim);

  /// @brief Method GetVertexAttribute, addr 0x4885130, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeDescriptor GetVertexAttribute(int32_t index);

  /// @brief Method GetVertexAttributeCountImpl, addr 0x48850f4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeCountImpl();

  /// @brief Method GetVertexAttributeDimension, addr 0x48856c8, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeFormat, addr 0x488570c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeOffset, addr 0x4885794, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeStream, addr 0x4885750, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttribute_Injected, addr 0x488518c, size 0x54, virtual false, abstract: false, final false
  inline void GetVertexAttribute_Injected(int32_t index, ::ByRef<::UnityEngine::Rendering::VertexAttributeDescriptor> ret);

  /// @brief Method GetVertexAttributes, addr 0x4889548, size 0x8c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> GetVertexAttributes();

  /// @brief Method GetVertexAttributes, addr 0x48895d4, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributes(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method GetVertexAttributes, addr 0x4889618, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// @brief Method GetVertexAttributesAlloc, addr 0x4885030, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Array* GetVertexAttributesAlloc();

  /// @brief Method GetVertexAttributesArray, addr 0x488506c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributesArray(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method GetVertexAttributesList, addr 0x48850b0, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributesList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// @brief Method GetVertexBuffer, addr 0x488a724, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer(int32_t index);

  /// @brief Method GetVertexBufferImpl, addr 0x4885ad8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl(int32_t index);

  /// @brief Method GetVertexBufferStride, addr 0x4885a14, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetVertexBufferStride(int32_t stream);

  /// @brief Method GetVertices, addr 0x4887ec4, size 0xec, virtual false, abstract: false, final false
  inline void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices);

  /// @brief Method HasBoneWeights, addr 0x4886020, size 0x3c, virtual false, abstract: false, final false
  inline bool HasBoneWeights();

  /// @brief Method HasVertexAttribute, addr 0x4885684, size 0x44, virtual false, abstract: false, final false
  inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method InternalSetBoneWeights, addr 0x48861c4, size 0x6c, virtual false, abstract: false, final false
  inline void InternalSetBoneWeights(::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights, int32_t weightsSize);

  /// @brief Method InternalSetIndexBufferData, addr 0x4884d60, size 0x84, virtual false, abstract: false, final false
  inline void InternalSetIndexBufferData(::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferDataFromArray, addr 0x4884de4, size 0x84, virtual false, abstract: false, final false
  inline void InternalSetIndexBufferDataFromArray(::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferData, addr 0x4884f18, size 0x8c, virtual false, abstract: false, final false
  inline void InternalSetVertexBufferData(int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                          ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferDataFromArray, addr 0x4884fa4, size 0x8c, virtual false, abstract: false, final false
  inline void InternalSetVertexBufferDataFromArray(int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method Internal_Create, addr 0x4884b58, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Mesh* mono);

  /// @brief Method MarkDynamic, addr 0x488d720, size 0x74, virtual false, abstract: false, final false
  inline void MarkDynamic();

  /// @brief Method MarkDynamicImpl, addr 0x4886cc4, size 0x3c, virtual false, abstract: false, final false
  inline void MarkDynamicImpl();

  /// @brief Method MarkModified, addr 0x4886d00, size 0x3c, virtual false, abstract: false, final false
  inline void MarkModified();

  static inline ::UnityEngine::Mesh* New_ctor();

  /// @brief Method Optimize, addr 0x488d810, size 0xf0, virtual false, abstract: false, final false
  inline void Optimize();

  /// @brief Method OptimizeImpl, addr 0x4886f14, size 0x3c, virtual false, abstract: false, final false
  inline void OptimizeImpl();

  /// @brief Method OptimizeIndexBuffers, addr 0x488d900, size 0xf0, virtual false, abstract: false, final false
  inline void OptimizeIndexBuffers();

  /// @brief Method OptimizeIndexBuffersImpl, addr 0x4886f50, size 0x3c, virtual false, abstract: false, final false
  inline void OptimizeIndexBuffersImpl();

  /// @brief Method OptimizeReorderVertexBuffer, addr 0x488d9f0, size 0xf0, virtual false, abstract: false, final false
  inline void OptimizeReorderVertexBuffer();

  /// @brief Method OptimizeReorderVertexBufferImpl, addr 0x4886f8c, size 0x3c, virtual false, abstract: false, final false
  inline void OptimizeReorderVertexBufferImpl();

  /// @brief Method PrintErrorCantAccessChannel, addr 0x4885640, size 0x44, virtual false, abstract: false, final false
  inline void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute ch);

  /// @brief Method PrintErrorCantAccessIndices, addr 0x488ae84, size 0x9c, virtual false, abstract: false, final false
  inline void PrintErrorCantAccessIndices();

  /// @brief Method RecalculateBounds, addr 0x488d210, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateBounds();

  /// @brief Method RecalculateBounds, addr 0x488d218, size 0xf8, virtual false, abstract: false, final false
  inline void RecalculateBounds(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateBoundsImpl, addr 0x4886bf8, size 0x44, virtual false, abstract: false, final false
  inline void RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormals, addr 0x488d310, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateNormals();

  /// @brief Method RecalculateNormals, addr 0x488d318, size 0xf8, virtual false, abstract: false, final false
  inline void RecalculateNormals(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormalsImpl, addr 0x4886c3c, size 0x44, virtual false, abstract: false, final false
  inline void RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangents, addr 0x488d410, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateTangents();

  /// @brief Method RecalculateTangents, addr 0x488d418, size 0xf8, virtual false, abstract: false, final false
  inline void RecalculateTangents(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangentsImpl, addr 0x4886c80, size 0x44, virtual false, abstract: false, final false
  inline void RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateUVDistributionMetric, addr 0x488d510, size 0x10c, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetric(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricImpl, addr 0x4886dc4, size 0x54, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetricImpl(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetrics, addr 0x488d61c, size 0x104, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetrics(float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricsImpl, addr 0x4886e18, size 0x4c, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetricsImpl(float_t uvAreaThreshold);

  /// @brief Method SetAllSubMeshesAtOnceFromArray, addr 0x48869a8, size 0x6c, virtual false, abstract: false, final false
  inline void SetAllSubMeshesAtOnceFromArray(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor, ::Array<::UnityEngine::Rendering::SubMeshDescriptor>*> desc, int32_t start, int32_t count,
                                             ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromNativeArray, addr 0x4886a14, size 0x6c, virtual false, abstract: false, final false
  inline void SetAllSubMeshesAtOnceFromNativeArray(::System::IntPtr desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::ArrayW<T, ::Array<T>*> values,
                                 ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::ArrayW<T, ::Array<T>*> values, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannelImpl, addr 0x48857d8, size 0x9c, virtual false, abstract: false, final false
  inline void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values, int32_t arraySize,
                                     int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetBoneWeights, addr 0x48860dc, size 0xe8, virtual false, abstract: false, final false
  inline void SetBoneWeights(::Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> weights);

  /// @brief Method SetBoneWeightsImpl, addr 0x4886098, size 0x44, virtual false, abstract: false, final false
  inline void SetBoneWeightsImpl(::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> weights);

  /// @brief Method SetColors, addr 0x48889e8, size 0x68, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> inColors);

  /// @brief Method SetColors, addr 0x4888a50, size 0x68, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x4888ab8, size 0x6c, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x4888d1c, size 0x68, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> inColors);

  /// @brief Method SetColors, addr 0x4888d84, size 0x68, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x4888dec, size 0x6c, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x4888c14, size 0x6c, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors);

  /// @brief Method SetColors, addr 0x4888c80, size 0x8, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x4888c88, size 0x94, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x48888f8, size 0x6c, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors);

  /// @brief Method SetColors, addr 0x4888964, size 0x8, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x488896c, size 0x7c, virtual false, abstract: false, final false
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

  /// @brief Method SetIndexBufferParams, addr 0x4884d0c, size 0x54, virtual false, abstract: false, final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndices, addr 0x488c4b8, size 0xd4, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x488c378, size 0x64, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh);

  /// @brief Method SetIndices, addr 0x488c450, size 0x68, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds);

  /// @brief Method SetIndices, addr 0x488c3dc, size 0x74, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x488c600, size 0xd4, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x488c58c, size 0x74, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x488c778, size 0x110, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x488c6d4, size 0xa4, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x488c92c, size 0x110, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x488c888, size 0xa4, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesImpl, addr 0x4885398, size 0x9c, virtual false, abstract: false, final false
  inline void SetIndicesImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* indices, int32_t arrayStart,
                             int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesNativeArrayImpl, addr 0x4885434, size 0x9c, virtual false, abstract: false, final false
  inline void SetIndicesNativeArrayImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::IntPtr indices, int32_t arrayStart,
                                        int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
                                ::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length,
                                ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNativeArrayForChannelImpl, addr 0x4885874, size 0x9c, virtual false, abstract: false, final false
  inline void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values,
                                           int32_t arraySize, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x48883b8, size 0x68, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inNormals);

  /// @brief Method SetNormals, addr 0x4888420, size 0x68, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x4888488, size 0x6c, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x48882c8, size 0x6c, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals);

  /// @brief Method SetNormals, addr 0x4888334, size 0x8, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x488833c, size 0x7c, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSizedArrayForChannel, addr 0x48870d8, size 0x294, virtual false, abstract: false, final false
  inline void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values,
                                      int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSizedNativeArrayForChannel, addr 0x488736c, size 0x28c, virtual false, abstract: false, final false
  inline void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values,
                                            int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMesh, addr 0x4886820, size 0x5c, virtual false, abstract: false, final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMesh_Injected, addr 0x488687c, size 0x5c, virtual false, abstract: false, final false
  inline void SetSubMesh_Injected(int32_t index, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x488cd08, size 0x2c, virtual false, abstract: false, final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor, ::Array<::UnityEngine::Rendering::SubMeshDescriptor>*> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x488ca3c, size 0x2cc, virtual false, abstract: false, final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor, ::Array<::UnityEngine::Rendering::SubMeshDescriptor>*> desc, int32_t start, int32_t count,
                           ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x488cdb4, size 0x90, virtual false, abstract: false, final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x488cd34, size 0x80, virtual false, abstract: false, final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x48886d0, size 0x68, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> inTangents);

  /// @brief Method SetTangents, addr 0x4888738, size 0x68, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x48887a0, size 0x6c, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x48885e0, size 0x6c, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents);

  /// @brief Method SetTangents, addr 0x488864c, size 0x8, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x4888654, size 0x7c, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTriangles, addr 0x488be4c, size 0x48, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t submesh);

  /// @brief Method SetTriangles, addr 0x488beec, size 0x54, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles, addr 0x488be94, size 0x58, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x488bf40, size 0x8c, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x488bfcc, size 0x58, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t, ::Array<uint16_t>*> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x488c024, size 0x8c, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t, ::Array<uint16_t>*> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x488c0b0, size 0xc, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// @brief Method SetTriangles, addr 0x488c144, size 0xc, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles, addr 0x488c0bc, size 0x88, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x488c150, size 0xd0, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x488c220, size 0x88, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x488c2a8, size 0xd0, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTrianglesImpl, addr 0x488b1d0, size 0xa0, virtual false, abstract: false, final false
  inline void SetTrianglesImpl(int32_t submesh, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* triangles, int32_t trianglesArrayLength, int32_t start, int32_t length,
                               bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetUVs, addr 0x4889278, size 0x48, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs);

  /// @brief Method SetUVs, addr 0x48892c0, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x4889398, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x48892d8, size 0x48, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uvs);

  /// @brief Method SetUVs, addr 0x4889320, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x48893b0, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x4889338, size 0x48, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs);

  /// @brief Method SetUVs, addr 0x4889380, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x48893c8, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x4888e58, size 0x74, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// @brief Method SetUVs, addr 0x4888ecc, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x4888fcc, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x4888ed4, size 0x74, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// @brief Method SetUVs, addr 0x4888f48, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x4889058, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x4888f50, size 0x74, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method SetUVs, addr 0x4888fc4, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x48890e4, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUvsImpl, addr 0x4889170, size 0x108, virtual false, abstract: false, final false
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

  /// @brief Method SetVertexBufferParams, addr 0x488965c, size 0x54, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method SetVertexBufferParams, addr 0x48896b0, size 0xa8, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParamsFromArray, addr 0x4884ec4, size 0x54, virtual false, abstract: false, final false
  inline void SetVertexBufferParamsFromArray(int32_t vertexCount,
                                             ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method SetVertexBufferParamsFromPtr, addr 0x4884e68, size 0x5c, virtual false, abstract: false, final false
  inline void SetVertexBufferParamsFromPtr(int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount);

  /// @brief Method SetVertices, addr 0x48880a0, size 0x68, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inVertices);

  /// @brief Method SetVertices, addr 0x4888108, size 0x68, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x4888170, size 0x6c, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices, addr 0x4887fb0, size 0x6c, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices);

  /// @brief Method SetVertices, addr 0x488801c, size 0x8, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x4888024, size 0x7c, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method UploadMeshData, addr 0x488d794, size 0x7c, virtual false, abstract: false, final false
  inline void UploadMeshData(bool markNoLongerReadable);

  /// @brief Method UploadMeshDataImpl, addr 0x4886d3c, size 0x44, virtual false, abstract: false, final false
  inline void UploadMeshDataImpl(bool markNoLongerReadable);

  /// @brief Method .ctor, addr 0x4884b94, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bindposeCount, addr 0x48864f4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_bindposeCount();

  /// @brief Method get_bindposes, addr 0x4886530, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_bindposes();

  /// @brief Method get_blendShapeCount, addr 0x4885ce0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_blendShapeCount();

  /// @brief Method get_boneWeights, addr 0x488d0d0, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> get_boneWeights();

  /// @brief Method get_bounds, addr 0x4886a80, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x4886ae8, size 0x44, virtual false, abstract: false, final false
  inline void get_bounds_Injected(::ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_canAccess, addr 0x4886764, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canAccess();

  /// @brief Method get_colors, addr 0x4887d5c, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> get_colors();

  /// @brief Method get_colors32, addr 0x4887e08, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> get_colors32();

  /// @brief Method get_indexBufferTarget, addr 0x4885c60, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget();

  /// @brief Method get_indexFormat, addr 0x4884c50, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndexFormat get_indexFormat();

  /// @brief Method get_isReadable, addr 0x4886728, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_normals, addr 0x48876a4, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_normals();

  /// @brief Method get_skinWeightBufferLayout, addr 0x488d150, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::SkinWeights get_skinWeightBufferLayout();

  /// @brief Method get_subMeshCount, addr 0x48867a0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_subMeshCount();

  /// @brief Method get_tangents, addr 0x4887750, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> get_tangents();

  /// @brief Method get_triangles, addr 0x488b074, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_triangles();

  /// @brief Method get_uv, addr 0x48877fc, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv();

  /// @brief Method get_uv2, addr 0x48878a8, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv2();

  /// @brief Method get_uv3, addr 0x4887954, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv3();

  /// @brief Method get_uv4, addr 0x4887a00, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv4();

  /// @brief Method get_uv5, addr 0x4887aac, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv5();

  /// @brief Method get_uv6, addr 0x4887b58, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv6();

  /// @brief Method get_uv7, addr 0x4887c04, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv7();

  /// @brief Method get_uv8, addr 0x4887cb0, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv8();

  /// @brief Method get_vertexAttributeCount, addr 0x488950c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_vertexAttributeCount();

  /// @brief Method get_vertexBufferCount, addr 0x48859d8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method get_vertexBufferTarget, addr 0x4885be0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget();

  /// @brief Method get_vertexCount, addr 0x4886440, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_vertexCount();

  /// @brief Method get_vertices, addr 0x48875f8, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_vertices();

  /// @brief Method set_bindposes, addr 0x488656c, size 0x44, virtual false, abstract: false, final false
  inline void set_bindposes(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  /// @brief Method set_boneWeights, addr 0x488d10c, size 0x44, virtual false, abstract: false, final false
  inline void set_boneWeights(::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> value);

  /// @brief Method set_bounds, addr 0x4886b2c, size 0x44, virtual false, abstract: false, final false
  inline void set_bounds(::UnityEngine::Bounds value);

  /// @brief Method set_bounds_Injected, addr 0x4886b70, size 0x44, virtual false, abstract: false, final false
  inline void set_bounds_Injected(::ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_colors, addr 0x4887da8, size 0x60, virtual false, abstract: false, final false
  inline void set_colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  /// @brief Method set_colors32, addr 0x4887e5c, size 0x68, virtual false, abstract: false, final false
  inline void set_colors32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value);

  /// @brief Method set_indexBufferTarget, addr 0x4885c9c, size 0x44, virtual false, abstract: false, final false
  inline void set_indexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_indexFormat, addr 0x4884c8c, size 0x44, virtual false, abstract: false, final false
  inline void set_indexFormat(::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method set_normals, addr 0x48876f0, size 0x60, virtual false, abstract: false, final false
  inline void set_normals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method set_subMeshCount, addr 0x48867dc, size 0x44, virtual false, abstract: false, final false
  inline void set_subMeshCount(int32_t value);

  /// @brief Method set_tangents, addr 0x488779c, size 0x60, virtual false, abstract: false, final false
  inline void set_tangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method set_triangles, addr 0x488b128, size 0xa8, virtual false, abstract: false, final false
  inline void set_triangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method set_uv, addr 0x4887848, size 0x60, virtual false, abstract: false, final false
  inline void set_uv(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv2, addr 0x48878f4, size 0x60, virtual false, abstract: false, final false
  inline void set_uv2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv3, addr 0x48879a0, size 0x60, virtual false, abstract: false, final false
  inline void set_uv3(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv4, addr 0x4887a4c, size 0x60, virtual false, abstract: false, final false
  inline void set_uv4(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv5, addr 0x4887af8, size 0x60, virtual false, abstract: false, final false
  inline void set_uv5(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv6, addr 0x4887ba4, size 0x60, virtual false, abstract: false, final false
  inline void set_uv6(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv7, addr 0x4887c50, size 0x60, virtual false, abstract: false, final false
  inline void set_uv7(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_uv8, addr 0x4887cfc, size 0x60, virtual false, abstract: false, final false
  inline void set_uv8(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method set_vertexBufferTarget, addr 0x4885c1c, size 0x44, virtual false, abstract: false, final false
  inline void set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertices, addr 0x4887644, size 0x60, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10780 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Mesh, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Mesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mesh*, "UnityEngine", "Mesh");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mesh_MeshData, "UnityEngine", "Mesh/MeshData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mesh_MeshDataArray, "UnityEngine", "Mesh/MeshDataArray");
