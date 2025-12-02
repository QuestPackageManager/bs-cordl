#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoSslPolicyErrors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoSslPolicyErrors)
// Forward declare root types
namespace Mono::Security::Interface {
struct MonoSslPolicyErrors;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Interface::MonoSslPolicyErrors);
// Dependencies
namespace Mono::Security::Interface {
// Is value type: true
// CS Name: Mono.Security.Interface.MonoSslPolicyErrors
struct CORDL_TYPE MonoSslPolicyErrors {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MonoSslPolicyErrors_Unwrapped
  enum struct __MonoSslPolicyErrors_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_RemoteCertificateNotAvailable = static_cast<int32_t>(0x1),
    __E_RemoteCertificateNameMismatch = static_cast<int32_t>(0x2),
    __E_RemoteCertificateChainErrors = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MonoSslPolicyErrors_Unwrapped() const noexcept {
    return static_cast<__MonoSslPolicyErrors_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoSslPolicyErrors();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MonoSslPolicyErrors(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::Mono::Security::Interface::MonoSslPolicyErrors const None;

  /// @brief Field RemoteCertificateChainErrors value: I32(4)
  static ::Mono::Security::Interface::MonoSslPolicyErrors const RemoteCertificateChainErrors;

  /// @brief Field RemoteCertificateNameMismatch value: I32(2)
  static ::Mono::Security::Interface::MonoSslPolicyErrors const RemoteCertificateNameMismatch;

  /// @brief Field RemoteCertificateNotAvailable value: I32(1)
  static ::Mono::Security::Interface::MonoSslPolicyErrors const RemoteCertificateNotAvailable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19249 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Interface::MonoSslPolicyErrors, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoSslPolicyErrors, 0x4>, "Size mismatch!");

} // namespace Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoSslPolicyErrors, "Mono.Security.Interface", "MonoSslPolicyErrors");
