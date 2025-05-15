#pragma once
// IWYU pragma private; include "System/Net/Http/ClientCertificateOption.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientCertificateOption)
// Forward declare root types
namespace System::Net::Http {
struct ClientCertificateOption;
}
// Write type traits
MARK_VAL_T(::System::Net::Http::ClientCertificateOption);
// Dependencies
namespace System::Net::Http {
// Is value type: true
// CS Name: System.Net.Http.ClientCertificateOption
struct CORDL_TYPE ClientCertificateOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ClientCertificateOption_Unwrapped
  enum struct __ClientCertificateOption_Unwrapped : int32_t {
    __E_Manual = static_cast<int32_t>(0x0),
    __E_Automatic = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ClientCertificateOption_Unwrapped() const noexcept {
    return static_cast<__ClientCertificateOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientCertificateOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ClientCertificateOption(int32_t value__) noexcept;

  /// @brief Field Automatic value: I32(1)
  static ::System::Net::Http::ClientCertificateOption const Automatic;

  /// @brief Field Manual value: I32(0)
  static ::System::Net::Http::ClientCertificateOption const Manual;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::ClientCertificateOption, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::ClientCertificateOption, 0x4>, "Size mismatch!");

} // namespace System::Net::Http
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::ClientCertificateOption, "System.Net.Http", "ClientCertificateOption");
