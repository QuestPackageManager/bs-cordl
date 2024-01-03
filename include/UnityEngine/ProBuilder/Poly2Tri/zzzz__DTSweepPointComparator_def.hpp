#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DTSweepPointComparator)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepPointComparator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator);
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepPointComparator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15333))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DTSweepPointComparator*
class CORDL_TYPE DTSweepPointComparator : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*
  i___System__Collections__Generic__IComparer_1___UnityEngine__ProBuilder__Poly2Tri__TriangulationPoint__() noexcept;

  /// @brief Method Compare, addr 0x2b34d48, size 0x50, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* New_ctor();

  /// @brief Method .ctor, addr 0x2b344ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DTSweepPointComparator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DTSweepPointComparator(DTSweepPointComparator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DTSweepPointComparator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DTSweepPointComparator(DTSweepPointComparator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DTSweepPointComparator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepPointComparator");
