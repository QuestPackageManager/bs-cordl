#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplineUtils)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SplineUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SplineUtils);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SplineUtils
class CORDL_TYPE SplineUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method Interpolate, addr 0x40877ac, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Interpolate(::UnityEngine::Vector3 t0, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 t1, float_t f);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SplineUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SplineUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SplineUtils(SplineUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SplineUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SplineUtils(SplineUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18872 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SplineUtils, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SplineUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SplineUtils*, "", "SplineUtils");
