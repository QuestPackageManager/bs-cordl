#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X500DistinguishedNameFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X500DistinguishedNameFlags)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X500DistinguishedNameFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags);
// Dependencies
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
struct CORDL_TYPE X500DistinguishedNameFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __X500DistinguishedNameFlags_Unwrapped
  enum struct __X500DistinguishedNameFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Reversed = static_cast<int32_t>(0x1),
    __E_UseSemicolons = static_cast<int32_t>(0x10),
    __E_DoNotUsePlusSign = static_cast<int32_t>(0x20),
    __E_DoNotUseQuotes = static_cast<int32_t>(0x40),
    __E_UseCommas = static_cast<int32_t>(0x80),
    __E_UseNewLines = static_cast<int32_t>(0x100),
    __E_UseUTF8Encoding = static_cast<int32_t>(0x1000),
    __E_UseT61Encoding = static_cast<int32_t>(0x2000),
    __E_ForceUTF8Encoding = static_cast<int32_t>(0x4000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __X500DistinguishedNameFlags_Unwrapped() const noexcept {
    return static_cast<__X500DistinguishedNameFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr X500DistinguishedNameFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X500DistinguishedNameFlags(int32_t value__) noexcept;

  /// @brief Field DoNotUsePlusSign value: I32(32)
  static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const DoNotUsePlusSign;

  /// @brief Field DoNotUseQuotes value: I32(64)
  static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const DoNotUseQuotes;

  /// @brief Field ForceUTF8Encoding value: I32(16384)
  static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const ForceUTF8Encoding;

  /// @brief Field None value: I32(0)
  static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const None;

  /// @brief Field Reversed value: I32(1)
  static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const Reversed;

  /// @brief Field UseCommas value: I32(128)
  static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const UseCommas;

  /// @brief Field UseNewLines value: I32(256)
  static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const UseNewLines;

  /// @brief Field UseSemicolons value: I32(16)
  static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const UseSemicolons;

  /// @brief Field UseT61Encoding value: I32(8192)
  static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const UseT61Encoding;

  /// @brief Field UseUTF8Encoding value: I32(4096)
  static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const UseUTF8Encoding;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11154 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags, "System.Security.Cryptography.X509Certificates", "X500DistinguishedNameFlags");
