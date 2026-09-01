#pragma once
// IWYU pragma private; include "System\Net\IWebProxy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWebProxy)
namespace System::Net {
class ICredentials;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class IWebProxy;
}
// Write type traits
MARK_REF_T(::System::Net::IWebProxy*);
DEFINE_IL2CPP_CLASS(::System::Net::IWebProxy*, "System.Net", "IWebProxy");
// Dependencies
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IWebProxy
class CORDL_TYPE IWebProxy {
public:
  // Declarations
  __declspec(property(get = get_Credentials)) ::System::Net::ICredentials* Credentials;

  /// @brief Method GetProxy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Uri* GetProxy(::System::Uri* destination);

  /// @brief Method IsBypassed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsBypassed(::System::Uri* host);

  /// @brief Method get_Credentials, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Net::ICredentials* get_Credentials();

  // Ctor Parameters [CppParam { name: "", ty: "IWebProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IWebProxy(IWebProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
