#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NtlmSession)
namespace Mono::Security::Protocol::Ntlm {
class MessageBase;
}
namespace System::Net {
class Authorization;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebRequest;
}
// Forward declare root types
namespace Mono::Http {
class NtlmSession;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Http::NtlmSession);
// Type: Mono.Http::NtlmSession
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8850))
// CS Name: ::Mono.Http::NtlmSession*
class CORDL_TYPE NtlmSession : public ::System::Object {
public:
  // Declarations
  /// @brief Field message, offset 0x10, size 0x8
  __declspec(property(get = __get_message, put = __set_message))::Mono::Security::Protocol::Ntlm::MessageBase* message;

  constexpr ::Mono::Security::Protocol::Ntlm::MessageBase*& __get_message();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Protocol::Ntlm::MessageBase*> const& __get_message() const;

  constexpr void __set_message(::Mono::Security::Protocol::Ntlm::MessageBase* value);

  static inline ::Mono::Http::NtlmSession* New_ctor();

  /// @brief Method .ctor, addr 0x2825ed4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Authenticate, addr 0x2825edc, size 0x48c, virtual false, abstract: false, final false
  inline ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);

  // Ctor Parameters [CppParam { name: "", ty: "NtlmSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NtlmSession(NtlmSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NtlmSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NtlmSession(NtlmSession const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NtlmSession();

public:
  /// @brief Field message, offset: 0x10, size: 0x8, def value: None
  ::Mono::Security::Protocol::Ntlm::MessageBase* ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Http::NtlmSession, 0x18>, "Size mismatch!");

static_assert(offsetof(::Mono::Http::NtlmSession, ___message) == 0x10, "Offset mismatch!");

} // namespace Mono::Http
NEED_NO_BOX(::Mono::Http::NtlmSession);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Http::NtlmSession*, "Mono.Http", "NtlmSession");
