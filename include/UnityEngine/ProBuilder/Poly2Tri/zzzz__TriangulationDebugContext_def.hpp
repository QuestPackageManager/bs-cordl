#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/TriangulationDebugContext.hpp"
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
// Dependencies System.Object
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
class CORDL_TYPE TriangulationDebugContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field _tcx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tcx, put = __cordl_internal_set__tcx)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* _tcx;

  /// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* const& __cordl_internal_get__tcx() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*& __cordl_internal_get__tcx();

  constexpr void __cordl_internal_set__tcx(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* value);

  /// @brief Method .ctor, addr 0x470b268, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulationDebugContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TriangulationDebugContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriangulationDebugContext(TriangulationDebugContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationDebugContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriangulationDebugContext(TriangulationDebugContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17843 };

  /// @brief Field _tcx, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* ____tcx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext, ____tcx) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationDebugContext");
