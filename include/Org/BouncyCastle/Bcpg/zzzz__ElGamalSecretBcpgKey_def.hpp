#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ElGamalSecretBcpgKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalSecretBcpgKey)
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
class ElGamalSecretBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey);
// Type: Org.BouncyCastle.Bcpg::ElGamalSecretBcpgKey
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::ElGamalSecretBcpgKey*
class CORDL_TYPE ElGamalSecretBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
  // Declarations
  __declspec(property(get = get_Format)) ::StringW Format;

  __declspec(property(get = get_X)) ::Org::BouncyCastle::Math::BigInteger* X;

  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::Org::BouncyCastle::Bcpg::MPInteger* x;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept;

  /// @brief Method Encode, addr 0x2613350, size 0x24, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetEncoded, addr 0x26132cc, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey* New_ctor(::Org::BouncyCastle::Math::BigInteger* x);

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __cordl_internal_get_x();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> const& __cordl_internal_get_x() const;

  constexpr void __cordl_internal_set_x(::Org::BouncyCastle::Bcpg::MPInteger* value);

  /// @brief Method .ctor, addr 0x2613190, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x2613200, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method get_Format, addr 0x2613270, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_Format();

  /// @brief Method get_X, addr 0x26132b0, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_X();

  /// @brief Convert to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* i___Org__BouncyCastle__Bcpg__IBcpgKey() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElGamalSecretBcpgKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElGamalSecretBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElGamalSecretBcpgKey(ElGamalSecretBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalSecretBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElGamalSecretBcpgKey(ElGamalSecretBcpgKey const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___x;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 570 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey, ___x) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*, "Org.BouncyCastle.Bcpg", "ElGamalSecretBcpgKey");
