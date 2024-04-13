#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DTSweepEdgeEvent)
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepEdgeEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent);
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepEdgeEvent
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DTSweepEdgeEvent*
class CORDL_TYPE DTSweepEdgeEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConstrainedEdge, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ConstrainedEdge, put = __cordl_internal_set_ConstrainedEdge))::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* ConstrainedEdge;

  /// @brief Field Right, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_Right, put = __cordl_internal_set_Right)) bool Right;

  static inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* New_ctor();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*& __cordl_internal_get_ConstrainedEdge();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*> const& __cordl_internal_get_ConstrainedEdge() const;

  constexpr bool const& __cordl_internal_get_Right() const;

  constexpr bool& __cordl_internal_get_Right();

  constexpr void __cordl_internal_set_ConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* value);

  constexpr void __cordl_internal_set_Right(bool value);

  /// @brief Method .ctor, addr 0x3065dc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSweepEdgeEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DTSweepEdgeEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DTSweepEdgeEvent(DTSweepEdgeEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DTSweepEdgeEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DTSweepEdgeEvent(DTSweepEdgeEvent const&) = delete;

  /// @brief Field ConstrainedEdge, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* ___ConstrainedEdge;

  /// @brief Field Right, offset: 0x18, size: 0x1, def value: None
  bool ___Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent, ___ConstrainedEdge) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent, ___Right) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepEdgeEvent");
