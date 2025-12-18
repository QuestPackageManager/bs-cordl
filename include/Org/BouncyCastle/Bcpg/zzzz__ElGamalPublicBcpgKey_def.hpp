#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ElGamalPublicBcpgKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalPublicBcpgKey)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ElGamalPublicBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey);
// Dependencies Org.BouncyCastle.Bcpg.BcpgObject
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.ElGamalPublicBcpgKey
class CORDL_TYPE ElGamalPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
  // Declarations
  __declspec(property(get = get_Format)) ::StringW Format;

  __declspec(property(get = get_G)) ::Org::BouncyCastle::Math::BigInteger* G;

  __declspec(property(get = get_P)) ::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Y)) ::Org::BouncyCastle::Math::BigInteger* Y;

  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) ::Org::BouncyCastle::Bcpg::MPInteger* g;

  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) ::Org::BouncyCastle::Bcpg::MPInteger* p;

  /// @brief Field y, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) ::Org::BouncyCastle::Bcpg::MPInteger* y;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept;

  /// @brief Method Encode, addr 0x35a2878, size 0x104, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetEncoded, addr 0x35a27a8, size 0x88, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* y);

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& __cordl_internal_get_g() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_g();

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& __cordl_internal_get_p() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_p();

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& __cordl_internal_get_y() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Bcpg::MPInteger* value);

  constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Bcpg::MPInteger* value);

  constexpr void __cordl_internal_set_y(::Org::BouncyCastle::Bcpg::MPInteger* value);

  /// @brief Method .ctor, addr 0x35a2624, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x35a26bc, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method get_Format, addr 0x35a2764, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_Format();

  /// @brief Method get_G, addr 0x35a2848, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G();

  /// @brief Method get_P, addr 0x35a2830, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Y, addr 0x35a2860, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Y();

  /// @brief Convert to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* i___Org__BouncyCastle__Bcpg__IBcpgKey() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElGamalPublicBcpgKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElGamalPublicBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElGamalPublicBcpgKey(ElGamalPublicBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalPublicBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElGamalPublicBcpgKey(ElGamalPublicBcpgKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 569 };

  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___p;

  /// @brief Field g, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___g;

  /// @brief Field y, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey, ___g) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey, ___y) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*, "Org.BouncyCastle.Bcpg", "ElGamalPublicBcpgKey");
