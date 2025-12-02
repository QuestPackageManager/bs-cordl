#pragma once
// IWYU pragma private; include "System/Security/Cryptography/OidGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OidGroup)
// Forward declare root types
namespace System::Security::Cryptography {
struct OidGroup;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::OidGroup);
// Dependencies
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.OidGroup
struct CORDL_TYPE OidGroup {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OidGroup_Unwrapped
  enum struct __OidGroup_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_HashAlgorithm = static_cast<int32_t>(0x1),
    __E_EncryptionAlgorithm = static_cast<int32_t>(0x2),
    __E_PublicKeyAlgorithm = static_cast<int32_t>(0x3),
    __E_SignatureAlgorithm = static_cast<int32_t>(0x4),
    __E_Attribute = static_cast<int32_t>(0x5),
    __E_ExtensionOrAttribute = static_cast<int32_t>(0x6),
    __E_EnhancedKeyUsage = static_cast<int32_t>(0x7),
    __E_Policy = static_cast<int32_t>(0x8),
    __E_Template = static_cast<int32_t>(0x9),
    __E_KeyDerivationFunction = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OidGroup_Unwrapped() const noexcept {
    return static_cast<__OidGroup_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OidGroup();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OidGroup(int32_t value__) noexcept;

  /// @brief Field All value: I32(0)
  static ::System::Security::Cryptography::OidGroup const All;

  /// @brief Field Attribute value: I32(5)
  static ::System::Security::Cryptography::OidGroup const Attribute;

  /// @brief Field EncryptionAlgorithm value: I32(2)
  static ::System::Security::Cryptography::OidGroup const EncryptionAlgorithm;

  /// @brief Field EnhancedKeyUsage value: I32(7)
  static ::System::Security::Cryptography::OidGroup const EnhancedKeyUsage;

  /// @brief Field ExtensionOrAttribute value: I32(6)
  static ::System::Security::Cryptography::OidGroup const ExtensionOrAttribute;

  /// @brief Field HashAlgorithm value: I32(1)
  static ::System::Security::Cryptography::OidGroup const HashAlgorithm;

  /// @brief Field KeyDerivationFunction value: I32(10)
  static ::System::Security::Cryptography::OidGroup const KeyDerivationFunction;

  /// @brief Field Policy value: I32(8)
  static ::System::Security::Cryptography::OidGroup const Policy;

  /// @brief Field PublicKeyAlgorithm value: I32(3)
  static ::System::Security::Cryptography::OidGroup const PublicKeyAlgorithm;

  /// @brief Field SignatureAlgorithm value: I32(4)
  static ::System::Security::Cryptography::OidGroup const SignatureAlgorithm;

  /// @brief Field Template value: I32(9)
  static ::System::Security::Cryptography::OidGroup const Template;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11144 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::OidGroup, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::OidGroup, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::OidGroup, "System.Security.Cryptography", "OidGroup");
