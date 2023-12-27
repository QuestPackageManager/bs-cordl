#pragma once
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
// Type: Mono.Security.X509::X509ChainStatusFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13755))
// CS Name: ::Mono.Security.X509::X509ChainStatusFlags
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X509ChainStatusFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainStatusFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field InvalidBasicConstraints value: static_cast<int32_t>(0x400)
  static ::Mono::Security::X509::X509ChainStatusFlags const InvalidBasicConstraints;

  /// @brief Field NoError value: static_cast<int32_t>(0x0)
  static ::Mono::Security::X509::X509ChainStatusFlags const NoError;

  /// @brief Field NotSignatureValid value: static_cast<int32_t>(0x8)
  static ::Mono::Security::X509::X509ChainStatusFlags const NotSignatureValid;

  /// @brief Field NotTimeNested value: static_cast<int32_t>(0x2)
  static ::Mono::Security::X509::X509ChainStatusFlags const NotTimeNested;

  /// @brief Field NotTimeValid value: static_cast<int32_t>(0x1)
  static ::Mono::Security::X509::X509ChainStatusFlags const NotTimeValid;

  /// @brief Field PartialChain value: static_cast<int32_t>(0x10000)
  static ::Mono::Security::X509::X509ChainStatusFlags const PartialChain;

  /// @brief Field UntrustedRoot value: static_cast<int32_t>(0x20)
  static ::Mono::Security::X509::X509ChainStatusFlags const UntrustedRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509ChainStatusFlags, 0x4>, "Size mismatch!");

} // namespace Mono::Security::X509
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509ChainStatusFlags, "Mono.Security.X509", "X509ChainStatusFlags");
