#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedArray3_1_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedBitArray3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DelaunayTriangle)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle);
// Type: UnityEngine.ProBuilder.Poly2Tri::DelaunayTriangle
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 71, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DelaunayTriangle*
class CORDL_TYPE DelaunayTriangle : public ::System::Object {
public:
  // Declarations
  /// @brief Field EdgeIsConstrained, offset 0x40, size 0x3
  __declspec(property(get = __cordl_internal_get_EdgeIsConstrained, put = __cordl_internal_set_EdgeIsConstrained))::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained;

  /// @brief Field EdgeIsDelaunay, offset 0x43, size 0x3
  __declspec(property(get = __cordl_internal_get_EdgeIsDelaunay, put = __cordl_internal_set_EdgeIsDelaunay))::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay;

  __declspec(property(get = get_IsInterior, put = set_IsInterior)) bool IsInterior;

  /// @brief Field Neighbors, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_Neighbors,
                      put = __cordl_internal_set_Neighbors))::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> Neighbors;

  /// @brief Field Points, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_Points,
                      put = __cordl_internal_set_Points))::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> Points;

  /// @brief Field <IsInterior>k__BackingField, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInterior_k__BackingField, put = __cordl_internal_set__IsInterior_k__BackingField)) bool _IsInterior_k__BackingField;

  /// @brief Method Area, addr 0x305ce9c, size 0xf8, virtual false, abstract: false, final false
  inline double_t Area();

  /// @brief Method Centroid, addr 0x305cf94, size 0x148, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Centroid();

  /// @brief Method Contains, addr 0x305bf28, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method EdgeIndex, addr 0x305c048, size 0xe8, virtual false, abstract: false, final false
  inline int32_t EdgeIndex(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);

  /// @brief Method GetConstrainedEdgeAcross, addr 0x305d154, size 0x1c, virtual false, abstract: false, final false
  inline bool GetConstrainedEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetConstrainedEdgeCCW, addr 0x305d0dc, size 0x3c, virtual false, abstract: false, final false
  inline bool GetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetConstrainedEdgeCW, addr 0x305d118, size 0x3c, virtual false, abstract: false, final false
  inline bool GetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetDelaunayEdgeAcross, addr 0x305d2ac, size 0x1c, virtual false, abstract: false, final false
  inline bool GetDelaunayEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetDelaunayEdgeCCW, addr 0x305d234, size 0x3c, virtual false, abstract: false, final false
  inline bool GetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetDelaunayEdgeCW, addr 0x305d270, size 0x3c, virtual false, abstract: false, final false
  inline bool GetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method IndexCCWFrom, addr 0x305bef4, size 0x34, virtual false, abstract: false, final false
  inline int32_t IndexCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method IndexCWFrom, addr 0x305bec0, size 0x34, virtual false, abstract: false, final false
  inline int32_t IndexCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method IndexOf, addr 0x305be10, size 0xb0, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method Legalize, addr 0x305c6a4, size 0x98, virtual false, abstract: false, final false
  inline void Legalize(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* oPoint, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* nPoint);

  /// @brief Method MarkConstrainedEdge, addr 0x305ce80, size 0x1c, virtual false, abstract: false, final false
  inline void MarkConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge);

  /// @brief Method MarkConstrainedEdge, addr 0x305ce04, size 0xc, virtual false, abstract: false, final false
  inline void MarkConstrainedEdge(int32_t index);

  /// @brief Method MarkConstrainedEdge, addr 0x305cac4, size 0x30, virtual false, abstract: false, final false
  inline void MarkConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* q);

  /// @brief Method MarkEdge, addr 0x305cbe8, size 0x21c, virtual false, abstract: false, final false
  inline void MarkEdge(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* tList);

  /// @brief Method MarkEdge, addr 0x305caf4, size 0xf4, virtual false, abstract: false, final false
  inline void MarkEdge(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);

  /// @brief Method MarkNeighbor, addr 0x305bf80, size 0xc8, virtual false, abstract: false, final false
  inline void MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2,
                           ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method MarkNeighbor, addr 0x305c130, size 0x1ac, virtual false, abstract: false, final false
  inline void MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method MarkNeighborEdges, addr 0x305c92c, size 0x12c, virtual false, abstract: false, final false
  inline void MarkNeighborEdges();

  /// @brief Method NeighborAcrossFrom, addr 0x305c4d0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method NeighborCCWFrom, addr 0x305c430, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method NeighborCWFrom, addr 0x305c390, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*
  New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3);

  /// @brief Method OppositePoint, addr 0x305c2dc, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* OppositePoint(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method PointCCWFrom, addr 0x305c550, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method PointCWFrom, addr 0x305c308, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method RotateCW, addr 0x305c5d8, size 0xcc, virtual false, abstract: false, final false
  inline void RotateCW();

  /// @brief Method SetConstrainedEdgeAcross, addr 0x305d208, size 0x2c, virtual false, abstract: false, final false
  inline void SetConstrainedEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetConstrainedEdgeCCW, addr 0x305d170, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetConstrainedEdgeCW, addr 0x305d1bc, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetDelaunayEdgeAcross, addr 0x305d360, size 0x2c, virtual false, abstract: false, final false
  inline void SetDelaunayEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetDelaunayEdgeCCW, addr 0x305d2c8, size 0x4c, virtual false, abstract: false, final false
  inline void SetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetDelaunayEdgeCW, addr 0x305d314, size 0x4c, virtual false, abstract: false, final false
  inline void SetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method ToString, addr 0x305c73c, size 0x1f0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& __cordl_internal_get_EdgeIsConstrained() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& __cordl_internal_get_EdgeIsConstrained();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& __cordl_internal_get_EdgeIsDelaunay() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& __cordl_internal_get_EdgeIsDelaunay();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> const& __cordl_internal_get_Neighbors() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>& __cordl_internal_get_Neighbors();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __cordl_internal_get_Points() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>& __cordl_internal_get_Points();

  constexpr bool const& __cordl_internal_get__IsInterior_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsInterior_k__BackingField();

  constexpr void __cordl_internal_set_EdgeIsConstrained(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value);

  constexpr void __cordl_internal_set_EdgeIsDelaunay(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value);

  constexpr void __cordl_internal_set_Neighbors(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> value);

  constexpr void __cordl_internal_set_Points(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> value);

  constexpr void __cordl_internal_set__IsInterior_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x305bd6c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2,
                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3);

  /// @brief Method get_IsInterior, addr 0x305bd58, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInterior();

  /// @brief Method set_IsInterior, addr 0x305bd60, size 0xc, virtual false, abstract: false, final false
  inline void set_IsInterior(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelaunayTriangle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelaunayTriangle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelaunayTriangle(DelaunayTriangle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelaunayTriangle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelaunayTriangle(DelaunayTriangle const&) = delete;

  /// @brief Field Points, offset: 0x10, size: 0x18, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> ___Points;

  /// @brief Field Neighbors, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> ___Neighbors;

  /// @brief Field EdgeIsConstrained, offset: 0x40, size: 0x3, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 ___EdgeIsConstrained;

  /// @brief Field EdgeIsDelaunay, offset: 0x43, size: 0x3, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 ___EdgeIsDelaunay;

  /// @brief Field <IsInterior>k__BackingField, offset: 0x46, size: 0x1, def value: None
  bool ____IsInterior_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle, ___Points) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle, ___Neighbors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle, ___EdgeIsConstrained) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle, ___EdgeIsDelaunay) == 0x43, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle, ____IsInterior_k__BackingField) == 0x46, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, "UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle");
