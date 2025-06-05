#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/DsaPublicBcpgKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__IBcpgKey_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaPublicBcpgKey)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class DsaPublicBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey);
// Dependencies Org.BouncyCastle.Bcpg.BcpgObject, Org.BouncyCastle.Bcpg.IBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.DsaPublicBcpgKey
class CORDL_TYPE DsaPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
  // Declarations
  __declspec(property(get = get_Format)) ::StringW Format;

  __declspec(property(get = get_G)) ::Org::BouncyCastle::Math::BigInteger* G;

  __declspec(property(get = get_P)) ::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Q)) ::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_Y)) ::Org::BouncyCastle::Math::BigInteger* Y;

  /// @brief Field g, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) ::Org::BouncyCastle::Bcpg::MPInteger* g;

  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) ::Org::BouncyCastle::Bcpg::MPInteger* p;

  /// @brief Field q, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q)) ::Org::BouncyCastle::Bcpg::MPInteger* q;

  /// @brief Field y, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) ::Org::BouncyCastle::Bcpg::MPInteger* y;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept;

  /// @brief Method Encode, addr 0x2647794, size 0x12c, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetEncoded, addr 0x2647710, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                      ::Org::BouncyCastle::Math::BigInteger* y);

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& __cordl_internal_get_g() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_g();

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& __cordl_internal_get_p() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_p();

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& __cordl_internal_get_q() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_q();

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& __cordl_internal_get_y() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Bcpg::MPInteger* value);

  constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Bcpg::MPInteger* value);

  constexpr void __cordl_internal_set_q(::Org::BouncyCastle::Bcpg::MPInteger* value);

  constexpr void __cordl_internal_set_y(::Org::BouncyCastle::Bcpg::MPInteger* value);

  /// @brief Method .ctor, addr 0x2647354, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x2647540, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method get_Format, addr 0x26476d0, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_Format();

  /// @brief Method get_G, addr 0x26478c0, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G();

  /// @brief Method get_P, addr 0x26478dc, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Q, addr 0x26478f8, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_Y, addr 0x2647914, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Y();

  /// @brief Convert to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* i___Org__BouncyCastle__Bcpg__IBcpgKey() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaPublicBcpgKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DsaPublicBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaPublicBcpgKey(DsaPublicBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaPublicBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaPublicBcpgKey(DsaPublicBcpgKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 563 };

  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___p;

  /// @brief Field q, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___q;

  /// @brief Field g, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___g;

  /// @brief Field y, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey, ___q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey, ___g) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey, ___y) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*, "Org.BouncyCastle.Bcpg", "DsaPublicBcpgKey");
