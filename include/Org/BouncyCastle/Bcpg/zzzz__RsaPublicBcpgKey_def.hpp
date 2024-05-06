#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaPublicBcpgKey)
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
class RsaPublicBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::RsaPublicBcpgKey);
// Type: Org.BouncyCastle.Bcpg::RsaPublicBcpgKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::RsaPublicBcpgKey*
class CORDL_TYPE RsaPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
  // Declarations
  __declspec(property(get = get_Format))::StringW Format;

  __declspec(property(get = get_Modulus))::Org::BouncyCastle::Math::BigInteger* Modulus;

  __declspec(property(get = get_PublicExponent))::Org::BouncyCastle::Math::BigInteger* PublicExponent;

  /// @brief Field e, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e))::Org::BouncyCastle::Bcpg::MPInteger* e;

  /// @brief Field n, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n))::Org::BouncyCastle::Bcpg::MPInteger* n;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept;

  /// @brief Method Encode, addr 0x1436240, size 0xd4, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetEncoded, addr 0x14361bc, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Bcpg::RsaPublicBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::RsaPublicBcpgKey* New_ctor(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* e);

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_e();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> const& __cordl_internal_get_e() const;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_n();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> const& __cordl_internal_get_n() const;

  constexpr void __cordl_internal_set_e(::Org::BouncyCastle::Bcpg::MPInteger* value);

  constexpr void __cordl_internal_set_n(::Org::BouncyCastle::Bcpg::MPInteger* value);

  /// @brief Method .ctor, addr 0x1435d14, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x14360ac, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* e);

  /// @brief Method get_Format, addr 0x143617c, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_Format();

  /// @brief Method get_Modulus, addr 0x1436160, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Modulus();

  /// @brief Method get_PublicExponent, addr 0x1436144, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PublicExponent();

  /// @brief Convert to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* i___Org__BouncyCastle__Bcpg__IBcpgKey() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaPublicBcpgKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaPublicBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaPublicBcpgKey(RsaPublicBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaPublicBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaPublicBcpgKey(RsaPublicBcpgKey const&) = delete;

  /// @brief Field n, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___n;

  /// @brief Field e, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___e;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::RsaPublicBcpgKey, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::RsaPublicBcpgKey, ___n) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::RsaPublicBcpgKey, ___e) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::RsaPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RsaPublicBcpgKey*, "Org.BouncyCastle.Bcpg", "RsaPublicBcpgKey");
