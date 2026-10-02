#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BlockAllocator_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryPool)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BlockAllocator_Allocation;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeoPoolMeshChunk;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolDesc;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolEntryDesc;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolEntryInfo;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolHandle;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPoolSubmeshData;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPool_GeoPoolEntrySlot;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class GeometryPool_GeoPoolShaderIDs;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPool_GeometrySlot;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPool_MeshChunk;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPool_VertexBufferAttribInfo;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class GeometryPool;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
class GeometryPool_GeoPoolShaderIDs;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPool_GeoPoolEntrySlot;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPool_GeometrySlot;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPool_MeshChunk;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeometryPool_VertexBufferAttribInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*);
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*);
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot);
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot);
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk);
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool*, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPool");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs*, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPool/GeoPoolShaderIDs");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPool/GeoPoolEntrySlot");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPool/GeometrySlot");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPool/MeshChunk");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo, "UnityEngine.Rendering.UnifiedRayTracing", "GeometryPool/VertexBufferAttribInfo");
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPool/GeoPoolShaderIDs
class CORDL_TYPE GeometryPool_GeoPoolShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AttributesMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AttributesMask, put = setStaticF__AttributesMask)) int32_t _AttributesMask;

  /// @brief Field _DispatchIndexOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DispatchIndexOffset, put = setStaticF__DispatchIndexOffset)) int32_t _DispatchIndexOffset;

  /// @brief Field _DispatchVertexOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DispatchVertexOffset, put = setStaticF__DispatchVertexOffset)) int32_t _DispatchVertexOffset;

  /// @brief Field _InputBaseVertexOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputBaseVertexOffset, put = setStaticF__InputBaseVertexOffset)) int32_t _InputBaseVertexOffset;

  /// @brief Field _InputFirstVertex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputFirstVertex, put = setStaticF__InputFirstVertex)) int32_t _InputFirstVertex;

  /// @brief Field _InputIBBaseOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputIBBaseOffset, put = setStaticF__InputIBBaseOffset)) int32_t _InputIBBaseOffset;

  /// @brief Field _InputIBCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputIBCount, put = setStaticF__InputIBCount)) int32_t _InputIBCount;

  /// @brief Field _InputIndexBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputIndexBuffer, put = setStaticF__InputIndexBuffer)) int32_t _InputIndexBuffer;

  /// @brief Field _InputNormalBufferOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputNormalBufferOffset, put = setStaticF__InputNormalBufferOffset)) int32_t _InputNormalBufferOffset;

  /// @brief Field _InputNormalBufferStride, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputNormalBufferStride, put = setStaticF__InputNormalBufferStride)) int32_t _InputNormalBufferStride;

  /// @brief Field _InputPosBufferOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputPosBufferOffset, put = setStaticF__InputPosBufferOffset)) int32_t _InputPosBufferOffset;

  /// @brief Field _InputPosBufferStride, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputPosBufferStride, put = setStaticF__InputPosBufferStride)) int32_t _InputPosBufferStride;

  /// @brief Field _InputUv0BufferOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputUv0BufferOffset, put = setStaticF__InputUv0BufferOffset)) int32_t _InputUv0BufferOffset;

  /// @brief Field _InputUv0BufferStride, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputUv0BufferStride, put = setStaticF__InputUv0BufferStride)) int32_t _InputUv0BufferStride;

  /// @brief Field _InputUv1BufferOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputUv1BufferOffset, put = setStaticF__InputUv1BufferOffset)) int32_t _InputUv1BufferOffset;

  /// @brief Field _InputUv1BufferStride, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputUv1BufferStride, put = setStaticF__InputUv1BufferStride)) int32_t _InputUv1BufferStride;

  /// @brief Field _InputVBCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InputVBCount, put = setStaticF__InputVBCount)) int32_t _InputVBCount;

  /// @brief Field _NormalBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__NormalBuffer, put = setStaticF__NormalBuffer)) int32_t _NormalBuffer;

  /// @brief Field _OutputIBOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputIBOffset, put = setStaticF__OutputIBOffset)) int32_t _OutputIBOffset;

  /// @brief Field _OutputIndexBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputIndexBuffer, put = setStaticF__OutputIndexBuffer)) int32_t _OutputIndexBuffer;

  /// @brief Field _OutputVB, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputVB, put = setStaticF__OutputVB)) int32_t _OutputVB;

  /// @brief Field _OutputVBOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputVBOffset, put = setStaticF__OutputVBOffset)) int32_t _OutputVBOffset;

  /// @brief Field _OutputVBSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OutputVBSize, put = setStaticF__OutputVBSize)) int32_t _OutputVBSize;

  /// @brief Field _PosBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__PosBuffer, put = setStaticF__PosBuffer)) int32_t _PosBuffer;

  /// @brief Field _Uv0Buffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Uv0Buffer, put = setStaticF__Uv0Buffer)) int32_t _Uv0Buffer;

  /// @brief Field _Uv1Buffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Uv1Buffer, put = setStaticF__Uv1Buffer)) int32_t _Uv1Buffer;

  static inline int32_t getStaticF__AttributesMask();

  static inline int32_t getStaticF__DispatchIndexOffset();

  static inline int32_t getStaticF__DispatchVertexOffset();

  static inline int32_t getStaticF__InputBaseVertexOffset();

  static inline int32_t getStaticF__InputFirstVertex();

  static inline int32_t getStaticF__InputIBBaseOffset();

  static inline int32_t getStaticF__InputIBCount();

  static inline int32_t getStaticF__InputIndexBuffer();

  static inline int32_t getStaticF__InputNormalBufferOffset();

  static inline int32_t getStaticF__InputNormalBufferStride();

  static inline int32_t getStaticF__InputPosBufferOffset();

  static inline int32_t getStaticF__InputPosBufferStride();

  static inline int32_t getStaticF__InputUv0BufferOffset();

  static inline int32_t getStaticF__InputUv0BufferStride();

  static inline int32_t getStaticF__InputUv1BufferOffset();

  static inline int32_t getStaticF__InputUv1BufferStride();

  static inline int32_t getStaticF__InputVBCount();

  static inline int32_t getStaticF__NormalBuffer();

  static inline int32_t getStaticF__OutputIBOffset();

  static inline int32_t getStaticF__OutputIndexBuffer();

  static inline int32_t getStaticF__OutputVB();

  static inline int32_t getStaticF__OutputVBOffset();

  static inline int32_t getStaticF__OutputVBSize();

  static inline int32_t getStaticF__PosBuffer();

  static inline int32_t getStaticF__Uv0Buffer();

  static inline int32_t getStaticF__Uv1Buffer();

  static inline void setStaticF__AttributesMask(int32_t value);

  static inline void setStaticF__DispatchIndexOffset(int32_t value);

  static inline void setStaticF__DispatchVertexOffset(int32_t value);

  static inline void setStaticF__InputBaseVertexOffset(int32_t value);

  static inline void setStaticF__InputFirstVertex(int32_t value);

  static inline void setStaticF__InputIBBaseOffset(int32_t value);

  static inline void setStaticF__InputIBCount(int32_t value);

  static inline void setStaticF__InputIndexBuffer(int32_t value);

  static inline void setStaticF__InputNormalBufferOffset(int32_t value);

  static inline void setStaticF__InputNormalBufferStride(int32_t value);

  static inline void setStaticF__InputPosBufferOffset(int32_t value);

  static inline void setStaticF__InputPosBufferStride(int32_t value);

  static inline void setStaticF__InputUv0BufferOffset(int32_t value);

  static inline void setStaticF__InputUv0BufferStride(int32_t value);

  static inline void setStaticF__InputUv1BufferOffset(int32_t value);

  static inline void setStaticF__InputUv1BufferStride(int32_t value);

  static inline void setStaticF__InputVBCount(int32_t value);

  static inline void setStaticF__NormalBuffer(int32_t value);

  static inline void setStaticF__OutputIBOffset(int32_t value);

  static inline void setStaticF__OutputIndexBuffer(int32_t value);

  static inline void setStaticF__OutputVB(int32_t value);

  static inline void setStaticF__OutputVBOffset(int32_t value);

  static inline void setStaticF__OutputVBSize(int32_t value);

  static inline void setStaticF__PosBuffer(int32_t value);

  static inline void setStaticF__Uv0Buffer(int32_t value);

  static inline void setStaticF__Uv1Buffer(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPool_GeoPoolShaderIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeometryPool_GeoPoolShaderIDs", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeometryPool_GeoPoolShaderIDs(GeometryPool_GeoPoolShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeometryPool_GeoPoolShaderIDs", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeometryPool_GeoPoolShaderIDs(GeometryPool_GeoPoolShaderIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20461 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator::Allocation
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPool/MeshChunk
struct CORDL_TYPE GeometryPool_MeshChunk {
public:
  // Declarations
  /// @brief Method EncodeGPUEntry, addr 0x6e05b60, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolMeshChunk EncodeGPUEntry();

  /// @brief Method get_Invalid, addr 0x6e04954, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk get_Invalid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPool_MeshChunk();

  // Ctor Parameters [CppParam { name: "vertexAlloc", ty: "::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "indexAlloc", ty: "::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation", modifiers: "", def_value: None, comment: None }]
  constexpr GeometryPool_MeshChunk(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation vertexAlloc,
                                   ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation indexAlloc) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20462 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field vertexAlloc, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation vertexAlloc;

  /// @brief Field indexAlloc, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation indexAlloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk, vertexAlloc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk, indexAlloc) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator::Allocation, UnityEngine.Rendering.UnifiedRayTracing.GeometryPool::MeshChunk
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPool/GeometrySlot
struct CORDL_TYPE GeometryPool_GeometrySlot {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot Invalid;

  __declspec(property(get = get_valid)) bool valid;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot getStaticF_Invalid();

  /// @brief Method get_valid, addr 0x6e034a0, size 0x60, virtual false, abstract: false, final false
  inline bool get_valid();

  static inline void setStaticF_Invalid(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPool_GeometrySlot();

  // Ctor Parameters [CppParam { name: "refCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hash", ty: "uint32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "meshChunkTableAlloc", ty: "::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "meshChunks", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "hasGPUData", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr GeometryPool_GeometrySlot(uint32_t refCount, uint32_t hash, ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation meshChunkTableAlloc,
                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk> meshChunks, bool hasGPUData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20463 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field refCount, offset: 0x0, size: 0x4, def value: None
  uint32_t refCount;

  /// @brief Field hash, offset: 0x4, size: 0x4, def value: None
  uint32_t hash;

  /// @brief Field meshChunkTableAlloc, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation meshChunkTableAlloc;

  /// @brief Field meshChunks, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk> meshChunks;

  /// @brief Field hasGPUData, offset: 0x28, size: 0x1, def value: None
  bool hasGPUData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot, refCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot, hash) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot, meshChunkTableAlloc) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot, meshChunks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot, hasGPUData) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPool/GeoPoolEntrySlot
struct CORDL_TYPE GeometryPool_GeoPoolEntrySlot {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot Invalid;

  __declspec(property(get = get_valid)) bool valid;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot getStaticF_Invalid();

  /// @brief Method get_valid, addr 0x6e04d04, size 0x10, virtual false, abstract: false, final false
  inline bool get_valid();

  static inline void setStaticF_Invalid(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPool_GeoPoolEntrySlot();

  // Ctor Parameters [CppParam { name: "refCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hash", ty: "uint32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "geoSlotHandle", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GeometryPool_GeoPoolEntrySlot(uint32_t refCount, uint32_t hash, int32_t geoSlotHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20464 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field refCount, offset: 0x0, size: 0x4, def value: None
  uint32_t refCount;

  /// @brief Field hash, offset: 0x4, size: 0x4, def value: None
  uint32_t hash;

  /// @brief Field geoSlotHandle, offset: 0x8, size: 0x4, def value: None
  int32_t geoSlotHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot, refCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot, hash) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot, geoSlotHandle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot) == 0xc, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPool/VertexBufferAttribInfo
struct CORDL_TYPE GeometryPool_VertexBufferAttribInfo {
public:
  // Declarations
  __declspec(property(get = get_valid)) bool valid;

  /// @brief Method get_valid, addr 0x6e063ec, size 0x10, virtual false, abstract: false, final false
  inline bool get_valid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPool_VertexBufferAttribInfo();

  // Ctor Parameters [CppParam { name: "buffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "stride", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byteCount", ty: "int32_t", modifiers: "", def_value:
  // None, comment: None }]
  constexpr GeometryPool_VertexBufferAttribInfo(::UnityEngine::GraphicsBuffer* buffer, int32_t stride, int32_t offset, int32_t byteCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20465 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field buffer, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* buffer;

  /// @brief Field stride, offset: 0x8, size: 0x4, def value: None
  int32_t stride;

  /// @brief Field offset, offset: 0xc, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field byteCount, offset: 0x10, size: 0x4, def value: None
  int32_t byteCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo, buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo, stride) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo, offset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo, byteCount) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies System.Object, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.GraphicsBuffer::Target,
// UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator, UnityEngine.Rendering.UnifiedRayTracing.GeometryPool::GeoPoolEntrySlot, UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolHandle
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeometryPool
class CORDL_TYPE GeometryPool : public ::System::Object {
public:
  // Declarations
  using GeoPoolEntrySlot = ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot;

  using GeoPoolShaderIDs = ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolShaderIDs;

  using GeometrySlot = ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot;

  using MeshChunk = ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_MeshChunk;

  using VertexBufferAttribInfo = ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo;

  __declspec(property(get = get_globalIndexBuffer)) ::UnityEngine::GraphicsBuffer* globalIndexBuffer;

  __declspec(property(get = get_globalMeshChunkTableEntryBuffer)) ::UnityEngine::GraphicsBuffer* globalMeshChunkTableEntryBuffer;

  __declspec(property(get = get_globalVertexBuffer)) ::UnityEngine::GraphicsBuffer* globalVertexBuffer;

  __declspec(property(get = get_globalVertexBufferStrideBytes)) int32_t globalVertexBufferStrideBytes;

  __declspec(property(get = get_indicesCount)) int32_t indicesCount;

  /// @brief Field m_CmdBuffer, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CmdBuffer, put = __cordl_internal_set_m_CmdBuffer)) ::UnityEngine::Rendering::CommandBuffer* m_CmdBuffer;

  /// @brief Field m_CopyShader, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyShader, put = __cordl_internal_set_m_CopyShader)) ::UnityW<::UnityEngine::ComputeShader> m_CopyShader;

  /// @brief Field m_DummyBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DummyBuffer, put = __cordl_internal_set_m_DummyBuffer)) ::UnityEngine::GraphicsBuffer* m_DummyBuffer;

  /// @brief Field m_FreeGeoPoolEntrySlots, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeGeoPoolEntrySlots,
                      put = __cordl_internal_set_m_FreeGeoPoolEntrySlots)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>
      m_FreeGeoPoolEntrySlots;

  /// @brief Field m_FreeGeoSlots, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeGeoSlots, put = __cordl_internal_set_m_FreeGeoSlots)) ::Unity::Collections::NativeList_1<int32_t> m_FreeGeoSlots;

  /// @brief Field m_GeoPoolEntryHashToSlot, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_GeoPoolEntryHashToSlot,
                      put = __cordl_internal_set_m_GeoPoolEntryHashToSlot)) ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>
      m_GeoPoolEntryHashToSlot;

  /// @brief Field m_GeoPoolEntrySlots, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GeoPoolEntrySlots,
                      put = __cordl_internal_set_m_GeoPoolEntrySlots)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>
      m_GeoPoolEntrySlots;

  /// @brief Field m_GeoSlots, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GeoSlots,
                      put = __cordl_internal_set_m_GeoSlots)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>* m_GeoSlots;

  /// @brief Field m_GeometryPoolKernelsCS, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GeometryPoolKernelsCS, put = __cordl_internal_set_m_GeometryPoolKernelsCS)) ::UnityW<::UnityEngine::ComputeShader> m_GeometryPoolKernelsCS;

  /// @brief Field m_GlobalIndexBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlobalIndexBuffer, put = __cordl_internal_set_m_GlobalIndexBuffer)) ::UnityEngine::GraphicsBuffer* m_GlobalIndexBuffer;

  /// @brief Field m_GlobalMeshChunkTableEntryBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlobalMeshChunkTableEntryBuffer,
                      put = __cordl_internal_set_m_GlobalMeshChunkTableEntryBuffer)) ::UnityEngine::GraphicsBuffer* m_GlobalMeshChunkTableEntryBuffer;

  /// @brief Field m_GlobalVertexBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlobalVertexBuffer, put = __cordl_internal_set_m_GlobalVertexBuffer)) ::UnityEngine::GraphicsBuffer* m_GlobalVertexBuffer;

  /// @brief Field m_IndexAllocator, offset 0x60, size 0x20
  __declspec(property(get = __cordl_internal_get_m_IndexAllocator, put = __cordl_internal_set_m_IndexAllocator)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator m_IndexAllocator;

  /// @brief Field m_InputBufferReferences, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputBufferReferences,
                      put = __cordl_internal_set_m_InputBufferReferences)) ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* m_InputBufferReferences;

  /// @brief Field m_KernelMainUpdateIndexBuffer16, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KernelMainUpdateIndexBuffer16, put = __cordl_internal_set_m_KernelMainUpdateIndexBuffer16)) int32_t m_KernelMainUpdateIndexBuffer16;

  /// @brief Field m_KernelMainUpdateIndexBuffer32, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KernelMainUpdateIndexBuffer32, put = __cordl_internal_set_m_KernelMainUpdateIndexBuffer32)) int32_t m_KernelMainUpdateIndexBuffer32;

  /// @brief Field m_KernelMainUpdateVertexBuffer, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KernelMainUpdateVertexBuffer, put = __cordl_internal_set_m_KernelMainUpdateVertexBuffer)) int32_t m_KernelMainUpdateVertexBuffer;

  /// @brief Field m_MaxIndexCounts, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxIndexCounts, put = __cordl_internal_set_m_MaxIndexCounts)) int32_t m_MaxIndexCounts;

  /// @brief Field m_MaxMeshChunkTableEntriesCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxMeshChunkTableEntriesCount, put = __cordl_internal_set_m_MaxMeshChunkTableEntriesCount)) int32_t m_MaxMeshChunkTableEntriesCount;

  /// @brief Field m_MaxVertCounts, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxVertCounts, put = __cordl_internal_set_m_MaxVertCounts)) int32_t m_MaxVertCounts;

  /// @brief Field m_MeshChunkTableAllocator, offset 0x80, size 0x20
  __declspec(property(get = __cordl_internal_get_m_MeshChunkTableAllocator,
                      put = __cordl_internal_set_m_MeshChunkTableAllocator)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator m_MeshChunkTableAllocator;

  /// @brief Field m_MeshHashToGeoSlot, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_MeshHashToGeoSlot, put = __cordl_internal_set_m_MeshHashToGeoSlot)) ::Unity::Collections::NativeParallelHashMap_2<uint32_t, int32_t>
      m_MeshHashToGeoSlot;

  /// @brief Field m_MustClearCmdBuffer, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MustClearCmdBuffer, put = __cordl_internal_set_m_MustClearCmdBuffer)) bool m_MustClearCmdBuffer;

  /// @brief Field m_PendingCmds, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PendingCmds, put = __cordl_internal_set_m_PendingCmds)) int32_t m_PendingCmds;

  /// @brief Field m_VertexAllocator, offset 0x40, size 0x20
  __declspec(property(get = __cordl_internal_get_m_VertexAllocator, put = __cordl_internal_set_m_VertexAllocator)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator m_VertexAllocator;

  __declspec(property(get = get_meshChunkTablesEntryCount)) int32_t meshChunkTablesEntryCount;

  __declspec(property(get = get_verticesCount)) int32_t verticesCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddIndexUpdateCommand, addr 0x6e058d4, size 0x28c, virtual false, abstract: false, final false
  inline void AddIndexUpdateCommand(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, ::UnityEngine::Rendering::IndexFormat inputFormat,
                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::GraphicsBuffer*> inputBuffer,
                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> location, int32_t firstVertex, int32_t inputOffset,
                                    int32_t indexCount, int32_t outputOffset, ::UnityEngine::GraphicsBuffer* outputIdxBuffer);

  /// @brief Method AddVertexUpdateCommand, addr 0x6e0543c, size 0x498, virtual false, abstract: false, final false
  inline void AddVertexUpdateCommand(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int32_t baseVertexOffset,
                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo> pos,
                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo> uv0,
                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo> uv1,
                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo> n,
                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation> location, ::UnityEngine::GraphicsBuffer* outputVertexBuffer);

  /// @brief Method AllocateCommandBuffer, addr 0x6e05188, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CommandBuffer* AllocateCommandBuffer();

  /// @brief Method AllocateGeo, addr 0x6e03950, size 0x8c0, virtual false, abstract: false, final false
  inline bool AllocateGeo(::UnityEngine::Mesh* mesh, ::by_ref<int32_t> allocationHandle);

  /// @brief Method CalcIndexCount, addr 0x6e03058, size 0x18, virtual false, abstract: false, final false
  inline int32_t CalcIndexCount(int32_t bufferByteSize);

  /// @brief Method CalcMeshChunkTablesCount, addr 0x6e03070, size 0x20, virtual false, abstract: false, final false
  inline int32_t CalcMeshChunkTablesCount(int32_t bufferByteSize);

  /// @brief Method CalcVertexCount, addr 0x6e03040, size 0x18, virtual false, abstract: false, final false
  inline int32_t CalcVertexCount(int32_t bufferByteSize);

  /// @brief Method CalculateClusterHash, addr 0x6e05ba0, size 0x148, virtual false, abstract: false, final false
  inline uint32_t CalculateClusterHash(::UnityEngine::Mesh* mesh, ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData> submeshData);

  /// @brief Method DeallocateGeoPoolEntrySlot, addr 0x6e04b38, size 0x8c, virtual false, abstract: false, final false
  inline void DeallocateGeoPoolEntrySlot(::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot> geoPoolEntrySlot);

  /// @brief Method DeallocateGeoPoolEntrySlot, addr 0x6e049e0, size 0x158, virtual false, abstract: false, final false
  inline void DeallocateGeoPoolEntrySlot(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle);

  /// @brief Method DeallocateGeometrySlot, addr 0x6e0381c, size 0x134, virtual false, abstract: false, final false
  inline void DeallocateGeometrySlot(int32_t geoSlotHandle);

  /// @brief Method DeallocateGeometrySlot, addr 0x6e03500, size 0x1a0, virtual false, abstract: false, final false
  inline void DeallocateGeometrySlot(::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot> slot);

  /// @brief Method Dispose, addr 0x6e020a8, size 0x2c4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeInputBuffers, addr 0x6e03264, size 0x170, virtual false, abstract: false, final false
  inline void DisposeInputBuffers();

  /// @brief Method DivUp, addr 0x6e02f28, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DivUp(int32_t x, int32_t y);

  /// @brief Method FNVHash, addr 0x6e05b70, size 0x30, virtual false, abstract: false, final false
  inline uint32_t FNVHash(uint32_t prevHash, uint32_t dword);

  /// @brief Method FindSubmeshEntryInDesc, addr 0x6e05ce8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FindSubmeshEntryInDesc(int32_t submeshIndex, /* [IsReadOnly] */ ::by_ref<::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolSubmeshData>> submeshData);

  /// @brief Method GetEntryGeomAllocation, addr 0x6e028fc, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot GetEntryGeomAllocation(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle);

  /// @brief Method GetEntryInfo, addr 0x6e04bc4, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo GetEntryInfo(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle);

  /// @brief Method GetFormatByteCount, addr 0x6e02f04, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetFormatByteCount(::UnityEngine::Rendering::VertexAttributeFormat format);

  /// @brief Method GetHandle, addr 0x6e04d44, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle GetHandle(::UnityEngine::Mesh* mesh);

  /// @brief Method GetIndexByteSize, addr 0x6e02e90, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetIndexByteSize();

  /// @brief Method GetInstanceGeometryIndex, addr 0x6e04d14, size 0x30, virtual false, abstract: false, final false
  inline int32_t GetInstanceGeometryIndex(::UnityEngine::Mesh* mesh);

  /// @brief Method GetMeshChunkTableEntryByteSize, addr 0x6e02e98, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetMeshChunkTableEntryByteSize();

  /// @brief Method GetVertexByteSize, addr 0x6e029cc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetVertexByteSize();

  /// @brief Method LoadIndexBuffer, addr 0x6e051c8, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* LoadIndexBuffer(::UnityEngine::Mesh* mesh);

  /// @brief Method LoadKernels, addr 0x6e02f68, size 0xd8, virtual false, abstract: false, final false
  inline void LoadKernels(::UnityEngine::ComputeShader* geometryPoolShader);

  /// @brief Method LoadVertexAttribInfo, addr 0x6e052c8, size 0x174, virtual false, abstract: false, final false
  inline void LoadVertexAttribInfo(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::VertexAttribute attribute,
                                   ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_VertexBufferAttribInfo> output);

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool* New_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc> desc,
                                                                                    ::UnityEngine::ComputeShader* geometryPoolShader, ::UnityEngine::ComputeShader* copyShader);

  /// @brief Method Register, addr 0x6e05d2c, size 0x6c0, virtual false, abstract: false, final false
  inline bool Register(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryDesc> entryDesc,
                       ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> outHandle);

  /// @brief Method Register, addr 0x6e0283c, size 0x24, virtual false, abstract: false, final false
  inline bool Register(::UnityEngine::Mesh* mesh, ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> outHandle);

  /// @brief Method SendGpuCommands, addr 0x6e0202c, size 0x7c, virtual false, abstract: false, final false
  inline void SendGpuCommands();

  /// @brief Method Unregister, addr 0x6e01fbc, size 0x70, virtual false, abstract: false, final false
  inline void Unregister(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle);

  /// @brief Method UpdateGeoGpuState, addr 0x6e04df8, size 0x390, virtual false, abstract: false, final false
  inline void UpdateGeoGpuState(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle handle);

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_CmdBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_CmdBuffer();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_CopyShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_CopyShader();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_DummyBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_DummyBuffer();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> const& __cordl_internal_get_m_FreeGeoPoolEntrySlots() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>& __cordl_internal_get_m_FreeGeoPoolEntrySlots();

  constexpr ::Unity::Collections::NativeList_1<int32_t> const& __cordl_internal_get_m_FreeGeoSlots() const;

  constexpr ::Unity::Collections::NativeList_1<int32_t>& __cordl_internal_get_m_FreeGeoSlots();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> const& __cordl_internal_get_m_GeoPoolEntryHashToSlot() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle>& __cordl_internal_get_m_GeoPoolEntryHashToSlot();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot> const& __cordl_internal_get_m_GeoPoolEntrySlots() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot>& __cordl_internal_get_m_GeoPoolEntrySlots();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>* const& __cordl_internal_get_m_GeoSlots() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>*& __cordl_internal_get_m_GeoSlots();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_GeometryPoolKernelsCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_GeometryPoolKernelsCS();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_GlobalIndexBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_GlobalIndexBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_GlobalMeshChunkTableEntryBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_GlobalMeshChunkTableEntryBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_GlobalVertexBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_GlobalVertexBuffer();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& __cordl_internal_get_m_IndexAllocator() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& __cordl_internal_get_m_IndexAllocator();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* const& __cordl_internal_get_m_InputBufferReferences() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>*& __cordl_internal_get_m_InputBufferReferences();

  constexpr int32_t const& __cordl_internal_get_m_KernelMainUpdateIndexBuffer16() const;

  constexpr int32_t& __cordl_internal_get_m_KernelMainUpdateIndexBuffer16();

  constexpr int32_t const& __cordl_internal_get_m_KernelMainUpdateIndexBuffer32() const;

  constexpr int32_t& __cordl_internal_get_m_KernelMainUpdateIndexBuffer32();

  constexpr int32_t const& __cordl_internal_get_m_KernelMainUpdateVertexBuffer() const;

  constexpr int32_t& __cordl_internal_get_m_KernelMainUpdateVertexBuffer();

  constexpr int32_t const& __cordl_internal_get_m_MaxIndexCounts() const;

  constexpr int32_t& __cordl_internal_get_m_MaxIndexCounts();

  constexpr int32_t const& __cordl_internal_get_m_MaxMeshChunkTableEntriesCount() const;

  constexpr int32_t& __cordl_internal_get_m_MaxMeshChunkTableEntriesCount();

  constexpr int32_t const& __cordl_internal_get_m_MaxVertCounts() const;

  constexpr int32_t& __cordl_internal_get_m_MaxVertCounts();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& __cordl_internal_get_m_MeshChunkTableAllocator() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& __cordl_internal_get_m_MeshChunkTableAllocator();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, int32_t> const& __cordl_internal_get_m_MeshHashToGeoSlot() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, int32_t>& __cordl_internal_get_m_MeshHashToGeoSlot();

  constexpr bool const& __cordl_internal_get_m_MustClearCmdBuffer() const;

  constexpr bool& __cordl_internal_get_m_MustClearCmdBuffer();

  constexpr int32_t const& __cordl_internal_get_m_PendingCmds() const;

  constexpr int32_t& __cordl_internal_get_m_PendingCmds();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator const& __cordl_internal_get_m_VertexAllocator() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator& __cordl_internal_get_m_VertexAllocator();

  constexpr void __cordl_internal_set_m_CmdBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_m_CopyShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_DummyBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_FreeGeoPoolEntrySlots(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> value);

  constexpr void __cordl_internal_set_m_FreeGeoSlots(::Unity::Collections::NativeList_1<int32_t> value);

  constexpr void __cordl_internal_set_m_GeoPoolEntryHashToSlot(::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> value);

  constexpr void __cordl_internal_set_m_GeoPoolEntrySlots(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot> value);

  constexpr void __cordl_internal_set_m_GeoSlots(::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>* value);

  constexpr void __cordl_internal_set_m_GeometryPoolKernelsCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_GlobalIndexBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_GlobalMeshChunkTableEntryBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_GlobalVertexBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_IndexAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value);

  constexpr void __cordl_internal_set_m_InputBufferReferences(::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* value);

  constexpr void __cordl_internal_set_m_KernelMainUpdateIndexBuffer16(int32_t value);

  constexpr void __cordl_internal_set_m_KernelMainUpdateIndexBuffer32(int32_t value);

  constexpr void __cordl_internal_set_m_KernelMainUpdateVertexBuffer(int32_t value);

  constexpr void __cordl_internal_set_m_MaxIndexCounts(int32_t value);

  constexpr void __cordl_internal_set_m_MaxMeshChunkTableEntriesCount(int32_t value);

  constexpr void __cordl_internal_set_m_MaxVertCounts(int32_t value);

  constexpr void __cordl_internal_set_m_MeshChunkTableAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value);

  constexpr void __cordl_internal_set_m_MeshHashToGeoSlot(::Unity::Collections::NativeParallelHashMap_2<uint32_t, int32_t> value);

  constexpr void __cordl_internal_set_m_MustClearCmdBuffer(bool value);

  constexpr void __cordl_internal_set_m_PendingCmds(int32_t value);

  constexpr void __cordl_internal_set_m_VertexAllocator(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator value);

  /// @brief Method .ctor, addr 0x6dff5cc, size 0x3bc, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolDesc> desc, ::UnityEngine::ComputeShader* geometryPoolShader,
                    ::UnityEngine::ComputeShader* copyShader);

  /// @brief Method get_globalIndexBuffer, addr 0x6e02f38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_globalIndexBuffer();

  /// @brief Method get_globalMeshChunkTableEntryBuffer, addr 0x6e02f48, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_globalMeshChunkTableEntryBuffer();

  /// @brief Method get_globalVertexBuffer, addr 0x6e02f40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_globalVertexBuffer();

  /// @brief Method get_globalVertexBufferStrideBytes, addr 0x6e02d44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_globalVertexBufferStrideBytes();

  /// @brief Method get_indicesCount, addr 0x6e02f50, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_indicesCount();

  /// @brief Method get_meshChunkTablesEntryCount, addr 0x6e02f60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_meshChunkTablesEntryCount();

  /// @brief Method get_verticesCount, addr 0x6e02f58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_verticesCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeometryPool", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeometryPool(GeometryPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeometryPool", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeometryPool(GeometryPool const&) = delete;

  /// @brief Field IndexBufferTarget value: I32(16)
  static ::UnityEngine::GraphicsBuffer_Target const IndexBufferTarget;

  /// @brief Field InvalidHandle offset 0xffffffff size 0x4
  static constexpr int32_t InvalidHandle{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field VertexBufferTarget value: I32(16)
  static ::UnityEngine::GraphicsBuffer_Target const VertexBufferTarget;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20466 };

  /// @brief Field kMaxThreadGroupsPerDispatch offset 0xffffffff size 0x4
  static constexpr int32_t kMaxThreadGroupsPerDispatch{ static_cast<int32_t>(0xffff) };

  /// @brief Field kThreadGroupSize offset 0xffffffff size 0x4
  static constexpr int32_t kThreadGroupSize{ static_cast<int32_t>(0x100) };

  /// @brief Field m_GlobalIndexBuffer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_GlobalIndexBuffer;

  /// @brief Field m_GlobalVertexBuffer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_GlobalVertexBuffer;

  /// @brief Field m_GlobalMeshChunkTableEntryBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_GlobalMeshChunkTableEntryBuffer;

  /// @brief Field m_DummyBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_DummyBuffer;

  /// @brief Field m_MaxVertCounts, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_MaxVertCounts;

  /// @brief Field m_MaxIndexCounts, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_MaxIndexCounts;

  /// @brief Field m_MaxMeshChunkTableEntriesCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_MaxMeshChunkTableEntriesCount;

  /// @brief Field m_VertexAllocator, offset: 0x40, size: 0x20, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator ___m_VertexAllocator;

  /// @brief Field m_IndexAllocator, offset: 0x60, size: 0x20, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator ___m_IndexAllocator;

  /// @brief Field m_MeshChunkTableAllocator, offset: 0x80, size: 0x20, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator ___m_MeshChunkTableAllocator;

  /// @brief Field m_MeshHashToGeoSlot, offset: 0xa0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<uint32_t, int32_t> ___m_MeshHashToGeoSlot;

  /// @brief Field m_GeoSlots, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeometrySlot>* ___m_GeoSlots;

  /// @brief Field m_FreeGeoSlots, offset: 0xb8, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> ___m_FreeGeoSlots;

  /// @brief Field m_GeoPoolEntryHashToSlot, offset: 0xc0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> ___m_GeoPoolEntryHashToSlot;

  /// @brief Field m_GeoPoolEntrySlots, offset: 0xd0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool_GeoPoolEntrySlot> ___m_GeoPoolEntrySlots;

  /// @brief Field m_FreeGeoPoolEntrySlots, offset: 0xd8, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolHandle> ___m_FreeGeoPoolEntrySlots;

  /// @brief Field m_InputBufferReferences, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* ___m_InputBufferReferences;

  /// @brief Field m_CopyShader, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_CopyShader;

  /// @brief Field m_GeometryPoolKernelsCS, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_GeometryPoolKernelsCS;

  /// @brief Field m_KernelMainUpdateIndexBuffer16, offset: 0xf8, size: 0x4, def value: None
  int32_t ___m_KernelMainUpdateIndexBuffer16;

  /// @brief Field m_KernelMainUpdateIndexBuffer32, offset: 0xfc, size: 0x4, def value: None
  int32_t ___m_KernelMainUpdateIndexBuffer32;

  /// @brief Field m_KernelMainUpdateVertexBuffer, offset: 0x100, size: 0x4, def value: None
  int32_t ___m_KernelMainUpdateVertexBuffer;

  /// @brief Field m_CmdBuffer, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_CmdBuffer;

  /// @brief Field m_MustClearCmdBuffer, offset: 0x110, size: 0x1, def value: None
  bool ___m_MustClearCmdBuffer;

  /// @brief Field m_PendingCmds, offset: 0x114, size: 0x4, def value: None
  int32_t ___m_PendingCmds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_GlobalIndexBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_GlobalVertexBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_GlobalMeshChunkTableEntryBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_DummyBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_MaxVertCounts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_MaxIndexCounts) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_MaxMeshChunkTableEntriesCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_VertexAllocator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_IndexAllocator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_MeshChunkTableAllocator) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_MeshHashToGeoSlot) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_GeoSlots) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_FreeGeoSlots) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_GeoPoolEntryHashToSlot) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_GeoPoolEntrySlots) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_FreeGeoPoolEntrySlots) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_InputBufferReferences) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_CopyShader) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_GeometryPoolKernelsCS) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_KernelMainUpdateIndexBuffer16) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_KernelMainUpdateIndexBuffer32) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_KernelMainUpdateVertexBuffer) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_CmdBuffer) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_MustClearCmdBuffer) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool, ___m_PendingCmds) == 0x114, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeometryPool) == 0x118, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
