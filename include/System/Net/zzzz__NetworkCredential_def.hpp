#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetworkCredential)
namespace System::Security {
class SecureString;
}
namespace System::Net {
class ICredentials;
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
// Type: System.Net::NetworkCredential
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7918))
// CS Name: ::System.Net::NetworkCredential*
class CORDL_TYPE NetworkCredential : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_domain, offset 0x10, size 0x8
  __declspec(property(get = __get_m_domain, put = __set_m_domain))::StringW m_domain;

  /// @brief Field m_userName, offset 0x18, size 0x8
  __declspec(property(get = __get_m_userName, put = __set_m_userName))::StringW m_userName;

  /// @brief Field m_password, offset 0x20, size 0x8
  __declspec(property(get = __get_m_password, put = __set_m_password))::System::Security::SecureString* m_password;

  __declspec(property(get = get_UserName, put = set_UserName))::StringW UserName;

  __declspec(property(get = get_Password, put = set_Password))::StringW Password;

  __declspec(property(get = get_Domain, put = set_Domain))::StringW Domain;

  /// @brief Convert operator to "::System::Net::ICredentials"
  constexpr operator ::System::Net::ICredentials*() noexcept;

  constexpr ::StringW& __get_m_domain();

  constexpr ::StringW const& __get_m_domain() const;

  constexpr void __set_m_domain(::StringW value);

  constexpr ::StringW& __get_m_userName();

  constexpr ::StringW const& __get_m_userName() const;

  constexpr void __set_m_userName(::StringW value);

  constexpr ::System::Security::SecureString*& __get_m_password();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::SecureString*> const& __get_m_password() const;

  constexpr void __set_m_password(::System::Security::SecureString* value);

  static inline ::System::Net::NetworkCredential* New_ctor(::StringW userName, ::StringW password);

  /// @brief Method .ctor addr 0x2821180 size 0x68 virtual false final false
  inline void _ctor(::StringW userName, ::StringW password);

  static inline ::System::Net::NetworkCredential* New_ctor(::StringW userName, ::StringW password, ::StringW domain);

  /// @brief Method .ctor addr 0x28211e8 size 0xc4 virtual false final false
  inline void _ctor(::StringW userName, ::StringW password, ::StringW domain);

  /// @brief Method get_UserName addr 0x282138c size 0x8 virtual false final false
  inline ::StringW get_UserName();

  /// @brief Method set_UserName addr 0x28212ac size 0x60 virtual false final false
  inline void set_UserName(::StringW value);

  /// @brief Method get_Password addr 0x2821394 size 0xc virtual false final false
  inline ::StringW get_Password();

  /// @brief Method set_Password addr 0x282130c size 0x20 virtual false final false
  inline void set_Password(::StringW value);

  /// @brief Method get_Domain addr 0x28213ac size 0x8 virtual false final false
  inline ::StringW get_Domain();

  /// @brief Method set_Domain addr 0x282132c size 0x60 virtual false final false
  inline void set_Domain(::StringW value);

  /// @brief Method InternalGetUserName addr 0x28213b4 size 0x8 virtual false final false
  inline ::StringW InternalGetUserName();

  /// @brief Method InternalGetPassword addr 0x28213a0 size 0xc virtual false final false
  inline ::StringW InternalGetPassword();

  /// @brief Method InternalGetDomain addr 0x28213bc size 0x8 virtual false final false
  inline ::StringW InternalGetDomain();

  /// @brief Method GetCredential addr 0x28213c4 size 0x4 virtual true final true
  inline ::System::Net::NetworkCredential* GetCredential(::System::Uri* uri, ::StringW authType);

  // Ctor Parameters [CppParam { name: "", ty: "NetworkCredential", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkCredential(NetworkCredential&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkCredential", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkCredential(NetworkCredential const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkCredential();

public:
  /// @brief Field m_domain, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_domain;

  /// @brief Field m_userName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_userName;

  /// @brief Field m_password, offset: 0x20, size: 0x8, def value: None
  ::System::Security::SecureString* ___m_password;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkCredential, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkCredential, ___m_domain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkCredential, ___m_userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkCredential, ___m_password) == 0x20, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NetworkCredential);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkCredential*, "System.Net", "NetworkCredential");
