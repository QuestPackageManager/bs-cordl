#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tessellation)
namespace UnityEngine::UIElements::UIR {
struct __Tessellation__Edges;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color32;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__AllocMeshData;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
class MeshWriteData;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
struct ColorPage;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct __Tessellation__Edges;
}
namespace UnityEngine::UIElements::UIR {
class Tessellation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::__Tessellation__Edges);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Tessellation);
// Type: ::Edges
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7409))
// CS Name: ::Tessellation::Edges
struct CORDL_TYPE __Tessellation__Edges {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Tessellation__Edges_Unwrapped
  enum struct ____Tessellation__Edges_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x4),
    __E_Bottom = static_cast<int32_t>(0x8),
    __E_All = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Tessellation__Edges_Unwrapped() const noexcept {
    return static_cast<____Tessellation__Edges_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Tessellation__Edges(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tessellation__Edges();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::UIR::__Tessellation__Edges const None;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::UIR::__Tessellation__Edges const Left;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::UIR::__Tessellation__Edges const Top;

  /// @brief Field Right value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::UIR::__Tessellation__Edges const Right;

  /// @brief Field Bottom value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::UIR::__Tessellation__Edges const Bottom;

  /// @brief Field All value: static_cast<int32_t>(0xf)
  static ::UnityEngine::UIElements::UIR::__Tessellation__Edges const All;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__Tessellation__Edges, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__Tessellation__Edges, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::Tessellation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9966)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7410))
// CS Name: ::UnityEngine.UIElements.UIR::Tessellation*
class CORDL_TYPE Tessellation : public ::System::Object {
public:
  // Declarations
  using Edges = ::UnityEngine::UIElements::UIR::__Tessellation__Edges;

  /// @brief Field kEpsilon, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kEpsilon, put = setStaticF_kEpsilon)) float_t kEpsilon;

  /// @brief Field kUnusedArc, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kUnusedArc, put = setStaticF_kUnusedArc)) float_t kUnusedArc;

  /// @brief Field kSubdivisions, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_kSubdivisions, put = setStaticF_kSubdivisions)) uint16_t kSubdivisions;

  /// @brief Field s_MarkerTessellateRect, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerTessellateRect, put = setStaticF_s_MarkerTessellateRect))::Unity::Profiling::ProfilerMarker s_MarkerTessellateRect;

  /// @brief Field s_MarkerTessellateBorder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerTessellateBorder, put = setStaticF_s_MarkerTessellateBorder))::Unity::Profiling::ProfilerMarker s_MarkerTessellateBorder;

  /// @brief Field s_AllEdges, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_AllEdges,
                             put = setStaticF_s_AllEdges))::ArrayW<::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::Array<::UnityEngine::UIElements::UIR::__Tessellation__Edges>*> s_AllEdges;

  static inline void setStaticF_kEpsilon(float_t value);

  static inline float_t getStaticF_kEpsilon();

  static inline void setStaticF_kUnusedArc(float_t value);

  static inline float_t getStaticF_kUnusedArc();

  static inline void setStaticF_kSubdivisions(uint16_t value);

  static inline uint16_t getStaticF_kSubdivisions();

  static inline void setStaticF_s_MarkerTessellateRect(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerTessellateRect();

  static inline void setStaticF_s_MarkerTessellateBorder(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerTessellateBorder();

  static inline void setStaticF_s_AllEdges(::ArrayW<::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::Array<::UnityEngine::UIElements::UIR::__Tessellation__Edges>*> value);

  static inline ::ArrayW<::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::Array<::UnityEngine::UIElements::UIR::__Tessellation__Edges>*> getStaticF_s_AllEdges();

  /// @brief Method TessellateRect, addr 0x2e92ab0, size 0x308, virtual false, abstract: false, final false
  static inline void TessellateRect(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ,
                                    ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, bool computeUVs);

  /// @brief Method TessellateQuad, addr 0x2e92324, size 0x78c, virtual false, abstract: false, final false
  static inline void TessellateQuad(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ,
                                    ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method TessellateBorder, addr 0x2e91f54, size 0x27c, virtual false, abstract: false, final false
  static inline void TessellateBorder(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams borderParams, float_t posZ,
                                      ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method TessellateRoundedCorners, addr 0x2e9a764, size 0xe64, virtual false, abstract: false, final false
  static inline void TessellateRoundedCorners(ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams> rectParams, float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh,
                                              ::UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly);

  /// @brief Method TessellateRoundedBorders, addr 0x2e9b910, size 0xec8, virtual false, abstract: false, final false
  static inline void TessellateRoundedBorders(ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams> border, float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh,
                                              ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly);

  /// @brief Method TessellateRoundedCorner, addr 0x2e9c7d8, size 0x344, virtual false, abstract: false, final false
  static inline void TessellateRoundedCorner(::UnityEngine::Rect rect, ::UnityEngine::Color32 color, float_t posZ, ::UnityEngine::Vector2 radius, ::UnityEngine::UIElements::MeshWriteData* mesh,
                                             ::UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly);

  /// @brief Method TessellateRoundedBorder, addr 0x2e9ce28, size 0x784, virtual false, abstract: false, final false
  static inline void TessellateRoundedBorder(::UnityEngine::Rect rect, ::UnityEngine::Color32 leftColor, ::UnityEngine::Color32 topColor, float_t posZ, ::UnityEngine::Vector2 radius,
                                             float_t leftWidth, float_t topWidth, ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage leftColorPage,
                                             ::UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly);

  /// @brief Method IntersectLines, addr 0x2ea0734, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 IntersectLines(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3);

  /// @brief Method LooseCompare, addr 0x2e9fc28, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t LooseCompare(float_t a, float_t b);

  /// @brief Method TessellateComplexBorderCorner, addr 0x2ea0048, size 0x6ec, virtual false, abstract: false, final false
  static inline void TessellateComplexBorderCorner(::UnityEngine::Rect rect, ::UnityEngine::Vector2 radius, float_t leftWidth, float_t topWidth, ::UnityEngine::Color32 leftColor,
                                                   ::UnityEngine::Color32 topColor, float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage leftColorPage,
                                                   ::UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly);

  /// @brief Method TessellateQuad, addr 0x2ea1028, size 0x33c, virtual false, abstract: false, final false
  static inline void TessellateQuad(::UnityEngine::Rect rect, ::UnityEngine::Color32 color, float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh,
                                    ::UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly);

  /// @brief Method TessellateQuad, addr 0x2e9b824, size 0xec, virtual false, abstract: false, final false
  static inline void TessellateQuad(::UnityEngine::Rect rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges smoothedEdges, ::UnityEngine::Color32 color, float_t posZ,
                                    ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount,
                                    bool countOnly);

  /// @brief Method EdgesCount, addr 0x2ea1364, size 0x24, virtual false, abstract: false, final false
  static inline int32_t EdgesCount(::UnityEngine::UIElements::UIR::__Tessellation__Edges edges);

  /// @brief Method TessellateQuad, addr 0x2ea0838, size 0x7f0, virtual false, abstract: false, final false
  static inline void TessellateQuad(::UnityEngine::Rect rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges smoothedEdges, ::cordl_internals::Ptr<::UnityEngine::Vector2> offsets,
                                    ::UnityEngine::Color32 color, float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage colorPage,
                                    ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly);

  /// @brief Method EncodeStraightArc, addr 0x2ea18ac, size 0x188, virtual false, abstract: false, final false
  static inline void EncodeStraightArc(ByRef<::UnityEngine::UIElements::Vertex> v0, ByRef<::UnityEngine::UIElements::Vertex> v1, ByRef<::UnityEngine::UIElements::Vertex> center, float_t radius);

  /// @brief Method ExpandTriangle, addr 0x2ea1a34, size 0x1ec, virtual false, abstract: false, final false
  static inline void ExpandTriangle(ByRef<::UnityEngine::Vector3> v0, ByRef<::UnityEngine::Vector3> v1, ::UnityEngine::Vector3 center, float_t factor);

  /// @brief Method TessellateQuadSingleEdge, addr 0x2ea1388, size 0x524, virtual false, abstract: false, final false
  static inline void TessellateQuadSingleEdge(::UnityEngine::Rect rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges smoothedEdge, ::UnityEngine::Color32 color, float_t posZ,
                                              ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount,
                                              bool countOnly);

  /// @brief Method TessellateStraightBorder, addr 0x2e9dd34, size 0x1ef4, virtual false, abstract: false, final false
  static inline void TessellateStraightBorder(::UnityEngine::Rect rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges smoothedEdge, float_t miterOffset, ::UnityEngine::Color color,
                                              float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount,
                                              ByRef<uint16_t> indexCount, bool countOnly);

  /// @brief Method GetInterpolatedCircle, addr 0x2ea1c20, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetInterpolatedCircle(::UnityEngine::Vector2 p, ByRef<::UnityEngine::UIElements::Vertex> v0, ByRef<::UnityEngine::UIElements::Vertex> v1,
                                                             ByRef<::UnityEngine::UIElements::Vertex> v2);

  /// @brief Method ComputeBarycentricCoordinates, addr 0x2ea1d38, size 0xa0, virtual false, abstract: false, final false
  static inline void ComputeBarycentricCoordinates(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c, ByRef<float_t> u, ByRef<float_t> v,
                                                   ByRef<float_t> w);

  /// @brief Method TessellateFilledFan, addr 0x2e9d5ac, size 0x788, virtual false, abstract: false, final false
  static inline void TessellateFilledFan(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 radius, ::UnityEngine::Vector2 miterOffset, float_t leftWidth, float_t topWidth,
                                         ::UnityEngine::Color32 leftColor, ::UnityEngine::Color32 topColor, float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh,
                                         ::UnityEngine::UIElements::ColorPage leftColorPage, ::UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount,
                                         bool countOnly);

  /// @brief Method TessellateBorderedFan, addr 0x2e9fcc8, size 0x380, virtual false, abstract: false, final false
  static inline void TessellateBorderedFan(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 outerRadius, float_t leftWidth, float_t topWidth, ::UnityEngine::Color32 leftColor,
                                           ::UnityEngine::Color32 topColor, float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage leftColorPage,
                                           ::UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly);

  /// @brief Method MirrorVertices, addr 0x2e9cb1c, size 0x224, virtual false, abstract: false, final false
  static inline void MirrorVertices(::UnityEngine::Rect rect, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, int32_t vertexStart, int32_t vertexCount,
                                    bool flipHorizontal);

  /// @brief Method FlipWinding, addr 0x2e9cd40, size 0xe8, virtual false, abstract: false, final false
  static inline void FlipWinding(::Unity::Collections::NativeSlice_1<uint16_t> indices, int32_t indexStart, int32_t indexCount);

  /// @brief Method ComputeUVs, addr 0x2e9b5c8, size 0x25c, virtual false, abstract: false, final false
  static inline void ComputeUVs(::UnityEngine::Rect tessellatedRect, ::UnityEngine::Rect textureRect, ::UnityEngine::Rect uvRegion,
                                ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices);

  // Ctor Parameters [CppParam { name: "", ty: "Tessellation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tessellation(Tessellation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tessellation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tessellation(Tessellation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tessellation();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Tessellation, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__Tessellation__Edges, "UnityEngine.UIElements.UIR", "Tessellation/Edges");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Tessellation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Tessellation*, "UnityEngine.UIElements.UIR", "Tessellation");
