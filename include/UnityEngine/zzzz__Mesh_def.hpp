#pragma once
// IWYU pragma private; include "UnityEngine/Mesh.hpp"
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
namespace System {
template <typename T> struct ReadOnlySpan_1;
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
struct EntityId;
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
struct MeshLodRange;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
struct Mesh_LodSelectionCurve;
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
struct Mesh_LodSelectionCurve;
}
namespace UnityEngine {
struct Mesh_MeshData;
}
namespace UnityEngine {
struct Mesh_MeshDataArray;
}
// Write type traits
MARK_REF_T(::UnityEngine::Mesh*);
MARK_VAL_T(::UnityEngine::Mesh_LodSelectionCurve);
MARK_VAL_T(::UnityEngine::Mesh_MeshData);
MARK_VAL_T(::UnityEngine::Mesh_MeshDataArray);
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh*, "UnityEngine", "Mesh");
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh_LodSelectionCurve, "UnityEngine", "Mesh/LodSelectionCurve");
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh_MeshData, "UnityEngine", "Mesh/MeshData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh_MeshDataArray, "UnityEngine", "Mesh/MeshDataArray");
// [UsedByNativeCode]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mesh/LodSelectionCurve
struct CORDL_TYPE Mesh_LodSelectionCurve {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_LodSelectionCurve();

  // Ctor Parameters [CppParam { name: "m_LodSlope", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LodBias", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr Mesh_LodSelectionCurve(float_t m_LodSlope, float_t m_LodBias) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9805 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [SerializeField]
  /// @brief Field m_LodSlope, offset: 0x0, size: 0x4, def value: None
  float_t m_LodSlope;

  /// [SerializeField]
  /// @brief Field m_LodBias, offset: 0x4, size: 0x4, def value: None
  float_t m_LodBias;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Mesh_LodSelectionCurve, m_LodSlope) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Mesh_LodSelectionCurve, m_LodBias) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Mesh_LodSelectionCurve) == 0x8, "Size mismatch!");

} // namespace UnityEngine
// [StaticAccessor("MeshDataBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
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
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::Unity::Collections::NativeArray_1<T> GetIndexData();

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetIndexDataPtr, addr 0x6f49cb0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetIndexDataPtr(::System::IntPtr self);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetIndexDataSize, addr 0x6f49cec, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t GetIndexDataSize(::System::IntPtr self);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetVertexBufferCount, addr 0x6f49bec, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVertexBufferCount(::System::IntPtr self);

  /// @brief Method GetVertexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::Unity::Collections::NativeArray_1<T> GetVertexData(/* [DefaultValue("0")] */ int32_t stream);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetVertexDataPtr, addr 0x6f49c28, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexDataPtr(::System::IntPtr self, int32_t stream);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetVertexDataSize, addr 0x6f49c6c, size 0x44, virtual false, abstract: false, final false
  static inline uint64_t GetVertexDataSize(::System::IntPtr self, int32_t stream);

  /// @brief Method SetIndexBufferParams, addr 0x6f49fec, size 0x54, virtual false, abstract: false, final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetIndexBufferParamsImpl, addr 0x6f49e58, size 0x54, virtual false, abstract: false, final false
  static inline void SetIndexBufferParamsImpl(::System::IntPtr self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat indexFormat);

  /// @brief Method SetSubMesh, addr 0x6f4a084, size 0x74, virtual false, abstract: false, final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method SetSubMeshCount, addr 0x6f49eac, size 0x44, virtual false, abstract: false, final false
  static inline void SetSubMeshCount(::System::IntPtr self, int32_t count);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetSubMeshImpl, addr 0x6f49ef0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMeshImpl(::System::IntPtr self, int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshImpl_Injected, addr 0x6f49f4c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMeshImpl_Injected(::System::IntPtr self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferParams, addr 0x6f49fe4, size 0x8, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetVertexBufferParamsFromArray, addr 0x6f49d28, size 0xdc, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray(::System::IntPtr self, int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0x6f49e04, size 0x54, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr self, int32_t vertexCount, /* [ParamArray] */ ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// @brief Method get_vertexBufferCount, addr 0x6f49fa8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method set_subMeshCount, addr 0x6f4a040, size 0x44, virtual false, abstract: false, final false
  inline void set_subMeshCount(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_MeshData();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
  constexpr Mesh_MeshData(::System::IntPtr m_Ptr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9806 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [NativeDisableUnsafePtrRestriction]
  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Mesh_MeshData, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Mesh_MeshData) == 0x8, "Size mismatch!");

} // namespace UnityEngine
// [StaticAccessor("MeshDataArrayBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeContainer]
// [NativeContainerSupportsMinMaxWriteRestriction]
// [DefaultMember("Item")]
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

  /// @brief Method AcquireMeshDataCopy, addr 0x6f4a2d8, size 0xb4, virtual false, abstract: false, final false
  static inline void AcquireMeshDataCopy(/* [NotNull] */ ::UnityEngine::Mesh* mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireMeshDataCopy_Injected, addr 0x6f4a38c, size 0x44, virtual false, abstract: false, final false
  static inline void AcquireMeshDataCopy_Injected(::System::IntPtr mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireMeshDatasCopy, addr 0x6f4a3d0, size 0x94, virtual false, abstract: false, final false
  static inline void AcquireMeshDatasCopy(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireMeshDatasCopy_Injected, addr 0x6f4a464, size 0x54, virtual false, abstract: false, final false
  static inline void AcquireMeshDatasCopy_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6f4a0f8, size 0xb4, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshData(/* [NotNull] */ ::UnityEngine::Mesh* mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireReadOnlyMeshData_Injected, addr 0x6f4a1ac, size 0x44, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshData_Injected(::System::IntPtr mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireReadOnlyMeshDatas, addr 0x6f4a1f0, size 0x94, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshDatas(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireReadOnlyMeshDatas_Injected, addr 0x6f4a284, size 0x54, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshDatas_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method ApplyToMeshAndDispose, addr 0x6f445e8, size 0xc8, virtual false, abstract: false, final false
  inline void ApplyToMeshAndDispose(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeThrows]
  /// @brief Method ApplyToMeshImpl, addr 0x6f4a640, size 0xbc, virtual false, abstract: false, final false
  static inline void ApplyToMeshImpl(/* [NotNull] */ ::UnityEngine::Mesh* mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshImpl_Injected, addr 0x6f4a6fc, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyToMeshImpl_Injected(::System::IntPtr mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesAndDispose, addr 0x6f447f0, size 0x1d8, virtual false, abstract: false, final false
  inline void ApplyToMeshesAndDispose(::ArrayW<::UnityEngine::Mesh*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeThrows]
  /// @brief Method ApplyToMeshesImpl, addr 0x6f4a540, size 0xa4, virtual false, abstract: false, final false
  static inline void ApplyToMeshesImpl(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesImpl_Injected, addr 0x6f4a5e4, size 0x5c, virtual false, abstract: false, final false
  static inline void ApplyToMeshesImpl_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method CreateNewMeshDatas, addr 0x6f4a4fc, size 0x44, virtual false, abstract: false, final false
  static inline void CreateNewMeshDatas(::System::IntPtr* datas, int32_t count);

  /// @brief Method Dispose, addr 0x6f4a764, size 0xc0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ReleaseMeshDatas, addr 0x6f4a4b8, size 0x44, virtual false, abstract: false, final false
  static inline void ReleaseMeshDatas(::System::IntPtr* datas, int32_t count);

  /// @brief Method .ctor, addr 0x6f43aa0, size 0x238, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, bool checkReadWrite, bool createAsCopy);

  /// @brief Method .ctor, addr 0x6f43d74, size 0x2d0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Mesh*> meshes, int32_t meshesCount, bool checkReadWrite, bool createAsCopy);

  /// @brief Method .ctor, addr 0x6f4415c, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(int32_t meshesCount);

  /// @brief Method get_Item, addr 0x6f4a758, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh_MeshData get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x6f4a750, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_MeshDataArray();

  // Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::System::IntPtr*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr Mesh_MeshDataArray(::System::IntPtr* m_Ptrs, int32_t m_Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9807 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [NativeDisableUnsafePtrRestriction]
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
// [NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
// [ExcludeFromPreset]
// [RequiredByNativeCode]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Mesh
class CORDL_TYPE Mesh : public ::UnityEngine::Object {
public:
  // Declarations
  using LodSelectionCurve = ::UnityEngine::Mesh_LodSelectionCurve;

  using MeshData = ::UnityEngine::Mesh_MeshData;

  using MeshDataArray = ::UnityEngine::Mesh_MeshDataArray;

  __declspec(property(get = get_bindposeCount)) int32_t bindposeCount;

  /// @brief [NativeName("BindPosesFromScript")]
  __declspec(property(get = get_bindposes, put = set_bindposes)) ::ArrayW<::UnityEngine::Matrix4x4> bindposes;

  __declspec(property(get = get_blendShapeCount)) int32_t blendShapeCount;

  __declspec(property(get = get_boneWeights, put = set_boneWeights)) ::ArrayW<::UnityEngine::BoneWeight> boneWeights;

  __declspec(property(get = get_bounds, put = set_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_canAccess)) bool canAccess;

  __declspec(property(get = get_colors, put = set_colors)) ::ArrayW<::UnityEngine::Color> colors;

  __declspec(property(get = get_colors32, put = set_colors32)) ::ArrayW<::UnityEngine::Color32> colors32;

  __declspec(property(get = get_indexBufferTarget, put = set_indexBufferTarget)) ::UnityEngine::GraphicsBuffer_Target indexBufferTarget;

  __declspec(property(get = get_indexFormat, put = set_indexFormat)) ::UnityEngine::Rendering::IndexFormat indexFormat;

  __declspec(property(get = get_isLodSelectionActive)) bool isLodSelectionActive;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_lodCount, put = set_lodCount)) int32_t lodCount;

  __declspec(property(get = get_lodSelectionCurve, put = set_lodSelectionCurve)) ::UnityEngine::Mesh_LodSelectionCurve lodSelectionCurve;

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

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6f43a70, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6f43cd8, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::ArrayW<::UnityEngine::Mesh*> meshes);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6f44044, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes);

  /// @brief Method AddBlendShapeFrame, addr 0x6f3dae8, size 0xcc, virtual false, abstract: false, final false
  inline void AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::ArrayW<::UnityEngine::Vector3> deltaVertices, ::ArrayW<::UnityEngine::Vector3> deltaNormals,
                                 ::ArrayW<::UnityEngine::Vector3> deltaTangents);

  /// [FreeFunction(Name = "AddBlendShapeFrameFromScript", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method AddBlendShapeFrame, addr 0x6f3d84c, size 0x220, virtual false, abstract: false, final false
  inline void AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> deltaVertices,
                                 ::System::ReadOnlySpan_1<::UnityEngine::Vector3> deltaNormals, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> deltaTangents);

  /// @brief Method AddBlendShapeFrame_Injected, addr 0x6f3da6c, size 0x7c, virtual false, abstract: false, final false
  static inline void AddBlendShapeFrame_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> shapeName, float_t frameWeight,
                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaNormals,
                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaTangents);

  /// @brief Method AllocateWritableMeshData, addr 0x6f442b0, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::UnityEngine::Mesh* mesh);

  /// @brief Method AllocateWritableMeshData, addr 0x6f44134, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(int32_t meshCount);

  /// @brief Method AllocateWritableMeshData, addr 0x6f442e0, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::ArrayW<::UnityEngine::Mesh*> meshes);

  /// @brief Method AllocateWritableMeshData, addr 0x6f4437c, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x6f4446c, size 0x17c, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x6f446b0, size 0x140, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::ArrayW<::UnityEngine::Mesh*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x6f449c8, size 0x1ac, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method CheckCanAccessSubmesh, addr 0x6f45340, size 0x148, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles);

  /// @brief Method CheckCanAccessSubmeshIndices, addr 0x6f45490, size 0x8, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmeshIndices(int32_t submesh);

  /// @brief Method CheckCanAccessSubmeshTriangles, addr 0x6f45488, size 0x8, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmeshTriangles(int32_t submesh);

  /// @brief Method CheckIndicesArrayRange, addr 0x6f464b8, size 0x18c, virtual false, abstract: false, final false
  inline void CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length);

  /// [ExcludeFromDocs]
  /// @brief Method Clear, addr 0x6f49318, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x6f49314, size 0x4, virtual false, abstract: false, final false
  inline void Clear(/* [DefaultValue("true")] */ bool keepVertexLayout);

  /// [FreeFunction(Name = "MeshScripting::ClearBlendShapes", HasExplicitThis = true)]
  /// @brief Method ClearBlendShapes, addr 0x6f3d084, size 0x80, virtual false, abstract: false, final false
  inline void ClearBlendShapes();

  /// @brief Method ClearBlendShapes_Injected, addr 0x6f3d104, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearBlendShapes_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("Clear")]
  /// @brief Method ClearImpl, addr 0x6f4058c, size 0x90, virtual false, abstract: false, final false
  inline void ClearImpl(bool keepVertexLayout);

  /// @brief Method ClearImpl_Injected, addr 0x6f4061c, size 0x44, virtual false, abstract: false, final false
  static inline void ClearImpl_Injected(::System::IntPtr _unity_self, bool keepVertexLayout);

  /// [ExcludeFromDocs]
  /// @brief Method CombineMeshes, addr 0x6f49bdc, size 0x10, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine);

  /// [ExcludeFromDocs]
  /// @brief Method CombineMeshes, addr 0x6f49bd0, size 0xc, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes);

  /// [ExcludeFromDocs]
  /// @brief Method CombineMeshes, addr 0x6f49bc8, size 0x8, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices);

  /// @brief Method CombineMeshes, addr 0x6f49bc4, size 0x4, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, /* [DefaultValue("true")] */ bool mergeSubMeshes, /* [DefaultValue("true")] */ bool useMatrices,
                            /* [DefaultValue("false")] */ bool hasLightmapData);

  /// [NativeMethod(Name = "MeshScripting::CombineMeshes", IsFreeFunction = true, ThrowsException = true, HasExplicitThis = true)]
  /// @brief Method CombineMeshesImpl, addr 0x6f40ea0, size 0x124, virtual false, abstract: false, final false
  inline void CombineMeshesImpl(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);

  /// @brief Method CombineMeshesImpl_Injected, addr 0x6f40fc4, size 0x6c, virtual false, abstract: false, final false
  static inline void CombineMeshesImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> combine, bool mergeSubMeshes, bool useMatrices,
                                                bool hasLightmapData);

  /// @brief Method DefaultDimensionForChannel, addr 0x6f412d8, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// [FreeFunction("MeshScripting::MeshFromInstanceId")]
  /// @brief Method FromInstanceID, addr 0x6f3972c, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> FromInstanceID(::UnityEngine::EntityId id);

  /// @brief Method FromInstanceID_Injected, addr 0x6f3984c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromInstanceID_Injected(::by_ref<::UnityEngine::EntityId const> id);

  /// @brief Method GetAllBoneWeights, addr 0x6f3e204, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> GetAllBoneWeights();

  /// [FreeFunction(Name = "MeshScripting::GetAllBoneWeightsArray", HasExplicitThis = true)]
  /// @brief Method GetAllBoneWeightsArray, addr 0x6f3e268, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetAllBoneWeightsArray();

  /// [FreeFunction(Name = "MeshScripting::GetAllBoneWeightsArraySize", HasExplicitThis = true)]
  /// @brief Method GetAllBoneWeightsArraySize, addr 0x6f3e2e8, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetAllBoneWeightsArraySize();

  /// @brief Method GetAllBoneWeightsArraySize_Injected, addr 0x6f3e4d8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetAllBoneWeightsArraySize_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetAllBoneWeightsArray_Injected, addr 0x6f3e5d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetAllBoneWeightsArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// [FreeFunction(Name = "AllocExtractMeshComponentFromScript", HasExplicitThis = true)]
  /// @brief Method GetAllocArrayFromChannelImpl, addr 0x6f3c3d4, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetAllocArrayFromChannelImpl_Injected, addr 0x6f3c47c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Array* GetAllocArrayFromChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel,
                                                                       ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// [FreeFunction(Name = "ExtractMeshComponentFromScript", HasExplicitThis = true)]
  /// @brief Method GetArrayFromChannelImpl, addr 0x6f3c4d8, size 0xb0, virtual false, abstract: false, final false
  inline void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values);

  /// @brief Method GetArrayFromChannelImpl_Injected, addr 0x6f3c588, size 0x6c, virtual false, abstract: false, final false
  static inline void GetArrayFromChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                      int32_t dim, ::System::Array* values);

  /// @brief Method GetBaseVertex, addr 0x6f4643c, size 0x7c, virtual false, abstract: false, final false
  inline uint32_t GetBaseVertex(int32_t submesh);

  /// [FreeFunction(Name = "MeshScripting::GetBaseVertex", HasExplicitThis = true)]
  /// @brief Method GetBaseVertexImpl, addr 0x6f3ac70, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetBaseVertexImpl(int32_t submesh);

  /// @brief Method GetBaseVertexImpl_Injected, addr 0x6f3ad00, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetBaseVertexImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetBindposes, addr 0x6f3e9f0, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> GetBindposes();

  /// @brief Method GetBindposes, addr 0x6f4910c, size 0xf8, virtual false, abstract: false, final false
  inline void GetBindposes(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* bindposes);

  /// [FreeFunction(Name = "MeshScripting::GetBindposesArray", HasExplicitThis = true)]
  /// @brief Method GetBindposesArray, addr 0x6f3ea54, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetBindposesArray();

  /// @brief Method GetBindposesArray_Injected, addr 0x6f3ec94, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBindposesArray_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::ExtractBindPosesIntoArray", HasExplicitThis = true)]
  /// @brief Method GetBindposesNonAllocImpl, addr 0x6f3ee70, size 0x15c, virtual false, abstract: false, final false
  inline void GetBindposesNonAllocImpl(::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method GetBindposesNonAllocImpl_Injected, addr 0x6f3efcc, size 0x44, virtual false, abstract: false, final false
  static inline void GetBindposesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values);

  /// @brief Method GetBlendShapeBuffer, addr 0x6f45084, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer();

  /// @brief Method GetBlendShapeBuffer, addr 0x6f44f50, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer(::UnityEngine::Rendering::BlendShapeBufferLayout layout);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeBufferPtr", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeBufferImpl, addr 0x6f3cbbc, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBufferImpl(int32_t layout);

  /// @brief Method GetBlendShapeBufferImpl_Injected, addr 0x6f3cc64, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBlendShapeBufferImpl_Injected(::System::IntPtr _unity_self, int32_t layout);

  /// @brief Method GetBlendShapeBufferRange, addr 0x6f451a8, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::BlendShapeBufferRange GetBlendShapeBufferRange(int32_t blendShapeIndex);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeFrameCount", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeFrameCount, addr 0x6f3d48c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetBlendShapeFrameCount(int32_t shapeIndex);

  /// @brief Method GetBlendShapeFrameCount_Injected, addr 0x6f3d51c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetBlendShapeFrameCount_Injected(::System::IntPtr _unity_self, int32_t shapeIndex);

  /// [FreeFunction(Name = "GetBlendShapeFrameVerticesFromScript", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeFrameVertices, addr 0x6f3d64c, size 0x18c, virtual false, abstract: false, final false
  inline void GetBlendShapeFrameVertices(int32_t shapeIndex, int32_t frameIndex, ::ArrayW<::UnityEngine::Vector3> deltaVertices, ::ArrayW<::UnityEngine::Vector3> deltaNormals,
                                         ::ArrayW<::UnityEngine::Vector3> deltaTangents);

  /// @brief Method GetBlendShapeFrameVertices_Injected, addr 0x6f3d7d8, size 0x74, virtual false, abstract: false, final false
  static inline void GetBlendShapeFrameVertices_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, int32_t frameIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaVertices,
                                                         ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaNormals, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaTangents);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeFrameWeight", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeFrameWeight, addr 0x6f3d560, size 0x98, virtual false, abstract: false, final false
  inline float_t GetBlendShapeFrameWeight(int32_t shapeIndex, int32_t frameIndex);

  /// @brief Method GetBlendShapeFrameWeight_Injected, addr 0x6f3d5f8, size 0x54, virtual false, abstract: false, final false
  static inline float_t GetBlendShapeFrameWeight_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, int32_t frameIndex);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeIndex", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeIndex, addr 0x6f3d2d4, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetBlendShapeIndex(::StringW blendShapeName);

  /// @brief Method GetBlendShapeIndex_Injected, addr 0x6f3d448, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetBlendShapeIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> blendShapeName);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeName", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeName, addr 0x6f3d140, size 0x140, virtual false, abstract: false, final false
  inline ::StringW GetBlendShapeName(int32_t shapeIndex);

  /// @brief Method GetBlendShapeName_Injected, addr 0x6f3d280, size 0x54, virtual false, abstract: false, final false
  static inline void GetBlendShapeName_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeOffset", HasExplicitThis = true)]
  /// @brief Method GetBlendShapeOffsetInternal, addr 0x6f3dbb4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::BlendShape GetBlendShapeOffsetInternal(int32_t index);

  /// @brief Method GetBlendShapeOffsetInternal_Injected, addr 0x6f3dc64, size 0x54, virtual false, abstract: false, final false
  static inline void GetBlendShapeOffsetInternal_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::BlendShape> ret);

  /// @brief Method GetBoneWeightBuffer, addr 0x6f44cc4, size 0x28c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBuffer(::UnityEngine::SkinWeights layout);

  /// [FreeFunction(Name = "MeshScripting::GetBoneWeightBufferPtr", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBoneWeightBufferImpl, addr 0x6f3cad0, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBufferImpl(int32_t bonesPerVertex);

  /// @brief Method GetBoneWeightBufferImpl_Injected, addr 0x6f3cb78, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBoneWeightBufferImpl_Injected(::System::IntPtr _unity_self, int32_t bonesPerVertex);

  /// [NativeMethod("GetBoneWeightBufferDimension")]
  /// @brief Method GetBoneWeightBufferLayoutInternal, addr 0x6f3e514, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetBoneWeightBufferLayoutInternal();

  /// @brief Method GetBoneWeightBufferLayoutInternal_Injected, addr 0x6f3e594, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetBoneWeightBufferLayoutInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetBoneWeights, addr 0x6f49204, size 0x104, virtual false, abstract: false, final false
  inline void GetBoneWeights(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>* boneWeights);

  /// [FreeFunction(Name = "MeshScripting::GetBoneWeights", HasExplicitThis = true)]
  /// @brief Method GetBoneWeightsImpl, addr 0x6f3dd74, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::BoneWeight> GetBoneWeightsImpl();

  /// @brief Method GetBoneWeightsImpl_Injected, addr 0x6f3ded4, size 0x44, virtual false, abstract: false, final false
  static inline void GetBoneWeightsImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(Name = "MeshScripting::ExtractBoneWeightsIntoArray", HasExplicitThis = true)]
  /// @brief Method GetBoneWeightsNonAllocImpl, addr 0x6f3ecd0, size 0x15c, virtual false, abstract: false, final false
  inline void GetBoneWeightsNonAllocImpl(::ArrayW<::UnityEngine::BoneWeight> values);

  /// @brief Method GetBoneWeightsNonAllocImpl_Injected, addr 0x6f3ee2c, size 0x44, virtual false, abstract: false, final false
  static inline void GetBoneWeightsNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values);

  /// @brief Method GetBonesPerVertex, addr 0x6f3e368, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetBonesPerVertex();

  /// [FreeFunction(Name = "MeshScripting::GetBonesPerVertexArray", HasExplicitThis = true)]
  /// @brief Method GetBonesPerVertexArray, addr 0x6f3e458, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetBonesPerVertexArray();

  /// @brief Method GetBonesPerVertexArray_Injected, addr 0x6f3e60c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBonesPerVertexArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetColors, addr 0x6f42ee8, size 0xd4, virtual false, abstract: false, final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors);

  /// @brief Method GetColors, addr 0x6f42ba8, size 0xd0, virtual false, abstract: false, final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* colors);

  /// @brief Method GetIndexBuffer, addr 0x6f44c24, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBuffer();

  /// [FreeFunction(Name = "MeshScripting::GetIndexBufferPtr", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetIndexBufferImpl, addr 0x6f3ca00, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBufferImpl();

  /// @brief Method GetIndexBufferImpl_Injected, addr 0x6f3ca94, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetIndexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetIndexCount, addr 0x6f463bc, size 0x80, virtual false, abstract: false, final false
  inline uint32_t GetIndexCount(int32_t submesh);

  /// @brief Method GetIndexCount, addr 0x6f45f70, size 0x12c, virtual false, abstract: false, final false
  inline uint32_t GetIndexCount(int32_t submesh, int32_t meshLod);

  /// [FreeFunction(Name = "MeshScripting::GetIndexCount", HasExplicitThis = true)]
  /// @brief Method GetIndexCountImpl, addr 0x6f3aa98, size 0x98, virtual false, abstract: false, final false
  inline uint32_t GetIndexCountImpl(int32_t submesh, int32_t meshlod);

  /// @brief Method GetIndexCountImpl_Injected, addr 0x6f3ab30, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t GetIndexCountImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, int32_t meshlod);

  /// @brief Method GetIndexStart, addr 0x6f46210, size 0x80, virtual false, abstract: false, final false
  inline uint32_t GetIndexStart(int32_t submesh);

  /// @brief Method GetIndexStart, addr 0x6f46290, size 0x12c, virtual false, abstract: false, final false
  inline uint32_t GetIndexStart(int32_t submesh, int32_t meshLod);

  /// [FreeFunction(Name = "MeshScripting::GetIndexStart", HasExplicitThis = true)]
  /// @brief Method GetIndexStartImpl, addr 0x6f3a9ac, size 0x98, virtual false, abstract: false, final false
  inline uint32_t GetIndexStartImpl(int32_t submesh, int32_t meshlod);

  /// @brief Method GetIndexStartImpl_Injected, addr 0x6f3aa44, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t GetIndexStartImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, int32_t meshlod);

  /// [ExcludeFromDocs]
  /// @brief Method GetIndices, addr 0x6f45bf0, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndices(int32_t submesh);

  /// @brief Method GetIndices, addr 0x6f45d3c, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndices(int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x6f45bfc, size 0x140, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndices(int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// [ExcludeFromDocs]
  /// @brief Method GetIndices, addr 0x6f45d48, size 0xc, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh);

  /// @brief Method GetIndices, addr 0x6f45f64, size 0xc, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x6f45d54, size 0x210, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x6f4609c, size 0xc, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x6f460a8, size 0x168, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// [FreeFunction(Name = "MeshScripting::GetIndices", HasExplicitThis = true)]
  /// @brief Method GetIndicesImpl, addr 0x6f3af38, size 0x188, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndicesImpl(int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// @brief Method GetIndicesImpl_Injected, addr 0x6f3b0c0, size 0x6c, virtual false, abstract: false, final false
  static inline void GetIndicesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, bool applyBaseVertex, int32_t meshlod, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(Name = "MeshScripting::ExtractIndicesToArray", HasExplicitThis = true)]
  /// @brief Method GetIndicesNonAllocImpl, addr 0x6f3b814, size 0x17c, virtual false, abstract: false, final false
  inline void GetIndicesNonAllocImpl(::ArrayW<int32_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// [FreeFunction(Name = "MeshScripting::ExtractIndicesToArray16", HasExplicitThis = true)]
  /// @brief Method GetIndicesNonAllocImpl16, addr 0x6f3b9fc, size 0x17c, virtual false, abstract: false, final false
  inline void GetIndicesNonAllocImpl16(::ArrayW<uint16_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// @brief Method GetIndicesNonAllocImpl16_Injected, addr 0x6f3bb78, size 0x6c, virtual false, abstract: false, final false
  static inline void GetIndicesNonAllocImpl16_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                       int32_t meshlod);

  /// @brief Method GetIndicesNonAllocImpl_Injected, addr 0x6f3b990, size 0x6c, virtual false, abstract: false, final false
  static inline void GetIndicesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                     int32_t meshlod);

  /// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim);

  /// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim,
                                ::UnityEngine::Rendering::VertexAttributeFormat channelType);

  /// [FreeFunction("MeshScripting::GetLod", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetLod, addr 0x6f402b8, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshLodRange GetLod(int32_t subMeshIndex, int32_t levelIndex);

  /// [FreeFunction("MeshScripting::GetLodCount", HasExplicitThis = true)]
  /// @brief Method GetLodCount, addr 0x6f40120, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetLodCount();

  /// @brief Method GetLodCount_Injected, addr 0x6f401a0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetLodCount_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("MeshScripting::GetLodSelectionCurve", HasExplicitThis = true)]
  /// @brief Method GetLodSelectionCurve, addr 0x6f401dc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh_LodSelectionCurve GetLodSelectionCurve();

  /// @brief Method GetLodSelectionCurve_Injected, addr 0x6f40274, size 0x44, virtual false, abstract: false, final false
  static inline void GetLodSelectionCurve_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve> ret);

  /// @brief Method GetLod_Injected, addr 0x6f40368, size 0x5c, virtual false, abstract: false, final false
  static inline void GetLod_Injected(::System::IntPtr _unity_self, int32_t subMeshIndex, int32_t levelIndex, ::by_ref<::UnityEngine::MeshLodRange> ret);

  /// @brief Method GetLods, addr 0x6f48fd8, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::MeshLodRange> GetLods(int32_t submesh);

  /// @brief Method GetLods, addr 0x6f49000, size 0x10c, virtual false, abstract: false, final false
  inline void GetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>* levels, int32_t submesh);

  /// [FreeFunction("MeshScripting::GetLods", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetLodsAlloc, addr 0x6f3fda8, size 0x16c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::MeshLodRange> GetLodsAlloc(int32_t subMeshIndex);

  /// @brief Method GetLodsAlloc_Injected, addr 0x6f3ff14, size 0x54, virtual false, abstract: false, final false
  static inline void GetLodsAlloc_Injected(::System::IntPtr _unity_self, int32_t subMeshIndex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(Name = "MeshScripting::GetLodsNonAlloc", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetLodsNonAlloc, addr 0x6f3ff68, size 0x164, virtual false, abstract: false, final false
  inline void GetLodsNonAlloc(::ArrayW<::UnityEngine::MeshLodRange> levels, int32_t subMeshIndex);

  /// @brief Method GetLodsNonAlloc_Injected, addr 0x6f400cc, size 0x54, virtual false, abstract: false, final false
  static inline void GetLodsNonAlloc_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> levels, int32_t subMeshIndex);

  /// [FreeFunction(Name = "MeshScripting::GetNativeIndexBufferPtr", HasExplicitThis = true)]
  /// @brief Method GetNativeIndexBufferPtr, addr 0x6f3c858, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeIndexBufferPtr();

  /// @brief Method GetNativeIndexBufferPtr_Injected, addr 0x6f3c8d8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetNativeIndexBufferPtr_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::GetNativeVertexBufferPtr", HasExplicitThis = true)]
  /// [NativeThrows]
  /// @brief Method GetNativeVertexBufferPtr, addr 0x6f3c784, size 0x90, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeVertexBufferPtr(int32_t index);

  /// @brief Method GetNativeVertexBufferPtr_Injected, addr 0x6f3c814, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetNativeVertexBufferPtr_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetNormals, addr 0x6f42528, size 0xd0, virtual false, abstract: false, final false
  inline void GetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals);

  /// [FreeFunction("MeshScripting::GetSubMesh", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetSubMesh, addr 0x6f3f458, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t index);

  /// @brief Method GetSubMesh_Injected, addr 0x6f3f518, size 0x54, virtual false, abstract: false, final false
  static inline void GetSubMesh_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor> ret);

  /// @brief Method GetTangents, addr 0x6f42868, size 0xd0, virtual false, abstract: false, final false
  inline void GetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method GetTopology, addr 0x6f49b0c, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology GetTopology(int32_t submesh);

  /// [FreeFunction(Name = "MeshScripting::GetPrimitiveType", HasExplicitThis = true)]
  /// @brief Method GetTopologyImpl, addr 0x6f40b28, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology GetTopologyImpl(int32_t submesh);

  /// @brief Method GetTopologyImpl_Injected, addr 0x6f40bb8, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::MeshTopology GetTopologyImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetTotalIndexCount, addr 0x6f39a18, size 0x80, virtual false, abstract: false, final false
  inline uint32_t GetTotalIndexCount();

  /// @brief Method GetTotalIndexCount_Injected, addr 0x6f39a98, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetTotalIndexCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetTriangles, addr 0x6f45654, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTriangles(int32_t submesh);

  /// @brief Method GetTriangles, addr 0x6f45660, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTriangles(int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6f4566c, size 0x140, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTriangles(int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6f457ac, size 0xc, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// @brief Method GetTriangles, addr 0x6f459c8, size 0xc, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6f457b8, size 0x210, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6f459d4, size 0xc, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6f459e0, size 0x210, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// [FreeFunction(Name = "MeshScripting::GetTrianglesCount", HasExplicitThis = true)]
  /// @brief Method GetTrianglesCountImpl, addr 0x6f3ab84, size 0x98, virtual false, abstract: false, final false
  inline uint32_t GetTrianglesCountImpl(int32_t submesh, int32_t meshlod);

  /// @brief Method GetTrianglesCountImpl_Injected, addr 0x6f3ac1c, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t GetTrianglesCountImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, int32_t meshlod);

  /// [FreeFunction(Name = "MeshScripting::GetTriangles", HasExplicitThis = true)]
  /// @brief Method GetTrianglesImpl, addr 0x6f3ad44, size 0x188, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTrianglesImpl(int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// @brief Method GetTrianglesImpl_Injected, addr 0x6f3aecc, size 0x6c, virtual false, abstract: false, final false
  static inline void GetTrianglesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, bool applyBaseVertex, int32_t meshlod, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(Name = "MeshScripting::ExtractTrianglesToArray", HasExplicitThis = true)]
  /// @brief Method GetTrianglesNonAllocImpl, addr 0x6f3b444, size 0x17c, virtual false, abstract: false, final false
  inline void GetTrianglesNonAllocImpl(::ArrayW<int32_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// [FreeFunction(Name = "MeshScripting::ExtractTrianglesToArray16", HasExplicitThis = true)]
  /// @brief Method GetTrianglesNonAllocImpl16, addr 0x6f3b62c, size 0x17c, virtual false, abstract: false, final false
  inline void GetTrianglesNonAllocImpl16(::ArrayW<uint16_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// @brief Method GetTrianglesNonAllocImpl16_Injected, addr 0x6f3b7a8, size 0x6c, virtual false, abstract: false, final false
  static inline void GetTrianglesNonAllocImpl16_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                         int32_t meshlod);

  /// @brief Method GetTrianglesNonAllocImpl_Injected, addr 0x6f3b5c0, size 0x6c, virtual false, abstract: false, final false
  static inline void GetTrianglesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                       int32_t meshlod);

  /// @brief Method GetUVChannel, addr 0x6f41264, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t uvIndex);

  /// [NativeMethod("GetMeshMetric")]
  /// @brief Method GetUVDistributionMetric, addr 0x6f40dcc, size 0x90, virtual false, abstract: false, final false
  inline float_t GetUVDistributionMetric(int32_t uvSetIndex);

  /// @brief Method GetUVDistributionMetric_Injected, addr 0x6f40e5c, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetUVDistributionMetric_Injected(::System::IntPtr _unity_self, int32_t uvSetIndex);

  /// @brief Method GetUVs, addr 0x6f4384c, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// @brief Method GetUVs, addr 0x6f438b4, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// @brief Method GetUVs, addr 0x6f4391c, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method GetUVsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetUVsImpl(int32_t uvIndex, ::System::Collections::Generic::List_1<T>* uvs, int32_t dim);

  /// [FreeFunction(Name = "MeshScripting::GetVertexAttributeByIndex", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetVertexAttribute, addr 0x6f3a8b0, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeDescriptor GetVertexAttribute(int32_t index);

  /// [FreeFunction(Name = "MeshScripting::GetVertexAttributesCount", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributeCountImpl, addr 0x6f3a7f4, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeCountImpl();

  /// @brief Method GetVertexAttributeCountImpl_Injected, addr 0x6f3a874, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeCountImpl_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::GetChannelDimension", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributeDimension, addr 0x6f3bd8c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeDimension_Injected, addr 0x6f3be1c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeDimension_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// [FreeFunction(Name = "MeshScripting::GetChannelFormat", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributeFormat, addr 0x6f3be60, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeFormat_Injected, addr 0x6f3bef0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// [FreeFunction(Name = "MeshScripting::GetChannelOffset", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributeOffset, addr 0x6f3c008, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeOffset_Injected, addr 0x6f3c098, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeOffset_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// [FreeFunction(Name = "MeshScripting::GetChannelStream", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributeStream, addr 0x6f3bf34, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeStream_Injected, addr 0x6f3bfc4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeStream_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttribute_Injected, addr 0x6f3a958, size 0x54, virtual false, abstract: false, final false
  static inline void GetVertexAttribute_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::VertexAttributeDescriptor> ret);

  /// @brief Method GetVertexAttributes, addr 0x6f43988, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> GetVertexAttributes();

  /// @brief Method GetVertexAttributes, addr 0x6f439f8, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributes(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method GetVertexAttributes, addr 0x6f439fc, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// [FreeFunction(Name = "MeshScripting::GetVertexAttributesAlloc", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributesAlloc, addr 0x6f3a384, size 0x80, virtual false, abstract: false, final false
  inline ::System::Array* GetVertexAttributesAlloc();

  /// @brief Method GetVertexAttributesAlloc_Injected, addr 0x6f3a404, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Array* GetVertexAttributesAlloc_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::GetVertexAttributesArray", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributesArray, addr 0x6f3a440, size 0x120, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributesArray(/* [NotNull] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method GetVertexAttributesArray_Injected, addr 0x6f3a560, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributesArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// [FreeFunction(Name = "MeshScripting::GetVertexAttributesList", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributesList, addr 0x6f3a5a4, size 0x20c, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributesList(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// @brief Method GetVertexAttributesList_Injected, addr 0x6f3a7b0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributesList_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> attributes);

  /// @brief Method GetVertexBuffer, addr 0x6f44b74, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer(int32_t index);

  /// [FreeFunction(Name = "MeshScripting::GetVertexBufferPtr", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetVertexBufferImpl, addr 0x6f3c914, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl(int32_t index);

  /// @brief Method GetVertexBufferImpl_Injected, addr 0x6f3c9bc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexBufferImpl_Injected(::System::IntPtr _unity_self, int32_t index);

  /// [FreeFunction(Name = "MeshScripting::GetVertexBufferStride", HasExplicitThis = true)]
  /// @brief Method GetVertexBufferStride, addr 0x6f3c6b0, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexBufferStride(int32_t stream);

  /// @brief Method GetVertexBufferStride_Injected, addr 0x6f3c740, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexBufferStride_Injected(::System::IntPtr _unity_self, int32_t stream);

  /// @brief Method GetVertices, addr 0x6f421e8, size 0xd0, virtual false, abstract: false, final false
  inline void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices);

  /// [NativeMethod("HasBoneWeights")]
  /// @brief Method HasBoneWeights, addr 0x6f3dcb8, size 0x80, virtual false, abstract: false, final false
  inline bool HasBoneWeights();

  /// @brief Method HasBoneWeights_Injected, addr 0x6f3dd38, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasBoneWeights_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::HasChannel", HasExplicitThis = true)]
  /// @brief Method HasVertexAttribute, addr 0x6f3bcb8, size 0x90, virtual false, abstract: false, final false
  inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method HasVertexAttribute_Injected, addr 0x6f3bd48, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVertexAttribute_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// [FreeFunction(Name = "MeshScripting::SetBoneWeights", HasExplicitThis = true)]
  /// @brief Method InternalSetBoneWeights, addr 0x6f3e0e8, size 0xb0, virtual false, abstract: false, final false
  inline void InternalSetBoneWeights(::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights, int32_t weightsSize);

  /// @brief Method InternalSetBoneWeights_Injected, addr 0x6f3e198, size 0x6c, virtual false, abstract: false, final false
  static inline void InternalSetBoneWeights_Injected(::System::IntPtr _unity_self, ::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights, int32_t weightsSize);

  /// [FreeFunction(Name = "MeshScripting::InternalSetIndexBufferData", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method InternalSetIndexBufferData, addr 0x6f39bc0, size 0xc8, virtual false, abstract: false, final false
  inline void InternalSetIndexBufferData(::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "MeshScripting::InternalSetIndexBufferDataFromArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method InternalSetIndexBufferDataFromArray, addr 0x6f39d0c, size 0xc8, virtual false, abstract: false, final false
  inline void InternalSetIndexBufferDataFromArray(::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferDataFromArray_Injected, addr 0x6f39dd4, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetIndexBufferDataFromArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferData_Injected, addr 0x6f39c88, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetIndexBufferData_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                         ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "MeshScripting::InternalSetVertexBufferData", HasExplicitThis = true)]
  /// @brief Method InternalSetVertexBufferData, addr 0x6f3a0bc, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetVertexBufferData(int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                          ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "MeshScripting::InternalSetVertexBufferDataFromArray", HasExplicitThis = true)]
  /// @brief Method InternalSetVertexBufferDataFromArray, addr 0x6f3a220, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetVertexBufferDataFromArray(int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferDataFromArray_Injected, addr 0x6f3a2f8, size 0x8c, virtual false, abstract: false, final false
  static inline void InternalSetVertexBufferDataFromArray_Injected(::System::IntPtr _unity_self, int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                                   int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferData_Injected, addr 0x6f3a194, size 0x8c, virtual false, abstract: false, final false
  static inline void InternalSetVertexBufferData_Injected(::System::IntPtr _unity_self, int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                          int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::CreateMesh")]
  /// @brief Method Internal_Create, addr 0x6f39678, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Mesh* mono);

  /// @brief Method MarkDynamic, addr 0x6f49810, size 0x24, virtual false, abstract: false, final false
  inline void MarkDynamic();

  /// [NativeMethod("MarkDynamic")]
  /// @brief Method MarkDynamicImpl, addr 0x6f408dc, size 0x80, virtual false, abstract: false, final false
  inline void MarkDynamicImpl();

  /// @brief Method MarkDynamicImpl_Injected, addr 0x6f4095c, size 0x3c, virtual false, abstract: false, final false
  static inline void MarkDynamicImpl_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("MarkModified")]
  /// @brief Method MarkModified, addr 0x6f40998, size 0x80, virtual false, abstract: false, final false
  inline void MarkModified();

  /// @brief Method MarkModified_Injected, addr 0x6f40a18, size 0x3c, virtual false, abstract: false, final false
  static inline void MarkModified_Injected(::System::IntPtr _unity_self);

  /// @brief [RequiredByNativeCode]
  static inline ::UnityEngine::Mesh* New_ctor();

  /// @brief Method Optimize, addr 0x6f4986c, size 0xe0, virtual false, abstract: false, final false
  inline void Optimize();

  /// [NativeMethod("Optimize")]
  /// @brief Method OptimizeImpl, addr 0x6f41030, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeImpl();

  /// @brief Method OptimizeImpl_Injected, addr 0x6f410b0, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method OptimizeIndexBuffers, addr 0x6f4994c, size 0xe0, virtual false, abstract: false, final false
  inline void OptimizeIndexBuffers();

  /// [NativeMethod("OptimizeIndexBuffers")]
  /// @brief Method OptimizeIndexBuffersImpl, addr 0x6f410ec, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeIndexBuffersImpl();

  /// @brief Method OptimizeIndexBuffersImpl_Injected, addr 0x6f4116c, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeIndexBuffersImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method OptimizeReorderVertexBuffer, addr 0x6f49a2c, size 0xe0, virtual false, abstract: false, final false
  inline void OptimizeReorderVertexBuffer();

  /// [NativeMethod("OptimizeReorderVertexBuffer")]
  /// @brief Method OptimizeReorderVertexBufferImpl, addr 0x6f411a8, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeReorderVertexBufferImpl();

  /// @brief Method OptimizeReorderVertexBufferImpl_Injected, addr 0x6f41228, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeReorderVertexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::PrintErrorCantAccessChannel", HasExplicitThis = true)]
  /// @brief Method PrintErrorCantAccessChannel, addr 0x6f3bbe4, size 0x90, virtual false, abstract: false, final false
  inline void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute ch);

  /// @brief Method PrintErrorCantAccessChannel_Injected, addr 0x6f3bc74, size 0x44, virtual false, abstract: false, final false
  static inline void PrintErrorCantAccessChannel_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute ch);

  /// @brief Method PrintErrorCantAccessIndices, addr 0x6f45280, size 0xc0, virtual false, abstract: false, final false
  inline void PrintErrorCantAccessIndices();

  /// [ExcludeFromDocs]
  /// @brief Method RecalculateBounds, addr 0x6f49320, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateBounds();

  /// @brief Method RecalculateBounds, addr 0x6f49328, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateBounds(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeMethod("RecalculateBounds")]
  /// @brief Method RecalculateBoundsImpl, addr 0x6f40660, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateBoundsImpl_Injected, addr 0x6f406f0, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateBoundsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method RecalculateNormals, addr 0x6f4941c, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateNormals();

  /// @brief Method RecalculateNormals, addr 0x6f49424, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateNormals(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeMethod("RecalculateNormals")]
  /// @brief Method RecalculateNormalsImpl, addr 0x6f40734, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormalsImpl_Injected, addr 0x6f407c4, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateNormalsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method RecalculateTangents, addr 0x6f49518, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateTangents();

  /// @brief Method RecalculateTangents, addr 0x6f49520, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateTangents(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeMethod("RecalculateTangents")]
  /// @brief Method RecalculateTangentsImpl, addr 0x6f40808, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangentsImpl_Injected, addr 0x6f40898, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateTangentsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateUVDistributionMetric, addr 0x6f49614, size 0x108, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetric(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// [NativeMethod("RecalculateMeshMetric")]
  /// @brief Method RecalculateUVDistributionMetricImpl, addr 0x6f40bfc, size 0xa0, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetricImpl(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricImpl_Injected, addr 0x6f40c9c, size 0x54, virtual false, abstract: false, final false
  static inline void RecalculateUVDistributionMetricImpl_Injected(::System::IntPtr _unity_self, int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetrics, addr 0x6f4971c, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetrics(float_t uvAreaThreshold);

  /// [NativeMethod("RecalculateMeshMetrics")]
  /// @brief Method RecalculateUVDistributionMetricsImpl, addr 0x6f40cf0, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetricsImpl(float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricsImpl_Injected, addr 0x6f40d80, size 0x4c, virtual false, abstract: false, final false
  static inline void RecalculateUVDistributionMetricsImpl_Injected(::System::IntPtr _unity_self, float_t uvAreaThreshold);

  /// [FreeFunction("MeshScripting::SetAllSubMeshesAtOnceFromArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetAllSubMeshesAtOnceFromArray, addr 0x6f3f56c, size 0x124, virtual false, abstract: false, final false
  inline void SetAllSubMeshesAtOnceFromArray(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromArray_Injected, addr 0x6f3f690, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAllSubMeshesAtOnceFromArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> desc, int32_t start, int32_t count,
                                                             ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetAllSubMeshesAtOnceFromNativeArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetAllSubMeshesAtOnceFromNativeArray, addr 0x6f3f6fc, size 0xb0, virtual false, abstract: false, final false
  inline void SetAllSubMeshesAtOnceFromNativeArray(::System::IntPtr desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromNativeArray_Injected, addr 0x6f3f7ac, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAllSubMeshesAtOnceFromNativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::ArrayW<T> values,
                                 ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::ArrayW<T> values, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "SetMeshComponentFromArrayFromScript", HasExplicitThis = true)]
  /// @brief Method SetArrayForChannelImpl, addr 0x6f3c0dc, size 0xe0, virtual false, abstract: false, final false
  inline void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values, int32_t arraySize,
                                     int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannelImpl_Injected, addr 0x6f3c1bc, size 0x9c, virtual false, abstract: false, final false
  static inline void SetArrayForChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                     int32_t dim, ::System::Array* values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetBindposes, addr 0x6f3ead4, size 0xd4, virtual false, abstract: false, final false
  inline void SetBindposes(::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> poses);

  /// [NativeMethod("SetBindposes")]
  /// @brief Method SetBindposesFromScript_NativeArray, addr 0x6f3eba8, size 0x98, virtual false, abstract: false, final false
  inline void SetBindposesFromScript_NativeArray(::System::IntPtr posesPtr, int32_t posesCount);

  /// @brief Method SetBindposesFromScript_NativeArray_Injected, addr 0x6f3ec40, size 0x54, virtual false, abstract: false, final false
  static inline void SetBindposesFromScript_NativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr posesPtr, int32_t posesCount);

  /// @brief Method SetBoneWeights, addr 0x6f3e060, size 0x88, virtual false, abstract: false, final false
  inline void SetBoneWeights(::Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> weights);

  /// [FreeFunction(Name = "MeshScripting::SetBoneWeights", HasExplicitThis = true)]
  /// @brief Method SetBoneWeightsImpl, addr 0x6f3df18, size 0x104, virtual false, abstract: false, final false
  inline void SetBoneWeightsImpl(::ArrayW<::UnityEngine::BoneWeight> weights);

  /// @brief Method SetBoneWeightsImpl_Injected, addr 0x6f3e01c, size 0x44, virtual false, abstract: false, final false
  static inline void SetBoneWeightsImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> weights);

  /// @brief Method SetColors, addr 0x6f430e0, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32> inColors);

  /// [ExcludeFromDocs]
  /// @brief Method SetColors, addr 0x6f43158, size 0x74, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6f431cc, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32> inColors, int32_t start, int32_t length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x6f42d84, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color> inColors);

  /// [ExcludeFromDocs]
  /// @brief Method SetColors, addr 0x6f42dfc, size 0x74, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6f42e70, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color> inColors, int32_t start, int32_t length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x6f42fbc, size 0x84, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors);

  /// [ExcludeFromDocs]
  /// @brief Method SetColors, addr 0x6f43040, size 0x8, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6f43048, size 0x98, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length,
                        /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x6f42c78, size 0x84, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors);

  /// [ExcludeFromDocs]
  /// @brief Method SetColors, addr 0x6f42cfc, size 0x8, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6f42d04, size 0x80, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length,
                        /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors);

  /// [ExcludeFromDocs]
  /// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length,
                        /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetIndexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetIndexBufferData(::System::Collections::Generic::List_1<T>* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetIndexBufferData(::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "MeshScripting::SetIndexBufferParams", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetIndexBufferParams, addr 0x6f39ad4, size 0x98, virtual false, abstract: false, final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndexBufferParams_Injected, addr 0x6f39b6c, size 0x54, virtual false, abstract: false, final false
  static inline void SetIndexBufferParams_Injected(::System::IntPtr _unity_self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndices, addr 0x6f471c4, size 0x28, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f47274, size 0xbc, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds,
                         int32_t baseVertex);

  /// [ExcludeFromDocs]
  /// @brief Method SetIndices, addr 0x6f47054, size 0x74, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh);

  /// [ExcludeFromDocs]
  /// @brief Method SetIndices, addr 0x6f4714c, size 0x78, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds);

  /// @brief Method SetIndices, addr 0x6f470c8, size 0x84, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, /* [DefaultValue("true")] */ bool calculateBounds,
                         /* [DefaultValue("0")] */ int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f471ec, size 0x88, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f473b4, size 0x28, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f47464, size 0xbc, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f47330, size 0x84, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f473dc, size 0x88, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f475e0, size 0x28, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f476cc, size 0x134, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f47520, size 0xc0, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f47608, size 0xc4, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f478c0, size 0x28, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f479ac, size 0x134, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f47800, size 0xc0, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f478e8, size 0xc4, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// [FreeFunction(Name = "SetMeshIndicesFromScript", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetIndicesImpl, addr 0x6f3b12c, size 0xe8, virtual false, abstract: false, final false
  inline void SetIndicesImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* indices, int32_t arrayStart,
                             int32_t arraySize, bool calculateBounds, int32_t baseVertex, int32_t meshlod);

  /// @brief Method SetIndicesImpl_Injected, addr 0x6f3b214, size 0xa4, virtual false, abstract: false, final false
  static inline void SetIndicesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat,
                                             ::System::Array* indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex, int32_t meshlod);

  /// [FreeFunction(Name = "SetMeshIndicesFromNativeArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetIndicesNativeArrayImpl, addr 0x6f3b2b8, size 0xe8, virtual false, abstract: false, final false
  inline void SetIndicesNativeArrayImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::IntPtr indices, int32_t arrayStart,
                                        int32_t arraySize, bool calculateBounds, int32_t baseVertex, int32_t meshlod);

  /// @brief Method SetIndicesNativeArrayImpl_Injected, addr 0x6f3b3a0, size 0xa4, virtual false, abstract: false, final false
  static inline void SetIndicesNativeArrayImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat,
                                                        ::System::IntPtr indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex, int32_t meshlod);

  /// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
                                ::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length,
                                ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLod, addr 0x6f48114, size 0x60, virtual false, abstract: false, final false
  inline void SetLod(int32_t submesh, int32_t level, ::UnityEngine::MeshLodRange levelRange, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetLodCount", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLodCount, addr 0x6f3f818, size 0x90, virtual false, abstract: false, final false
  inline void SetLodCount(int32_t numLevels);

  /// @brief Method SetLodCount_Injected, addr 0x6f3f8a8, size 0x44, virtual false, abstract: false, final false
  static inline void SetLodCount_Injected(::System::IntPtr _unity_self, int32_t numLevels);

  /// [FreeFunction("MeshScripting::SetLod", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLodImpl, addr 0x6f3fc88, size 0xb4, virtual false, abstract: false, final false
  inline void SetLodImpl(int32_t subMeshIndex, int32_t level, ::UnityEngine::MeshLodRange levelRange, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLodImpl_Injected, addr 0x6f3fd3c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetLodImpl_Injected(::System::IntPtr _unity_self, int32_t subMeshIndex, int32_t level, ::by_ref<::UnityEngine::MeshLodRange const> levelRange,
                                         ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetLodSelectionCurve", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLodSelectionCurve, addr 0x6f3f8ec, size 0x94, virtual false, abstract: false, final false
  inline void SetLodSelectionCurve(::UnityEngine::Mesh_LodSelectionCurve lodSelectionCurve);

  /// @brief Method SetLodSelectionCurve_Injected, addr 0x6f3f980, size 0x44, virtual false, abstract: false, final false
  static inline void SetLodSelectionCurve_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve const> lodSelectionCurve);

  /// @brief Method SetLods, addr 0x6f48350, size 0x2e8, virtual false, abstract: false, final false
  inline void SetLods(::ArrayW<::UnityEngine::MeshLodRange> levels, int32_t start, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLods, addr 0x6f48980, size 0x180, virtual false, abstract: false, final false
  inline void SetLods(::ArrayW<::UnityEngine::MeshLodRange> levels, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLods, addr 0x6f48638, size 0x348, virtual false, abstract: false, final false
  inline void SetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>* levels, int32_t start, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLods, addr 0x6f48174, size 0x1dc, virtual false, abstract: false, final false
  inline void SetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>* levels, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLods, addr 0x6f48cb8, size 0x320, virtual false, abstract: false, final false
  inline void SetLods(::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange> levels, int32_t start, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLods, addr 0x6f48b00, size 0x1b8, virtual false, abstract: false, final false
  inline void SetLods(::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange> levels, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetLods", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLodsFromArray, addr 0x6f3f9c4, size 0x134, virtual false, abstract: false, final false
  inline void SetLodsFromArray(::ArrayW<::UnityEngine::MeshLodRange> levelRanges, int32_t start, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLodsFromArray_Injected, addr 0x6f3faf8, size 0x74, virtual false, abstract: false, final false
  static inline void SetLodsFromArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> levelRanges, int32_t start, int32_t count, int32_t submesh,
                                               ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetLodsFromNativeArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLodsFromNativeArray, addr 0x6f3fb6c, size 0xb0, virtual false, abstract: false, final false
  inline void SetLodsFromNativeArray(::System::IntPtr lodLevels, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLodsFromNativeArray_Injected, addr 0x6f3fc1c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetLodsFromNativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr lodLevels, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "SetMeshComponentFromNativeArrayFromScript", HasExplicitThis = true)]
  /// @brief Method SetNativeArrayForChannelImpl, addr 0x6f3c258, size 0xe0, virtual false, abstract: false, final false
  inline void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values,
                                           int32_t arraySize, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNativeArrayForChannelImpl_Injected, addr 0x6f3c338, size 0x9c, virtual false, abstract: false, final false
  static inline void SetNativeArrayForChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                           int32_t dim, ::System::IntPtr values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount,
                                                           ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x6f42704, size 0x78, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals);

  /// [ExcludeFromDocs]
  /// @brief Method SetNormals, addr 0x6f4277c, size 0x74, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x6f427f0, size 0x78, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals, int32_t start, int32_t length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x6f425f8, size 0x84, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals);

  /// [ExcludeFromDocs]
  /// @brief Method SetNormals, addr 0x6f4267c, size 0x8, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x6f42684, size 0x80, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length,
                         /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals);

  /// [ExcludeFromDocs]
  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length,
                         /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSizedArrayForChannel, addr 0x6f41374, size 0x21c, virtual false, abstract: false, final false
  inline void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values,
                                      int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSizedNativeArrayForChannel, addr 0x6f41590, size 0x218, virtual false, abstract: false, final false
  inline void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values,
                                            int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetSubMesh", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetSubMesh, addr 0x6f3f354, size 0xa8, virtual false, abstract: false, final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMesh_Injected, addr 0x6f3f3fc, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMesh_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const> desc,
                                         ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6f47dc8, size 0x28, virtual false, abstract: false, final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6f47ae0, size 0x2e8, virtual false, abstract: false, final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6f47e88, size 0xa8, virtual false, abstract: false, final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6f47df0, size 0x98, virtual false, abstract: false, final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x6f42a44, size 0x78, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents);

  /// [ExcludeFromDocs]
  /// @brief Method SetTangents, addr 0x6f42abc, size 0x74, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x6f42b30, size 0x78, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents, int32_t start, int32_t length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x6f42938, size 0x84, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents);

  /// [ExcludeFromDocs]
  /// @brief Method SetTangents, addr 0x6f429bc, size 0x8, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x6f429c4, size 0x80, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length,
                          /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents);

  /// [ExcludeFromDocs]
  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length,
                          /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method SetTriangles, addr 0x6f46644, size 0x64, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh);

  /// [ExcludeFromDocs]
  /// @brief Method SetTriangles, addr 0x6f4671c, size 0x70, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles, addr 0x6f466a8, size 0x74, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, /* [DefaultValue("true")] */ bool calculateBounds, /* [DefaultValue("0")] */ int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f467b0, size 0x80, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f4678c, size 0x24, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f46830, size 0xb8, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f468e8, size 0x74, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f46980, size 0x80, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t> triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f4695c, size 0x24, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f46a00, size 0xb8, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// [ExcludeFromDocs]
  /// @brief Method SetTriangles, addr 0x6f46ab8, size 0xc, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// [ExcludeFromDocs]
  /// @brief Method SetTriangles, addr 0x6f46b74, size 0x8, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles, addr 0x6f46ac4, size 0xb0, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, /* [DefaultValue("true")] */ bool calculateBounds,
                           /* [DefaultValue("0")] */ int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f46ba0, size 0xbc, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f46b7c, size 0x24, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f46c5c, size 0x134, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod, bool calculateBounds,
                           int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f46d90, size 0xb0, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f46e64, size 0xbc, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f46e40, size 0x24, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f46f20, size 0x134, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod, bool calculateBounds,
                           int32_t baseVertex);

  /// @brief Method SetTrianglesImpl, addr 0x6f455cc, size 0x88, virtual false, abstract: false, final false
  inline void SetTrianglesImpl(int32_t submesh, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* triangles, int32_t trianglesArrayLength, int32_t start, int32_t length,
                               bool calculateBounds, int32_t baseVertex, int32_t meshLod);

  /// @brief Method SetUVs, addr 0x6f436c0, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f43714, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f43804, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6f4372c, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f43780, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f4381c, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6f43798, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f437ec, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f43834, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6f43244, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f432d0, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f43400, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6f432d8, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f43364, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f43490, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6f4336c, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f433f8, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f43520, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUvsImpl, addr 0x6f435b0, size 0x110, virtual false, abstract: false, final false
  inline void SetUvsImpl(int32_t uvIndex, int32_t dim, ::System::Array* uvs, int32_t arrayStart, int32_t arraySize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUvsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetUvsImpl(int32_t uvIndex, int32_t dim, ::System::Collections::Generic::List_1<T>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetVertexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetVertexBufferData(::System::Collections::Generic::List_1<T>* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream,
                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetVertexBufferData(::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream,
                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferParams, addr 0x6f43a00, size 0x4, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParams, addr 0x6f43a04, size 0x6c, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// [FreeFunction(Name = "MeshScripting::SetVertexBufferParamsFromArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetVertexBufferParamsFromArray, addr 0x6f39f5c, size 0x10c, virtual false, abstract: false, final false
  inline void SetVertexBufferParamsFromArray(int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0x6f3a068, size 0x54, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr _unity_self, int32_t vertexCount, /* [ParamArray] */ ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// [FreeFunction(Name = "MeshScripting::SetVertexBufferParamsFromPtr", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetVertexBufferParamsFromPtr, addr 0x6f39e58, size 0xa8, virtual false, abstract: false, final false
  inline void SetVertexBufferParamsFromPtr(int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount);

  /// @brief Method SetVertexBufferParamsFromPtr_Injected, addr 0x6f39f00, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromPtr_Injected(::System::IntPtr _unity_self, int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount);

  /// @brief Method SetVertices, addr 0x6f423c4, size 0x78, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices);

  /// [ExcludeFromDocs]
  /// @brief Method SetVertices, addr 0x6f4243c, size 0x74, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x6f424b0, size 0x78, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices, int32_t start, int32_t length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices, addr 0x6f422b8, size 0x84, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices);

  /// [ExcludeFromDocs]
  /// @brief Method SetVertices, addr 0x6f4233c, size 0x8, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x6f42344, size 0x80, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length,
                          /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices);

  /// [ExcludeFromDocs]
  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length,
                          /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method UploadMeshData, addr 0x6f49834, size 0x38, virtual false, abstract: false, final false
  inline void UploadMeshData(bool markNoLongerReadable);

  /// [NativeMethod("UploadMeshData")]
  /// @brief Method UploadMeshDataImpl, addr 0x6f40a54, size 0x90, virtual false, abstract: false, final false
  inline void UploadMeshDataImpl(bool markNoLongerReadable);

  /// @brief Method UploadMeshDataImpl_Injected, addr 0x6f40ae4, size 0x44, virtual false, abstract: false, final false
  static inline void UploadMeshDataImpl_Injected(::System::IntPtr _unity_self, bool markNoLongerReadable);

  /// @brief Method ValidateCanWriteToLods, addr 0x6f480b4, size 0x60, virtual false, abstract: false, final false
  inline void ValidateCanWriteToLods();

  /// @brief Method ValidateLodIndex, addr 0x6f47f30, size 0xbc, virtual false, abstract: false, final false
  inline void ValidateLodIndex(int32_t level);

  /// @brief Method ValidateSubMeshIndex, addr 0x6f47fec, size 0xc8, virtual false, abstract: false, final false
  inline void ValidateSubMeshIndex(int32_t submesh);

  /// [RequiredByNativeCode]
  /// @brief Method .ctor, addr 0x6f396b4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bindposeCount, addr 0x6f3e648, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_bindposeCount();

  /// @brief Method get_bindposeCount_Injected, addr 0x6f3e6c8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_bindposeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bindposes, addr 0x6f3e704, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> get_bindposes();

  /// @brief Method get_bindposes_Injected, addr 0x6f3e864, size 0x44, virtual false, abstract: false, final false
  static inline void get_bindposes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeMethod(Name = "GetBlendShapeChannelCount")]
  /// @brief Method get_blendShapeCount, addr 0x6f3cfc8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_blendShapeCount();

  /// @brief Method get_blendShapeCount_Injected, addr 0x6f3d048, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_blendShapeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_boneWeights, addr 0x6f49308, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::BoneWeight> get_boneWeights();

  /// @brief Method get_bounds, addr 0x6f403c4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x6f40474, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret);

  /// [NativeMethod("CanAccessFromScript")]
  /// @brief Method get_canAccess, addr 0x6f3f0cc, size 0x80, virtual false, abstract: false, final false
  inline bool get_canAccess();

  /// @brief Method get_canAccess_Injected, addr 0x6f3f14c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canAccess_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_colors, addr 0x6f41f64, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> get_colors();

  /// @brief Method get_colors32, addr 0x6f42018, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32> get_colors32();

  /// @brief Method get_indexBufferTarget, addr 0x6f3ce38, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget();

  /// @brief Method get_indexBufferTarget_Injected, addr 0x6f3ceb8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_indexFormat, addr 0x6f39888, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndexFormat get_indexFormat();

  /// @brief Method get_indexFormat_Injected, addr 0x6f39908, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::IndexFormat get_indexFormat_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isLodSelectionActive, addr 0x6f421c8, size 0x18, virtual false, abstract: false, final false
  inline bool get_isLodSelectionActive();

  /// [NativeMethod("GetIsReadable")]
  /// @brief Method get_isReadable, addr 0x6f3f010, size 0x80, virtual false, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x6f3f090, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_lodCount, addr 0x6f420dc, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_lodCount();

  /// @brief Method get_lodSelectionCurve, addr 0x6f421e0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh_LodSelectionCurve get_lodSelectionCurve();

  /// @brief Method get_normals, addr 0x6f4185c, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3> get_normals();

  /// @brief Method get_skinWeightBufferLayout, addr 0x6f49310, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::SkinWeights get_skinWeightBufferLayout();

  /// [NativeMethod(Name = "GetSubMeshCount")]
  /// @brief Method get_subMeshCount, addr 0x6f3f1c4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_subMeshCount();

  /// @brief Method get_subMeshCount_Injected, addr 0x6f3f244, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subMeshCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_tangents, addr 0x6f41910, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> get_tangents();

  /// @brief Method get_triangles, addr 0x6f45498, size 0x7c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> get_triangles();

  /// @brief Method get_uv, addr 0x6f419c4, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv();

  /// @brief Method get_uv2, addr 0x6f41a78, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv2();

  /// @brief Method get_uv3, addr 0x6f41b2c, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv3();

  /// @brief Method get_uv4, addr 0x6f41be0, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv4();

  /// @brief Method get_uv5, addr 0x6f41c94, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv5();

  /// @brief Method get_uv6, addr 0x6f41d48, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv6();

  /// @brief Method get_uv7, addr 0x6f41dfc, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv7();

  /// @brief Method get_uv8, addr 0x6f41eb0, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv8();

  /// @brief Method get_vertexAttributeCount, addr 0x6f43984, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_vertexAttributeCount();

  /// [FreeFunction(Name = "MeshScripting::GetVertexBufferCount", HasExplicitThis = true)]
  /// @brief Method get_vertexBufferCount, addr 0x6f3c5f4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method get_vertexBufferCount_Injected, addr 0x6f3c674, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_vertexBufferCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertexBufferTarget, addr 0x6f3cca8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget();

  /// @brief Method get_vertexBufferTarget_Injected, addr 0x6f3cd28, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("GetVertexCount")]
  /// @brief Method get_vertexCount, addr 0x6f3e3d8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_vertexCount();

  /// @brief Method get_vertexCount_Injected, addr 0x6f3f188, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_vertexCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertices, addr 0x6f417a8, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3> get_vertices();

  /// @brief Method set_bindposes, addr 0x6f3e8a8, size 0x104, virtual false, abstract: false, final false
  inline void set_bindposes(::ArrayW<::UnityEngine::Matrix4x4> value);

  /// @brief Method set_bindposes_Injected, addr 0x6f3e9ac, size 0x44, virtual false, abstract: false, final false
  static inline void set_bindposes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_boneWeights, addr 0x6f4930c, size 0x4, virtual false, abstract: false, final false
  inline void set_boneWeights(::ArrayW<::UnityEngine::BoneWeight> value);

  /// @brief Method set_bounds, addr 0x6f404b8, size 0x90, virtual false, abstract: false, final false
  inline void set_bounds(::UnityEngine::Bounds value);

  /// @brief Method set_bounds_Injected, addr 0x6f40548, size 0x44, virtual false, abstract: false, final false
  static inline void set_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds const> value);

  /// @brief Method set_colors, addr 0x6f41fb4, size 0x64, virtual false, abstract: false, final false
  inline void set_colors(::ArrayW<::UnityEngine::Color> value);

  /// @brief Method set_colors32, addr 0x6f42070, size 0x6c, virtual false, abstract: false, final false
  inline void set_colors32(::ArrayW<::UnityEngine::Color32> value);

  /// @brief Method set_indexBufferTarget, addr 0x6f3cef4, size 0x90, virtual false, abstract: false, final false
  inline void set_indexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_indexBufferTarget_Injected, addr 0x6f3cf84, size 0x44, virtual false, abstract: false, final false
  static inline void set_indexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_indexFormat, addr 0x6f39944, size 0x90, virtual false, abstract: false, final false
  inline void set_indexFormat(::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method set_indexFormat_Injected, addr 0x6f399d4, size 0x44, virtual false, abstract: false, final false
  static inline void set_indexFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method set_lodCount, addr 0x6f420e0, size 0xe8, virtual false, abstract: false, final false
  inline void set_lodCount(int32_t value);

  /// @brief Method set_lodSelectionCurve, addr 0x6f421e4, size 0x4, virtual false, abstract: false, final false
  inline void set_lodSelectionCurve(::UnityEngine::Mesh_LodSelectionCurve value);

  /// @brief Method set_normals, addr 0x6f418ac, size 0x64, virtual false, abstract: false, final false
  inline void set_normals(::ArrayW<::UnityEngine::Vector3> value);

  /// [FreeFunction(Name = "MeshScripting::SetSubMeshCount", HasExplicitThis = true)]
  /// @brief Method set_subMeshCount, addr 0x6f3f280, size 0x90, virtual false, abstract: false, final false
  inline void set_subMeshCount(int32_t value);

  /// @brief Method set_subMeshCount_Injected, addr 0x6f3f310, size 0x44, virtual false, abstract: false, final false
  static inline void set_subMeshCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_tangents, addr 0x6f41960, size 0x64, virtual false, abstract: false, final false
  inline void set_tangents(::ArrayW<::UnityEngine::Vector4> value);

  /// @brief Method set_triangles, addr 0x6f45514, size 0xb8, virtual false, abstract: false, final false
  inline void set_triangles(::ArrayW<int32_t> value);

  /// @brief Method set_uv, addr 0x6f41a14, size 0x64, virtual false, abstract: false, final false
  inline void set_uv(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv2, addr 0x6f41ac8, size 0x64, virtual false, abstract: false, final false
  inline void set_uv2(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv3, addr 0x6f41b7c, size 0x64, virtual false, abstract: false, final false
  inline void set_uv3(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv4, addr 0x6f41c30, size 0x64, virtual false, abstract: false, final false
  inline void set_uv4(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv5, addr 0x6f41ce4, size 0x64, virtual false, abstract: false, final false
  inline void set_uv5(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv6, addr 0x6f41d98, size 0x64, virtual false, abstract: false, final false
  inline void set_uv6(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv7, addr 0x6f41e4c, size 0x64, virtual false, abstract: false, final false
  inline void set_uv7(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv8, addr 0x6f41f00, size 0x64, virtual false, abstract: false, final false
  inline void set_uv8(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_vertexBufferTarget, addr 0x6f3cd64, size 0x90, virtual false, abstract: false, final false
  inline void set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertexBufferTarget_Injected, addr 0x6f3cdf4, size 0x44, virtual false, abstract: false, final false
  static inline void set_vertexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertices, addr 0x6f417f8, size 0x64, virtual false, abstract: false, final false
  inline void set_vertices(::ArrayW<::UnityEngine::Vector3> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mesh(Mesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mesh(Mesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9808 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Mesh) == 0x18, "Size mismatch!");

} // namespace UnityEngine
