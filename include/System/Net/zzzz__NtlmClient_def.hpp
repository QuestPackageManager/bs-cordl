#pragma once
// IWYU pragma private; include "System/Net/NtlmClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NtlmClient)
namespace System::Net {
class Authorization;
}
namespace System::Net {
class IAuthenticationModule;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebRequest;
}
// Forward declare root types
namespace System::Net {
class NtlmClient;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NtlmClient);
// Dependencies System.Net.IAuthenticationModule, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NtlmClient
class CORDL_TYPE NtlmClient : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AuthenticationType)) ::StringW AuthenticationType;

  /// @brief Field authObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_authObject, put = __cordl_internal_set_authObject)) ::System::Net::IAuthenticationModule* authObject;

  /// @brief Convert operator to "::System::Net::IAuthenticationModule"
  constexpr operator ::System::Net::IAuthenticationModule*() noexcept;

  /// @brief Method Authenticate, addr 0x43d7cc8, size 0xd0, virtual true, abstract: false, final true
  inline ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);

  static inline ::System::Net::NtlmClient* New_ctor();

  /// @brief Method PreAuthenticate, addr 0x43d7d98, size 0x8, virtual true, abstract: false, final true
  inline ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);

  constexpr ::System::Net::IAuthenticationModule* const& __cordl_internal_get_authObject() const;

  constexpr ::System::Net::IAuthenticationModule*& __cordl_internal_get_authObject();

  constexpr void __cordl_internal_set_authObject(::System::Net::IAuthenticationModule* value);

  /// @brief Method .ctor, addr 0x43d7c64, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AuthenticationType, addr 0x43d7da0, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AuthenticationType();

  /// @brief Convert to "::System::Net::IAuthenticationModule"
  constexpr ::System::Net::IAuthenticationModule* i___System__Net__IAuthenticationModule() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NtlmClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NtlmClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NtlmClient(NtlmClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NtlmClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NtlmClient(NtlmClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9717 };

  /// @brief Field authObject, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IAuthenticationModule* ___authObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NtlmClient, ___authObject) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NtlmClient, 0x18>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NtlmClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NtlmClient*, "System.Net", "NtlmClient");
