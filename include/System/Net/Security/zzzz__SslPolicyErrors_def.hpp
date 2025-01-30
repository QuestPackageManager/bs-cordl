#pragma once
// IWYU pragma private; include "System/Net/Security/SslPolicyErrors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SslPolicyErrors)
// Forward declare root types
namespace System::Net::Security {
struct SslPolicyErrors;
}
// Write type traits
MARK_VAL_T(::System::Net::Security::SslPolicyErrors);
// Dependencies
namespace System::Net::Security {
// Is value type: true
// CS Name: System.Net.Security.SslPolicyErrors
struct CORDL_TYPE SslPolicyErrors {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SslPolicyErrors_Unwrapped
  enum struct __SslPolicyErrors_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_RemoteCertificateNotAvailable = static_cast<int32_t>(0x1),
    __E_RemoteCertificateNameMismatch = static_cast<int32_t>(0x2),
    __E_RemoteCertificateChainErrors = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SslPolicyErrors_Unwrapped() const noexcept {
    return static_cast<__SslPolicyErrors_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SslPolicyErrors();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SslPolicyErrors(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::System::Net::Security::SslPolicyErrors const None;

  /// @brief Field RemoteCertificateChainErrors value: I32(4)
  static ::System::Net::Security::SslPolicyErrors const RemoteCertificateChainErrors;

  /// @brief Field RemoteCertificateNameMismatch value: I32(2)
  static ::System::Net::Security::SslPolicyErrors const RemoteCertificateNameMismatch;

  /// @brief Field RemoteCertificateNotAvailable value: I32(1)
  static ::System::Net::Security::SslPolicyErrors const RemoteCertificateNotAvailable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9897 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Security::SslPolicyErrors, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Security::SslPolicyErrors, 0x4>, "Size mismatch!");

} // namespace System::Net::Security
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::SslPolicyErrors, "System.Net.Security", "SslPolicyErrors");
