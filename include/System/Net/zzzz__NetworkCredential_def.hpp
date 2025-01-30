#pragma once
// IWYU pragma private; include "System/Net/NetworkCredential.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetworkCredential)
namespace System::Security {
class SecureString;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class NetworkCredential;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkCredential);
// Dependencies System.Net.ICredentials, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NetworkCredential
class CORDL_TYPE NetworkCredential : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Domain, put = set_Domain)) ::StringW Domain;

  __declspec(property(get = get_Password, put = set_Password)) ::StringW Password;

  __declspec(property(get = get_UserName, put = set_UserName)) ::StringW UserName;

  /// @brief Field m_domain, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_domain, put = __cordl_internal_set_m_domain)) ::StringW m_domain;

  /// @brief Field m_password, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_password, put = __cordl_internal_set_m_password)) ::System::Security::SecureString* m_password;

  /// @brief Field m_userName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_userName, put = __cordl_internal_set_m_userName)) ::StringW m_userName;

  /// @brief Convert operator to "::System::Net::ICredentials"
  constexpr operator ::System::Net::ICredentials*() noexcept;

  /// @brief Method GetCredential, addr 0x44a37d0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Net::NetworkCredential* GetCredential(::System::Uri* uri, ::StringW authType);

  /// @brief Method InternalGetDomain, addr 0x44a37c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW InternalGetDomain();

  /// @brief Method InternalGetPassword, addr 0x44a37ac, size 0xc, virtual false, abstract: false, final false
  inline ::StringW InternalGetPassword();

  /// @brief Method InternalGetUserName, addr 0x44a37c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW InternalGetUserName();

  static inline ::System::Net::NetworkCredential* New_ctor(::StringW userName, ::StringW password);

  static inline ::System::Net::NetworkCredential* New_ctor(::StringW userName, ::StringW password, ::StringW domain);

  constexpr ::StringW const& __cordl_internal_get_m_domain() const;

  constexpr ::StringW& __cordl_internal_get_m_domain();

  constexpr ::System::Security::SecureString* const& __cordl_internal_get_m_password() const;

  constexpr ::System::Security::SecureString*& __cordl_internal_get_m_password();

  constexpr ::StringW const& __cordl_internal_get_m_userName() const;

  constexpr ::StringW& __cordl_internal_get_m_userName();

  constexpr void __cordl_internal_set_m_domain(::StringW value);

  constexpr void __cordl_internal_set_m_password(::System::Security::SecureString* value);

  constexpr void __cordl_internal_set_m_userName(::StringW value);

  /// @brief Method .ctor, addr 0x44996e8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW userName, ::StringW password);

  /// @brief Method .ctor, addr 0x449f5d8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW userName, ::StringW password, ::StringW domain);

  /// @brief Method get_Domain, addr 0x44a37b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Domain();

  /// @brief Method get_Password, addr 0x44a37a0, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_Password();

  /// @brief Method get_UserName, addr 0x44a3798, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UserName();

  /// @brief Convert to "::System::Net::ICredentials"
  constexpr ::System::Net::ICredentials* i___System__Net__ICredentials() noexcept;

  /// @brief Method set_Domain, addr 0x44a3740, size 0x58, virtual false, abstract: false, final false
  inline void set_Domain(::StringW value);

  /// @brief Method set_Password, addr 0x44a3720, size 0x20, virtual false, abstract: false, final false
  inline void set_Password(::StringW value);

  /// @brief Method set_UserName, addr 0x44a36c8, size 0x58, virtual false, abstract: false, final false
  inline void set_UserName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkCredential();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkCredential", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkCredential(NetworkCredential&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkCredential", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkCredential(NetworkCredential const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9600 };

  /// @brief Field m_domain, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_domain;

  /// @brief Field m_userName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_userName;

  /// @brief Field m_password, offset: 0x20, size: 0x8, def value: None
  ::System::Security::SecureString* ___m_password;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkCredential, ___m_domain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkCredential, ___m_userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkCredential, ___m_password) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkCredential, 0x28>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NetworkCredential);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkCredential*, "System.Net", "NetworkCredential");
