#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/PolygonSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PolygonSet)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Polygon;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonSet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PolygonSet
class CORDL_TYPE PolygonSet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Polygons)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* Polygons;

  /// @brief Field _polygons, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__polygons, put = __cordl_internal_set__polygons)) ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* _polygons;

  /// @brief Method Add, addr 0x648d27c, size 0xb4, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::ProBuilder::Poly2Tri::Polygon* p);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet* New_ctor();

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::Polygon* poly);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* const& __cordl_internal_get__polygons() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*& __cordl_internal_get__polygons();

  constexpr void __cordl_internal_set__polygons(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* value);

  /// @brief Method .ctor, addr 0x648d10c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x648d180, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::Polygon* poly);

  /// @brief Method get_Polygons, addr 0x648d330, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* get_Polygons();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolygonSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PolygonSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolygonSet(PolygonSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolygonSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolygonSet(PolygonSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21542 };

  /// @brief Field _polygons, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* ____polygons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet, ____polygons) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet*, "UnityEngine.ProBuilder.Poly2Tri", "PolygonSet");
