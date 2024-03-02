#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IPProtectionLevel)
// Forward declare root types
namespace System::Net::Sockets {
struct IPProtectionLevel;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::IPProtectionLevel);
// Type: System.Net.Sockets::IPProtectionLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: true
// CS Name: ::System.Net.Sockets::IPProtectionLevel
struct CORDL_TYPE IPProtectionLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IPProtectionLevel_Unwrapped
  enum struct __IPProtectionLevel_Unwrapped : int32_t {
    __E_Unspecified = static_cast<int32_t>(0xffffffff),
    __E_Unrestricted = static_cast<int32_t>(0xa),
    __E_EdgeRestricted = static_cast<int32_t>(0x14),
    __E_Restricted = static_cast<int32_t>(0x1e),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IPProtectionLevel_Unwrapped() const noexcept {
    return static_cast<__IPProtectionLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IPProtectionLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IPProtectionLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EdgeRestricted value: static_cast<int32_t>(0x14)
  static ::System::Net::Sockets::IPProtectionLevel const EdgeRestricted;

  /// @brief Field Restricted value: static_cast<int32_t>(0x1e)
  static ::System::Net::Sockets::IPProtectionLevel const Restricted;

  /// @brief Field Unrestricted value: static_cast<int32_t>(0xa)
  static ::System::Net::Sockets::IPProtectionLevel const Unrestricted;

  /// @brief Field Unspecified value: static_cast<int32_t>(0xffffffff)
  static ::System::Net::Sockets::IPProtectionLevel const Unspecified;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::IPProtectionLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::IPProtectionLevel, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::IPProtectionLevel, "System.Net.Sockets", "IPProtectionLevel");
