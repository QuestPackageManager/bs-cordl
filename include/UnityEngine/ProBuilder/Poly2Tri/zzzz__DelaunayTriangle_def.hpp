#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/DelaunayTriangle.hpp"
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
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 71, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DelaunayTriangle*
class CORDL_TYPE DelaunayTriangle : public ::System::Object {
public:
  // Declarations
  /// @brief Field EdgeIsConstrained, offset 0x40, size 0x3
  __declspec(property(get = __cordl_internal_get_EdgeIsConstrained, put = __cordl_internal_set_EdgeIsConstrained)) ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained;

  /// @brief Field EdgeIsDelaunay, offset 0x43, size 0x3
  __declspec(property(get = __cordl_internal_get_EdgeIsDelaunay, put = __cordl_internal_set_EdgeIsDelaunay)) ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay;

  __declspec(property(get = get_IsInterior, put = set_IsInterior)) bool IsInterior;

  /// @brief Field Neighbors, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_Neighbors,
                      put = __cordl_internal_set_Neighbors)) ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>
      Neighbors;

  /// @brief Field Points, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_Points,
                      put = __cordl_internal_set_Points)) ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>
      Points;

  /// @brief Field <IsInterior>k__BackingField, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInterior_k__BackingField, put = __cordl_internal_set__IsInterior_k__BackingField)) bool _IsInterior_k__BackingField;

  /// @brief Method Area, addr 0x4682228, size 0xf8, virtual false, abstract: false, final false
  inline double_t Area();

  /// @brief Method Centroid, addr 0x4682320, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Centroid();

  /// @brief Method Contains, addr 0x4681378, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method EdgeIndex, addr 0x4681494, size 0xe8, virtual false, abstract: false, final false
  inline int32_t EdgeIndex(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);

  /// @brief Method GetConstrainedEdgeAcross, addr 0x46824dc, size 0x1c, virtual false, abstract: false, final false
  inline bool GetConstrainedEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetConstrainedEdgeCCW, addr 0x4682464, size 0x3c, virtual false, abstract: false, final false
  inline bool GetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetConstrainedEdgeCW, addr 0x46824a0, size 0x3c, virtual false, abstract: false, final false
  inline bool GetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetDelaunayEdgeAcross, addr 0x4682634, size 0x1c, virtual false, abstract: false, final false
  inline bool GetDelaunayEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetDelaunayEdgeCCW, addr 0x46825bc, size 0x3c, virtual false, abstract: false, final false
  inline bool GetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetDelaunayEdgeCW, addr 0x46825f8, size 0x3c, virtual false, abstract: false, final false
  inline bool GetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method IndexCCWFrom, addr 0x4681344, size 0x34, virtual false, abstract: false, final false
  inline int32_t IndexCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method IndexCWFrom, addr 0x4681310, size 0x34, virtual false, abstract: false, final false
  inline int32_t IndexCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method IndexOf, addr 0x4681264, size 0xac, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method Legalize, addr 0x4681aec, size 0x98, virtual false, abstract: false, final false
  inline void Legalize(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* oPoint, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* nPoint);

  /// @brief Method MarkConstrainedEdge, addr 0x468220c, size 0x1c, virtual false, abstract: false, final false
  inline void MarkConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge);

  /// @brief Method MarkConstrainedEdge, addr 0x4682198, size 0xc, virtual false, abstract: false, final false
  inline void MarkConstrainedEdge(int32_t index);

  /// @brief Method MarkConstrainedEdge, addr 0x4681e58, size 0x30, virtual false, abstract: false, final false
  inline void MarkConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* q);

  /// @brief Method MarkEdge, addr 0x4681f7c, size 0x21c, virtual false, abstract: false, final false
  inline void MarkEdge(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* tList);

  /// @brief Method MarkEdge, addr 0x4681e88, size 0xf4, virtual false, abstract: false, final false
  inline void MarkEdge(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);

  /// @brief Method MarkNeighbor, addr 0x46813d0, size 0xc4, virtual false, abstract: false, final false
  inline void MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2,
                           ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method MarkNeighbor, addr 0x468157c, size 0x1a8, virtual false, abstract: false, final false
  inline void MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method MarkNeighborEdges, addr 0x4681cc8, size 0x12c, virtual false, abstract: false, final false
  inline void MarkNeighborEdges();

  /// @brief Method NeighborAcrossFrom, addr 0x4681918, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method NeighborCCWFrom, addr 0x4681878, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method NeighborCWFrom, addr 0x46817d8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*
  New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3);

  /// @brief Method OppositePoint, addr 0x4681724, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* OppositePoint(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method PointCCWFrom, addr 0x4681998, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method PointCWFrom, addr 0x4681750, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method RotateCW, addr 0x4681a20, size 0xcc, virtual false, abstract: false, final false
  inline void RotateCW();

  /// @brief Method SetConstrainedEdgeAcross, addr 0x4682590, size 0x2c, virtual false, abstract: false, final false
  inline void SetConstrainedEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetConstrainedEdgeCCW, addr 0x46824f8, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetConstrainedEdgeCW, addr 0x4682544, size 0x4c, virtual false, abstract: false, final false
  inline void SetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetDelaunayEdgeAcross, addr 0x46826e8, size 0x2c, virtual false, abstract: false, final false
  inline void SetDelaunayEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetDelaunayEdgeCCW, addr 0x4682650, size 0x4c, virtual false, abstract: false, final false
  inline void SetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetDelaunayEdgeCW, addr 0x468269c, size 0x4c, virtual false, abstract: false, final false
  inline void SetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method ToString, addr 0x4681b84, size 0x144, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x46811c0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2,
                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3);

  /// @brief Method get_IsInterior, addr 0x46811ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInterior();

  /// @brief Method set_IsInterior, addr 0x46811b4, size 0xc, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17724 };

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
