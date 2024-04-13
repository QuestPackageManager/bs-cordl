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
// CS Name: ::MathfExtra*
class CORDL_TYPE MathfExtra : public ::System::Object {
public:
  // Declarations
  /// @brief Method Approximately, addr 0x265e380, size 0x10, virtual false, abstract: false, final false
  static inline bool Approximately(float_t a, float_t b, float_t precision);

  /// @brief Method MaxAbs, addr 0x265e36c, size 0x14, virtual false, abstract: false, final false
  static inline float_t MaxAbs(float_t a, float_t b);

  /// @brief Method Mod, addr 0x265e210, size 0x14, virtual false, abstract: false, final false
  static inline float_t Mod(float_t value, float_t mod);

  /// @brief Method Mod, addr 0x265e224, size 0x30, virtual false, abstract: false, final false
  static inline int32_t Mod(int32_t value, int32_t mod);

  /// @brief Method Round, addr 0x265e254, size 0x118, virtual false, abstract: false, final false
  static inline float_t Round(float_t value, int32_t decimals);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MathfExtra();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MathfExtra", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MathfExtra(MathfExtra&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MathfExtra", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MathfExtra(MathfExtra const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MathfExtra, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MathfExtra);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MathfExtra*, "", "MathfExtra");
