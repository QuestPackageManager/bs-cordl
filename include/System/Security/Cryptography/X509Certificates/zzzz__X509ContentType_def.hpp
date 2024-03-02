#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509ContentType)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509ContentType;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509ContentType);
// Type: System.Security.Cryptography.X509Certificates::X509ContentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ContentType
struct CORDL_TYPE X509ContentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __X509ContentType_Unwrapped
  enum struct __X509ContentType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Cert = static_cast<int32_t>(0x1),
    __E_SerializedCert = static_cast<int32_t>(0x2),
    __E_Pfx = static_cast<int32_t>(0x3),
    __E_Pkcs12 = static_cast<int32_t>(0x3),
    __E_SerializedStore = static_cast<int32_t>(0x4),
    __E_Pkcs7 = static_cast<int32_t>(0x5),
    __E_Authenticode = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __X509ContentType_Unwrapped() const noexcept {
    return static_cast<__X509ContentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ContentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X509ContentType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Authenticode value: static_cast<int32_t>(0x6)
  static ::System::Security::Cryptography::X509Certificates::X509ContentType const Authenticode;

  /// @brief Field Cert value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::X509Certificates::X509ContentType const Cert;

  /// @brief Field Pfx value: static_cast<int32_t>(0x3)
  static ::System::Security::Cryptography::X509Certificates::X509ContentType const Pfx;

  /// @brief Field Pkcs12 value: static_cast<int32_t>(0x3)
  static ::System::Security::Cryptography::X509Certificates::X509ContentType const Pkcs12;

  /// @brief Field Pkcs7 value: static_cast<int32_t>(0x5)
  static ::System::Security::Cryptography::X509Certificates::X509ContentType const Pkcs7;

  /// @brief Field SerializedCert value: static_cast<int32_t>(0x2)
  static ::System::Security::Cryptography::X509Certificates::X509ContentType const SerializedCert;

  /// @brief Field SerializedStore value: static_cast<int32_t>(0x4)
  static ::System::Security::Cryptography::X509Certificates::X509ContentType const SerializedStore;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::System::Security::Cryptography::X509Certificates::X509ContentType const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ContentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ContentType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ContentType, "System.Security.Cryptography.X509Certificates", "X509ContentType");
