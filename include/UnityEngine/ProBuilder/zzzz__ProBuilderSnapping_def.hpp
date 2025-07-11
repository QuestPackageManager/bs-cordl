#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ProBuilderSnapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProBuilderSnapping)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct Vector3Mask;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ProBuilderSnapping;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ProBuilderSnapping);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ProBuilderSnapping
class CORDL_TYPE ProBuilderSnapping : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSnappingMaskBasedOnNormalVector, addr 0x47278d8, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetSnappingMaskBasedOnNormalVector(::UnityEngine::Vector3 normal);

  /// @brief Method IsCardinalDirection, addr 0x47271f0, size 0x1dc, virtual false, abstract: false, final false
  static inline bool IsCardinalDirection(::UnityEngine::Vector3 direction);

  /// @brief Method Snap, addr 0x472746c, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Snap(::UnityEngine::Vector3 val, ::UnityEngine::Vector3 snap);

  /// @brief Method Snap, addr 0x47273cc, size 0xa0, virtual false, abstract: false, final false
  static inline float_t Snap(float_t val, float_t snap);

  /// @brief Method SnapValueOnRay, addr 0x47279a8, size 0x6f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SnapValueOnRay(::UnityEngine::Ray ray, float_t distance, float_t snap, ::UnityEngine::ProBuilder::Vector3Mask mask);

  /// @brief Method SnapVertices, addr 0x472750c, size 0x3cc, virtual false, abstract: false, final false
  static inline void SnapVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes, ::UnityEngine::Vector3 snap);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProBuilderSnapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderSnapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProBuilderSnapping(ProBuilderSnapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderSnapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProBuilderSnapping(ProBuilderSnapping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14294 };

  /// @brief Field k_MaxRaySnapDistance offset 0xffffffff size 0x4
  static constexpr float_t k_MaxRaySnapDistance{ INFINITY };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProBuilderSnapping, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ProBuilderSnapping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProBuilderSnapping*, "UnityEngine.ProBuilder", "ProBuilderSnapping");
