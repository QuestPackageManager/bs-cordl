#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthenticationManager)
namespace System::Collections {
class ArrayList;
}
namespace System::Net {
class Authorization;
}
namespace System::Net {
class ICredentialPolicy;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebRequest;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class AuthenticationManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::AuthenticationManager);
// Type: System.Net::AuthenticationManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::AuthenticationManager*
class CORDL_TYPE AuthenticationManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field credential_policy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_credential_policy, put = setStaticF_credential_policy))::System::Net::ICredentialPolicy* credential_policy;

  /// @brief Field locker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_locker, put = setStaticF_locker))::System::Object* locker;

  /// @brief Field modules, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_modules, put = setStaticF_modules))::System::Collections::ArrayList* modules;

  /// @brief Method Authenticate, addr 0x2eeb628, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials);

  /// @brief Method DoAuthenticate, addr 0x2eeb734, size 0x4e8, virtual false, abstract: false, final false
  static inline ::System::Net::Authorization* DoAuthenticate(::StringW challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials);

  /// @brief Method EnsureModules, addr 0x2eeb378, size 0x2a0, virtual false, abstract: false, final false
  static inline void EnsureModules();

  /// @brief Method PreAuthenticate, addr 0x2eebc1c, size 0x538, virtual false, abstract: false, final false
  static inline ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials);

  static inline ::System::Net::ICredentialPolicy* getStaticF_credential_policy();

  static inline ::System::Object* getStaticF_locker();

  static inline ::System::Collections::ArrayList* getStaticF_modules();

  static inline void setStaticF_credential_policy(::System::Net::ICredentialPolicy* value);

  static inline void setStaticF_locker(::System::Object* value);

  static inline void setStaticF_modules(::System::Collections::ArrayList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticationManager(AuthenticationManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticationManager(AuthenticationManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::AuthenticationManager, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::AuthenticationManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AuthenticationManager*, "System.Net", "AuthenticationManager");
