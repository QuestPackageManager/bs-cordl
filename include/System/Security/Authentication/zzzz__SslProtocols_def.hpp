#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SslProtocols)
// Forward declare root types
namespace System::Security::Authentication {
struct SslProtocols;
}
// Write type traits
MARK_VAL_T(::System::Security::Authentication::SslProtocols);
// Type: System.Security.Authentication::SslProtocols
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Authentication {
// Is value type: true
// CS Name: ::System.Security.Authentication::SslProtocols
struct CORDL_TYPE SslProtocols {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SslProtocols_Unwrapped
  enum struct __SslProtocols_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Ssl2 = static_cast<int32_t>(0xc),
    __E_Ssl3 = static_cast<int32_t>(0x30),
    __E_Tls = static_cast<int32_t>(0xc0),
    __E_Tls11 = static_cast<int32_t>(0x300),
    __E_Tls12 = static_cast<int32_t>(0xc00),
    __E_Tls13 = static_cast<int32_t>(0x3000),
    __E_Default = static_cast<int32_t>(0xf0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SslProtocols_Unwrapped() const noexcept {
    return static_cast<__SslProtocols_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SslProtocols();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SslProtocols(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Default value: static_cast<int32_t>(0xf0)
  static ::System::Security::Authentication::SslProtocols const Default;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Security::Authentication::SslProtocols const None;

  /// @brief Field Ssl2 value: static_cast<int32_t>(0xc)
  static ::System::Security::Authentication::SslProtocols const Ssl2;

  /// @brief Field Ssl3 value: static_cast<int32_t>(0x30)
  static ::System::Security::Authentication::SslProtocols const Ssl3;

  /// @brief Field Tls value: static_cast<int32_t>(0xc0)
  static ::System::Security::Authentication::SslProtocols const Tls;

  /// @brief Field Tls11 value: static_cast<int32_t>(0x300)
  static ::System::Security::Authentication::SslProtocols const Tls11;

  /// @brief Field Tls12 value: static_cast<int32_t>(0xc00)
  static ::System::Security::Authentication::SslProtocols const Tls12;

  /// @brief Field Tls13 value: static_cast<int32_t>(0x3000)
  static ::System::Security::Authentication::SslProtocols const Tls13;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Authentication::SslProtocols, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Authentication::SslProtocols, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Authentication
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::SslProtocols, "System.Security.Authentication", "SslProtocols");
