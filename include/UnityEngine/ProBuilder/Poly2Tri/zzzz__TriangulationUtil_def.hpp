#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TriangulationUtil)
namespace UnityEngine::ProBuilder::Poly2Tri {
struct Orientation;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationUtil;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil);
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15345))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::TriangulationUtil*
class CORDL_TYPE TriangulationUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Field EPSILON, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EPSILON, put = setStaticF_EPSILON)) double_t EPSILON;

  static inline void setStaticF_EPSILON(double_t value);

  static inline double_t getStaticF_EPSILON();

  /// @brief Method SmartIncircle, addr 0x2b34288, size 0xc4, virtual false, abstract: false, final false
  static inline bool SmartIncircle(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb,
                                   ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pd);

  /// @brief Method InScanArea, addr 0x2b339b4, size 0x78, virtual false, abstract: false, final false
  static inline bool InScanArea(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb,
                                ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pd);

  /// @brief Method Orient2d, addr 0x2b320c4, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::Orientation Orient2d(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb,
                                                                          ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil* New_ctor();

  /// @brief Method .ctor, addr 0x2b358bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriangulationUtil(TriangulationUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriangulationUtil(TriangulationUtil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulationUtil();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationUtil");
