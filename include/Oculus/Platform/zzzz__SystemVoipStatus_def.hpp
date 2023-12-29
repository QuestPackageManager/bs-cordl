#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemVoipStatus)
// Forward declare root types
namespace Oculus::Platform {
struct SystemVoipStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::SystemVoipStatus);
// Type: Oculus.Platform::SystemVoipStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13430))
// CS Name: ::Oculus.Platform::SystemVoipStatus
struct CORDL_TYPE SystemVoipStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SystemVoipStatus_Unwrapped
  enum struct __SystemVoipStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Unavailable = static_cast<int32_t>(0x1),
    __E_Suppressed = static_cast<int32_t>(0x2),
    __E_Active = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SystemVoipStatus_Unwrapped() const noexcept {
    return static_cast<__SystemVoipStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SystemVoipStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemVoipStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::SystemVoipStatus const Unknown;

  /// @brief Field Unavailable value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::SystemVoipStatus const Unavailable;

  /// @brief Field Suppressed value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::SystemVoipStatus const Suppressed;

  /// @brief Field Active value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::SystemVoipStatus const Active;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::SystemVoipStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::SystemVoipStatus, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::SystemVoipStatus, "Oculus.Platform", "SystemVoipStatus");
