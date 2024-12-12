#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/NtlmSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NtlmSettings)
namespace Mono::Security::Protocol::Ntlm {
struct NtlmAuthLevel;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class NtlmSettings;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Protocol::Ntlm::NtlmSettings);
// Dependencies Mono.Security.Protocol.Ntlm.NtlmAuthLevel, System.Object
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// CS Name: Mono.Security.Protocol.Ntlm.NtlmSettings
class CORDL_TYPE NtlmSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field defaultAuthLevel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_defaultAuthLevel, put = setStaticF_defaultAuthLevel)) ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel defaultAuthLevel;

  static inline ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel getStaticF_defaultAuthLevel();

  /// @brief Method get_DefaultAuthLevel, addr 0x3c43264, size 0x58, virtual false, abstract: false, final false
  static inline ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel get_DefaultAuthLevel();

  static inline void setStaticF_defaultAuthLevel(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NtlmSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NtlmSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NtlmSettings(NtlmSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NtlmSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NtlmSettings(NtlmSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15939 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::NtlmSettings, 0x10>, "Size mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::NtlmSettings);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::NtlmSettings*, "Mono.Security.Protocol.Ntlm", "NtlmSettings");
