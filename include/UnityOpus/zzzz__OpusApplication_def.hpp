#pragma once
// IWYU pragma private; include "UnityOpus/OpusApplication.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusApplication)
// Forward declare root types
namespace UnityOpus {
struct OpusApplication;
}
// Write type traits
MARK_VAL_T(::UnityOpus::OpusApplication);
// Dependencies
namespace UnityOpus {
// Is value type: true
// CS Name: UnityOpus.OpusApplication
struct CORDL_TYPE OpusApplication {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpusApplication_Unwrapped
  enum struct __OpusApplication_Unwrapped : int32_t {
    __E_VoIP = static_cast<int32_t>(0x800),
    __E_Audio = static_cast<int32_t>(0x801),
    __E_RestrictedLowDelay = static_cast<int32_t>(0x803),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpusApplication_Unwrapped() const noexcept {
    return static_cast<__OpusApplication_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpusApplication();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpusApplication(int32_t value__) noexcept;

  /// @brief Field Audio value: I32(2049)
  static ::UnityOpus::OpusApplication const Audio;

  /// @brief Field RestrictedLowDelay value: I32(2051)
  static ::UnityOpus::OpusApplication const RestrictedLowDelay;

  /// @brief Field VoIP value: I32(2048)
  static ::UnityOpus::OpusApplication const VoIP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19076 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityOpus::OpusApplication, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityOpus::OpusApplication, 0x4>, "Size mismatch!");

} // namespace UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::OpusApplication, "UnityOpus", "OpusApplication");
