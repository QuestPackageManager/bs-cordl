#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TriangulationDebugContext)
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationDebugContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext);
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationDebugContext
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15372))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::TriangulationDebugContext*
class CORDL_TYPE TriangulationDebugContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field _tcx, offset 0x10, size 0x8
  __declspec(property(get = __get__tcx, put = __set__tcx))::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* _tcx;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*& __get__tcx();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*> const& __get__tcx() const;

  constexpr void __set__tcx(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);

  /// @brief Method .ctor addr 0x29b2f80 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationDebugContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriangulationDebugContext(TriangulationDebugContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationDebugContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriangulationDebugContext(TriangulationDebugContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulationDebugContext();

public:
  /// @brief Field _tcx, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* ____tcx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext, ____tcx) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationDebugContext");
