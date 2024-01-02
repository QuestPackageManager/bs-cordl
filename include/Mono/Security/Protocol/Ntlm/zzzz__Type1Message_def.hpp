#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Type1Message)
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class Type1Message;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Protocol::Ntlm::Type1Message);
// Type: Mono.Security.Protocol.Ntlm::Type1Message
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13765))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13769))
// CS Name: ::Mono.Security.Protocol.Ntlm::Type1Message*
class CORDL_TYPE Type1Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
public:
  // Declarations
  /// @brief Field _host, offset 0x18, size 0x8
  __declspec(property(get = __get__host, put = __set__host))::StringW _host;

  /// @brief Field _domain, offset 0x20, size 0x8
  __declspec(property(get = __get__domain, put = __set__domain))::StringW _domain;

  __declspec(property(put = set_Domain))::StringW Domain;

  __declspec(property(put = set_Host))::StringW Host;

  constexpr ::StringW& __get__host();

  constexpr ::StringW const& __get__host() const;

  constexpr void __set__host(::StringW value);

  constexpr ::StringW& __get__domain();

  constexpr ::StringW const& __get__domain() const;

  constexpr void __set__domain(::StringW value);

  static inline ::Mono::Security::Protocol::Ntlm::Type1Message* New_ctor();

  /// @brief Method .ctor, addr 0x2401418, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_Domain, addr 0x240149c, size 0x80, virtual false, abstract: false, final false
  inline void set_Domain(::StringW value);

  /// @brief Method set_Host, addr 0x240151c, size 0x80, virtual false, abstract: false, final false
  inline void set_Host(::StringW value);

  /// @brief Method Decode, addr 0x240159c, size 0xf0, virtual true, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method GetBytes, addr 0x240168c, size 0x24c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  // Ctor Parameters [CppParam { name: "", ty: "Type1Message", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Type1Message(Type1Message&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Type1Message", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Type1Message(Type1Message const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Type1Message();

public:
  /// @brief Field _host, offset: 0x18, size: 0x8, def value: None
  ::StringW ____host;

  /// @brief Field _domain, offset: 0x20, size: 0x8, def value: None
  ::StringW ____domain;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::Type1Message, 0x28>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type1Message, ____host) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Protocol::Ntlm::Type1Message, ____domain) == 0x20, "Offset mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type1Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type1Message*, "Mono.Security.Protocol.Ntlm", "Type1Message");
