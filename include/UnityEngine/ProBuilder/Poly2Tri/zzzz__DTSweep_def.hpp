#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DTSweep)
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct Orientation;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class __DTSweep____c__DisplayClass21_0;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweep;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class __DTSweep____c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweep);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0);
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15326))
// CS Name: ::DTSweep::<>c__DisplayClass21_0*
class CORDL_TYPE __DTSweep____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ep, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ep, put = __cordl_internal_set_ep))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __cordl_internal_get_ep();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __cordl_internal_get_ep() const;

  constexpr void __cordl_internal_set_ep(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor, addr 0x2b338f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SplitEdge>b__0, addr 0x2b3434c, size 0x38, virtual false, abstract: false, final false
  inline bool _SplitEdge_b__0(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* e);

  // Ctor Parameters [CppParam { name: "", ty: "__DTSweep____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DTSweep____c__DisplayClass21_0(__DTSweep____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DTSweep____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DTSweep____c__DisplayClass21_0(__DTSweep____c__DisplayClass21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DTSweep____c__DisplayClass21_0();

public:
  /// @brief Field ep, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ___ep;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0, ___ep) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweep
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15327))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DTSweep*
class CORDL_TYPE DTSweep : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0;

  /// @brief Method Triangulate, addr 0x2b2de08, size 0x4c, virtual false, abstract: false, final false
  static inline void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);

  /// @brief Method Sweep, addr 0x2b30f74, size 0x218, virtual false, abstract: false, final false
  static inline void Sweep(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);

  /// @brief Method FinalizationConvexHull, addr 0x2b31234, size 0x280, virtual false, abstract: false, final false
  static inline void FinalizationConvexHull(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);

  /// @brief Method TurnAdvancingFrontConvex, addr 0x2b31830, size 0x16c, virtual false, abstract: false, final false
  static inline void TurnAdvancingFrontConvex(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* b,
                                              ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* c);

  /// @brief Method FinalizationPolygon, addr 0x2b3118c, size 0xa8, virtual false, abstract: false, final false
  static inline void FinalizationPolygon(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);

  /// @brief Method PointEvent, addr 0x2b314c4, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* PointEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx,
                                                                                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method NewFrontTriangle, addr 0x2b3234c, size 0x1a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* NewFrontTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx,
                                                                                          ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point,
                                                                                          ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method EdgeEvent, addr 0x2b316a8, size 0x184, virtual false, abstract: false, final false
  static inline void EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                               ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillEdgeEvent, addr 0x2b3297c, size 0x2c, virtual false, abstract: false, final false
  static inline void FillEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                   ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillRightConcaveEdgeEvent, addr 0x2b32d9c, size 0xfc, virtual false, abstract: false, final false
  static inline void FillRightConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                               ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillRightConvexEdgeEvent, addr 0x2b32e98, size 0x120, virtual false, abstract: false, final false
  static inline void FillRightConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                              ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillRightBelowEdgeEvent, addr 0x2b32fb8, size 0x12c, virtual false, abstract: false, final false
  static inline void FillRightBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                             ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillRightAboveEdgeEvent, addr 0x2b32b88, size 0x10c, virtual false, abstract: false, final false
  static inline void FillRightAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                             ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillLeftConvexEdgeEvent, addr 0x2b330e4, size 0x118, virtual false, abstract: false, final false
  static inline void FillLeftConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                             ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillLeftConcaveEdgeEvent, addr 0x2b331fc, size 0xf4, virtual false, abstract: false, final false
  static inline void FillLeftConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                              ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillLeftBelowEdgeEvent, addr 0x2b332f0, size 0x128, virtual false, abstract: false, final false
  static inline void FillLeftBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                            ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillLeftAboveEdgeEvent, addr 0x2b32c94, size 0x108, virtual false, abstract: false, final false
  static inline void FillLeftAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                            ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method IsEdgeSideOfTriangle, addr 0x2b328bc, size 0xc0, virtual false, abstract: false, final false
  static inline bool IsEdgeSideOfTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                          ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq);

  /// @brief Method EdgeEvent, addr 0x2b329a8, size 0x1e0, virtual false, abstract: false, final false
  static inline void EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                               ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle,
                               ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method SplitEdge, addr 0x2b337d8, size 0x118, virtual false, abstract: false, final false
  static inline void SplitEdge(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq,
                               ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method FlipEdgeEvent, addr 0x2b33454, size 0x384, virtual false, abstract: false, final false
  static inline void FlipEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                   ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t,
                                   ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method NextFlipPoint, addr 0x2b33aa0, size 0x160, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* NextFlipPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                                                                       ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq,
                                                                                       ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot,
                                                                                       ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);

  /// @brief Method NextFlipTriangle, addr 0x2b33a2c, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*
  NextFlipTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::Orientation o, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t,
                   ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);

  /// @brief Method FlipScanEdgeEvent, addr 0x2b33c00, size 0x1a0, virtual false, abstract: false, final false
  static inline void FlipScanEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                       ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* flipTriangle,
                                       ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method FillAdvancingFront, addr 0x2b32508, size 0xf8, virtual false, abstract: false, final false
  static inline void FillAdvancingFront(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* n);

  /// @brief Method FillBasin, addr 0x2b33f0c, size 0x190, virtual false, abstract: false, final false
  static inline void FillBasin(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillBasinReq, addr 0x2b3409c, size 0x170, virtual false, abstract: false, final false
  static inline void FillBasinReq(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method IsShallow, addr 0x2b3420c, size 0x64, virtual false, abstract: false, final false
  static inline bool IsShallow(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method HoleAngle, addr 0x2b33dac, size 0xc4, virtual false, abstract: false, final false
  static inline double_t HoleAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method BasinAngle, addr 0x2b33e70, size 0x9c, virtual false, abstract: false, final false
  static inline double_t BasinAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method Fill, addr 0x2b321ac, size 0x17c, virtual false, abstract: false, final false
  static inline void Fill(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method Legalize, addr 0x2b32600, size 0x270, virtual false, abstract: false, final false
  static inline bool Legalize(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method RotateTrianglePair, addr 0x2b3199c, size 0x4b8, virtual false, abstract: false, final false
  static inline void RotateTrianglePair(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p,
                                        ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);

  // Ctor Parameters [CppParam { name: "", ty: "DTSweep", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DTSweep(DTSweep&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DTSweep", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DTSweep(DTSweep const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSweep();

public:
  /// @brief Field PI_div2 offset 0xffffffff size 0x8
  static constexpr double_t PI_div2{ 1.5707963267948966 };

  /// @brief Field PI_3div4 offset 0xffffffff size 0x8
  static constexpr double_t PI_3div4{ 2.356194490192345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweep, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweep);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweep*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweep");
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweep/<>c__DisplayClass21_0");
