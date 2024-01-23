#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PolygonGenerator)
namespace System {
class Random;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Polygon;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonGenerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator);
// Type: UnityEngine.ProBuilder.Poly2Tri::PolygonGenerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15347))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::PolygonGenerator*
class CORDL_TYPE PolygonGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field RNG, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RNG, put = setStaticF_RNG))::System::Random* RNG;

  /// @brief Field PI_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PI_2, put = setStaticF_PI_2)) double_t PI_2;

  static inline void setStaticF_RNG(::System::Random* value);

  static inline ::System::Random* getStaticF_RNG();

  static inline void setStaticF_PI_2(double_t value);

  static inline double_t getStaticF_PI_2();

  /// @brief Method RandomCircleSweep, addr 0x2b35cf0, size 0x2f0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* RandomCircleSweep(double_t scale, int32_t vertexCount);

  /// @brief Method RandomCircleSweep2, addr 0x2b35fe0, size 0x25c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* RandomCircleSweep2(double_t scale, int32_t vertexCount);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x2b3623c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PolygonGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolygonGenerator(PolygonGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolygonGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolygonGenerator(PolygonGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolygonGenerator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*, "UnityEngine.ProBuilder.Poly2Tri", "PolygonGenerator");
