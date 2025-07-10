#pragma once
// IWYU pragma private; include "UnityOpus/OpusSignal.hpp"
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
// Dependencies
namespace UnityOpus {
// Is value type: true
// CS Name: UnityOpus.OpusSignal
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
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpusSignal();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpusSignal(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(-1000)
  static ::UnityOpus::OpusSignal const Auto;

  /// @brief Field Music value: I32(3002)
  static ::UnityOpus::OpusSignal const Music;

  /// @brief Field Voice value: I32(3001)
  static ::UnityOpus::OpusSignal const Voice;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19089 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityOpus::OpusSignal, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityOpus::OpusSignal, 0x4>, "Size mismatch!");

} // namespace UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::OpusSignal, "UnityOpus", "OpusSignal");
