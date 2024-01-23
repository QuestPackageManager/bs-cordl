#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class Triangulatable;
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
// Type: UnityEngine.ProBuilder.Poly2Tri::Polygon
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15320))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::Polygon*
class CORDL_TYPE Polygon : public ::System::Object {
public:
  // Declarations
  /// @brief Field _points, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__points, put = __cordl_internal_set__points))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* _points;

  /// @brief Field _steinerPoints, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__steinerPoints,
                      put = __cordl_internal_set__steinerPoints))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* _steinerPoints;

  /// @brief Field _holes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__holes, put = __cordl_internal_set__holes))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* _holes;

  /// @brief Field _triangles, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__triangles,
                      put = __cordl_internal_set__triangles))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* _triangles;

  /// @brief Field _last, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__last, put = __cordl_internal_set__last))::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _last;

  __declspec(property(get = get_TriangulationMode))::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode TriangulationMode;

  __declspec(property(get = get_Points))::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points;

  __declspec(property(get = get_Triangles))::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles;

  __declspec(property(get = get_Holes))::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* Holes;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
  constexpr operator ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*() noexcept;

  /// @brief Convert to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
  constexpr ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* i___UnityEngine__ProBuilder__Poly2Tri__Triangulatable() noexcept;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& __cordl_internal_get__points();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*> const& __cordl_internal_get__points() const;

  constexpr void __cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& __cordl_internal_get__steinerPoints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*> const& __cordl_internal_get__steinerPoints() const;

  constexpr void __cordl_internal_set__steinerPoints(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*& __cordl_internal_get__holes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*> const& __cordl_internal_get__holes() const;

  constexpr void __cordl_internal_set__holes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*& __cordl_internal_get__triangles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*> const& __cordl_internal_get__triangles() const;

  constexpr void __cordl_internal_set__triangles(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*& __cordl_internal_get__last();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*> const& __cordl_internal_get__last() const;

  constexpr void __cordl_internal_set__last(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points);

  /// @brief Method .ctor, addr 0x2b2de58, size 0x3b8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points);

  /// @brief Method .ctor, addr 0x2b2e210, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon*
  New_ctor(::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, ::Array<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*> points);

  /// @brief Method .ctor, addr 0x2b2e298, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, ::Array<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*> points);

  /// @brief Method get_TriangulationMode, addr 0x2b2e29c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();

  /// @brief Method AddSteinerPoint, addr 0x2b2e2a4, size 0xf0, virtual false, abstract: false, final false
  inline void AddSteinerPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);

  /// @brief Method AddSteinerPoints, addr 0x2b2e394, size 0xa0, virtual false, abstract: false, final false
  inline void AddSteinerPoints(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points);

  /// @brief Method ClearSteinerPoints, addr 0x2b2e434, size 0x6c, virtual false, abstract: false, final false
  inline void ClearSteinerPoints();

  /// @brief Method AddHole, addr 0x2b2e4a0, size 0xf0, virtual false, abstract: false, final false
  inline void AddHole(::UnityEngine::ProBuilder::Poly2Tri::Polygon* poly);

  /// @brief Method InsertPointAfter, addr 0x2b2e590, size 0x11c, virtual false, abstract: false, final false
  inline void InsertPointAfter(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* point, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* newPoint);

  /// @brief Method AddPoints, addr 0x2b2e6ac, size 0x414, virtual false, abstract: false, final false
  inline void AddPoints(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* list);

  /// @brief Method AddPoint, addr 0x2b2eac0, size 0xc4, virtual false, abstract: false, final false
  inline void AddPoint(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* p);

  /// @brief Method RemovePoint, addr 0x2b2eb84, size 0x74, virtual false, abstract: false, final false
  inline void RemovePoint(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* p);

  /// @brief Method get_Points, addr 0x2b2ebf8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* get_Points();

  /// @brief Method get_Triangles, addr 0x2b2ec00, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles();

  /// @brief Method get_Holes, addr 0x2b2ec08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* get_Holes();

  /// @brief Method AddTriangle, addr 0x2b2ec10, size 0xa8, virtual true, abstract: false, final true
  inline void AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method AddTriangles, addr 0x2b2ecb8, size 0x58, virtual true, abstract: false, final true
  inline void AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list);

  /// @brief Method ClearTriangles, addr 0x2b2ed10, size 0x6c, virtual true, abstract: false, final true
  inline void ClearTriangles();

  /// @brief Method Prepare, addr 0x2b2ed7c, size 0x3ec, virtual true, abstract: false, final true
  inline void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);

  // Ctor Parameters [CppParam { name: "", ty: "Polygon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Polygon(Polygon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Polygon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Polygon(Polygon const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Polygon();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::Polygon, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::Polygon, ____points) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::Polygon, ____steinerPoints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::Polygon, ____holes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::Polygon, ____triangles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::Polygon, ____last) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::Polygon);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::Polygon*, "UnityEngine.ProBuilder.Poly2Tri", "Polygon");
