#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509KeyUsageFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509KeyUsageFlags)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyUsageFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags);
// Dependencies
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
struct CORDL_TYPE X509KeyUsageFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __X509KeyUsageFlags_Unwrapped
  enum struct __X509KeyUsageFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_EncipherOnly = static_cast<int32_t>(0x1),
    __E_CrlSign = static_cast<int32_t>(0x2),
    __E_KeyCertSign = static_cast<int32_t>(0x4),
    __E_KeyAgreement = static_cast<int32_t>(0x8),
    __E_DataEncipherment = static_cast<int32_t>(0x10),
    __E_KeyEncipherment = static_cast<int32_t>(0x20),
    __E_NonRepudiation = static_cast<int32_t>(0x40),
    __E_DigitalSignature = static_cast<int32_t>(0x80),
    __E_DecipherOnly = static_cast<int32_t>(0x8000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __X509KeyUsageFlags_Unwrapped() const noexcept {
    return static_cast<__X509KeyUsageFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509KeyUsageFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X509KeyUsageFlags(int32_t value__) noexcept;

  /// @brief Field CrlSign value: I32(2)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const CrlSign;

  /// @brief Field DataEncipherment value: I32(16)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const DataEncipherment;

  /// @brief Field DecipherOnly value: I32(32768)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const DecipherOnly;

  /// @brief Field DigitalSignature value: I32(128)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const DigitalSignature;

  /// @brief Field EncipherOnly value: I32(1)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const EncipherOnly;

  /// @brief Field KeyAgreement value: I32(8)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const KeyAgreement;

  /// @brief Field KeyCertSign value: I32(4)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const KeyCertSign;

  /// @brief Field KeyEncipherment value: I32(32)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const KeyEncipherment;

  /// @brief Field NonRepudiation value: I32(64)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const NonRepudiation;

  /// @brief Field None value: I32(0)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9305 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, "System.Security.Cryptography.X509Certificates", "X509KeyUsageFlags");
