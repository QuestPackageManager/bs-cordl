#pragma once
// IWYU pragma private; include "System/Net/IAuthenticationModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAuthenticationModule)
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
namespace System::Net {
class IAuthenticationModule;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::IAuthenticationModule);
// Dependencies
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IAuthenticationModule
class CORDL_TYPE IAuthenticationModule {
public:
  // Declarations
  __declspec(property(get = get_AuthenticationType)) ::StringW AuthenticationType;

  /// @brief Method Authenticate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials);

  /// @brief Method PreAuthenticate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials);

  /// @brief Method get_AuthenticationType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_AuthenticationType();

  // Ctor Parameters [CppParam { name: "", ty: "IAuthenticationModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAuthenticationModule(IAuthenticationModule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
NEED_NO_BOX(::System::Net::IAuthenticationModule);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IAuthenticationModule*, "System.Net", "IAuthenticationModule");
