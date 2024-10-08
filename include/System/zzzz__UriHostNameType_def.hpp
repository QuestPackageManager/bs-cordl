#pragma once
// IWYU pragma private; include "System/UriHostNameType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UriHostNameType)
// Forward declare root types
namespace System {
struct UriHostNameType;
}
// Write type traits
MARK_VAL_T(::System::UriHostNameType);
// Type: System::UriHostNameType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::UriHostNameType
struct CORDL_TYPE UriHostNameType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UriHostNameType_Unwrapped
  enum struct __UriHostNameType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Basic = static_cast<int32_t>(0x1),
    __E_Dns = static_cast<int32_t>(0x2),
    __E_IPv4 = static_cast<int32_t>(0x3),
    __E_IPv6 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UriHostNameType_Unwrapped() const noexcept {
    return static_cast<__UriHostNameType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UriHostNameType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UriHostNameType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Basic value: static_cast<int32_t>(0x1)
  static ::System::UriHostNameType const Basic;

  /// @brief Field Dns value: static_cast<int32_t>(0x2)
  static ::System::UriHostNameType const Dns;

  /// @brief Field IPv4 value: static_cast<int32_t>(0x3)
  static ::System::UriHostNameType const IPv4;

  /// @brief Field IPv6 value: static_cast<int32_t>(0x4)
  static ::System::UriHostNameType const IPv6;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::System::UriHostNameType const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9169 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UriHostNameType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::UriHostNameType, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UriHostNameType, "System", "UriHostNameType");
