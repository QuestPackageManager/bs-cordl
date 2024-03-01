#pragma once
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
// Type: System.Security.Cryptography::CspProviderFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: ::System.Security.Cryptography::CspProviderFlags
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
  constexpr operator int32_t() const noexcept {
    return static_cast<__CspProviderFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CspProviderFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CspProviderFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CreateEphemeralKey value: static_cast<int32_t>(0x80)
  static ::System::Security::Cryptography::CspProviderFlags const CreateEphemeralKey;

  /// @brief Field NoFlags value: static_cast<int32_t>(0x0)
  static ::System::Security::Cryptography::CspProviderFlags const NoFlags;

  /// @brief Field NoPrompt value: static_cast<int32_t>(0x40)
  static ::System::Security::Cryptography::CspProviderFlags const NoPrompt;

  /// @brief Field UseArchivableKey value: static_cast<int32_t>(0x10)
  static ::System::Security::Cryptography::CspProviderFlags const UseArchivableKey;

  /// @brief Field UseDefaultKeyContainer value: static_cast<int32_t>(0x2)
  static ::System::Security::Cryptography::CspProviderFlags const UseDefaultKeyContainer;

  /// @brief Field UseExistingKey value: static_cast<int32_t>(0x8)
  static ::System::Security::Cryptography::CspProviderFlags const UseExistingKey;

  /// @brief Field UseMachineKeyStore value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::CspProviderFlags const UseMachineKeyStore;

  /// @brief Field UseNonExportableKey value: static_cast<int32_t>(0x4)
  static ::System::Security::Cryptography::CspProviderFlags const UseNonExportableKey;

  /// @brief Field UseUserProtectedKey value: static_cast<int32_t>(0x20)
  static ::System::Security::Cryptography::CspProviderFlags const UseUserProtectedKey;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CspProviderFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspProviderFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CspProviderFlags, "System.Security.Cryptography", "CspProviderFlags");
