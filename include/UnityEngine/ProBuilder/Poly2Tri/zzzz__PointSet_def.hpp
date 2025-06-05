#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/PointSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Triangulatable_def.hpp"
CORDL_MODULE_EXPORT(PointSet)
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
class PointSet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::PointSet);
// Dependencies System.Object, UnityEngine.ProBuilder.Poly2Tri.Triangulatable
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PointSet
class CORDL_TYPE PointSet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Points, put = set_Points)) ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points;

  __declspec(property(get = get_Triangles, put = set_Triangles)) ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles;

  __declspec(property(get = get_TriangulationMode)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode TriangulationMode;

  /// @brief Field <Points>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Points_k__BackingField,
                      put = __cordl_internal_set__Points_k__BackingField)) ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* _Points_k__BackingField;

  /// @brief Field <Triangles>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Triangles_k__BackingField,
                      put =
                          __cordl_internal_set__Triangles_k__BackingField)) ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* _Triangles_k__BackingField;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
  constexpr operator ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*() noexcept;

  /// @brief Method AddTriangle, addr 0x46fe240, size 0xac, virtual true, abstract: false, final true
  inline void AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method AddTriangles, addr 0x46fe2ec, size 0x358, virtual true, abstract: false, final true
  inline void AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list);

  /// @brief Method ClearTriangles, addr 0x46fe644, size 0xa4, virtual true, abstract: false, final true
  inline void ClearTriangles();

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PointSet* New_ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points);

  /// @brief Method Prepare, addr 0x46fe074, size 0x1a4, virtual true, abstract: false, final false
  inline void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* const& __cordl_internal_get__Points_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& __cordl_internal_get__Points_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* const& __cordl_internal_get__Triangles_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*& __cordl_internal_get__Triangles_k__BackingField();

  constexpr void __cordl_internal_set__Points_k__BackingField(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);

  constexpr void __cordl_internal_set__Triangles_k__BackingField(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value);

  /// @brief Method .ctor, addr 0x46fde40, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points);

  /// @brief Method get_Points, addr 0x46fe218, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* get_Points();

  /// @brief Method get_Triangles, addr 0x46fe228, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles();

  /// @brief Method get_TriangulationMode, addr 0x46fe238, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();

  /// @brief Convert to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
  constexpr ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* i___UnityEngine__ProBuilder__Poly2Tri__Triangulatable() noexcept;

  /// @brief Method set_Points, addr 0x46fe220, size 0x8, virtual false, abstract: false, final false
  inline void set_Points(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);

  /// @brief Method set_Triangles, addr 0x46fe230, size 0x8, virtual false, abstract: false, final false
  inline void set_Triangles(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointSet(PointSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointSet(PointSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17841 };

  /// @brief Field <Points>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* ____Points_k__BackingField;

  /// @brief Field <Triangles>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* ____Triangles_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::PointSet, ____Points_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::PointSet, ____Triangles_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::PointSet, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PointSet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PointSet*, "UnityEngine.ProBuilder.Poly2Tri", "PointSet");
