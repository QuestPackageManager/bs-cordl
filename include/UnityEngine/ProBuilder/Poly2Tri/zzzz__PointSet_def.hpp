#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PointSet)
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PointSet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::PointSet);
// Type: UnityEngine.ProBuilder.Poly2Tri::PointSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15338))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::PointSet*
class CORDL_TYPE PointSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Points>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Points_k__BackingField,
                      put = __set__Points_k__BackingField))::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* _Points_k__BackingField;

  /// @brief Field <Triangles>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Triangles_k__BackingField,
                      put = __set__Triangles_k__BackingField))::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* _Triangles_k__BackingField;

  __declspec(property(get = get_Points, put = set_Points))::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points;

  __declspec(property(get = get_Triangles, put = set_Triangles))::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles;

  __declspec(property(get = get_TriangulationMode))::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode TriangulationMode;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
  constexpr operator ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*() noexcept;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& __get__Points_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*> const& __get__Points_k__BackingField() const;

  constexpr void __set__Points_k__BackingField(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*& __get__Triangles_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*> const& __get__Triangles_k__BackingField() const;

  constexpr void __set__Triangles_k__BackingField(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value);

  /// @brief Method get_Points addr 0x2b351b0 size 0x8 virtual true final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* get_Points();

  /// @brief Method set_Points addr 0x2b351b8 size 0x8 virtual false final false
  inline void set_Points(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);

  /// @brief Method get_Triangles addr 0x2b351c0 size 0x8 virtual true final true
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles();

  /// @brief Method set_Triangles addr 0x2b351c8 size 0x8 virtual false final false
  inline void set_Triangles(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PointSet* New_ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points);

  /// @brief Method .ctor addr 0x2b34dcc size 0x90 virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points);

  /// @brief Method get_TriangulationMode addr 0x2b351d0 size 0x8 virtual true final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();

  /// @brief Method AddTriangle addr 0x2b351d8 size 0xac virtual true final true
  inline void AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);

  /// @brief Method AddTriangles addr 0x2b35284 size 0x35c virtual true final true
  inline void AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list);

  /// @brief Method ClearTriangles addr 0x2b355e0 size 0xa4 virtual true final true
  inline void ClearTriangles();

  /// @brief Method Prepare addr 0x2b35008 size 0x1a8 virtual true final false
  inline void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);

  // Ctor Parameters [CppParam { name: "", ty: "PointSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointSet(PointSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointSet(PointSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointSet();

public:
  /// @brief Field <Points>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* ____Points_k__BackingField;

  /// @brief Field <Triangles>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* ____Triangles_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::PointSet, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PointSet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PointSet*, "UnityEngine.ProBuilder.Poly2Tri", "PointSet");
