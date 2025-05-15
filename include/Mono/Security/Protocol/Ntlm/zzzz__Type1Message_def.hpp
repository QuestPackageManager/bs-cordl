#pragma once
// IWYU pragma private; include "Mono/Security/Protocol/Ntlm/Type1Message.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Type1Message)
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class Type1Message;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Protocol::Ntlm::Type1Message);
// Dependencies Mono.Security.Protocol.Ntlm.MessageBase
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// CS Name: Mono.Security.Protocol.Ntlm.Type1Message
class CORDL_TYPE Type1Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
public:
  // Declarations
  __declspec(property(put = set_Domain)) ::StringW Domain;

  __declspec(property(put = set_Host)) ::StringW Host;

  /// @brief Field _domain, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__domain, put = __cordl_internal_set__domain)) ::StringW _domain;

  /// @brief Field _host, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__host, put = __cordl_internal_set__host)) ::StringW _host;

  /// @brief Method Decode, addr 0x3c44cc4, size 0xf0, virtual true, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method GetBytes, addr 0x3c44db4, size 0x24c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  static inline ::Mono::Security::Protocol::Ntlm::Type1Message* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__domain() const;

  constexpr ::StringW& __cordl_internal_get__domain();

  constexpr ::StringW const& __cordl_internal_get__host() const;

  constexpr ::StringW& __cordl_internal_get__host();

  constexpr void __cordl_internal_set__domain(::StringW value);

  constexpr void __cordl_internal_set__host(::StringW value);

  /// @brief Method .ctor, addr 0x3c44b38, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_Domain, addr 0x3c44bbc, size 0x84, virtual false, abstract: false, final false
  inline void set_Domain(::StringW value);

  /// @brief Method set_Host, addr 0x3c44c40, size 0x84, virtual false, abstract: false, final false
  inline void set_Host(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Type1Message();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Type1Message", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Type1Message(Type1Message&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Type1Message", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Type1Message(Type1Message const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15949 };

  /// @brief Field _host, offset: 0x18, size: 0x8, def value: None
  ::StringW ____host;

  /// @brief Field _domain, offset: 0x20, size: 0x8, def value: None
  ::StringW ____domain;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type1Message, ____host) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type1Message, ____domain) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::Type1Message, 0x28>, "Size mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type1Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type1Message*, "Mono.Security.Protocol.Ntlm", "Type1Message");
