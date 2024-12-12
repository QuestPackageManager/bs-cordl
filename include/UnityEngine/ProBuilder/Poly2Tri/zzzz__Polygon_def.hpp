#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/Polygon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Triangulatable_def.hpp"
CORDL_MODULE_EXPORT(Polygon)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class Polygon;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::Polygon);
// Dependencies System.Object, UnityEngine.ProBuilder.Poly2Tri.Triangulatable
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.Polygon
class CORDL_TYPE Polygon : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Holes)) ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* Holes;

  __declspec(property(get = get_Points)) ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points;

  __declspec(property(get = get_Triangles)) ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles;

  __declspec(property(get = get_TriangulationMode)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode TriangulationMode;

  /// @brief Field _holes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__holes, put = __cordl_internal_set__holes)) ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* _holes;

  /// @brief Field _last, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__last, put = __cordl_internal_set__last)) ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _last;

  /// @brief Field _points, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__points,
                      put = __cordl_internal_set__points)) ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* _points;

  /// @brief Field _steinerPoints, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__steinerPoints,
                      put = __cordl_internal_set__steinerPoints)) ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* _steinerPoints;

  /// @brief Field _triangles, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__triangles,
                      put = __cordl_internal_set__triangles)) ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* _triangles;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
  constexpr operator ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*() noexcept;

  /// @brief Method AddHole, addr 0x46f5c68, size 0xec, virtual false, abstract: false, final false
  inline void AddHole(::UnityEngine::ProBuilder::Poly2Tri::Polygon* poly);

  /// @brief Method AddPoint, addr 0x46f6280, size 0xc0, virtual false, abstract: false, final false
  inline void AddPoint(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* p);

  /// @brief Method AddPoints, addr 0x46f5e6c, size 0x414, virtual false, abstract: false, final false
  inline void AddPoints(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* list);

  /// @brief Method AddSteinerPoint, addr 0x46f5a70, size 0xec, virtual false, abstract: false, final false
  inline void AddSteinerPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method AddSteinerPoints, addr 0x46f5b5c, size 0xa0, virtual false, abstract: false, final false
  inline void AddSteinerPoints(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points);

  /// @brief Method AddTriangle, addr 0x46f63cc, size 0xa4, virtual true, abstract: false, final true
  inline void AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method AddTriangles, addr 0x46f6470, size 0x58, virtual true, abstract: false, final true
  inline void AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list);

  /// @brief Method ClearSteinerPoints, addr 0x46f5bfc, size 0x6c, virtual false, abstract: false, final false
  inline void ClearSteinerPoints();

  /// @brief Method ClearTriangles, addr 0x46f64c8, size 0x6c, virtual true, abstract: false, final true
  inline void ClearTriangles();

  /// @brief Method InsertPointAfter, addr 0x46f5d54, size 0x118, virtual false, abstract: false, final false
  inline void InsertPointAfter(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* point, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* newPoint);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon*
  New_ctor(::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, ::Array<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*> points);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points);

  /// @brief Method Prepare, addr 0x46f6534, size 0x3e8, virtual true, abstract: false, final true
  inline void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);

  /// @brief Method RemovePoint, addr 0x46f6340, size 0x74, virtual false, abstract: false, final false
  inline void RemovePoint(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* p);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* const& __cordl_internal_get__holes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*& __cordl_internal_get__holes();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* const& __cordl_internal_get__last() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*& __cordl_internal_get__last();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* const& __cordl_internal_get__points() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& __cordl_internal_get__points();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* const& __cordl_internal_get__steinerPoints() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& __cordl_internal_get__steinerPoints();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* const& __cordl_internal_get__triangles() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*& __cordl_internal_get__triangles();

  constexpr void __cordl_internal_set__holes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* value);

  constexpr void __cordl_internal_set__last(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value);

  constexpr void __cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);

  constexpr void __cordl_internal_set__steinerPoints(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);

  constexpr void __cordl_internal_set__triangles(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value);

  /// @brief Method .ctor, addr 0x46f5a64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, ::Array<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*> points);

  /// @brief Method .ctor, addr 0x46f59dc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points);

  /// @brief Method .ctor, addr 0x46f562c, size 0x3b0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points);

  /// @brief Method get_Holes, addr 0x46f63c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* get_Holes();

  /// @brief Method get_Points, addr 0x46f63b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* get_Points();

  /// @brief Method get_Triangles, addr 0x46f63bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles();

  /// @brief Method get_TriangulationMode, addr 0x46f5a68, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();

  /// @brief Convert to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
  constexpr ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* i___UnityEngine__ProBuilder__Poly2Tri__Triangulatable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Polygon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Polygon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Polygon(Polygon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Polygon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Polygon(Polygon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17811 };

  /// @brief Field _points, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* ____points;

  /// @brief Field _steinerPoints, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* ____steinerPoints;

  /// @brief Field _holes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* ____holes;

  /// @brief Field _triangles, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* ____triangles;

  /// @brief Field _last, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* ____last;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::Polygon, ____points) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::Polygon, ____steinerPoints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::Polygon, ____holes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::Polygon, ____triangles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::Polygon, ____last) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::Polygon, 0x38>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::Polygon);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::Polygon*, "UnityEngine.ProBuilder.Poly2Tri", "Polygon");
