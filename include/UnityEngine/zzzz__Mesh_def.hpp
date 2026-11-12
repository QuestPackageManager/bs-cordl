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
  /// @brief Method GetIndexDataPtr, addr 0x6f4ad90, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetIndexDataPtr(::System::IntPtr self);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetIndexDataSize, addr 0x6f4adcc, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t GetIndexDataSize(::System::IntPtr self);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetVertexBufferCount, addr 0x6f4accc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVertexBufferCount(::System::IntPtr self);

  /// @brief Method GetVertexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline ::Unity::Collections::NativeArray_1<T> GetVertexData(/* [DefaultValue("0")] */ int32_t stream);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetVertexDataPtr, addr 0x6f4ad08, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexDataPtr(::System::IntPtr self, int32_t stream);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method GetVertexDataSize, addr 0x6f4ad4c, size 0x44, virtual false, abstract: false, final false
  static inline uint64_t GetVertexDataSize(::System::IntPtr self, int32_t stream);

  /// @brief Method SetIndexBufferParams, addr 0x6f4b0cc, size 0x54, virtual false, abstract: false, final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetIndexBufferParamsImpl, addr 0x6f4af38, size 0x54, virtual false, abstract: false, final false
  static inline void SetIndexBufferParamsImpl(::System::IntPtr self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat indexFormat);

  /// @brief Method SetSubMesh, addr 0x6f4b164, size 0x74, virtual false, abstract: false, final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method SetSubMeshCount, addr 0x6f4af8c, size 0x44, virtual false, abstract: false, final false
  static inline void SetSubMeshCount(::System::IntPtr self, int32_t count);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetSubMeshImpl, addr 0x6f4afd0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMeshImpl(::System::IntPtr self, int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshImpl_Injected, addr 0x6f4b02c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMeshImpl_Injected(::System::IntPtr self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferParams, addr 0x6f4b0c4, size 0x8, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
  /// @brief Method SetVertexBufferParamsFromArray, addr 0x6f4ae08, size 0xdc, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray(::System::IntPtr self, int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0x6f4aee4, size 0x54, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr self, int32_t vertexCount, /* [ParamArray] */ ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// @brief Method get_vertexBufferCount, addr 0x6f4b088, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method set_subMeshCount, addr 0x6f4b120, size 0x44, virtual false, abstract: false, final false
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

  /// @brief Method AcquireMeshDataCopy, addr 0x6f4b3b8, size 0xb4, virtual false, abstract: false, final false
  static inline void AcquireMeshDataCopy(/* [NotNull] */ ::UnityEngine::Mesh* mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireMeshDataCopy_Injected, addr 0x6f4b46c, size 0x44, virtual false, abstract: false, final false
  static inline void AcquireMeshDataCopy_Injected(::System::IntPtr mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireMeshDatasCopy, addr 0x6f4b4b0, size 0x94, virtual false, abstract: false, final false
  static inline void AcquireMeshDatasCopy(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireMeshDatasCopy_Injected, addr 0x6f4b544, size 0x54, virtual false, abstract: false, final false
  static inline void AcquireMeshDatasCopy_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6f4b1d8, size 0xb4, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshData(/* [NotNull] */ ::UnityEngine::Mesh* mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireReadOnlyMeshData_Injected, addr 0x6f4b28c, size 0x44, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshData_Injected(::System::IntPtr mesh, ::System::IntPtr* datas);

  /// @brief Method AcquireReadOnlyMeshDatas, addr 0x6f4b2d0, size 0x94, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshDatas(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method AcquireReadOnlyMeshDatas_Injected, addr 0x6f4b364, size 0x54, virtual false, abstract: false, final false
  static inline void AcquireReadOnlyMeshDatas_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count);

  /// @brief Method ApplyToMeshAndDispose, addr 0x6f456c8, size 0xc8, virtual false, abstract: false, final false
  inline void ApplyToMeshAndDispose(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeThrows]
  /// @brief Method ApplyToMeshImpl, addr 0x6f4b720, size 0xbc, virtual false, abstract: false, final false
  static inline void ApplyToMeshImpl(/* [NotNull] */ ::UnityEngine::Mesh* mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshImpl_Injected, addr 0x6f4b7dc, size 0x54, virtual false, abstract: false, final false
  static inline void ApplyToMeshImpl_Injected(::System::IntPtr mesh, ::System::IntPtr data, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesAndDispose, addr 0x6f458d0, size 0x1d8, virtual false, abstract: false, final false
  inline void ApplyToMeshesAndDispose(::ArrayW<::UnityEngine::Mesh*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeThrows]
  /// @brief Method ApplyToMeshesImpl, addr 0x6f4b620, size 0xa4, virtual false, abstract: false, final false
  static inline void ApplyToMeshesImpl(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesImpl_Injected, addr 0x6f4b6c4, size 0x5c, virtual false, abstract: false, final false
  static inline void ApplyToMeshesImpl_Injected(::ArrayW<::UnityEngine::Mesh*> meshes, ::System::IntPtr* datas, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method CreateNewMeshDatas, addr 0x6f4b5dc, size 0x44, virtual false, abstract: false, final false
  static inline void CreateNewMeshDatas(::System::IntPtr* datas, int32_t count);

  /// @brief Method Dispose, addr 0x6f4b844, size 0xc0, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ReleaseMeshDatas, addr 0x6f4b598, size 0x44, virtual false, abstract: false, final false
  static inline void ReleaseMeshDatas(::System::IntPtr* datas, int32_t count);

  /// @brief Method .ctor, addr 0x6f44b80, size 0x238, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, bool checkReadWrite, bool createAsCopy);

  /// @brief Method .ctor, addr 0x6f44e54, size 0x2d0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Mesh*> meshes, int32_t meshesCount, bool checkReadWrite, bool createAsCopy);

  /// @brief Method .ctor, addr 0x6f4523c, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(int32_t meshesCount);

  /// @brief Method get_Item, addr 0x6f4b838, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh_MeshData get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x6f4b830, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6f44b50, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6f44db8, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::ArrayW<::UnityEngine::Mesh*> meshes);

  /// @brief Method AcquireReadOnlyMeshData, addr 0x6f45124, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes);

  /// @brief Method AddBlendShapeFrame, addr 0x6f3ebc8, size 0xcc, virtual false, abstract: false, final false
  inline void AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::ArrayW<::UnityEngine::Vector3> deltaVertices, ::ArrayW<::UnityEngine::Vector3> deltaNormals,
                                 ::ArrayW<::UnityEngine::Vector3> deltaTangents);

  /// [FreeFunction(Name = "AddBlendShapeFrameFromScript", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method AddBlendShapeFrame, addr 0x6f3e92c, size 0x220, virtual false, abstract: false, final false
  inline void AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> deltaVertices,
                                 ::System::ReadOnlySpan_1<::UnityEngine::Vector3> deltaNormals, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> deltaTangents);

  /// @brief Method AddBlendShapeFrame_Injected, addr 0x6f3eb4c, size 0x7c, virtual false, abstract: false, final false
  static inline void AddBlendShapeFrame_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> shapeName, float_t frameWeight,
                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaNormals,
                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaTangents);

  /// @brief Method AllocateWritableMeshData, addr 0x6f45390, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::UnityEngine::Mesh* mesh);

  /// @brief Method AllocateWritableMeshData, addr 0x6f45214, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(int32_t meshCount);

  /// @brief Method AllocateWritableMeshData, addr 0x6f453c0, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::ArrayW<::UnityEngine::Mesh*> meshes);

  /// @brief Method AllocateWritableMeshData, addr 0x6f4545c, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x6f4554c, size 0x17c, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x6f45790, size 0x140, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::ArrayW<::UnityEngine::Mesh*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData, addr 0x6f45aa8, size 0x1ac, virtual false, abstract: false, final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method CheckCanAccessSubmesh, addr 0x6f46420, size 0x148, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles);

  /// @brief Method CheckCanAccessSubmeshIndices, addr 0x6f46570, size 0x8, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmeshIndices(int32_t submesh);

  /// @brief Method CheckCanAccessSubmeshTriangles, addr 0x6f46568, size 0x8, virtual false, abstract: false, final false
  inline bool CheckCanAccessSubmeshTriangles(int32_t submesh);

  /// @brief Method CheckIndicesArrayRange, addr 0x6f47598, size 0x18c, virtual false, abstract: false, final false
  inline void CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length);

  /// [ExcludeFromDocs]
  /// @brief Method Clear, addr 0x6f4a3f8, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x6f4a3f4, size 0x4, virtual false, abstract: false, final false
  inline void Clear(/* [DefaultValue("true")] */ bool keepVertexLayout);

  /// [FreeFunction(Name = "MeshScripting::ClearBlendShapes", HasExplicitThis = true)]
  /// @brief Method ClearBlendShapes, addr 0x6f3e164, size 0x80, virtual false, abstract: false, final false
  inline void ClearBlendShapes();

  /// @brief Method ClearBlendShapes_Injected, addr 0x6f3e1e4, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearBlendShapes_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("Clear")]
  /// @brief Method ClearImpl, addr 0x6f4166c, size 0x90, virtual false, abstract: false, final false
  inline void ClearImpl(bool keepVertexLayout);

  /// @brief Method ClearImpl_Injected, addr 0x6f416fc, size 0x44, virtual false, abstract: false, final false
  static inline void ClearImpl_Injected(::System::IntPtr _unity_self, bool keepVertexLayout);

  /// [ExcludeFromDocs]
  /// @brief Method CombineMeshes, addr 0x6f4acbc, size 0x10, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine);

  /// [ExcludeFromDocs]
  /// @brief Method CombineMeshes, addr 0x6f4acb0, size 0xc, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes);

  /// [ExcludeFromDocs]
  /// @brief Method CombineMeshes, addr 0x6f4aca8, size 0x8, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices);

  /// @brief Method CombineMeshes, addr 0x6f4aca4, size 0x4, virtual false, abstract: false, final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance> combine, /* [DefaultValue("true")] */ bool mergeSubMeshes, /* [DefaultValue("true")] */ bool useMatrices,
                            /* [DefaultValue("false")] */ bool hasLightmapData);

  /// [NativeMethod(Name = "MeshScripting::CombineMeshes", IsFreeFunction = true, ThrowsException = true, HasExplicitThis = true)]
  /// @brief Method CombineMeshesImpl, addr 0x6f41f80, size 0x124, virtual false, abstract: false, final false
  inline void CombineMeshesImpl(::ArrayW<::UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);

  /// @brief Method CombineMeshesImpl_Injected, addr 0x6f420a4, size 0x6c, virtual false, abstract: false, final false
  static inline void CombineMeshesImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> combine, bool mergeSubMeshes, bool useMatrices,
                                                bool hasLightmapData);

  /// @brief Method DefaultDimensionForChannel, addr 0x6f423b8, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// [FreeFunction("MeshScripting::MeshFromInstanceId")]
  /// @brief Method FromInstanceID, addr 0x6f3a80c, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> FromInstanceID(::UnityEngine::EntityId id);

  /// @brief Method FromInstanceID_Injected, addr 0x6f3a92c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromInstanceID_Injected(::by_ref<::UnityEngine::EntityId const> id);

  /// @brief Method GetAllBoneWeights, addr 0x6f3f2e4, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> GetAllBoneWeights();

  /// [FreeFunction(Name = "MeshScripting::GetAllBoneWeightsArray", HasExplicitThis = true)]
  /// @brief Method GetAllBoneWeightsArray, addr 0x6f3f348, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetAllBoneWeightsArray();

  /// [FreeFunction(Name = "MeshScripting::GetAllBoneWeightsArraySize", HasExplicitThis = true)]
  /// @brief Method GetAllBoneWeightsArraySize, addr 0x6f3f3c8, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetAllBoneWeightsArraySize();

  /// @brief Method GetAllBoneWeightsArraySize_Injected, addr 0x6f3f5b8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetAllBoneWeightsArraySize_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetAllBoneWeightsArray_Injected, addr 0x6f3f6b0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetAllBoneWeightsArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// [FreeFunction(Name = "AllocExtractMeshComponentFromScript", HasExplicitThis = true)]
  /// @brief Method GetAllocArrayFromChannelImpl, addr 0x6f3d4b4, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetAllocArrayFromChannelImpl_Injected, addr 0x6f3d55c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Array* GetAllocArrayFromChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel,
                                                                       ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// [FreeFunction(Name = "ExtractMeshComponentFromScript", HasExplicitThis = true)]
  /// @brief Method GetArrayFromChannelImpl, addr 0x6f3d5b8, size 0xb0, virtual false, abstract: false, final false
  inline void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values);

  /// @brief Method GetArrayFromChannelImpl_Injected, addr 0x6f3d668, size 0x6c, virtual false, abstract: false, final false
  static inline void GetArrayFromChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                      int32_t dim, ::System::Array* values);

  /// @brief Method GetBaseVertex, addr 0x6f4751c, size 0x7c, virtual false, abstract: false, final false
  inline uint32_t GetBaseVertex(int32_t submesh);

  /// [FreeFunction(Name = "MeshScripting::GetBaseVertex", HasExplicitThis = true)]
  /// @brief Method GetBaseVertexImpl, addr 0x6f3bd50, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetBaseVertexImpl(int32_t submesh);

  /// @brief Method GetBaseVertexImpl_Injected, addr 0x6f3bde0, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetBaseVertexImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetBindposes, addr 0x6f3fad0, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> GetBindposes();

  /// @brief Method GetBindposes, addr 0x6f4a1ec, size 0xf8, virtual false, abstract: false, final false
  inline void GetBindposes(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* bindposes);

  /// [FreeFunction(Name = "MeshScripting::GetBindposesArray", HasExplicitThis = true)]
  /// @brief Method GetBindposesArray, addr 0x6f3fb34, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetBindposesArray();

  /// @brief Method GetBindposesArray_Injected, addr 0x6f3fd74, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBindposesArray_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::ExtractBindPosesIntoArray", HasExplicitThis = true)]
  /// @brief Method GetBindposesNonAllocImpl, addr 0x6f3ff50, size 0x15c, virtual false, abstract: false, final false
  inline void GetBindposesNonAllocImpl(::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method GetBindposesNonAllocImpl_Injected, addr 0x6f400ac, size 0x44, virtual false, abstract: false, final false
  static inline void GetBindposesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values);

  /// @brief Method GetBlendShapeBuffer, addr 0x6f46164, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer();

  /// @brief Method GetBlendShapeBuffer, addr 0x6f46030, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBuffer(::UnityEngine::Rendering::BlendShapeBufferLayout layout);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeBufferPtr", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeBufferImpl, addr 0x6f3dc9c, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBlendShapeBufferImpl(int32_t layout);

  /// @brief Method GetBlendShapeBufferImpl_Injected, addr 0x6f3dd44, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBlendShapeBufferImpl_Injected(::System::IntPtr _unity_self, int32_t layout);

  /// @brief Method GetBlendShapeBufferRange, addr 0x6f46288, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::BlendShapeBufferRange GetBlendShapeBufferRange(int32_t blendShapeIndex);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeFrameCount", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeFrameCount, addr 0x6f3e56c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetBlendShapeFrameCount(int32_t shapeIndex);

  /// @brief Method GetBlendShapeFrameCount_Injected, addr 0x6f3e5fc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetBlendShapeFrameCount_Injected(::System::IntPtr _unity_self, int32_t shapeIndex);

  /// [FreeFunction(Name = "GetBlendShapeFrameVerticesFromScript", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeFrameVertices, addr 0x6f3e72c, size 0x18c, virtual false, abstract: false, final false
  inline void GetBlendShapeFrameVertices(int32_t shapeIndex, int32_t frameIndex, ::ArrayW<::UnityEngine::Vector3> deltaVertices, ::ArrayW<::UnityEngine::Vector3> deltaNormals,
                                         ::ArrayW<::UnityEngine::Vector3> deltaTangents);

  /// @brief Method GetBlendShapeFrameVertices_Injected, addr 0x6f3e8b8, size 0x74, virtual false, abstract: false, final false
  static inline void GetBlendShapeFrameVertices_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, int32_t frameIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaVertices,
                                                         ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaNormals, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> deltaTangents);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeFrameWeight", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeFrameWeight, addr 0x6f3e640, size 0x98, virtual false, abstract: false, final false
  inline float_t GetBlendShapeFrameWeight(int32_t shapeIndex, int32_t frameIndex);

  /// @brief Method GetBlendShapeFrameWeight_Injected, addr 0x6f3e6d8, size 0x54, virtual false, abstract: false, final false
  static inline float_t GetBlendShapeFrameWeight_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, int32_t frameIndex);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeIndex", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeIndex, addr 0x6f3e3b4, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetBlendShapeIndex(::StringW blendShapeName);

  /// @brief Method GetBlendShapeIndex_Injected, addr 0x6f3e528, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetBlendShapeIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> blendShapeName);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeName", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBlendShapeName, addr 0x6f3e220, size 0x140, virtual false, abstract: false, final false
  inline ::StringW GetBlendShapeName(int32_t shapeIndex);

  /// @brief Method GetBlendShapeName_Injected, addr 0x6f3e360, size 0x54, virtual false, abstract: false, final false
  static inline void GetBlendShapeName_Injected(::System::IntPtr _unity_self, int32_t shapeIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction(Name = "MeshScripting::GetBlendShapeOffset", HasExplicitThis = true)]
  /// @brief Method GetBlendShapeOffsetInternal, addr 0x6f3ec94, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::BlendShape GetBlendShapeOffsetInternal(int32_t index);

  /// @brief Method GetBlendShapeOffsetInternal_Injected, addr 0x6f3ed44, size 0x54, virtual false, abstract: false, final false
  static inline void GetBlendShapeOffsetInternal_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::BlendShape> ret);

  /// @brief Method GetBoneWeightBuffer, addr 0x6f45da4, size 0x28c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBuffer(::UnityEngine::SkinWeights layout);

  /// [FreeFunction(Name = "MeshScripting::GetBoneWeightBufferPtr", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetBoneWeightBufferImpl, addr 0x6f3dbb0, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetBoneWeightBufferImpl(int32_t bonesPerVertex);

  /// @brief Method GetBoneWeightBufferImpl_Injected, addr 0x6f3dc58, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBoneWeightBufferImpl_Injected(::System::IntPtr _unity_self, int32_t bonesPerVertex);

  /// [NativeMethod("GetBoneWeightBufferDimension")]
  /// @brief Method GetBoneWeightBufferLayoutInternal, addr 0x6f3f5f4, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetBoneWeightBufferLayoutInternal();

  /// @brief Method GetBoneWeightBufferLayoutInternal_Injected, addr 0x6f3f674, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetBoneWeightBufferLayoutInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetBoneWeights, addr 0x6f4a2e4, size 0x104, virtual false, abstract: false, final false
  inline void GetBoneWeights(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>* boneWeights);

  /// [FreeFunction(Name = "MeshScripting::GetBoneWeights", HasExplicitThis = true)]
  /// @brief Method GetBoneWeightsImpl, addr 0x6f3ee54, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::BoneWeight> GetBoneWeightsImpl();

  /// @brief Method GetBoneWeightsImpl_Injected, addr 0x6f3efb4, size 0x44, virtual false, abstract: false, final false
  static inline void GetBoneWeightsImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(Name = "MeshScripting::ExtractBoneWeightsIntoArray", HasExplicitThis = true)]
  /// @brief Method GetBoneWeightsNonAllocImpl, addr 0x6f3fdb0, size 0x15c, virtual false, abstract: false, final false
  inline void GetBoneWeightsNonAllocImpl(::ArrayW<::UnityEngine::BoneWeight> values);

  /// @brief Method GetBoneWeightsNonAllocImpl_Injected, addr 0x6f3ff0c, size 0x44, virtual false, abstract: false, final false
  static inline void GetBoneWeightsNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values);

  /// @brief Method GetBonesPerVertex, addr 0x6f3f448, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetBonesPerVertex();

  /// [FreeFunction(Name = "MeshScripting::GetBonesPerVertexArray", HasExplicitThis = true)]
  /// @brief Method GetBonesPerVertexArray, addr 0x6f3f538, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetBonesPerVertexArray();

  /// @brief Method GetBonesPerVertexArray_Injected, addr 0x6f3f6ec, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBonesPerVertexArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetColors, addr 0x6f43fc8, size 0xd4, virtual false, abstract: false, final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors);

  /// @brief Method GetColors, addr 0x6f43c88, size 0xd0, virtual false, abstract: false, final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* colors);

  /// @brief Method GetIndexBuffer, addr 0x6f45d04, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBuffer();

  /// [FreeFunction(Name = "MeshScripting::GetIndexBufferPtr", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetIndexBufferImpl, addr 0x6f3dae0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBufferImpl();

  /// @brief Method GetIndexBufferImpl_Injected, addr 0x6f3db74, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetIndexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetIndexCount, addr 0x6f4749c, size 0x80, virtual false, abstract: false, final false
  inline uint32_t GetIndexCount(int32_t submesh);

  /// @brief Method GetIndexCount, addr 0x6f47050, size 0x12c, virtual false, abstract: false, final false
  inline uint32_t GetIndexCount(int32_t submesh, int32_t meshLod);

  /// [FreeFunction(Name = "MeshScripting::GetIndexCount", HasExplicitThis = true)]
  /// @brief Method GetIndexCountImpl, addr 0x6f3bb78, size 0x98, virtual false, abstract: false, final false
  inline uint32_t GetIndexCountImpl(int32_t submesh, int32_t meshlod);

  /// @brief Method GetIndexCountImpl_Injected, addr 0x6f3bc10, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t GetIndexCountImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, int32_t meshlod);

  /// @brief Method GetIndexStart, addr 0x6f472f0, size 0x80, virtual false, abstract: false, final false
  inline uint32_t GetIndexStart(int32_t submesh);

  /// @brief Method GetIndexStart, addr 0x6f47370, size 0x12c, virtual false, abstract: false, final false
  inline uint32_t GetIndexStart(int32_t submesh, int32_t meshLod);

  /// [FreeFunction(Name = "MeshScripting::GetIndexStart", HasExplicitThis = true)]
  /// @brief Method GetIndexStartImpl, addr 0x6f3ba8c, size 0x98, virtual false, abstract: false, final false
  inline uint32_t GetIndexStartImpl(int32_t submesh, int32_t meshlod);

  /// @brief Method GetIndexStartImpl_Injected, addr 0x6f3bb24, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t GetIndexStartImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, int32_t meshlod);

  /// [ExcludeFromDocs]
  /// @brief Method GetIndices, addr 0x6f46cd0, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndices(int32_t submesh);

  /// @brief Method GetIndices, addr 0x6f46e1c, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndices(int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x6f46cdc, size 0x140, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndices(int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// [ExcludeFromDocs]
  /// @brief Method GetIndices, addr 0x6f46e28, size 0xc, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh);

  /// @brief Method GetIndices, addr 0x6f47044, size 0xc, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x6f46e34, size 0x210, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x6f4717c, size 0xc, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices, addr 0x6f47188, size 0x168, virtual false, abstract: false, final false
  inline void GetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// [FreeFunction(Name = "MeshScripting::GetIndices", HasExplicitThis = true)]
  /// @brief Method GetIndicesImpl, addr 0x6f3c018, size 0x188, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetIndicesImpl(int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// @brief Method GetIndicesImpl_Injected, addr 0x6f3c1a0, size 0x6c, virtual false, abstract: false, final false
  static inline void GetIndicesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, bool applyBaseVertex, int32_t meshlod, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(Name = "MeshScripting::ExtractIndicesToArray", HasExplicitThis = true)]
  /// @brief Method GetIndicesNonAllocImpl, addr 0x6f3c8f4, size 0x17c, virtual false, abstract: false, final false
  inline void GetIndicesNonAllocImpl(::ArrayW<int32_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// [FreeFunction(Name = "MeshScripting::ExtractIndicesToArray16", HasExplicitThis = true)]
  /// @brief Method GetIndicesNonAllocImpl16, addr 0x6f3cadc, size 0x17c, virtual false, abstract: false, final false
  inline void GetIndicesNonAllocImpl16(::ArrayW<uint16_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// @brief Method GetIndicesNonAllocImpl16_Injected, addr 0x6f3cc58, size 0x6c, virtual false, abstract: false, final false
  static inline void GetIndicesNonAllocImpl16_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                       int32_t meshlod);

  /// @brief Method GetIndicesNonAllocImpl_Injected, addr 0x6f3ca70, size 0x6c, virtual false, abstract: false, final false
  static inline void GetIndicesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                     int32_t meshlod);

  /// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim);

  /// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim,
                                ::UnityEngine::Rendering::VertexAttributeFormat channelType);

  /// [FreeFunction("MeshScripting::GetLod", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetLod, addr 0x6f41398, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshLodRange GetLod(int32_t subMeshIndex, int32_t levelIndex);

  /// [FreeFunction("MeshScripting::GetLodCount", HasExplicitThis = true)]
  /// @brief Method GetLodCount, addr 0x6f41200, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetLodCount();

  /// @brief Method GetLodCount_Injected, addr 0x6f41280, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetLodCount_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("MeshScripting::GetLodSelectionCurve", HasExplicitThis = true)]
  /// @brief Method GetLodSelectionCurve, addr 0x6f412bc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh_LodSelectionCurve GetLodSelectionCurve();

  /// @brief Method GetLodSelectionCurve_Injected, addr 0x6f41354, size 0x44, virtual false, abstract: false, final false
  static inline void GetLodSelectionCurve_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve> ret);

  /// @brief Method GetLod_Injected, addr 0x6f41448, size 0x5c, virtual false, abstract: false, final false
  static inline void GetLod_Injected(::System::IntPtr _unity_self, int32_t subMeshIndex, int32_t levelIndex, ::by_ref<::UnityEngine::MeshLodRange> ret);

  /// @brief Method GetLods, addr 0x6f4a0b8, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::MeshLodRange> GetLods(int32_t submesh);

  /// @brief Method GetLods, addr 0x6f4a0e0, size 0x10c, virtual false, abstract: false, final false
  inline void GetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>* levels, int32_t submesh);

  /// [FreeFunction("MeshScripting::GetLods", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetLodsAlloc, addr 0x6f40e88, size 0x16c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::MeshLodRange> GetLodsAlloc(int32_t subMeshIndex);

  /// @brief Method GetLodsAlloc_Injected, addr 0x6f40ff4, size 0x54, virtual false, abstract: false, final false
  static inline void GetLodsAlloc_Injected(::System::IntPtr _unity_self, int32_t subMeshIndex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(Name = "MeshScripting::GetLodsNonAlloc", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetLodsNonAlloc, addr 0x6f41048, size 0x164, virtual false, abstract: false, final false
  inline void GetLodsNonAlloc(::ArrayW<::UnityEngine::MeshLodRange> levels, int32_t subMeshIndex);

  /// @brief Method GetLodsNonAlloc_Injected, addr 0x6f411ac, size 0x54, virtual false, abstract: false, final false
  static inline void GetLodsNonAlloc_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> levels, int32_t subMeshIndex);

  /// [FreeFunction(Name = "MeshScripting::GetNativeIndexBufferPtr", HasExplicitThis = true)]
  /// @brief Method GetNativeIndexBufferPtr, addr 0x6f3d938, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeIndexBufferPtr();

  /// @brief Method GetNativeIndexBufferPtr_Injected, addr 0x6f3d9b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetNativeIndexBufferPtr_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::GetNativeVertexBufferPtr", HasExplicitThis = true)]
  /// [NativeThrows]
  /// @brief Method GetNativeVertexBufferPtr, addr 0x6f3d864, size 0x90, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNativeVertexBufferPtr(int32_t index);

  /// @brief Method GetNativeVertexBufferPtr_Injected, addr 0x6f3d8f4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetNativeVertexBufferPtr_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetNormals, addr 0x6f43608, size 0xd0, virtual false, abstract: false, final false
  inline void GetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals);

  /// [FreeFunction("MeshScripting::GetSubMesh", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetSubMesh, addr 0x6f40538, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t index);

  /// @brief Method GetSubMesh_Injected, addr 0x6f405f8, size 0x54, virtual false, abstract: false, final false
  static inline void GetSubMesh_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor> ret);

  /// @brief Method GetTangents, addr 0x6f43948, size 0xd0, virtual false, abstract: false, final false
  inline void GetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method GetTopology, addr 0x6f4abec, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology GetTopology(int32_t submesh);

  /// [FreeFunction(Name = "MeshScripting::GetPrimitiveType", HasExplicitThis = true)]
  /// @brief Method GetTopologyImpl, addr 0x6f41c08, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshTopology GetTopologyImpl(int32_t submesh);

  /// @brief Method GetTopologyImpl_Injected, addr 0x6f41c98, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::MeshTopology GetTopologyImpl_Injected(::System::IntPtr _unity_self, int32_t submesh);

  /// @brief Method GetTotalIndexCount, addr 0x6f3aaf8, size 0x80, virtual false, abstract: false, final false
  inline uint32_t GetTotalIndexCount();

  /// @brief Method GetTotalIndexCount_Injected, addr 0x6f3ab78, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetTotalIndexCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetTriangles, addr 0x6f46734, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTriangles(int32_t submesh);

  /// @brief Method GetTriangles, addr 0x6f46740, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTriangles(int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6f4674c, size 0x140, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTriangles(int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6f4688c, size 0xc, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// @brief Method GetTriangles, addr 0x6f46aa8, size 0xc, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, /* [DefaultValue("true")] */ bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6f46898, size 0x210, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6f46ab4, size 0xc, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTriangles, addr 0x6f46ac0, size 0x210, virtual false, abstract: false, final false
  inline void GetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, int32_t meshLod, bool applyBaseVertex);

  /// [FreeFunction(Name = "MeshScripting::GetTrianglesCount", HasExplicitThis = true)]
  /// @brief Method GetTrianglesCountImpl, addr 0x6f3bc64, size 0x98, virtual false, abstract: false, final false
  inline uint32_t GetTrianglesCountImpl(int32_t submesh, int32_t meshlod);

  /// @brief Method GetTrianglesCountImpl_Injected, addr 0x6f3bcfc, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t GetTrianglesCountImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, int32_t meshlod);

  /// [FreeFunction(Name = "MeshScripting::GetTriangles", HasExplicitThis = true)]
  /// @brief Method GetTrianglesImpl, addr 0x6f3be24, size 0x188, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetTrianglesImpl(int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// @brief Method GetTrianglesImpl_Injected, addr 0x6f3bfac, size 0x6c, virtual false, abstract: false, final false
  static inline void GetTrianglesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, bool applyBaseVertex, int32_t meshlod, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction(Name = "MeshScripting::ExtractTrianglesToArray", HasExplicitThis = true)]
  /// @brief Method GetTrianglesNonAllocImpl, addr 0x6f3c524, size 0x17c, virtual false, abstract: false, final false
  inline void GetTrianglesNonAllocImpl(::ArrayW<int32_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// [FreeFunction(Name = "MeshScripting::ExtractTrianglesToArray16", HasExplicitThis = true)]
  /// @brief Method GetTrianglesNonAllocImpl16, addr 0x6f3c70c, size 0x17c, virtual false, abstract: false, final false
  inline void GetTrianglesNonAllocImpl16(::ArrayW<uint16_t> values, int32_t submesh, bool applyBaseVertex, int32_t meshlod);

  /// @brief Method GetTrianglesNonAllocImpl16_Injected, addr 0x6f3c888, size 0x6c, virtual false, abstract: false, final false
  static inline void GetTrianglesNonAllocImpl16_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                         int32_t meshlod);

  /// @brief Method GetTrianglesNonAllocImpl_Injected, addr 0x6f3c6a0, size 0x6c, virtual false, abstract: false, final false
  static inline void GetTrianglesNonAllocImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> values, int32_t submesh, bool applyBaseVertex,
                                                       int32_t meshlod);

  /// @brief Method GetUVChannel, addr 0x6f42344, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t uvIndex);

  /// [NativeMethod("GetMeshMetric")]
  /// @brief Method GetUVDistributionMetric, addr 0x6f41eac, size 0x90, virtual false, abstract: false, final false
  inline float_t GetUVDistributionMetric(int32_t uvSetIndex);

  /// @brief Method GetUVDistributionMetric_Injected, addr 0x6f41f3c, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetUVDistributionMetric_Injected(::System::IntPtr _unity_self, int32_t uvSetIndex);

  /// @brief Method GetUVs, addr 0x6f4492c, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// @brief Method GetUVs, addr 0x6f44994, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// @brief Method GetUVs, addr 0x6f449fc, size 0x68, virtual false, abstract: false, final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method GetUVsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetUVsImpl(int32_t uvIndex, ::System::Collections::Generic::List_1<T>* uvs, int32_t dim);

  /// [FreeFunction(Name = "MeshScripting::GetVertexAttributeByIndex", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetVertexAttribute, addr 0x6f3b990, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeDescriptor GetVertexAttribute(int32_t index);

  /// [FreeFunction(Name = "MeshScripting::GetVertexAttributesCount", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributeCountImpl, addr 0x6f3b8d4, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeCountImpl();

  /// @brief Method GetVertexAttributeCountImpl_Injected, addr 0x6f3b954, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeCountImpl_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::GetChannelDimension", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributeDimension, addr 0x6f3ce6c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeDimension_Injected, addr 0x6f3cefc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeDimension_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// [FreeFunction(Name = "MeshScripting::GetChannelFormat", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributeFormat, addr 0x6f3cf40, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeFormat_Injected, addr 0x6f3cfd0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// [FreeFunction(Name = "MeshScripting::GetChannelOffset", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributeOffset, addr 0x6f3d0e8, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeOffset_Injected, addr 0x6f3d178, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeOffset_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// [FreeFunction(Name = "MeshScripting::GetChannelStream", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributeStream, addr 0x6f3d014, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeStream_Injected, addr 0x6f3d0a4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributeStream_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttribute_Injected, addr 0x6f3ba38, size 0x54, virtual false, abstract: false, final false
  static inline void GetVertexAttribute_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::VertexAttributeDescriptor> ret);

  /// @brief Method GetVertexAttributes, addr 0x6f44a68, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> GetVertexAttributes();

  /// @brief Method GetVertexAttributes, addr 0x6f44ad8, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributes(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method GetVertexAttributes, addr 0x6f44adc, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// [FreeFunction(Name = "MeshScripting::GetVertexAttributesAlloc", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributesAlloc, addr 0x6f3b464, size 0x80, virtual false, abstract: false, final false
  inline ::System::Array* GetVertexAttributesAlloc();

  /// @brief Method GetVertexAttributesAlloc_Injected, addr 0x6f3b4e4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Array* GetVertexAttributesAlloc_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::GetVertexAttributesArray", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributesArray, addr 0x6f3b520, size 0x120, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributesArray(/* [NotNull] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method GetVertexAttributesArray_Injected, addr 0x6f3b640, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributesArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// [FreeFunction(Name = "MeshScripting::GetVertexAttributesList", HasExplicitThis = true)]
  /// @brief Method GetVertexAttributesList, addr 0x6f3b684, size 0x20c, virtual false, abstract: false, final false
  inline int32_t GetVertexAttributesList(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// @brief Method GetVertexAttributesList_Injected, addr 0x6f3b890, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexAttributesList_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> attributes);

  /// @brief Method GetVertexBuffer, addr 0x6f45c54, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer(int32_t index);

  /// [FreeFunction(Name = "MeshScripting::GetVertexBufferPtr", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method GetVertexBufferImpl, addr 0x6f3d9f4, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl(int32_t index);

  /// @brief Method GetVertexBufferImpl_Injected, addr 0x6f3da9c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexBufferImpl_Injected(::System::IntPtr _unity_self, int32_t index);

  /// [FreeFunction(Name = "MeshScripting::GetVertexBufferStride", HasExplicitThis = true)]
  /// @brief Method GetVertexBufferStride, addr 0x6f3d790, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetVertexBufferStride(int32_t stream);

  /// @brief Method GetVertexBufferStride_Injected, addr 0x6f3d820, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetVertexBufferStride_Injected(::System::IntPtr _unity_self, int32_t stream);

  /// @brief Method GetVertices, addr 0x6f432c8, size 0xd0, virtual false, abstract: false, final false
  inline void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices);

  /// [NativeMethod("HasBoneWeights")]
  /// @brief Method HasBoneWeights, addr 0x6f3ed98, size 0x80, virtual false, abstract: false, final false
  inline bool HasBoneWeights();

  /// @brief Method HasBoneWeights_Injected, addr 0x6f3ee18, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasBoneWeights_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::HasChannel", HasExplicitThis = true)]
  /// @brief Method HasVertexAttribute, addr 0x6f3cd98, size 0x90, virtual false, abstract: false, final false
  inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method HasVertexAttribute_Injected, addr 0x6f3ce28, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVertexAttribute_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute attr);

  /// [FreeFunction(Name = "MeshScripting::SetBoneWeights", HasExplicitThis = true)]
  /// @brief Method InternalSetBoneWeights, addr 0x6f3f1c8, size 0xb0, virtual false, abstract: false, final false
  inline void InternalSetBoneWeights(::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights, int32_t weightsSize);

  /// @brief Method InternalSetBoneWeights_Injected, addr 0x6f3f278, size 0x6c, virtual false, abstract: false, final false
  static inline void InternalSetBoneWeights_Injected(::System::IntPtr _unity_self, ::System::IntPtr bonesPerVertex, int32_t bonesPerVertexSize, ::System::IntPtr weights, int32_t weightsSize);

  /// [FreeFunction(Name = "MeshScripting::InternalSetIndexBufferData", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method InternalSetIndexBufferData, addr 0x6f3aca0, size 0xc8, virtual false, abstract: false, final false
  inline void InternalSetIndexBufferData(::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "MeshScripting::InternalSetIndexBufferDataFromArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method InternalSetIndexBufferDataFromArray, addr 0x6f3adec, size 0xc8, virtual false, abstract: false, final false
  inline void InternalSetIndexBufferDataFromArray(::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferDataFromArray_Injected, addr 0x6f3aeb4, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetIndexBufferDataFromArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferData_Injected, addr 0x6f3ad68, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetIndexBufferData_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                         ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "MeshScripting::InternalSetVertexBufferData", HasExplicitThis = true)]
  /// @brief Method InternalSetVertexBufferData, addr 0x6f3b19c, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetVertexBufferData(int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                          ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "MeshScripting::InternalSetVertexBufferDataFromArray", HasExplicitThis = true)]
  /// @brief Method InternalSetVertexBufferDataFromArray, addr 0x6f3b300, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetVertexBufferDataFromArray(int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferDataFromArray_Injected, addr 0x6f3b3d8, size 0x8c, virtual false, abstract: false, final false
  static inline void InternalSetVertexBufferDataFromArray_Injected(::System::IntPtr _unity_self, int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                                   int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferData_Injected, addr 0x6f3b274, size 0x8c, virtual false, abstract: false, final false
  static inline void InternalSetVertexBufferData_Injected(::System::IntPtr _unity_self, int32_t stream, ::System::IntPtr data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                                                          int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::CreateMesh")]
  /// @brief Method Internal_Create, addr 0x6f3a758, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Mesh* mono);

  /// @brief Method MarkDynamic, addr 0x6f4a8f0, size 0x24, virtual false, abstract: false, final false
  inline void MarkDynamic();

  /// [NativeMethod("MarkDynamic")]
  /// @brief Method MarkDynamicImpl, addr 0x6f419bc, size 0x80, virtual false, abstract: false, final false
  inline void MarkDynamicImpl();

  /// @brief Method MarkDynamicImpl_Injected, addr 0x6f41a3c, size 0x3c, virtual false, abstract: false, final false
  static inline void MarkDynamicImpl_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("MarkModified")]
  /// @brief Method MarkModified, addr 0x6f41a78, size 0x80, virtual false, abstract: false, final false
  inline void MarkModified();

  /// @brief Method MarkModified_Injected, addr 0x6f41af8, size 0x3c, virtual false, abstract: false, final false
  static inline void MarkModified_Injected(::System::IntPtr _unity_self);

  /// @brief [RequiredByNativeCode]
  static inline ::UnityEngine::Mesh* New_ctor();

  /// @brief Method Optimize, addr 0x6f4a94c, size 0xe0, virtual false, abstract: false, final false
  inline void Optimize();

  /// [NativeMethod("Optimize")]
  /// @brief Method OptimizeImpl, addr 0x6f42110, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeImpl();

  /// @brief Method OptimizeImpl_Injected, addr 0x6f42190, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method OptimizeIndexBuffers, addr 0x6f4aa2c, size 0xe0, virtual false, abstract: false, final false
  inline void OptimizeIndexBuffers();

  /// [NativeMethod("OptimizeIndexBuffers")]
  /// @brief Method OptimizeIndexBuffersImpl, addr 0x6f421cc, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeIndexBuffersImpl();

  /// @brief Method OptimizeIndexBuffersImpl_Injected, addr 0x6f4224c, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeIndexBuffersImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method OptimizeReorderVertexBuffer, addr 0x6f4ab0c, size 0xe0, virtual false, abstract: false, final false
  inline void OptimizeReorderVertexBuffer();

  /// [NativeMethod("OptimizeReorderVertexBuffer")]
  /// @brief Method OptimizeReorderVertexBufferImpl, addr 0x6f42288, size 0x80, virtual false, abstract: false, final false
  inline void OptimizeReorderVertexBufferImpl();

  /// @brief Method OptimizeReorderVertexBufferImpl_Injected, addr 0x6f42308, size 0x3c, virtual false, abstract: false, final false
  static inline void OptimizeReorderVertexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "MeshScripting::PrintErrorCantAccessChannel", HasExplicitThis = true)]
  /// @brief Method PrintErrorCantAccessChannel, addr 0x6f3ccc4, size 0x90, virtual false, abstract: false, final false
  inline void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute ch);

  /// @brief Method PrintErrorCantAccessChannel_Injected, addr 0x6f3cd54, size 0x44, virtual false, abstract: false, final false
  static inline void PrintErrorCantAccessChannel_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute ch);

  /// @brief Method PrintErrorCantAccessIndices, addr 0x6f46360, size 0xc0, virtual false, abstract: false, final false
  inline void PrintErrorCantAccessIndices();

  /// [ExcludeFromDocs]
  /// @brief Method RecalculateBounds, addr 0x6f4a400, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateBounds();

  /// @brief Method RecalculateBounds, addr 0x6f4a408, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateBounds(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeMethod("RecalculateBounds")]
  /// @brief Method RecalculateBoundsImpl, addr 0x6f41740, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateBoundsImpl_Injected, addr 0x6f417d0, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateBoundsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method RecalculateNormals, addr 0x6f4a4fc, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateNormals();

  /// @brief Method RecalculateNormals, addr 0x6f4a504, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateNormals(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeMethod("RecalculateNormals")]
  /// @brief Method RecalculateNormalsImpl, addr 0x6f41814, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormalsImpl_Injected, addr 0x6f418a4, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateNormalsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method RecalculateTangents, addr 0x6f4a5f8, size 0x8, virtual false, abstract: false, final false
  inline void RecalculateTangents();

  /// @brief Method RecalculateTangents, addr 0x6f4a600, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateTangents(/* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [NativeMethod("RecalculateTangents")]
  /// @brief Method RecalculateTangentsImpl, addr 0x6f418e8, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangentsImpl_Injected, addr 0x6f41978, size 0x44, virtual false, abstract: false, final false
  static inline void RecalculateTangentsImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateUVDistributionMetric, addr 0x6f4a6f4, size 0x108, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetric(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// [NativeMethod("RecalculateMeshMetric")]
  /// @brief Method RecalculateUVDistributionMetricImpl, addr 0x6f41cdc, size 0xa0, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetricImpl(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricImpl_Injected, addr 0x6f41d7c, size 0x54, virtual false, abstract: false, final false
  static inline void RecalculateUVDistributionMetricImpl_Injected(::System::IntPtr _unity_self, int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetrics, addr 0x6f4a7fc, size 0xf4, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetrics(float_t uvAreaThreshold);

  /// [NativeMethod("RecalculateMeshMetrics")]
  /// @brief Method RecalculateUVDistributionMetricsImpl, addr 0x6f41dd0, size 0x90, virtual false, abstract: false, final false
  inline void RecalculateUVDistributionMetricsImpl(float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricsImpl_Injected, addr 0x6f41e60, size 0x4c, virtual false, abstract: false, final false
  static inline void RecalculateUVDistributionMetricsImpl_Injected(::System::IntPtr _unity_self, float_t uvAreaThreshold);

  /// [FreeFunction("MeshScripting::SetAllSubMeshesAtOnceFromArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetAllSubMeshesAtOnceFromArray, addr 0x6f4064c, size 0x124, virtual false, abstract: false, final false
  inline void SetAllSubMeshesAtOnceFromArray(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromArray_Injected, addr 0x6f40770, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAllSubMeshesAtOnceFromArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> desc, int32_t start, int32_t count,
                                                             ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetAllSubMeshesAtOnceFromNativeArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetAllSubMeshesAtOnceFromNativeArray, addr 0x6f407dc, size 0xb0, virtual false, abstract: false, final false
  inline void SetAllSubMeshesAtOnceFromNativeArray(::System::IntPtr desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromNativeArray_Injected, addr 0x6f4088c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAllSubMeshesAtOnceFromNativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::ArrayW<T> values,
                                 ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::ArrayW<T> values, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "SetMeshComponentFromArrayFromScript", HasExplicitThis = true)]
  /// @brief Method SetArrayForChannelImpl, addr 0x6f3d1bc, size 0xe0, virtual false, abstract: false, final false
  inline void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values, int32_t arraySize,
                                     int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannelImpl_Injected, addr 0x6f3d29c, size 0x9c, virtual false, abstract: false, final false
  static inline void SetArrayForChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                     int32_t dim, ::System::Array* values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetBindposes, addr 0x6f3fbb4, size 0xd4, virtual false, abstract: false, final false
  inline void SetBindposes(::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> poses);

  /// [NativeMethod("SetBindposes")]
  /// @brief Method SetBindposesFromScript_NativeArray, addr 0x6f3fc88, size 0x98, virtual false, abstract: false, final false
  inline void SetBindposesFromScript_NativeArray(::System::IntPtr posesPtr, int32_t posesCount);

  /// @brief Method SetBindposesFromScript_NativeArray_Injected, addr 0x6f3fd20, size 0x54, virtual false, abstract: false, final false
  static inline void SetBindposesFromScript_NativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr posesPtr, int32_t posesCount);

  /// @brief Method SetBoneWeights, addr 0x6f3f140, size 0x88, virtual false, abstract: false, final false
  inline void SetBoneWeights(::Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> weights);

  /// [FreeFunction(Name = "MeshScripting::SetBoneWeights", HasExplicitThis = true)]
  /// @brief Method SetBoneWeightsImpl, addr 0x6f3eff8, size 0x104, virtual false, abstract: false, final false
  inline void SetBoneWeightsImpl(::ArrayW<::UnityEngine::BoneWeight> weights);

  /// @brief Method SetBoneWeightsImpl_Injected, addr 0x6f3f0fc, size 0x44, virtual false, abstract: false, final false
  static inline void SetBoneWeightsImpl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> weights);

  /// @brief Method SetColors, addr 0x6f441c0, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32> inColors);

  /// [ExcludeFromDocs]
  /// @brief Method SetColors, addr 0x6f44238, size 0x74, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6f442ac, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32> inColors, int32_t start, int32_t length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x6f43e64, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color> inColors);

  /// [ExcludeFromDocs]
  /// @brief Method SetColors, addr 0x6f43edc, size 0x74, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6f43f50, size 0x78, virtual false, abstract: false, final false
  inline void SetColors(::ArrayW<::UnityEngine::Color> inColors, int32_t start, int32_t length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x6f4409c, size 0x84, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors);

  /// [ExcludeFromDocs]
  /// @brief Method SetColors, addr 0x6f44120, size 0x8, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6f44128, size 0x98, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length,
                        /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors, addr 0x6f43d58, size 0x84, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors);

  /// [ExcludeFromDocs]
  /// @brief Method SetColors, addr 0x6f43ddc, size 0x8, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors, addr 0x6f43de4, size 0x80, virtual false, abstract: false, final false
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
  /// @brief Method SetIndexBufferParams, addr 0x6f3abb4, size 0x98, virtual false, abstract: false, final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndexBufferParams_Injected, addr 0x6f3ac4c, size 0x54, virtual false, abstract: false, final false
  static inline void SetIndexBufferParams_Injected(::System::IntPtr _unity_self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method SetIndices, addr 0x6f482a4, size 0x28, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f48354, size 0xbc, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds,
                         int32_t baseVertex);

  /// [ExcludeFromDocs]
  /// @brief Method SetIndices, addr 0x6f48134, size 0x74, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh);

  /// [ExcludeFromDocs]
  /// @brief Method SetIndices, addr 0x6f4822c, size 0x78, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds);

  /// @brief Method SetIndices, addr 0x6f481a8, size 0x84, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, /* [DefaultValue("true")] */ bool calculateBounds,
                         /* [DefaultValue("0")] */ int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f482cc, size 0x88, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<int32_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f48494, size 0x28, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f48544, size 0xbc, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f48410, size 0x84, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f484bc, size 0x88, virtual false, abstract: false, final false
  inline void SetIndices(::ArrayW<uint16_t> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f486c0, size 0x28, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f487ac, size 0x134, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f48600, size 0xc0, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f486e8, size 0xc4, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f489a0, size 0x28, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f48a8c, size 0x134, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, int32_t meshLod,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f488e0, size 0xc0, virtual false, abstract: false, final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices, addr 0x6f489c8, size 0xc4, virtual false, abstract: false, final false
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
  /// @brief Method SetIndicesImpl, addr 0x6f3c20c, size 0xe8, virtual false, abstract: false, final false
  inline void SetIndicesImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* indices, int32_t arrayStart,
                             int32_t arraySize, bool calculateBounds, int32_t baseVertex, int32_t meshlod);

  /// @brief Method SetIndicesImpl_Injected, addr 0x6f3c2f4, size 0xa4, virtual false, abstract: false, final false
  static inline void SetIndicesImpl_Injected(::System::IntPtr _unity_self, int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat,
                                             ::System::Array* indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex, int32_t meshlod);

  /// [FreeFunction(Name = "SetMeshIndicesFromNativeArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetIndicesNativeArrayImpl, addr 0x6f3c398, size 0xe8, virtual false, abstract: false, final false
  inline void SetIndicesNativeArrayImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::IntPtr indices, int32_t arrayStart,
                                        int32_t arraySize, bool calculateBounds, int32_t baseVertex, int32_t meshlod);

  /// @brief Method SetIndicesNativeArrayImpl_Injected, addr 0x6f3c480, size 0xa4, virtual false, abstract: false, final false
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

  /// @brief Method SetLod, addr 0x6f491f4, size 0x60, virtual false, abstract: false, final false
  inline void SetLod(int32_t submesh, int32_t level, ::UnityEngine::MeshLodRange levelRange, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetLodCount", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLodCount, addr 0x6f408f8, size 0x90, virtual false, abstract: false, final false
  inline void SetLodCount(int32_t numLevels);

  /// @brief Method SetLodCount_Injected, addr 0x6f40988, size 0x44, virtual false, abstract: false, final false
  static inline void SetLodCount_Injected(::System::IntPtr _unity_self, int32_t numLevels);

  /// [FreeFunction("MeshScripting::SetLod", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLodImpl, addr 0x6f40d68, size 0xb4, virtual false, abstract: false, final false
  inline void SetLodImpl(int32_t subMeshIndex, int32_t level, ::UnityEngine::MeshLodRange levelRange, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLodImpl_Injected, addr 0x6f40e1c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetLodImpl_Injected(::System::IntPtr _unity_self, int32_t subMeshIndex, int32_t level, ::by_ref<::UnityEngine::MeshLodRange const> levelRange,
                                         ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetLodSelectionCurve", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLodSelectionCurve, addr 0x6f409cc, size 0x94, virtual false, abstract: false, final false
  inline void SetLodSelectionCurve(::UnityEngine::Mesh_LodSelectionCurve lodSelectionCurve);

  /// @brief Method SetLodSelectionCurve_Injected, addr 0x6f40a60, size 0x44, virtual false, abstract: false, final false
  static inline void SetLodSelectionCurve_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve const> lodSelectionCurve);

  /// @brief Method SetLods, addr 0x6f49430, size 0x2e8, virtual false, abstract: false, final false
  inline void SetLods(::ArrayW<::UnityEngine::MeshLodRange> levels, int32_t start, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLods, addr 0x6f49a60, size 0x180, virtual false, abstract: false, final false
  inline void SetLods(::ArrayW<::UnityEngine::MeshLodRange> levels, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLods, addr 0x6f49718, size 0x348, virtual false, abstract: false, final false
  inline void SetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>* levels, int32_t start, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLods, addr 0x6f49254, size 0x1dc, virtual false, abstract: false, final false
  inline void SetLods(::System::Collections::Generic::List_1<::UnityEngine::MeshLodRange>* levels, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLods, addr 0x6f49d98, size 0x320, virtual false, abstract: false, final false
  inline void SetLods(::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange> levels, int32_t start, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLods, addr 0x6f49be0, size 0x1b8, virtual false, abstract: false, final false
  inline void SetLods(::Unity::Collections::NativeArray_1<::UnityEngine::MeshLodRange> levels, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetLods", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLodsFromArray, addr 0x6f40aa4, size 0x134, virtual false, abstract: false, final false
  inline void SetLodsFromArray(::ArrayW<::UnityEngine::MeshLodRange> levelRanges, int32_t start, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLodsFromArray_Injected, addr 0x6f40bd8, size 0x74, virtual false, abstract: false, final false
  static inline void SetLodsFromArray_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> levelRanges, int32_t start, int32_t count, int32_t submesh,
                                               ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetLodsFromNativeArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLodsFromNativeArray, addr 0x6f40c4c, size 0xb0, virtual false, abstract: false, final false
  inline void SetLodsFromNativeArray(::System::IntPtr lodLevels, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetLodsFromNativeArray_Injected, addr 0x6f40cfc, size 0x6c, virtual false, abstract: false, final false
  static inline void SetLodsFromNativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr lodLevels, int32_t count, int32_t submesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction(Name = "SetMeshComponentFromNativeArrayFromScript", HasExplicitThis = true)]
  /// @brief Method SetNativeArrayForChannelImpl, addr 0x6f3d338, size 0xe0, virtual false, abstract: false, final false
  inline void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values,
                                           int32_t arraySize, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNativeArrayForChannelImpl_Injected, addr 0x6f3d418, size 0x9c, virtual false, abstract: false, final false
  static inline void SetNativeArrayForChannelImpl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format,
                                                           int32_t dim, ::System::IntPtr values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount,
                                                           ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x6f437e4, size 0x78, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals);

  /// [ExcludeFromDocs]
  /// @brief Method SetNormals, addr 0x6f4385c, size 0x74, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x6f438d0, size 0x78, virtual false, abstract: false, final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3> inNormals, int32_t start, int32_t length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals, addr 0x6f436d8, size 0x84, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals);

  /// [ExcludeFromDocs]
  /// @brief Method SetNormals, addr 0x6f4375c, size 0x8, virtual false, abstract: false, final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals, addr 0x6f43764, size 0x80, virtual false, abstract: false, final false
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

  /// @brief Method SetSizedArrayForChannel, addr 0x6f42454, size 0x21c, virtual false, abstract: false, final false
  inline void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values,
                                      int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSizedNativeArrayForChannel, addr 0x6f42670, size 0x218, virtual false, abstract: false, final false
  inline void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::IntPtr values,
                                            int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// [FreeFunction("MeshScripting::SetSubMesh", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetSubMesh, addr 0x6f40434, size 0xa8, virtual false, abstract: false, final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMesh_Injected, addr 0x6f404dc, size 0x5c, virtual false, abstract: false, final false
  static inline void SetSubMesh_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor const> desc,
                                         ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6f48ea8, size 0x28, virtual false, abstract: false, final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6f48bc0, size 0x2e8, virtual false, abstract: false, final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6f48f68, size 0xa8, virtual false, abstract: false, final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x6f48ed0, size 0x98, virtual false, abstract: false, final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x6f43b24, size 0x78, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents);

  /// [ExcludeFromDocs]
  /// @brief Method SetTangents, addr 0x6f43b9c, size 0x74, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x6f43c10, size 0x78, virtual false, abstract: false, final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4> inTangents, int32_t start, int32_t length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents, addr 0x6f43a18, size 0x84, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents);

  /// [ExcludeFromDocs]
  /// @brief Method SetTangents, addr 0x6f43a9c, size 0x8, virtual false, abstract: false, final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents, addr 0x6f43aa4, size 0x80, virtual false, abstract: false, final false
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
  /// @brief Method SetTriangles, addr 0x6f47724, size 0x64, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh);

  /// [ExcludeFromDocs]
  /// @brief Method SetTriangles, addr 0x6f477fc, size 0x70, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles, addr 0x6f47788, size 0x74, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, /* [DefaultValue("true")] */ bool calculateBounds, /* [DefaultValue("0")] */ int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47890, size 0x80, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f4786c, size 0x24, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47910, size 0xb8, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f479c8, size 0x74, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47a60, size 0x80, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t> triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47a3c, size 0x24, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47ae0, size 0xb8, virtual false, abstract: false, final false
  inline void SetTriangles(::ArrayW<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// [ExcludeFromDocs]
  /// @brief Method SetTriangles, addr 0x6f47b98, size 0xc, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// [ExcludeFromDocs]
  /// @brief Method SetTriangles, addr 0x6f47c54, size 0x8, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles, addr 0x6f47ba4, size 0xb0, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, /* [DefaultValue("true")] */ bool calculateBounds,
                           /* [DefaultValue("0")] */ int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47c80, size 0xbc, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47c5c, size 0x24, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47d3c, size 0x134, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod, bool calculateBounds,
                           int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47e70, size 0xb0, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47f44, size 0xbc, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, int32_t meshLod, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f47f20, size 0x24, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles, addr 0x6f48000, size 0x134, virtual false, abstract: false, final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, int32_t meshLod, bool calculateBounds,
                           int32_t baseVertex);

  /// @brief Method SetTrianglesImpl, addr 0x6f466ac, size 0x88, virtual false, abstract: false, final false
  inline void SetTrianglesImpl(int32_t submesh, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* triangles, int32_t trianglesArrayLength, int32_t start, int32_t length,
                               bool calculateBounds, int32_t baseVertex, int32_t meshLod);

  /// @brief Method SetUVs, addr 0x6f447a0, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f447f4, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f448e4, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2> uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6f4480c, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f44860, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f448fc, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3> uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6f44878, size 0x54, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f448cc, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f44914, size 0x18, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4> uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6f44324, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f443b0, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f444e0, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6f443b8, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f44444, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f44570, size 0x90, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length,
                     /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs, addr 0x6f4444c, size 0x8c, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// [ExcludeFromDocs]
  /// @brief Method SetUVs, addr 0x6f444d8, size 0x8, virtual false, abstract: false, final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs, addr 0x6f44600, size 0x90, virtual false, abstract: false, final false
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

  /// @brief Method SetUvsImpl, addr 0x6f44690, size 0x110, virtual false, abstract: false, final false
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

  /// @brief Method SetVertexBufferParams, addr 0x6f44ae0, size 0x4, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParams, addr 0x6f44ae4, size 0x6c, virtual false, abstract: false, final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// [FreeFunction(Name = "MeshScripting::SetVertexBufferParamsFromArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetVertexBufferParamsFromArray, addr 0x6f3b03c, size 0x10c, virtual false, abstract: false, final false
  inline void SetVertexBufferParamsFromArray(int32_t vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0x6f3b148, size 0x54, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr _unity_self, int32_t vertexCount, /* [ParamArray] */ ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attributes);

  /// [FreeFunction(Name = "MeshScripting::SetVertexBufferParamsFromPtr", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetVertexBufferParamsFromPtr, addr 0x6f3af38, size 0xa8, virtual false, abstract: false, final false
  inline void SetVertexBufferParamsFromPtr(int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount);

  /// @brief Method SetVertexBufferParamsFromPtr_Injected, addr 0x6f3afe0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVertexBufferParamsFromPtr_Injected(::System::IntPtr _unity_self, int32_t vertexCount, ::System::IntPtr attributesPtr, int32_t attributesCount);

  /// @brief Method SetVertices, addr 0x6f434a4, size 0x78, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices);

  /// [ExcludeFromDocs]
  /// @brief Method SetVertices, addr 0x6f4351c, size 0x74, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x6f43590, size 0x78, virtual false, abstract: false, final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3> inVertices, int32_t start, int32_t length, /* [DefaultValue("MeshUpdateFlags.Default")] */ ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices, addr 0x6f43398, size 0x84, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices);

  /// [ExcludeFromDocs]
  /// @brief Method SetVertices, addr 0x6f4341c, size 0x8, virtual false, abstract: false, final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices, addr 0x6f43424, size 0x80, virtual false, abstract: false, final false
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

  /// @brief Method UploadMeshData, addr 0x6f4a914, size 0x38, virtual false, abstract: false, final false
  inline void UploadMeshData(bool markNoLongerReadable);

  /// [NativeMethod("UploadMeshData")]
  /// @brief Method UploadMeshDataImpl, addr 0x6f41b34, size 0x90, virtual false, abstract: false, final false
  inline void UploadMeshDataImpl(bool markNoLongerReadable);

  /// @brief Method UploadMeshDataImpl_Injected, addr 0x6f41bc4, size 0x44, virtual false, abstract: false, final false
  static inline void UploadMeshDataImpl_Injected(::System::IntPtr _unity_self, bool markNoLongerReadable);

  /// @brief Method ValidateCanWriteToLods, addr 0x6f49194, size 0x60, virtual false, abstract: false, final false
  inline void ValidateCanWriteToLods();

  /// @brief Method ValidateLodIndex, addr 0x6f49010, size 0xbc, virtual false, abstract: false, final false
  inline void ValidateLodIndex(int32_t level);

  /// @brief Method ValidateSubMeshIndex, addr 0x6f490cc, size 0xc8, virtual false, abstract: false, final false
  inline void ValidateSubMeshIndex(int32_t submesh);

  /// [RequiredByNativeCode]
  /// @brief Method .ctor, addr 0x6f3a794, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bindposeCount, addr 0x6f3f728, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_bindposeCount();

  /// @brief Method get_bindposeCount_Injected, addr 0x6f3f7a8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_bindposeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bindposes, addr 0x6f3f7e4, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4> get_bindposes();

  /// @brief Method get_bindposes_Injected, addr 0x6f3f944, size 0x44, virtual false, abstract: false, final false
  static inline void get_bindposes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeMethod(Name = "GetBlendShapeChannelCount")]
  /// @brief Method get_blendShapeCount, addr 0x6f3e0a8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_blendShapeCount();

  /// @brief Method get_blendShapeCount_Injected, addr 0x6f3e128, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_blendShapeCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_boneWeights, addr 0x6f4a3e8, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::BoneWeight> get_boneWeights();

  /// @brief Method get_bounds, addr 0x6f414a4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x6f41554, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret);

  /// [NativeMethod("CanAccessFromScript")]
  /// @brief Method get_canAccess, addr 0x6f401ac, size 0x80, virtual false, abstract: false, final false
  inline bool get_canAccess();

  /// @brief Method get_canAccess_Injected, addr 0x6f4022c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canAccess_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_colors, addr 0x6f43044, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color> get_colors();

  /// @brief Method get_colors32, addr 0x6f430f8, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color32> get_colors32();

  /// @brief Method get_indexBufferTarget, addr 0x6f3df18, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget();

  /// @brief Method get_indexBufferTarget_Injected, addr 0x6f3df98, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_indexFormat, addr 0x6f3a968, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::IndexFormat get_indexFormat();

  /// @brief Method get_indexFormat_Injected, addr 0x6f3a9e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::IndexFormat get_indexFormat_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isLodSelectionActive, addr 0x6f432a8, size 0x18, virtual false, abstract: false, final false
  inline bool get_isLodSelectionActive();

  /// [NativeMethod("GetIsReadable")]
  /// @brief Method get_isReadable, addr 0x6f400f0, size 0x80, virtual false, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x6f40170, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_lodCount, addr 0x6f431bc, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_lodCount();

  /// @brief Method get_lodSelectionCurve, addr 0x6f432c0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh_LodSelectionCurve get_lodSelectionCurve();

  /// @brief Method get_normals, addr 0x6f4293c, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3> get_normals();

  /// @brief Method get_skinWeightBufferLayout, addr 0x6f4a3f0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::SkinWeights get_skinWeightBufferLayout();

  /// [NativeMethod(Name = "GetSubMeshCount")]
  /// @brief Method get_subMeshCount, addr 0x6f402a4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_subMeshCount();

  /// @brief Method get_subMeshCount_Injected, addr 0x6f40324, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subMeshCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_tangents, addr 0x6f429f0, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4> get_tangents();

  /// @brief Method get_triangles, addr 0x6f46578, size 0x7c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> get_triangles();

  /// @brief Method get_uv, addr 0x6f42aa4, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv();

  /// @brief Method get_uv2, addr 0x6f42b58, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv2();

  /// @brief Method get_uv3, addr 0x6f42c0c, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv3();

  /// @brief Method get_uv4, addr 0x6f42cc0, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv4();

  /// @brief Method get_uv5, addr 0x6f42d74, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv5();

  /// @brief Method get_uv6, addr 0x6f42e28, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv6();

  /// @brief Method get_uv7, addr 0x6f42edc, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv7();

  /// @brief Method get_uv8, addr 0x6f42f90, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector2> get_uv8();

  /// @brief Method get_vertexAttributeCount, addr 0x6f44a64, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_vertexAttributeCount();

  /// [FreeFunction(Name = "MeshScripting::GetVertexBufferCount", HasExplicitThis = true)]
  /// @brief Method get_vertexBufferCount, addr 0x6f3d6d4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method get_vertexBufferCount_Injected, addr 0x6f3d754, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_vertexBufferCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertexBufferTarget, addr 0x6f3dd88, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget();

  /// @brief Method get_vertexBufferTarget_Injected, addr 0x6f3de08, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("GetVertexCount")]
  /// @brief Method get_vertexCount, addr 0x6f3f4b8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_vertexCount();

  /// @brief Method get_vertexCount_Injected, addr 0x6f40268, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_vertexCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertices, addr 0x6f42888, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3> get_vertices();

  /// @brief Method set_bindposes, addr 0x6f3f988, size 0x104, virtual false, abstract: false, final false
  inline void set_bindposes(::ArrayW<::UnityEngine::Matrix4x4> value);

  /// @brief Method set_bindposes_Injected, addr 0x6f3fa8c, size 0x44, virtual false, abstract: false, final false
  static inline void set_bindposes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_boneWeights, addr 0x6f4a3ec, size 0x4, virtual false, abstract: false, final false
  inline void set_boneWeights(::ArrayW<::UnityEngine::BoneWeight> value);

  /// @brief Method set_bounds, addr 0x6f41598, size 0x90, virtual false, abstract: false, final false
  inline void set_bounds(::UnityEngine::Bounds value);

  /// @brief Method set_bounds_Injected, addr 0x6f41628, size 0x44, virtual false, abstract: false, final false
  static inline void set_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds const> value);

  /// @brief Method set_colors, addr 0x6f43094, size 0x64, virtual false, abstract: false, final false
  inline void set_colors(::ArrayW<::UnityEngine::Color> value);

  /// @brief Method set_colors32, addr 0x6f43150, size 0x6c, virtual false, abstract: false, final false
  inline void set_colors32(::ArrayW<::UnityEngine::Color32> value);

  /// @brief Method set_indexBufferTarget, addr 0x6f3dfd4, size 0x90, virtual false, abstract: false, final false
  inline void set_indexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_indexBufferTarget_Injected, addr 0x6f3e064, size 0x44, virtual false, abstract: false, final false
  static inline void set_indexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_indexFormat, addr 0x6f3aa24, size 0x90, virtual false, abstract: false, final false
  inline void set_indexFormat(::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method set_indexFormat_Injected, addr 0x6f3aab4, size 0x44, virtual false, abstract: false, final false
  static inline void set_indexFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method set_lodCount, addr 0x6f431c0, size 0xe8, virtual false, abstract: false, final false
  inline void set_lodCount(int32_t value);

  /// @brief Method set_lodSelectionCurve, addr 0x6f432c4, size 0x4, virtual false, abstract: false, final false
  inline void set_lodSelectionCurve(::UnityEngine::Mesh_LodSelectionCurve value);

  /// @brief Method set_normals, addr 0x6f4298c, size 0x64, virtual false, abstract: false, final false
  inline void set_normals(::ArrayW<::UnityEngine::Vector3> value);

  /// [FreeFunction(Name = "MeshScripting::SetSubMeshCount", HasExplicitThis = true)]
  /// @brief Method set_subMeshCount, addr 0x6f40360, size 0x90, virtual false, abstract: false, final false
  inline void set_subMeshCount(int32_t value);

  /// @brief Method set_subMeshCount_Injected, addr 0x6f403f0, size 0x44, virtual false, abstract: false, final false
  static inline void set_subMeshCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_tangents, addr 0x6f42a40, size 0x64, virtual false, abstract: false, final false
  inline void set_tangents(::ArrayW<::UnityEngine::Vector4> value);

  /// @brief Method set_triangles, addr 0x6f465f4, size 0xb8, virtual false, abstract: false, final false
  inline void set_triangles(::ArrayW<int32_t> value);

  /// @brief Method set_uv, addr 0x6f42af4, size 0x64, virtual false, abstract: false, final false
  inline void set_uv(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv2, addr 0x6f42ba8, size 0x64, virtual false, abstract: false, final false
  inline void set_uv2(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv3, addr 0x6f42c5c, size 0x64, virtual false, abstract: false, final false
  inline void set_uv3(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv4, addr 0x6f42d10, size 0x64, virtual false, abstract: false, final false
  inline void set_uv4(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv5, addr 0x6f42dc4, size 0x64, virtual false, abstract: false, final false
  inline void set_uv5(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv6, addr 0x6f42e78, size 0x64, virtual false, abstract: false, final false
  inline void set_uv6(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv7, addr 0x6f42f2c, size 0x64, virtual false, abstract: false, final false
  inline void set_uv7(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_uv8, addr 0x6f42fe0, size 0x64, virtual false, abstract: false, final false
  inline void set_uv8(::ArrayW<::UnityEngine::Vector2> value);

  /// @brief Method set_vertexBufferTarget, addr 0x6f3de44, size 0x90, virtual false, abstract: false, final false
  inline void set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertexBufferTarget_Injected, addr 0x6f3ded4, size 0x44, virtual false, abstract: false, final false
  static inline void set_vertexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertices, addr 0x6f428d8, size 0x64, virtual false, abstract: false, final false
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
