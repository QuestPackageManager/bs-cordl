#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/PointGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointGenerator)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Random;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PointGenerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::PointGenerator);
// Type: UnityEngine.ProBuilder.Poly2Tri::PointGenerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::PointGenerator*
class CORDL_TYPE PointGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field RNG, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RNG, put = setStaticF_RNG)) ::System::Random* RNG;

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PointGenerator* New_ctor();

  /// @brief Method UniformDistribution, addr 0x469bc08, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* UniformDistribution(int32_t n, double_t scale);

  /// @brief Method UniformGrid, addr 0x469bdc8, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* UniformGrid(int32_t n, double_t scale);

  /// @brief Method .ctor, addr 0x469bf54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Random* getStaticF_RNG();

  static inline void setStaticF_RNG(::System::Random* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointGenerator(PointGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointGenerator(PointGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17754 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::PointGenerator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PointGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PointGenerator*, "UnityEngine.ProBuilder.Poly2Tri", "PointGenerator");
