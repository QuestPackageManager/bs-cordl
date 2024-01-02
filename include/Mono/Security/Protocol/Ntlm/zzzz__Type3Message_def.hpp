#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Mono.Security.Protocol.Ntlm::Type3Message
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13765)), TypeDefinitionIndex(TypeDefinitionIndex(13766))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13771))
// CS Name: ::Mono.Security.Protocol.Ntlm::Type3Message*
class CORDL_TYPE Type3Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
public:
  // Declarations
  /// @brief Field _level, offset 0x18, size 0x4
  __declspec(property(get = __get__level, put = __set__level))::Mono::Security::Protocol::Ntlm::NtlmAuthLevel _level;

  /// @brief Field _challenge, offset 0x20, size 0x8
  __declspec(property(get = __get__challenge, put = __set__challenge))::ArrayW<uint8_t, ::Array<uint8_t>*> _challenge;

  /// @brief Field _host, offset 0x28, size 0x8
  __declspec(property(get = __get__host, put = __set__host))::StringW _host;

  /// @brief Field _domain, offset 0x30, size 0x8
  __declspec(property(get = __get__domain, put = __set__domain))::StringW _domain;

  /// @brief Field _username, offset 0x38, size 0x8
  __declspec(property(get = __get__username, put = __set__username))::StringW _username;

  /// @brief Field _password, offset 0x40, size 0x8
  __declspec(property(get = __get__password, put = __set__password))::StringW _password;

  /// @brief Field _type2, offset 0x48, size 0x8
  __declspec(property(get = __get__type2, put = __set__type2))::Mono::Security::Protocol::Ntlm::Type2Message* _type2;

  /// @brief Field _lm, offset 0x50, size 0x8
  __declspec(property(get = __get__lm, put = __set__lm))::ArrayW<uint8_t, ::Array<uint8_t>*> _lm;

  /// @brief Field _nt, offset 0x58, size 0x8
  __declspec(property(get = __get__nt, put = __set__nt))::ArrayW<uint8_t, ::Array<uint8_t>*> _nt;

  __declspec(property(put = set_Domain))::StringW Domain;

  __declspec(property(put = set_Password))::StringW Password;

  __declspec(property(put = set_Username))::StringW Username;

  constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel& __get__level();

  constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const& __get__level() const;

  constexpr void __set__level(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__challenge();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__challenge() const;

  constexpr void __set__challenge(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get__host();

  constexpr ::StringW const& __get__host() const;

  constexpr void __set__host(::StringW value);

  constexpr ::StringW& __get__domain();

  constexpr ::StringW const& __get__domain() const;

  constexpr void __set__domain(::StringW value);

  constexpr ::StringW& __get__username();

  constexpr ::StringW const& __get__username() const;

  constexpr void __set__username(::StringW value);

  constexpr ::StringW& __get__password();

  constexpr ::StringW const& __get__password() const;

  constexpr void __set__password(::StringW value);

  constexpr ::Mono::Security::Protocol::Ntlm::Type2Message*& __get__type2();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Protocol::Ntlm::Type2Message*> const& __get__type2() const;

  constexpr void __set__type2(::Mono::Security::Protocol::Ntlm::Type2Message* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__lm();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__lm() const;

  constexpr void __set__lm(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__nt();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__nt() const;

  constexpr void __set__nt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Mono::Security::Protocol::Ntlm::Type3Message* New_ctor(::Mono::Security::Protocol::Ntlm::Type2Message* type2);

  /// @brief Method .ctor, addr 0x2401c64, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::Protocol::Ntlm::Type2Message* type2);

  /// @brief Method Finalize, addr 0x2401e50, size 0xe0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method set_Domain, addr 0x2401f30, size 0x80, virtual false, abstract: false, final false
  inline void set_Domain(::StringW value);

  /// @brief Method set_Password, addr 0x2401fb0, size 0x8, virtual false, abstract: false, final false
  inline void set_Password(::StringW value);

  /// @brief Method set_Username, addr 0x2401fb8, size 0x8, virtual false, abstract: false, final false
  inline void set_Username(::StringW value);

  /// @brief Method Decode, addr 0x2401fc0, size 0x220, virtual true, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method DecodeString, addr 0x24021e0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW DecodeString(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t len);

  /// @brief Method EncodeString, addr 0x2402238, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeString(::StringW text);

  /// @brief Method GetBytes, addr 0x24022c8, size 0x628, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  // Ctor Parameters [CppParam { name: "", ty: "Type3Message", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Type3Message(Type3Message&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Type3Message", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Type3Message(Type3Message const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Type3Message();

public:
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
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::Type3Message, 0x60>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____level) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____challenge) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____host) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____domain) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____username) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____password) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____type2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____lm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type3Message, ____nt) == 0x58, "Offset mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type3Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type3Message*, "Mono.Security.Protocol.Ntlm", "Type3Message");
