#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NtlmClient)
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class IAuthenticationModule;
}
namespace System::Net {
class Authorization;
}
// Forward declare root types
namespace System::Net {
class NtlmClient;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NtlmClient);
// Type: System.Net::NtlmClient
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9197))
// CS Name: ::System.Net::NtlmClient*
class CORDL_TYPE NtlmClient : public ::System::Object {
public:
  // Declarations
  /// @brief Field authObject, offset 0x10, size 0x8
  __declspec(property(get = __get_authObject, put = __set_authObject))::System::Net::IAuthenticationModule* authObject;

  __declspec(property(get = get_AuthenticationType))::StringW AuthenticationType;

  /// @brief Convert operator to "::System::Net::IAuthenticationModule"
  constexpr operator ::System::Net::IAuthenticationModule*() noexcept;

  constexpr ::System::Net::IAuthenticationModule*& __get_authObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IAuthenticationModule*> const& __get_authObject() const;

  constexpr void __set_authObject(::System::Net::IAuthenticationModule* value);

  static inline ::System::Net::NtlmClient* New_ctor();

  /// @brief Method .ctor addr 0x29d5594 size 0x6c virtual false final false
  inline void _ctor();

  /// @brief Method Authenticate addr 0x29d5600 size 0xd0 virtual true final true
  inline ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);

  /// @brief Method PreAuthenticate addr 0x29d56d0 size 0x8 virtual true final true
  inline ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);

  /// @brief Method get_AuthenticationType addr 0x29d56d8 size 0x40 virtual true final true
  inline ::StringW get_AuthenticationType();

  // Ctor Parameters [CppParam { name: "", ty: "NtlmClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NtlmClient(NtlmClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NtlmClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NtlmClient(NtlmClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NtlmClient();

public:
  /// @brief Field authObject, offset: 0x10, size: 0x8, def value: None
  ::System::Net::IAuthenticationModule* ___authObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NtlmClient, 0x18>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NtlmClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NtlmClient*, "System.Net", "NtlmClient");
