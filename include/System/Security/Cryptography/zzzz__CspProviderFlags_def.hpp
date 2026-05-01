#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CspProviderFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CspProviderFlags)
// Forward declare root types
namespace System::Security::Cryptography {
struct CspProviderFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::CspProviderFlags);
// Dependencies
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.CspProviderFlags
struct CORDL_TYPE CspProviderFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CspProviderFlags_Unwrapped
  enum struct __CspProviderFlags_Unwrapped : int32_t {
    __E_NoFlags = static_cast<int32_t>(0x0),
    __E_UseMachineKeyStore = static_cast<int32_t>(0x1),
    __E_UseDefaultKeyContainer = static_cast<int32_t>(0x2),
    __E_UseNonExportableKey = static_cast<int32_t>(0x4),
    __E_UseExistingKey = static_cast<int32_t>(0x8),
    __E_UseArchivableKey = static_cast<int32_t>(0x10),
    __E_UseUserProtectedKey = static_cast<int32_t>(0x20),
    __E_NoPrompt = static_cast<int32_t>(0x40),
    __E_CreateEphemeralKey = static_cast<int32_t>(0x80),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CspProviderFlags_Unwrapped() const noexcept {
    return static_cast<__CspProviderFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CspProviderFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CspProviderFlags(int32_t value__) noexcept;

  /// @brief Field CreateEphemeralKey value: I32(128)
  static ::System::Security::Cryptography::CspProviderFlags const CreateEphemeralKey;

  /// @brief Field NoFlags value: I32(0)
  static ::System::Security::Cryptography::CspProviderFlags const NoFlags;

  /// @brief Field NoPrompt value: I32(64)
  static ::System::Security::Cryptography::CspProviderFlags const NoPrompt;

  /// @brief Field UseArchivableKey value: I32(16)
  static ::System::Security::Cryptography::CspProviderFlags const UseArchivableKey;

  /// @brief Field UseDefaultKeyContainer value: I32(2)
  static ::System::Security::Cryptography::CspProviderFlags const UseDefaultKeyContainer;

  /// @brief Field UseExistingKey value: I32(8)
  static ::System::Security::Cryptography::CspProviderFlags const UseExistingKey;

  /// @brief Field UseMachineKeyStore value: I32(1)
  static ::System::Security::Cryptography::CspProviderFlags const UseMachineKeyStore;

  /// @brief Field UseNonExportableKey value: I32(4)
  static ::System::Security::Cryptography::CspProviderFlags const UseNonExportableKey;

  /// @brief Field UseUserProtectedKey value: I32(32)
  static ::System::Security::Cryptography::CspProviderFlags const UseUserProtectedKey;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::CspProviderFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CspProviderFlags, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CspProviderFlags, "System.Security.Cryptography", "CspProviderFlags");
