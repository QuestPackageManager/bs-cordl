#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathfExtra)
// Forward declare root types
namespace GlobalNamespace {
class MathfExtra;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MathfExtra);
// Type: ::MathfExtra
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16066))
// CS Name: ::MathfExtra*
class CORDL_TYPE MathfExtra : public ::System::Object {
public:
  // Declarations
  /// @brief Method Mod addr 0x228a1a4 size 0x14 virtual false final false
  static inline float_t Mod(float_t value, float_t mod);

  /// @brief Method Round addr 0x228a1b8 size 0x118 virtual false final false
  static inline float_t Round(float_t value, int32_t decimals);

  /// @brief Method MaxAbs addr 0x228a2d0 size 0x14 virtual false final false
  static inline float_t MaxAbs(float_t a, float_t b);

  // Ctor Parameters [CppParam { name: "", ty: "MathfExtra", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MathfExtra(MathfExtra&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MathfExtra", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MathfExtra(MathfExtra const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MathfExtra();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MathfExtra, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MathfExtra);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MathfExtra*, "", "MathfExtra");
