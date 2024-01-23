#pragma once
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
// Type: ::Interpolation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16092))
// CS Name: ::Interpolation*
class CORDL_TYPE Interpolation : public ::System::Object {
public:
  // Declarations
  /// @brief Method Interpolate, addr 0x2a0d4f8, size 0x540, virtual false, abstract: false, final false
  static inline float_t Interpolate(float_t t, ::GlobalNamespace::EaseType easeType);

  // Ctor Parameters [CppParam { name: "", ty: "Interpolation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interpolation(Interpolation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interpolation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interpolation(Interpolation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interpolation();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Interpolation, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Interpolation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interpolation*, "", "Interpolation");
