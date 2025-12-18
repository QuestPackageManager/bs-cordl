#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/Type3Message.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Type3Message)
namespace Mono::Security::Protocol::Ntlm {
class Type2Message;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class Type3Message;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Protocol::Ntlm::Type3Message);
// Dependencies Mono.Security.Protocol.Ntlm.MessageBase, Mono.Security.Protocol.Ntlm.NtlmAuthLevel
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// CS Name: Mono.Security.Protocol.Ntlm.Type3Message
class CORDL_TYPE Type3Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
public:
  // Declarations
  __declspec(property(put = set_Domain)) ::StringW Domain;

  __declspec(property(put = set_Password)) ::StringW Password;

  __declspec(property(put = set_Username)) ::StringW Username;

  /// @brief Field _challenge, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__challenge, put = __cordl_internal_set__challenge)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _challenge;

  /// @brief Field _domain, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__domain, put = __cordl_internal_set__domain)) ::StringW _domain;

  /// @brief Field _host, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__host, put = __cordl_internal_set__host)) ::StringW _host;

  /// @brief Field _level, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__level, put = __cordl_internal_set__level)) ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel _level;

  /// @brief Field _lm, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lm, put = __cordl_internal_set__lm)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _lm;

  /// @brief Field _nt, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__nt, put = __cordl_internal_set__nt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _nt;

  /// @brief Field _password, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password)) ::StringW _password;

  /// @brief Field _type2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__type2, put = __cordl_internal_set__type2)) ::Mono::Security::Protocol::Ntlm::Type2Message* _type2;

  /// @brief Field _username, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__username, put = __cordl_internal_set__username)) ::StringW _username;

  /// @brief Method Decode, addr 0x58ee808, size 0x224, virtual true, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method DecodeString, addr 0x58eea2c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW DecodeString(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t len);

  /// @brief Method EncodeString, addr 0x58eea84, size 0xa0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeString(::StringW text);

  /// @brief Method Finalize, addr 0x58ee6e0, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetBytes, addr 0x58eeb24, size 0x610, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  static inline ::Mono::Security::Protocol::Ntlm::Type3Message* New_ctor(::Mono::Security::Protocol::Ntlm::Type2Message* type2);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__challenge() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__challenge();

  constexpr ::StringW const& __cordl_internal_get__domain() const;

  constexpr ::StringW& __cordl_internal_get__domain();

  constexpr ::StringW const& __cordl_internal_get__host() const;

  constexpr ::StringW& __cordl_internal_get__host();

  constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const& __cordl_internal_get__level() const;

  constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel& __cordl_internal_get__level();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__lm() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__lm();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__nt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__nt();

  constexpr ::StringW const& __cordl_internal_get__password() const;

  constexpr ::StringW& __cordl_internal_get__password();

  constexpr ::Mono::Security::Protocol::Ntlm::Type2Message* const& __cordl_internal_get__type2() const;

  constexpr ::Mono::Security::Protocol::Ntlm::Type2Message*& __cordl_internal_get__type2();

  constexpr ::StringW const& __cordl_internal_get__username() const;

  constexpr ::StringW& __cordl_internal_get__username();

  constexpr void __cordl_internal_set__challenge(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__domain(::StringW value);

  constexpr void __cordl_internal_set__host(::StringW value);

  constexpr void __cordl_internal_set__level(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel value);

  constexpr void __cordl_internal_set__lm(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__nt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__password(::StringW value);

  constexpr void __cordl_internal_set__type2(::Mono::Security::Protocol::Ntlm::Type2Message* value);

  constexpr void __cordl_internal_set__username(::StringW value);

  /// @brief Method .ctor, addr 0x58ee4f8, size 0x1e8, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::Protocol::Ntlm::Type2Message* type2);

  /// @brief Method set_Domain, addr 0x58ee774, size 0x84, virtual false, abstract: false, final false
  inline void set_Domain(::StringW value);

  /// @brief Method set_Password, addr 0x58ee7f8, size 0x8, virtual false, abstract: false, final false
  inline void set_Password(::StringW value);

  /// @brief Method set_Username, addr 0x58ee800, size 0x8, virtual false, abstract: false, final false
  inline void set_Username(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Type3Message();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Type3Message", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Type3Message(Type3Message&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Type3Message", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Type3Message(Type3Message const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19267 };

  /// @brief Field _level, offset: 0x18, size: 0x4, def value: None
  ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel ____level;

  /// @brief Field _challenge, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____challenge;

  /// @brief Field _host, offset: 0x28, size: 0x8, def value: None
  ::StringW ____host;

  /// @brief Field _domain, offset: 0x30, size: 0x8, def value: None
  ::StringW ____domain;

  /// @brief Field _username, offset: 0x38, size: 0x8, def value: None
  ::StringW ____username;

  /// @brief Field _password, offset: 0x40, size: 0x8, def value: None
  ::StringW ____password;

  /// @brief Field _type2, offset: 0x48, size: 0x8, def value: None
  ::Mono::Security::Protocol::Ntlm::Type2Message* ____type2;

  /// @brief Field _lm, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____lm;

  /// @brief Field _nt, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____nt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____level) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____challenge) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____host) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____domain) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____username) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____password) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____type2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____lm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____nt) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::Type3Message, 0x60>, "Size mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type3Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type3Message*, "Mono.Security.Protocol.Ntlm", "Type3Message");
