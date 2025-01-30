#pragma once
// IWYU pragma private; include "GlobalNamespace/Interpolation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Interpolation)
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class Interpolation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Interpolation);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interpolation
class CORDL_TYPE Interpolation : public ::System::Object {
public:
  // Declarations
  /// @brief Method Interpolate, addr 0x44dc0cc, size 0x54c, virtual false, abstract: false, final false
  static inline float_t Interpolate(float_t t, ::GlobalNamespace::EaseType easeType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interpolation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Interpolation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interpolation(Interpolation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interpolation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interpolation(Interpolation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18658 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Interpolation, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Interpolation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interpolation*, "", "Interpolation");
