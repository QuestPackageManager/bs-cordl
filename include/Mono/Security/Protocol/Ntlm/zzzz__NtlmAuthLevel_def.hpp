#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NtlmAuthLevel)
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
struct NtlmAuthLevel;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel);
// Type: Mono.Security.Protocol.Ntlm::NtlmAuthLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Security::Protocol::Ntlm {
// Is value type: true
// CS Name: ::Mono.Security.Protocol.Ntlm::NtlmAuthLevel
struct CORDL_TYPE NtlmAuthLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NtlmAuthLevel_Unwrapped
  enum struct __NtlmAuthLevel_Unwrapped : int32_t {
    __E_LM_and_NTLM = static_cast<int32_t>(0x0),
    __E_LM_and_NTLM_and_try_NTLMv2_Session = static_cast<int32_t>(0x1),
    __E_NTLM_only = static_cast<int32_t>(0x2),
    __E_NTLMv2_only = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NtlmAuthLevel_Unwrapped() const noexcept {
    return static_cast<__NtlmAuthLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NtlmAuthLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NtlmAuthLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LM_and_NTLM value: static_cast<int32_t>(0x0)
  static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const LM_and_NTLM;

  /// @brief Field LM_and_NTLM_and_try_NTLMv2_Session value: static_cast<int32_t>(0x1)
  static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const LM_and_NTLM_and_try_NTLMv2_Session;

  /// @brief Field NTLM_only value: static_cast<int32_t>(0x2)
  static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const NTLM_only;

  /// @brief Field NTLMv2_only value: static_cast<int32_t>(0x3)
  static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const NTLMv2_only;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, "Mono.Security.Protocol.Ntlm", "NtlmAuthLevel");
