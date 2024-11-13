#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/NewSessionTicket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NewSessionTicket)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket);
// Type: Org.BouncyCastle.Crypto.Tls::NewSessionTicket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::NewSessionTicket*
class CORDL_TYPE NewSessionTicket : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Ticket)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Ticket;

  __declspec(property(get = get_TicketLifetimeHint)) int64_t TicketLifetimeHint;

  /// @brief Field mTicket, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mTicket, put = __cordl_internal_set_mTicket)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mTicket;

  /// @brief Field mTicketLifetimeHint, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mTicketLifetimeHint, put = __cordl_internal_set_mTicketLifetimeHint)) int64_t mTicketLifetimeHint;

  /// @brief Method Encode, addr 0x23e206c, size 0x7c, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* New_ctor(int64_t ticketLifetimeHint, ::ArrayW<uint8_t, ::Array<uint8_t>*> ticket);

  /// @brief Method Parse, addr 0x23e20e8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* Parse(::System::IO::Stream* input);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mTicket() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mTicket();

  constexpr int64_t const& __cordl_internal_get_mTicketLifetimeHint() const;

  constexpr int64_t& __cordl_internal_get_mTicketLifetimeHint();

  constexpr void __cordl_internal_set_mTicket(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mTicketLifetimeHint(int64_t value);

  /// @brief Method .ctor, addr 0x23e2030, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticketLifetimeHint, ::ArrayW<uint8_t, ::Array<uint8_t>*> ticket);

  /// @brief Method get_Ticket, addr 0x23e2064, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Ticket();

  /// @brief Method get_TicketLifetimeHint, addr 0x23e205c, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_TicketLifetimeHint();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewSessionTicket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NewSessionTicket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NewSessionTicket(NewSessionTicket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NewSessionTicket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NewSessionTicket(NewSessionTicket const&) = delete;

  /// @brief Field mTicketLifetimeHint, offset: 0x10, size: 0x8, def value: None
  int64_t ___mTicketLifetimeHint;

  /// @brief Field mTicket, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mTicket;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1257 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket, ___mTicketLifetimeHint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket, ___mTicket) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*, "Org.BouncyCastle.Crypto.Tls", "NewSessionTicket");
