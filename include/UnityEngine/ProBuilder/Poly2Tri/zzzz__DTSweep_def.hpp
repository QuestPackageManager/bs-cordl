#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/DTSweep.hpp"
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
class DTSweep___c__DisplayClass21_0;
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
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweep;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweep___c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweep);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweep___c__DisplayClass21_0);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweep/<>c__DisplayClass21_0
class CORDL_TYPE DTSweep___c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ep, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ep, put = __cordl_internal_set_ep)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep;

  static inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweep___c__DisplayClass21_0* New_ctor();

  /// @brief Method <SplitEdge>b__0, addr 0x64f9b74, size 0x34, virtual false, abstract: false, final false
  inline bool _SplitEdge_b__0(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* e);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& __cordl_internal_get_ep() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __cordl_internal_get_ep();

  constexpr void __cordl_internal_set_ep(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  /// @brief Method .ctor, addr 0x64f910c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSweep___c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DTSweep___c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DTSweep___c__DisplayClass21_0(DTSweep___c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DTSweep___c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DTSweep___c__DisplayClass21_0(DTSweep___c__DisplayClass21_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21573 };

  /// @brief Field ep, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ___ep;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweep___c__DisplayClass21_0, ___ep) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweep___c__DisplayClass21_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
// Dependencies System.Object
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweep
class CORDL_TYPE DTSweep : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::UnityEngine::ProBuilder::Poly2Tri::DTSweep___c__DisplayClass21_0;

  /// @brief Method BasinAngle, addr 0x64f9680, size 0x9c, virtual false, abstract: false, final false
  static inline double_t BasinAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method EdgeEvent, addr 0x64f6dcc, size 0x180, virtual false, abstract: false, final false
  static inline void EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                               ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method EdgeEvent, addr 0x64f80fc, size 0x1e8, virtual false, abstract: false, final false
  static inline void EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                               ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle,
                               ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method Fill, addr 0x64f78c4, size 0x1a4, virtual false, abstract: false, final false
  static inline void Fill(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillAdvancingFront, addr 0x64f7c70, size 0xf8, virtual false, abstract: false, final false
  static inline void FillAdvancingFront(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* n);

  /// @brief Method FillBasin, addr 0x64f971c, size 0x194, virtual false, abstract: false, final false
  static inline void FillBasin(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillBasinReq, addr 0x64f98b0, size 0x188, virtual false, abstract: false, final false
  static inline void FillBasinReq(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillEdgeEvent, addr 0x64f80d0, size 0x2c, virtual false, abstract: false, final false
  static inline void FillEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                   ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillLeftAboveEdgeEvent, addr 0x64f83f4, size 0x10c, virtual false, abstract: false, final false
  static inline void FillLeftAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                            ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillLeftBelowEdgeEvent, addr 0x64f8ac4, size 0x140, virtual false, abstract: false, final false
  static inline void FillLeftBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                            ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillLeftConcaveEdgeEvent, addr 0x64f89bc, size 0x108, virtual false, abstract: false, final false
  static inline void FillLeftConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                              ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillLeftConvexEdgeEvent, addr 0x64f888c, size 0x130, virtual false, abstract: false, final false
  static inline void FillLeftConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                             ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillRightAboveEdgeEvent, addr 0x64f82e4, size 0x110, virtual false, abstract: false, final false
  static inline void FillRightAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                             ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillRightBelowEdgeEvent, addr 0x64f8748, size 0x144, virtual false, abstract: false, final false
  static inline void FillRightBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                             ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillRightConcaveEdgeEvent, addr 0x64f8500, size 0x110, virtual false, abstract: false, final false
  static inline void FillRightConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                               ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FillRightConvexEdgeEvent, addr 0x64f8610, size 0x138, virtual false, abstract: false, final false
  static inline void FillRightConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                              ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method FinalizationConvexHull, addr 0x64f6940, size 0x280, virtual false, abstract: false, final false
  static inline void FinalizationConvexHull(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);

  /// @brief Method FinalizationPolygon, addr 0x64f689c, size 0xa4, virtual false, abstract: false, final false
  static inline void FinalizationPolygon(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);

  /// @brief Method FlipEdgeEvent, addr 0x64f8c4c, size 0x3a0, virtual false, abstract: false, final false
  static inline void FlipEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                   ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t,
                                   ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method FlipScanEdgeEvent, addr 0x64f93ec, size 0x1c4, virtual false, abstract: false, final false
  static inline void FlipScanEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                       ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* flipTriangle,
                                       ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method HoleAngle, addr 0x64f95bc, size 0xc4, virtual false, abstract: false, final false
  static inline double_t HoleAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method IsEdgeSideOfTriangle, addr 0x64f8020, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsEdgeSideOfTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                          ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq);

  /// @brief Method IsShallow, addr 0x64f9a38, size 0x64, virtual false, abstract: false, final false
  static inline bool IsShallow(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method Legalize, addr 0x64f7d68, size 0x25c, virtual false, abstract: false, final false
  static inline bool Legalize(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method NewFrontTriangle, addr 0x64f7a8c, size 0x1d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* NewFrontTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx,
                                                                                          ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point,
                                                                                          ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);

  /// @brief Method NextFlipPoint, addr 0x64f92e0, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* NextFlipPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                                                                       ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq,
                                                                                       ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot,
                                                                                       ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);

  /// @brief Method NextFlipTriangle, addr 0x64f923c, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*
  NextFlipTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::Orientation o, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t,
                   ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);

  /// @brief Method PointEvent, addr 0x64f6bd0, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* PointEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx,
                                                                                    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method RotateTrianglePair, addr 0x64f70c0, size 0x488, virtual false, abstract: false, final false
  static inline void RotateTrianglePair(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p,
                                        ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);

  /// @brief Method SplitEdge, addr 0x64f8fec, size 0x120, virtual false, abstract: false, final false
  static inline void SplitEdge(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq,
                               ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);

  /// @brief Method Sweep, addr 0x64f66c8, size 0x1d4, virtual false, abstract: false, final false
  static inline void Sweep(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);

  /// @brief Method Triangulate, addr 0x64f3834, size 0x4c, virtual false, abstract: false, final false
  static inline void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);

  /// @brief Method TurnAdvancingFrontConvex, addr 0x64f6f50, size 0x170, virtual false, abstract: false, final false
  static inline void TurnAdvancingFrontConvex(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* b,
                                              ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* c);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSweep();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DTSweep", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DTSweep(DTSweep&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DTSweep", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DTSweep(DTSweep const&) = delete;

  /// @brief Field PI_3div4 offset 0xffffffff size 0x8
  static constexpr double_t PI_3div4{ static_cast<double_t>(2.4) };

  /// @brief Field PI_div2 offset 0xffffffff size 0x8
  static constexpr double_t PI_div2{ static_cast<double_t>(1.6) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21574 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweep, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweep);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweep*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweep");
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweep___c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweep___c__DisplayClass21_0*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweep/<>c__DisplayClass21_0");
