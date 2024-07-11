#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/RsaSecretBcpgKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaSecretBcpgKey)
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
class RsaSecretBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey);
// Type: Org.BouncyCastle.Bcpg::RsaSecretBcpgKey
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::RsaSecretBcpgKey*
class CORDL_TYPE RsaSecretBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
  // Declarations
  __declspec(property(get = get_CrtCoefficient))::Org::BouncyCastle::Math::BigInteger* CrtCoefficient;

  __declspec(property(get = get_Format))::StringW Format;

  __declspec(property(get = get_Modulus))::Org::BouncyCastle::Math::BigInteger* Modulus;

  __declspec(property(get = get_PrimeExponentP))::Org::BouncyCastle::Math::BigInteger* PrimeExponentP;

  __declspec(property(get = get_PrimeExponentQ))::Org::BouncyCastle::Math::BigInteger* PrimeExponentQ;

  __declspec(property(get = get_PrimeP))::Org::BouncyCastle::Math::BigInteger* PrimeP;

  __declspec(property(get = get_PrimeQ))::Org::BouncyCastle::Math::BigInteger* PrimeQ;

  __declspec(property(get = get_PrivateExponent))::Org::BouncyCastle::Math::BigInteger* PrivateExponent;

  /// @brief Field crt, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_crt, put = __cordl_internal_set_crt))::Org::BouncyCastle::Math::BigInteger* crt;

  /// @brief Field d, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d))::Org::BouncyCastle::Bcpg::MPInteger* d;

  /// @brief Field expP, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_expP, put = __cordl_internal_set_expP))::Org::BouncyCastle::Math::BigInteger* expP;

  /// @brief Field expQ, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_expQ, put = __cordl_internal_set_expQ))::Org::BouncyCastle::Math::BigInteger* expQ;

  /// @brief Field p, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p))::Org::BouncyCastle::Bcpg::MPInteger* p;

  /// @brief Field q, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q))::Org::BouncyCastle::Bcpg::MPInteger* q;

  /// @brief Field u, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_u, put = __cordl_internal_set_u))::Org::BouncyCastle::Bcpg::MPInteger* u;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept;

  /// @brief Method Encode, addr 0x144638c, size 0x12c, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetEncoded, addr 0x1446308, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey* New_ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_crt();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_crt() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_d();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> const& __cordl_internal_get_d() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_expP();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_expP() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_expQ();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_expQ() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> const& __cordl_internal_get_p() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> const& __cordl_internal_get_q() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_u();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> const& __cordl_internal_get_u() const;

  constexpr void __cordl_internal_set_crt(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_d(::Org::BouncyCastle::Bcpg::MPInteger* value);

  constexpr void __cordl_internal_set_expP(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_expQ(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Bcpg::MPInteger* value);

  constexpr void __cordl_internal_set_q(::Org::BouncyCastle::Bcpg::MPInteger* value);

  constexpr void __cordl_internal_set_u(::Org::BouncyCastle::Bcpg::MPInteger* value);

  /// @brief Method .ctor, addr 0x1445e7c, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x1446028, size 0x204, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q);

  /// @brief Method get_CrtCoefficient, addr 0x14462c0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_CrtCoefficient();

  /// @brief Method get_Format, addr 0x14462c8, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_Format();

  /// @brief Method get_Modulus, addr 0x144622c, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Modulus();

  /// @brief Method get_PrimeExponentP, addr 0x14462b0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PrimeExponentP();

  /// @brief Method get_PrimeExponentQ, addr 0x14462b8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PrimeExponentQ();

  /// @brief Method get_PrimeP, addr 0x1446278, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PrimeP();

  /// @brief Method get_PrimeQ, addr 0x1446294, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PrimeQ();

  /// @brief Method get_PrivateExponent, addr 0x144625c, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PrivateExponent();

  /// @brief Convert to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* i___Org__BouncyCastle__Bcpg__IBcpgKey() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaSecretBcpgKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaSecretBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaSecretBcpgKey(RsaSecretBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaSecretBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaSecretBcpgKey(RsaSecretBcpgKey const&) = delete;

  /// @brief Field d, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___d;

  /// @brief Field p, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___p;

  /// @brief Field q, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___q;

  /// @brief Field u, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___u;

  /// @brief Field expP, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___expP;

  /// @brief Field expQ, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___expQ;

  /// @brief Field crt, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___crt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey, ___d) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey, ___p) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey, ___q) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey, ___u) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey, ___expP) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey, ___expQ) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey, ___crt) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*, "Org.BouncyCastle.Bcpg", "RsaSecretBcpgKey");
