#pragma once
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
// Type: UnityOpus::OpusApplication
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityOpus {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16216))
// CS Name: ::UnityOpus::OpusApplication
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpusApplication(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpusApplication();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field VoIP value: static_cast<int32_t>(0x800)
  static ::UnityOpus::OpusApplication const VoIP;

  /// @brief Field Audio value: static_cast<int32_t>(0x801)
  static ::UnityOpus::OpusApplication const Audio;

  /// @brief Field RestrictedLowDelay value: static_cast<int32_t>(0x803)
  static ::UnityOpus::OpusApplication const RestrictedLowDelay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::OpusApplication, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityOpus::OpusApplication, value__) == 0x0, "Offset mismatch!");

} // namespace UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::OpusApplication, "UnityOpus", "OpusApplication");
