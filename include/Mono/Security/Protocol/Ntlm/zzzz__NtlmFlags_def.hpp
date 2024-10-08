#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/NtlmFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NtlmFlags)
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
struct NtlmFlags;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Protocol::Ntlm::NtlmFlags);
// Type: Mono.Security.Protocol.Ntlm::NtlmFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Security::Protocol::Ntlm {
// Is value type: true
// CS Name: ::Mono.Security.Protocol.Ntlm::NtlmFlags
struct CORDL_TYPE NtlmFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NtlmFlags_Unwrapped
  enum struct __NtlmFlags_Unwrapped : int32_t {
    __E_NegotiateUnicode = static_cast<int32_t>(0x1),
    __E_NegotiateOem = static_cast<int32_t>(0x2),
    __E_RequestTarget = static_cast<int32_t>(0x4),
    __E_NegotiateNtlm = static_cast<int32_t>(0x200),
    __E_NegotiateDomainSupplied = static_cast<int32_t>(0x1000),
    __E_NegotiateWorkstationSupplied = static_cast<int32_t>(0x2000),
    __E_NegotiateAlwaysSign = static_cast<int32_t>(0x8000),
    __E_NegotiateNtlm2Key = static_cast<int32_t>(0x80000),
    __E_Negotiate128 = static_cast<int32_t>(0x20000000),
    __E_Negotiate56 = static_cast<int32_t>(0x80000000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NtlmFlags_Unwrapped() const noexcept {
    return static_cast<__NtlmFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NtlmFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NtlmFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Negotiate128 value: static_cast<int32_t>(0x20000000)
  static ::Mono::Security::Protocol::Ntlm::NtlmFlags const Negotiate128;

  /// @brief Field Negotiate56 value: static_cast<int32_t>(0x80000000)
  static ::Mono::Security::Protocol::Ntlm::NtlmFlags const Negotiate56;

  /// @brief Field NegotiateAlwaysSign value: static_cast<int32_t>(0x8000)
  static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateAlwaysSign;

  /// @brief Field NegotiateDomainSupplied value: static_cast<int32_t>(0x1000)
  static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateDomainSupplied;

  /// @brief Field NegotiateNtlm value: static_cast<int32_t>(0x200)
  static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateNtlm;

  /// @brief Field NegotiateNtlm2Key value: static_cast<int32_t>(0x80000)
  static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateNtlm2Key;

  /// @brief Field NegotiateOem value: static_cast<int32_t>(0x2)
  static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateOem;

  /// @brief Field NegotiateUnicode value: static_cast<int32_t>(0x1)
  static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateUnicode;

  /// @brief Field NegotiateWorkstationSupplied value: static_cast<int32_t>(0x2000)
  static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateWorkstationSupplied;

  /// @brief Field RequestTarget value: static_cast<int32_t>(0x4)
  static ::Mono::Security::Protocol::Ntlm::NtlmFlags const RequestTarget;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15895 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::NtlmFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::NtlmFlags, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::NtlmFlags, "Mono.Security.Protocol.Ntlm", "NtlmFlags");
