#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/PolygonGenerator.hpp"
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
// Dependencies System.Object
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PolygonGenerator
class CORDL_TYPE PolygonGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field PI_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PI_2, put = setStaticF_PI_2)) double_t PI_2;

  /// @brief Field RNG, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RNG, put = setStaticF_RNG)) ::System::Random* RNG;

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator* New_ctor();

  /// @brief Method RandomCircleSweep, addr 0x6493898, size 0x2ec, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* RandomCircleSweep(double_t scale, int32_t vertexCount);

  /// @brief Method RandomCircleSweep2, addr 0x6493b84, size 0x25c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon* RandomCircleSweep2(double_t scale, int32_t vertexCount);

  /// @brief Method .ctor, addr 0x6493de0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline double_t getStaticF_PI_2();

  static inline ::System::Random* getStaticF_RNG();

  static inline void setStaticF_PI_2(double_t value);

  static inline void setStaticF_RNG(::System::Random* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolygonGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PolygonGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolygonGenerator(PolygonGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolygonGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolygonGenerator(PolygonGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21567 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator*, "UnityEngine.ProBuilder.Poly2Tri", "PolygonGenerator");
