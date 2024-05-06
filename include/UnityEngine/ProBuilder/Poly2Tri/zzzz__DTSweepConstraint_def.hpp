#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/DTSweepConstraint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationConstraint_def.hpp"
CORDL_MODULE_EXPORT(DTSweepConstraint)
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint);
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepConstraint
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DTSweepConstraint*
class CORDL_TYPE DTSweepConstraint : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint {
public:
  // Declarations
  static inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1,
                                                                                 ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);

  /// @brief Method .ctor, addr 0x326cca4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSweepConstraint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DTSweepConstraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DTSweepConstraint(DTSweepConstraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DTSweepConstraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DTSweepConstraint(DTSweepConstraint const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepConstraint");
