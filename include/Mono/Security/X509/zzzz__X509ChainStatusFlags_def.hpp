#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509ChainStatusFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509ChainStatusFlags)
// Forward declare root types
namespace Mono::Security::X509 {
struct X509ChainStatusFlags;
}
// Write type traits
MARK_VAL_T(::Mono::Security::X509::X509ChainStatusFlags);
// Dependencies
namespace Mono::Security::X509 {
// Is value type: true
// CS Name: Mono.Security.X509.X509ChainStatusFlags
struct CORDL_TYPE X509ChainStatusFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __X509ChainStatusFlags_Unwrapped
  enum struct __X509ChainStatusFlags_Unwrapped : int32_t {
    __E_InvalidBasicConstraints = static_cast<int32_t>(0x400),
    __E_NoError = static_cast<int32_t>(0x0),
    __E_NotSignatureValid = static_cast<int32_t>(0x8),
    __E_NotTimeNested = static_cast<int32_t>(0x2),
    __E_NotTimeValid = static_cast<int32_t>(0x1),
    __E_PartialChain = static_cast<int32_t>(0x10000),
    __E_UntrustedRoot = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __X509ChainStatusFlags_Unwrapped() const noexcept {
    return static_cast<__X509ChainStatusFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainStatusFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X509ChainStatusFlags(int32_t value__) noexcept;

  /// @brief Field InvalidBasicConstraints value: I32(1024)
  static ::Mono::Security::X509::X509ChainStatusFlags const InvalidBasicConstraints;

  /// @brief Field NoError value: I32(0)
  static ::Mono::Security::X509::X509ChainStatusFlags const NoError;

  /// @brief Field NotSignatureValid value: I32(8)
  static ::Mono::Security::X509::X509ChainStatusFlags const NotSignatureValid;

  /// @brief Field NotTimeNested value: I32(2)
  static ::Mono::Security::X509::X509ChainStatusFlags const NotTimeNested;

  /// @brief Field NotTimeValid value: I32(1)
  static ::Mono::Security::X509::X509ChainStatusFlags const NotTimeValid;

  /// @brief Field PartialChain value: I32(65536)
  static ::Mono::Security::X509::X509ChainStatusFlags const PartialChain;

  /// @brief Field UntrustedRoot value: I32(32)
  static ::Mono::Security::X509::X509ChainStatusFlags const UntrustedRoot;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15935 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509ChainStatusFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509ChainStatusFlags, 0x4>, "Size mismatch!");

} // namespace Mono::Security::X509
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509ChainStatusFlags, "Mono.Security.X509", "X509ChainStatusFlags");
