#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBuilder)
namespace GlobalNamespace {
class __MeshBuilder__AllocMeshData__Allocator;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
struct VertexFlags;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__AllocMeshData;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__ClipCounts;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__VertexClipEdge;
}
namespace UnityEngine::UIElements {
struct ColorPage;
}
namespace UnityEngine::UIElements {
class MeshWriteData;
}
namespace UnityEngine::UIElements {
struct TextVertex;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
class Texture;
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
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__VertexClipEdge;
}
namespace GlobalNamespace {
class __MeshBuilder__AllocMeshData__Allocator;
}
namespace UnityEngine::UIElements::UIR {
class MeshBuilder;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__AllocMeshData;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__ClipCounts;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge);
MARK_REF_PTR_T(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::MeshBuilder);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts);
// Type: ::Allocator
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MeshBuilder::AllocMeshData::Allocator*
class CORDL_TYPE __MeshBuilder__AllocMeshData__Allocator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2fa79b4, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshWriteData* Invoke(uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData);

  static inline ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2fa78f0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilder__AllocMeshData__Allocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MeshBuilder__AllocMeshData__Allocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshBuilder__AllocMeshData__Allocator(__MeshBuilder__AllocMeshData__Allocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshBuilder__AllocMeshData__Allocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshBuilder__AllocMeshData__Allocator(__MeshBuilder__AllocMeshData__Allocator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AllocMeshData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::MeshBuilder::AllocMeshData
struct CORDL_TYPE __MeshBuilder__AllocMeshData {
public:
  // Declarations
  using Allocator = ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator;

  /// @brief Method Allocate, addr 0x2fa2888, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshWriteData* Allocate(uint32_t vertexCount, uint32_t indexCount);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilder__AllocMeshData();

  // Ctor Parameters [CppParam { name: "alloc", ty: "::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*", modifiers: "", def_value: None }, CppParam { name: "texture", ty:
  // "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "svgTexture", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam { name:
  // "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags", modifiers:
  // "", def_value: None }, CppParam { name: "colorAlloc", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }]
  constexpr __MeshBuilder__AllocMeshData(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* alloc, ::UnityW<::UnityEngine::Texture> texture, ::UnityEngine::UIElements::TextureId svgTexture,
                                         ::UnityW<::UnityEngine::Material> material, ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags,
                                         ::UnityEngine::UIElements::UIR::BMPAlloc colorAlloc) noexcept;

  /// @brief Field alloc, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* alloc;

  /// @brief Field texture, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> texture;

  /// @brief Field svgTexture, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId svgTexture;

  /// @brief Field material, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field flags, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags;

  /// @brief Field colorAlloc, offset: 0x24, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc colorAlloc;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, alloc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, texture) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, svgTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, flags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, colorAlloc) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::ClipCounts
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::MeshBuilder::ClipCounts
struct CORDL_TYPE __MeshBuilder__ClipCounts {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilder__ClipCounts();

  // Ctor Parameters [CppParam { name: "firstClippedIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstDegenerateIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "lastClippedIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "clippedTriangles", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "addedTriangles", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "degenerateTriangles", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MeshBuilder__ClipCounts(int32_t firstClippedIndex, int32_t firstDegenerateIndex, int32_t lastClippedIndex, int32_t clippedTriangles, int32_t addedTriangles,
                                      int32_t degenerateTriangles) noexcept;

  /// @brief Field firstClippedIndex, offset: 0x0, size: 0x4, def value: None
  int32_t firstClippedIndex;

  /// @brief Field firstDegenerateIndex, offset: 0x4, size: 0x4, def value: None
  int32_t firstDegenerateIndex;

  /// @brief Field lastClippedIndex, offset: 0x8, size: 0x4, def value: None
  int32_t lastClippedIndex;

  /// @brief Field clippedTriangles, offset: 0xc, size: 0x4, def value: None
  int32_t clippedTriangles;

  /// @brief Field addedTriangles, offset: 0x10, size: 0x4, def value: None
  int32_t addedTriangles;

  /// @brief Field degenerateTriangles, offset: 0x14, size: 0x4, def value: None
  int32_t degenerateTriangles;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, firstClippedIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, firstDegenerateIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, lastClippedIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, clippedTriangles) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, addedTriangles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, degenerateTriangles) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::VertexClipEdge
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::MeshBuilder::VertexClipEdge
struct CORDL_TYPE __MeshBuilder__VertexClipEdge {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MeshBuilder__VertexClipEdge_Unwrapped
  enum struct ____MeshBuilder__VertexClipEdge_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x4),
    __E_Bottom = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MeshBuilder__VertexClipEdge_Unwrapped() const noexcept {
    return static_cast<____MeshBuilder__VertexClipEdge_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilder__VertexClipEdge();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MeshBuilder__VertexClipEdge(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bottom value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge const Bottom;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge const Left;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge const None;

  /// @brief Field Right value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge const Right;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge const Top;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::MeshBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::MeshBuilder*
class CORDL_TYPE MeshBuilder : public ::System::Object {
public:
  // Declarations
  using AllocMeshData = ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData;

  using ClipCounts = ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts;

  using VertexClipEdge = ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge;

  /// @brief Field k_PositionSlicesX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_PositionSlicesX, put = setStaticF_k_PositionSlicesX))::ArrayW<float_t, ::Array<float_t>*> k_PositionSlicesX;

  /// @brief Field k_PositionSlicesY, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_PositionSlicesY, put = setStaticF_k_PositionSlicesY))::ArrayW<float_t, ::Array<float_t>*> k_PositionSlicesY;

  /// @brief Field k_TexCoordSlicesX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_TexCoordSlicesX, put = setStaticF_k_TexCoordSlicesX))::ArrayW<float_t, ::Array<float_t>*> k_TexCoordSlicesX;

  /// @brief Field k_TexCoordSlicesY, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_TexCoordSlicesY, put = setStaticF_k_TexCoordSlicesY))::ArrayW<float_t, ::Array<float_t>*> k_TexCoordSlicesY;

  /// @brief Field s_AllClipEdges, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_AllClipEdges,
      put = setStaticF_s_AllClipEdges))::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*> s_AllClipEdges;

  /// @brief Field s_MaxTextMeshVertices, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_MaxTextMeshVertices, put = setStaticF_s_MaxTextMeshVertices)) int32_t s_MaxTextMeshVertices;

  /// @brief Field s_VectorGraphics9Slice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphics9Slice, put = setStaticF_s_VectorGraphics9Slice))::Unity::Profiling::ProfilerMarker s_VectorGraphics9Slice;

  /// @brief Field s_VectorGraphicsScaleTriangle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphicsScaleTriangle, put = setStaticF_s_VectorGraphicsScaleTriangle))::Unity::Profiling::ProfilerMarker s_VectorGraphicsScaleTriangle;

  /// @brief Field s_VectorGraphicsSplitTriangle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphicsSplitTriangle, put = setStaticF_s_VectorGraphicsSplitTriangle))::Unity::Profiling::ProfilerMarker s_VectorGraphicsSplitTriangle;

  /// @brief Field s_VectorGraphicsStretch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphicsStretch, put = setStaticF_s_VectorGraphicsStretch))::Unity::Profiling::ProfilerMarker s_VectorGraphicsStretch;

  /// @brief Field slicedQuadIndices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_slicedQuadIndices, put = setStaticF_slicedQuadIndices))::ArrayW<uint16_t, ::Array<uint16_t>*> slicedQuadIndices;

  /// @brief Method ConvertTextVertexToUIRVertex, addr 0x2fa22dc, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Vertex ConvertTextVertexToUIRVertex(::UnityEngine::TextCore::Text::MeshInfo info, int32_t index, ::UnityEngine::Vector2 offset,
                                                                               ::UnityEngine::UIElements::UIR::VertexFlags flags, bool isDynamicColor);

  /// @brief Method ConvertTextVertexToUIRVertex, addr 0x2fa23ec, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Vertex ConvertTextVertexToUIRVertex(::UnityEngine::UIElements::TextVertex textVertex, ::UnityEngine::Vector2 offset);

  /// @brief Method GetVertexBaryCentricCoordinates, addr 0x2fa6c84, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetVertexBaryCentricCoordinates(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, float_t x, float_t y);

  /// @brief Method InterpolateVertexInTriangle, addr 0x2fa6d40, size 0x47c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Vertex InterpolateVertexInTriangle(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, float_t x, float_t y, ::UnityEngine::Vector3 uvw);

  /// @brief Method InterpolateVertexInTriangleEdge, addr 0x2fa7258, size 0x418, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Vertex InterpolateVertexInTriangleEdge(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, int32_t e0, int32_t e1, float_t t);

  /// @brief Method IntersectSegments, addr 0x2fa71bc, size 0x9c, virtual false, abstract: false, final false
  static inline float_t IntersectSegments(float_t ax, float_t ay, float_t bx, float_t by, float_t cx, float_t cy, float_t dx, float_t dy);

  /// @brief Method LimitTextVertices, addr 0x2fa2424, size 0x130, virtual false, abstract: false, final false
  static inline int32_t LimitTextVertices(int32_t vertexCount, bool logTruncation);

  /// @brief Method MakeBorder, addr 0x2f9f9a4, size 0xc0, virtual false, abstract: false, final false
  static inline void MakeBorder(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams borderParams, float_t posZ,
                                ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method MakeQuad, addr 0x2fa0bdc, size 0xd58, virtual false, abstract: false, final false
  static inline void MakeQuad(::UnityEngine::Rect rcPosition, ::UnityEngine::Rect rcTexCoord, ::UnityEngine::Color color, float_t posZ,
                              ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ::UnityEngine::UIElements::ColorPage colorPage);

  /// @brief Method MakeSlicedQuad, addr 0x2fa1934, size 0x9a8, virtual false, abstract: false, final false
  static inline void MakeSlicedQuad(ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams> rectParams, float_t posZ,
                                    ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method MakeSolidRect, addr 0x2f9fce0, size 0x154, virtual false, abstract: false, final false
  static inline void MakeSolidRect(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ,
                                   ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method MakeText, addr 0x2fa2554, size 0x334, virtual false, abstract: false, final false
  static inline void MakeText(::UnityEngine::TextCore::Text::MeshInfo meshInfo, ::UnityEngine::Vector2 offset, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc,
                              ::UnityEngine::UIElements::UIR::VertexFlags flags, bool isDynamicColor);

  /// @brief Method MakeText, addr 0x2fa28b0, size 0x2c4, virtual false, abstract: false, final false
  static inline void MakeText(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> uiVertices, ::UnityEngine::Vector2 offset,
                              ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method MakeTexturedRect, addr 0x2fa08c8, size 0x314, virtual false, abstract: false, final false
  static inline void MakeTexturedRect(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ,
                                      ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ::UnityEngine::UIElements::ColorPage colorPage);

  /// @brief Method MakeVectorGraphics, addr 0x2fa2d2c, size 0x3b0, virtual false, abstract: false, final false
  static inline void MakeVectorGraphics(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, int32_t settingIndexOffset,
                                        ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ByRef<int32_t> finalVertexCount, ByRef<int32_t> finalIndexCount);

  /// @brief Method MakeVectorGraphics9SliceBackground, addr 0x2fa40c8, size 0xbac, virtual false, abstract: false, final false
  static inline void MakeVectorGraphics9SliceBackground(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices,
                                                        ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight, ::UnityEngine::Rect targetRect,
                                                        ::UnityEngine::Vector4 sliceLTRB, bool stretch, ::UnityEngine::Color tint, int32_t settingIndexOffset,
                                                        ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method MakeVectorGraphicsStretchBackground, addr 0x2fa30dc, size 0xfec, virtual false, abstract: false, final false
  static inline void MakeVectorGraphicsStretchBackground(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices,
                                                         ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight, ::UnityEngine::Rect targetRect,
                                                         ::UnityEngine::Rect sourceUV, ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color tint, int32_t settingIndexOffset,
                                                         ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ByRef<int32_t> finalVertexCount, ByRef<int32_t> finalIndexCount);

  /// @brief Method RectClip, addr 0x2fa4e20, size 0x43c, virtual false, abstract: false, final false
  static inline void RectClip(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> vertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> indices,
                              ::UnityEngine::Vector4 clipRectMinMax, ::UnityEngine::UIElements::MeshWriteData* mwd, ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts cc,
                              ByRef<int32_t> newVertexCount);

  /// @brief Method RectClipTriangle, addr 0x2fa6128, size 0xb5c, virtual false, abstract: false, final false
  static inline void RectClipTriangle(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, ::cordl_internals::Ptr<uint16_t> it, ::UnityEngine::Vector4 clipRectMinMax,
                                      ::UnityEngine::UIElements::MeshWriteData* mwd, ByRef<uint16_t> nextNewVertex);

  /// @brief Method ScaleSplittedTriangles, addr 0x2fa5ea4, size 0x284, virtual false, abstract: false, final false
  static inline void ScaleSplittedTriangles(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vertices, int32_t vertexCount, float_t svgWidth, float_t svgHeight,
                                            ::UnityEngine::Rect targetRect, ::UnityEngine::Vector4 sliceLTRB);

  /// @brief Method SplitTriangle, addr 0x2fa525c, size 0xc48, virtual false, abstract: false, final false
  static inline void SplitTriangle(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vertices, ::cordl_internals::Ptr<uint16_t> indices, ByRef<int32_t> vertexCount, int32_t indexToProcess,
                                   ByRef<int32_t> indexCount, float_t svgWidth, float_t svgHeight, ::UnityEngine::Vector4 sliceLTRB, int32_t sliceIndex);

  /// @brief Method UpdateText, addr 0x2fa2b74, size 0x1b8, virtual false, abstract: false, final false
  static inline void UpdateText(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> uiVertices, ::UnityEngine::Vector2 offset, ::UnityEngine::Matrix4x4 transform,
                                ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids, ::UnityEngine::Color32 flags, ::UnityEngine::Color32 opacityPageSettingIndex,
                                ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices);

  /// @brief Method UpperBoundApproximateRectClippingResults, addr 0x2fa4c74, size 0x1ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts
  UpperBoundApproximateRectClippingResults(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> vertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> indices,
                                           ::UnityEngine::Vector4 clipRectMinMax);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_PositionSlicesX();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_PositionSlicesY();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_TexCoordSlicesX();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_TexCoordSlicesY();

  static inline ::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*> getStaticF_s_AllClipEdges();

  static inline int32_t getStaticF_s_MaxTextMeshVertices();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphics9Slice();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphicsScaleTriangle();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphicsSplitTriangle();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphicsStretch();

  static inline ::ArrayW<uint16_t, ::Array<uint16_t>*> getStaticF_slicedQuadIndices();

  static inline void setStaticF_k_PositionSlicesX(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_k_PositionSlicesY(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_k_TexCoordSlicesX(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_k_TexCoordSlicesY(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_s_AllClipEdges(::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*> value);

  static inline void setStaticF_s_MaxTextMeshVertices(int32_t value);

  static inline void setStaticF_s_VectorGraphics9Slice(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_VectorGraphicsScaleTriangle(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_VectorGraphicsSplitTriangle(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_VectorGraphicsStretch(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_slicedQuadIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshBuilder(MeshBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshBuilder(MeshBuilder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::MeshBuilder, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, "UnityEngine.UIElements.UIR", "MeshBuilder/VertexClipEdge");
NEED_NO_BOX(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*, "UnityEngine.UIElements.UIR", "MeshBuilder/AllocMeshData/Allocator");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::MeshBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshBuilder*, "UnityEngine.UIElements.UIR", "MeshBuilder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, "UnityEngine.UIElements.UIR", "MeshBuilder/AllocMeshData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, "UnityEngine.UIElements.UIR", "MeshBuilder/ClipCounts");
