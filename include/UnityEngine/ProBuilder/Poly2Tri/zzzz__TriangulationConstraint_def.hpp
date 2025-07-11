#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/TriangulationConstraint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TriangulationConstraint)
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationConstraint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
class CORDL_TYPE TriangulationConstraint : public ::System::Object {
public:
  // Declarations
  /// @brief Field P, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_P, put = __cordl_internal_set_P)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* P;

  /// @brief Field Q, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Q, put = __cordl_internal_set_Q)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Q;

  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* New_ctor();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& __cordl_internal_get_P() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __cordl_internal_get_P();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* const& __cordl_internal_get_Q() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __cordl_internal_get_Q();

  constexpr void __cordl_internal_set_P(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr void __cordl_internal_set_Q(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  /// @brief Method .ctor, addr 0x46fd0ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulationConstraint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TriangulationConstraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriangulationConstraint(TriangulationConstraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationConstraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriangulationConstraint(TriangulationConstraint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17843 };

  /// @brief Field P, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ___P;

  /// @brief Field Q, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ___Q;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint, ___P) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint, ___Q) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationConstraint");
