#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedArray3_1_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedBitArray3_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DelaunayTriangle)
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15379)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15379), inst:
// 1918 }), TypeDefinitionIndex(TypeDefinitionIndex(15381)), TypeDefinitionIndex(TypeDefinitionIndex(15374)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15379), inst: 1919
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(15353)) CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DelaunayTriangle*
class CORDL_TYPE DelaunayTriangle : public ::System::Object {
public:
  // Declarations
  /// @brief Field Points, offset 0x10, size 0x18
  __declspec(property(get = __get_Points, put = __set_Points))::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> Points;

  /// @brief Field Neighbors, offset 0x28, size 0x18
  __declspec(property(get = __get_Neighbors, put = __set_Neighbors))::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> Neighbors;

  /// @brief Field EdgeIsConstrained, offset 0x40, size 0x3
  __declspec(property(get = __get_EdgeIsConstrained, put = __set_EdgeIsConstrained))::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained;

  /// @brief Field EdgeIsDelaunay, offset 0x43, size 0x3
  __declspec(property(get = __get_EdgeIsDelaunay, put = __set_EdgeIsDelaunay))::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay;

  /// @brief Field <IsInterior>k__BackingField, offset 0x46, size 0x1
  __declspec(property(get = __get__IsInterior_k__BackingField, put = __set__IsInterior_k__BackingField)) bool _IsInterior_k__BackingField;

  __declspec(property(get = get_IsInterior, put = set_IsInterior)) bool IsInterior;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>& __get_Points();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __get_Points() const;

  constexpr void __set_Points(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>& __get_Neighbors();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> const& __get_Neighbors() const;

  constexpr void __set_Neighbors(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& __get_EdgeIsConstrained();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& __get_EdgeIsConstrained() const;

  constexpr void __set_EdgeIsConstrained(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& __get_EdgeIsDelaunay();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& __get_EdgeIsDelaunay() const;

  constexpr void __set_EdgeIsDelaunay(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value);

  constexpr bool& __get__IsInterior_k__BackingField();

  constexpr bool const& __get__IsInterior_k__BackingField() const;

  constexpr void __set__IsInterior_k__BackingField(bool value);

  /// @brief Method get_IsInterior addr 0x29ad6dc size 0x8 virtual false final false
  inline bool get_IsInterior();

  /// @brief Method set_IsInterior addr 0x29ad6e4 size 0xc virtual false final false
  inline void set_IsInterior(bool value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*
  New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3);

  /// @brief Method .ctor addr 0x29ad6f0 size 0xa4 virtual false final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2,
                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3);

  /// @brief Method IndexOf addr 0x29ad794 size 0xb0 virtual false final false
  inline int32_t IndexOf(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method IndexCWFrom addr 0x29ad844 size 0x34 virtual false final false
  inline int32_t IndexCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method IndexCCWFrom addr 0x29ad878 size 0x34 virtual false final false
  inline int32_t IndexCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method Contains addr 0x29ad8ac size 0x58 virtual false final false
  inline bool Contains(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method MarkNeighbor addr 0x29ad904 size 0xc8 virtual false final false
  inline void MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2,
                           ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method MarkNeighbor addr 0x29adab4 size 0x1ac virtual false final false
  inline void MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method OppositePoint addr 0x29adc60 size 0x2c virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* OppositePoint(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method NeighborCWFrom addr 0x29add14 size 0xa0 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method NeighborCCWFrom addr 0x29addb4 size 0xa0 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method NeighborAcrossFrom addr 0x29ade54 size 0x80 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method PointCCWFrom addr 0x29aded4 size 0x88 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method PointCWFrom addr 0x29adc8c size 0x88 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method RotateCW addr 0x29adf5c size 0xcc virtual false final false
  inline void RotateCW();

  /// @brief Method Legalize addr 0x29ae028 size 0x98 virtual false final false
  inline void Legalize(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* oPoint, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* nPoint);

  /// @brief Method ToString addr 0x29ae0c0 size 0x1f0 virtual true final false
  inline ::StringW ToString();

  /// @brief Method MarkNeighborEdges addr 0x29ae2b0 size 0x12c virtual false final false
  inline void MarkNeighborEdges();

  /// @brief Method MarkEdge addr 0x29ae478 size 0xf4 virtual false final false
  inline void MarkEdge(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);

  /// @brief Method MarkEdge addr 0x29ae56c size 0x21c virtual false final false
  inline void MarkEdge(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* tList);

  /// @brief Method MarkConstrainedEdge addr 0x29ae788 size 0xc virtual false final false
  inline void MarkConstrainedEdge(int32_t index);

  /// @brief Method MarkConstrainedEdge addr 0x29ae804 size 0x1c virtual false final false
  inline void MarkConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge);

  /// @brief Method MarkConstrainedEdge addr 0x29ae448 size 0x30 virtual false final false
  inline void MarkConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* q);

  /// @brief Method Area addr 0x29ae820 size 0xf8 virtual false final false
  inline double_t Area();

  /// @brief Method Centroid addr 0x29ae918 size 0x148 virtual false final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Centroid();

  /// @brief Method EdgeIndex addr 0x29ad9cc size 0xe8 virtual false final false
  inline int32_t EdgeIndex(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);

  /// @brief Method GetConstrainedEdgeCCW addr 0x29aea60 size 0x3c virtual false final false
  inline bool GetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetConstrainedEdgeCW addr 0x29aea9c size 0x3c virtual false final false
  inline bool GetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetConstrainedEdgeAcross addr 0x29aead8 size 0x1c virtual false final false
  inline bool GetConstrainedEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method SetConstrainedEdgeCCW addr 0x29aeaf4 size 0x4c virtual false final false
  inline void SetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetConstrainedEdgeCW addr 0x29aeb40 size 0x4c virtual false final false
  inline void SetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetConstrainedEdgeAcross addr 0x29aeb8c size 0x2c virtual false final false
  inline void SetConstrainedEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method GetDelaunayEdgeCCW addr 0x29aebb8 size 0x3c virtual false final false
  inline bool GetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetDelaunayEdgeCW addr 0x29aebf4 size 0x3c virtual false final false
  inline bool GetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method GetDelaunayEdgeAcross addr 0x29aec30 size 0x1c virtual false final false
  inline bool GetDelaunayEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method SetDelaunayEdgeCCW addr 0x29aec4c size 0x4c virtual false final false
  inline void SetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetDelaunayEdgeCW addr 0x29aec98 size 0x4c virtual false final false
  inline void SetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  /// @brief Method SetDelaunayEdgeAcross addr 0x29aece4 size 0x2c virtual false final false
  inline void SetDelaunayEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);

  // Ctor Parameters [CppParam { name: "", ty: "DelaunayTriangle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelaunayTriangle(DelaunayTriangle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelaunayTriangle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelaunayTriangle(DelaunayTriangle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelaunayTriangle();

public:
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
