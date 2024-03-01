#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusSignal)
// Forward declare root types
namespace UnityOpus {
struct OpusSignal;
}
// Write type traits
MARK_VAL_T(::UnityOpus::OpusSignal);
// Type: UnityOpus::OpusSignal
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityOpus {
// Is value type: true
// CS Name: ::UnityOpus::OpusSignal
struct CORDL_TYPE OpusSignal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpusSignal_Unwrapped
  enum struct __OpusSignal_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0xfffffc18),
    __E_Voice = static_cast<int32_t>(0xbb9),
    __E_Music = static_cast<int32_t>(0xbba),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpusSignal_Unwrapped() const noexcept {
    return static_cast<__OpusSignal_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpusSignal();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpusSignal(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Auto value: static_cast<int32_t>(0xfffffc18)
  static ::UnityOpus::OpusSignal const Auto;

  /// @brief Field Music value: static_cast<int32_t>(0xbba)
  static ::UnityOpus::OpusSignal const Music;

  /// @brief Field Voice value: static_cast<int32_t>(0xbb9)
  static ::UnityOpus::OpusSignal const Voice;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::OpusSignal, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityOpus::OpusSignal, value__) == 0x0, "Offset mismatch!");

} // namespace UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::OpusSignal, "UnityOpus", "OpusSignal");
