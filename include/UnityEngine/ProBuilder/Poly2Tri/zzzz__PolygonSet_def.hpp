#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PolygonSet)
namespace UnityEngine::ProBuilder::Poly2Tri {
class Polygon;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonSet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet);
// Type: UnityEngine.ProBuilder.Poly2Tri::PolygonSet
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15322))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::PolygonSet*
class CORDL_TYPE PolygonSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field _polygons, offset 0x10, size 0x8
  __declspec(property(get = __get__polygons, put = __set__polygons))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* _polygons;

  __declspec(property(get = get_Polygons))::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* Polygons;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*& __get__polygons();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*> const& __get__polygons() const;

  constexpr void __set__polygons(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet* New_ctor();

  /// @brief Method .ctor, addr 0x2b2f200, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::Polygon* poly);

  /// @brief Method .ctor, addr 0x2b2f27c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::Polygon* poly);

  /// @brief Method Add, addr 0x2b2f380, size 0xa8, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::ProBuilder::Poly2Tri::Polygon* p);

  /// @brief Method get_Polygons, addr 0x2b2f428, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* get_Polygons();

  // Ctor Parameters [CppParam { name: "", ty: "PolygonSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolygonSet(PolygonSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolygonSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolygonSet(PolygonSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolygonSet();

public:
  /// @brief Field _polygons, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* ____polygons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet, ____polygons) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet*, "UnityEngine.ProBuilder.Poly2Tri", "PolygonSet");
