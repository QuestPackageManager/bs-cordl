#pragma once
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
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationConstraint
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15370))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::TriangulationConstraint*
class CORDL_TYPE TriangulationConstraint : public ::System::Object {
public:
  // Declarations
  /// @brief Field P, offset 0x10, size 0x8
  __declspec(property(get = __get_P, put = __set_P))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* P;

  /// @brief Field Q, offset 0x18, size 0x8
  __declspec(property(get = __get_Q, put = __set_Q))::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Q;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __get_P();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __get_P() const;

  constexpr void __set_P(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& __get_Q();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& __get_Q() const;

  constexpr void __set_Q(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* New_ctor();

  /// @brief Method .ctor addr 0x29b2638 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationConstraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriangulationConstraint(TriangulationConstraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationConstraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriangulationConstraint(TriangulationConstraint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulationConstraint();

public:
  /// @brief Field P, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ___P;

  /// @brief Field Q, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ___Q;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint, ___P) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint, ___Q) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationConstraint");
