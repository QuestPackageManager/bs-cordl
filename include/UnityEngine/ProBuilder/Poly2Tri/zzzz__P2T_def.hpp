#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationAlgorithm_def.hpp"
CORDL_MODULE_EXPORT(P2T)
namespace UnityEngine::ProBuilder::Poly2Tri {
class ConstrainedPointSet;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class PointSet;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonSet;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Polygon;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationAlgorithm;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class P2T;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::P2T);
// Type: UnityEngine.ProBuilder.Poly2Tri::P2T
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15339))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15319))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::P2T*
class CORDL_TYPE P2T : public ::System::Object {
public:
  // Declarations
  /// @brief Field _defaultAlgorithm, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__defaultAlgorithm, put = setStaticF__defaultAlgorithm))::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm _defaultAlgorithm;

  static inline void setStaticF__defaultAlgorithm(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm getStaticF__defaultAlgorithm();

  /// @brief Method Triangulate, addr 0x2b2d82c, size 0x324, virtual false, abstract: false, final false
  static inline void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet* ps);

  /// @brief Method Triangulate, addr 0x2b2dc38, size 0x3c, virtual false, abstract: false, final false
  static inline void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::Polygon* p);

  /// @brief Method Triangulate, addr 0x2b2dcb0, size 0x3c, virtual false, abstract: false, final false
  static inline void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet* cps);

  /// @brief Method Triangulate, addr 0x2b2dcec, size 0x3c, virtual false, abstract: false, final false
  static inline void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::PointSet* ps);

  /// @brief Method CreateContext, addr 0x2b2db50, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* CreateContext(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm algorithm);

  /// @brief Method Triangulate, addr 0x2b2dc74, size 0x3c, virtual false, abstract: false, final false
  static inline void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm algorithm, ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t);

  /// @brief Method Triangulate, addr 0x2b2dba8, size 0x90, virtual false, abstract: false, final false
  static inline void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);

  /// @brief Method Warmup, addr 0x2b2de54, size 0x4, virtual false, abstract: false, final false
  static inline void Warmup();

  // Ctor Parameters [CppParam { name: "", ty: "P2T", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  P2T(P2T&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "P2T", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  P2T(P2T const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr P2T();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::P2T, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::P2T);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::P2T*, "UnityEngine.ProBuilder.Poly2Tri", "P2T");
