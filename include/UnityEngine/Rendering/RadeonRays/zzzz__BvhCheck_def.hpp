#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/BvhCheck.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__IndexFormat_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BvhCheck)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
struct uint4;
}
namespace UnityEngine::Rendering::RadeonRays {
class AABB;
}
namespace UnityEngine::Rendering::RadeonRays {
struct BottomLevelLevelAccelStruct;
}
namespace UnityEngine::Rendering::RadeonRays {
struct BvhCheck_Triangle;
}
namespace UnityEngine::Rendering::RadeonRays {
class BvhCheck_VertexBuffersCPU;
}
namespace UnityEngine::Rendering::RadeonRays {
class BvhCheck_VertexBuffers;
}
namespace UnityEngine::Rendering::RadeonRays {
struct BvhHeader;
}
namespace UnityEngine::Rendering::RadeonRays {
struct BvhNode;
}
namespace UnityEngine::Rendering::RadeonRays {
struct MeshBuildInfo;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
class BvhCheck;
}
namespace UnityEngine::Rendering::RadeonRays {
class BvhCheck_VertexBuffers;
}
namespace UnityEngine::Rendering::RadeonRays {
class BvhCheck_VertexBuffersCPU;
}
namespace UnityEngine::Rendering::RadeonRays {
struct BvhCheck_Triangle;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::BvhCheck*);
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*);
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU*);
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::BvhCheck*, "UnityEngine.Rendering.RadeonRays", "BvhCheck");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers*, "UnityEngine.Rendering.RadeonRays", "BvhCheck/VertexBuffers");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU*, "UnityEngine.Rendering.RadeonRays", "BvhCheck/VertexBuffersCPU");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle, "UnityEngine.Rendering.RadeonRays", "BvhCheck/Triangle");
// Dependencies System.Object, UnityEngine.Rendering.RadeonRays.IndexFormat
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.BvhCheck/VertexBuffers
class CORDL_TYPE BvhCheck_VertexBuffers : public ::System::Object {
public:
  // Declarations
  /// @brief Field indexBufferOffset, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_indexBufferOffset, put = __cordl_internal_set_indexBufferOffset)) uint32_t indexBufferOffset;

  /// @brief Field indexCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_indexCount, put = __cordl_internal_set_indexCount)) uint32_t indexCount;

  /// @brief Field indexFormat, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_indexFormat, put = __cordl_internal_set_indexFormat)) ::UnityEngine::Rendering::RadeonRays::IndexFormat indexFormat;

  /// @brief Field indices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_indices, put = __cordl_internal_set_indices)) ::UnityEngine::GraphicsBuffer* indices;

  /// @brief Field vertexBufferOffset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_vertexBufferOffset, put = __cordl_internal_set_vertexBufferOffset)) uint32_t vertexBufferOffset;

  /// @brief Field vertexCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_vertexCount, put = __cordl_internal_set_vertexCount)) uint32_t vertexCount;

  /// @brief Field vertexStride, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_vertexStride, put = __cordl_internal_set_vertexStride)) uint32_t vertexStride;

  /// @brief Field vertices, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_vertices, put = __cordl_internal_set_vertices)) ::UnityEngine::GraphicsBuffer* vertices;

  static inline ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* New_ctor();

  constexpr uint32_t const& __cordl_internal_get_indexBufferOffset() const;

  constexpr uint32_t& __cordl_internal_get_indexBufferOffset();

  constexpr uint32_t const& __cordl_internal_get_indexCount() const;

  constexpr uint32_t& __cordl_internal_get_indexCount();

  constexpr ::UnityEngine::Rendering::RadeonRays::IndexFormat const& __cordl_internal_get_indexFormat() const;

  constexpr ::UnityEngine::Rendering::RadeonRays::IndexFormat& __cordl_internal_get_indexFormat();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_indices() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_indices();

  constexpr uint32_t const& __cordl_internal_get_vertexBufferOffset() const;

  constexpr uint32_t& __cordl_internal_get_vertexBufferOffset();

  constexpr uint32_t const& __cordl_internal_get_vertexCount() const;

  constexpr uint32_t& __cordl_internal_get_vertexCount();

  constexpr uint32_t const& __cordl_internal_get_vertexStride() const;

  constexpr uint32_t& __cordl_internal_get_vertexStride();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_vertices() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_vertices();

  constexpr void __cordl_internal_set_indexBufferOffset(uint32_t value);

  constexpr void __cordl_internal_set_indexCount(uint32_t value);

  constexpr void __cordl_internal_set_indexFormat(::UnityEngine::Rendering::RadeonRays::IndexFormat value);

  constexpr void __cordl_internal_set_indices(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_vertexBufferOffset(uint32_t value);

  constexpr void __cordl_internal_set_vertexCount(uint32_t value);

  constexpr void __cordl_internal_set_vertexStride(uint32_t value);

  constexpr void __cordl_internal_set_vertices(::UnityEngine::GraphicsBuffer* value);

  /// @brief Method .ctor, addr 0x6dfacf0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BvhCheck_VertexBuffers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BvhCheck_VertexBuffers", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BvhCheck_VertexBuffers(BvhCheck_VertexBuffers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BvhCheck_VertexBuffers", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BvhCheck_VertexBuffers(BvhCheck_VertexBuffers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20417 };

  /// @brief Field vertices, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___vertices;

  /// @brief Field indices, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___indices;

  /// @brief Field vertexBufferOffset, offset: 0x20, size: 0x4, def value: None
  uint32_t ___vertexBufferOffset;

  /// @brief Field vertexCount, offset: 0x24, size: 0x4, def value: None
  uint32_t ___vertexCount;

  /// @brief Field vertexStride, offset: 0x28, size: 0x4, def value: None
  uint32_t ___vertexStride;

  /// @brief Field indexBufferOffset, offset: 0x2c, size: 0x4, def value: None
  uint32_t ___indexBufferOffset;

  /// @brief Field indexFormat, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::RadeonRays::IndexFormat ___indexFormat;

  /// @brief Field indexCount, offset: 0x34, size: 0x4, def value: None
  uint32_t ___indexCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers, ___vertices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers, ___indices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers, ___vertexBufferOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers, ___vertexCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers, ___vertexStride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers, ___indexBufferOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers, ___indexFormat) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers, ___indexCount) == 0x34, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.BvhCheck/VertexBuffersCPU
class CORDL_TYPE BvhCheck_VertexBuffersCPU : public ::System::Object {
public:
  // Declarations
  /// @brief Field indices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_indices, put = __cordl_internal_set_indices)) ::ArrayW<uint32_t> indices;

  /// @brief Field vertexStride, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_vertexStride, put = __cordl_internal_set_vertexStride)) uint32_t vertexStride;

  /// @brief Field vertices, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_vertices, put = __cordl_internal_set_vertices)) ::ArrayW<float_t> vertices;

  static inline ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU* New_ctor();

  constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_indices() const;

  constexpr ::ArrayW<uint32_t>& __cordl_internal_get_indices();

  constexpr uint32_t const& __cordl_internal_get_vertexStride() const;

  constexpr uint32_t& __cordl_internal_get_vertexStride();

  constexpr ::ArrayW<float_t> const& __cordl_internal_get_vertices() const;

  constexpr ::ArrayW<float_t>& __cordl_internal_get_vertices();

  constexpr void __cordl_internal_set_indices(::ArrayW<uint32_t> value);

  constexpr void __cordl_internal_set_vertexStride(uint32_t value);

  constexpr void __cordl_internal_set_vertices(::ArrayW<float_t> value);

  /// @brief Method .ctor, addr 0x6dfb714, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BvhCheck_VertexBuffersCPU();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BvhCheck_VertexBuffersCPU", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BvhCheck_VertexBuffersCPU(BvhCheck_VertexBuffersCPU&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BvhCheck_VertexBuffersCPU", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BvhCheck_VertexBuffersCPU(BvhCheck_VertexBuffersCPU const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20418 };

  /// @brief Field vertices, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<float_t> ___vertices;

  /// @brief Field indices, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t> ___indices;

  /// @brief Field vertexStride, offset: 0x20, size: 0x4, def value: None
  uint32_t ___vertexStride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU, ___vertices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU, ___indices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU, ___vertexStride) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
// Dependencies Unity.Mathematics.float3
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.BvhCheck/Triangle
struct CORDL_TYPE BvhCheck_Triangle {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BvhCheck_Triangle();

  // Ctor Parameters [CppParam { name: "v0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "v1", ty: "::Unity::Mathematics::float3", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "v2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }]
  constexpr BvhCheck_Triangle(::Unity::Mathematics::float3 v0, ::Unity::Mathematics::float3 v1, ::Unity::Mathematics::float3 v2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20419 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field v0, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 v0;

  /// @brief Field v1, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 v1;

  /// @brief Field v2, offset: 0x18, size: 0xc, def value: None
  ::Unity::Mathematics::float3 v2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle, v0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle, v1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle, v2) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle) == 0x24, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.BvhCheck
class CORDL_TYPE BvhCheck : public ::System::Object {
public:
  // Declarations
  using Triangle = ::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle;

  using VertexBuffers = ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers;

  using VertexBuffersCPU = ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU;

  /// @brief Method CheckConsistency, addr 0x6dfaeac, size 0x1c, virtual false, abstract: false, final false
  static inline double_t CheckConsistency(::UnityEngine::GraphicsBuffer* bvhBuffer, uint32_t bvhBufferOffset, uint32_t primitiveCount);

  /// @brief Method CheckConsistency, addr 0x6dfada4, size 0x1c, virtual false, abstract: false, final false
  static inline double_t CheckConsistency(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* bvhVertexBuffers, ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct bvh,
                                          uint32_t primitiveCount);

  /// @brief Method CheckConsistency, addr 0x6dfaec8, size 0x350, virtual false, abstract: false, final false
  static inline double_t CheckConsistency(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* bvhVertexBuffers, ::UnityEngine::GraphicsBuffer* bvhBuffer, uint32_t bvhBufferOffset,
                                          ::UnityEngine::GraphicsBuffer* bvhLeavesBuffer, uint32_t bvhLeavesBufferOffset, ::UnityEngine::Rendering::RadeonRays::BvhHeader header,
                                          uint32_t primitiveCount);

  /// @brief Method CheckConsistency, addr 0x6dfadc0, size 0xec, virtual false, abstract: false, final false
  static inline double_t CheckConsistency(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* bvhVertexBuffers, ::UnityEngine::GraphicsBuffer* bvhBuffer, uint32_t bvhBufferOffset,
                                          ::UnityEngine::GraphicsBuffer* bvhLeavesBuffer, uint32_t bvhLeavesBufferOffset, uint32_t primitiveCount);

  /// @brief Method Convert, addr 0x6dfac58, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* Convert(::UnityEngine::Rendering::RadeonRays::MeshBuildInfo info);

  /// @brief Method DownloadVertexData, addr 0x6dfb244, size 0x1b8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU* DownloadVertexData(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffers* vertexBuffers);

  /// @brief Method ExtractBits, addr 0x6dfb218, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t ExtractBits(uint32_t value, int32_t startBit, int32_t count);

  /// @brief Method GetAabb, addr 0x6dfb3fc, size 0x1d4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::AABB* GetAabb(::UnityEngine::Rendering::RadeonRays::BvhCheck_VertexBuffersCPU* bvhVertexBuffers,
                                                                    ::ArrayW<::UnityEngine::Rendering::RadeonRays::BvhNode> bvhNodes, ::ArrayW<::Unity::Mathematics::uint4> bvhLeafNodes,
                                                                    uint32_t nodeAddr, bool isTopLevel);

  /// @brief Method GetFaceIndices, addr 0x6dfb5d0, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 GetFaceIndices(::ArrayW<uint32_t> indices, uint32_t triangleIdx);

  /// @brief Method GetLeafNodeFirstPrim, addr 0x6dfb234, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t GetLeafNodeFirstPrim(uint32_t nodeAddr);

  /// @brief Method GetLeafNodePrimCount, addr 0x6dfad98, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t GetLeafNodePrimCount(uint32_t nodeAddr);

  /// @brief Method GetTriangle, addr 0x6dfb67c, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::BvhCheck_Triangle GetTriangle(::ArrayW<float_t> vertices, uint32_t stride, ::Unity::Mathematics::uint3 idx);

  /// @brief Method GetVertex, addr 0x6dfb628, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 GetVertex(::ArrayW<float_t> vertices, uint32_t stride, uint32_t idx);

  /// @brief Method IsLeafNode, addr 0x6dfad90, size 0x8, virtual false, abstract: false, final false
  static inline bool IsLeafNode(uint32_t nodeAddr);

  static inline ::UnityEngine::Rendering::RadeonRays::BvhCheck* New_ctor();

  /// @brief Method NodeSahCost, addr 0x6dfad40, size 0x50, virtual false, abstract: false, final false
  static inline double_t NodeSahCost(uint32_t nodeAddr, ::UnityEngine::Rendering::RadeonRays::AABB* nodeAabb, ::UnityEngine::Rendering::RadeonRays::AABB* parentAabb);

  /// @brief Method SurfaceArea, addr 0x6dfacfc, size 0x44, virtual false, abstract: false, final false
  static inline double_t SurfaceArea(::UnityEngine::Rendering::RadeonRays::AABB* aabb);

  /// @brief Method .ctor, addr 0x6dfb718, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BvhCheck();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BvhCheck", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BvhCheck(BvhCheck&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BvhCheck", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BvhCheck(BvhCheck const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20420 };

  /// @brief Field kInvalidID offset 0xffffffff size 0x4
  static constexpr uint32_t kInvalidID{ static_cast<uint32_t>(0xffffffffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::BvhCheck) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
