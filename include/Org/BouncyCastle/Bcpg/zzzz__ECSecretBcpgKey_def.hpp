#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECSecretBcpgKey)
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ECSecretBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ECSecretBcpgKey);
// Type: Org.BouncyCastle.Bcpg::ECSecretBcpgKey
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(568))
// CS Name: ::Org.BouncyCastle.Bcpg::ECSecretBcpgKey*
class CORDL_TYPE ECSecretBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::Org::BouncyCastle::Bcpg::MPInteger* x;

  __declspec(property(get = get_Format))::StringW Format;

  __declspec(property(get = get_X))::Org::BouncyCastle::Math::BigInteger* X;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
  constexpr operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept;

  constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& __get_x();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> const& __get_x() const;

  constexpr void __set_x(::Org::BouncyCastle::Bcpg::MPInteger* value);

  static inline ::Org::BouncyCastle::Bcpg::ECSecretBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x11d1474, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::ECSecretBcpgKey* New_ctor(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method .ctor, addr 0x11d14ec, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method get_Format, addr 0x11d1564, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_Format();

  /// @brief Method GetEncoded, addr 0x11d15a4, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Encode, addr 0x11d1628, size 0x24, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method get_X, addr 0x11d164c, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_X();

  // Ctor Parameters [CppParam { name: "", ty: "ECSecretBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECSecretBcpgKey(ECSecretBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECSecretBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECSecretBcpgKey(ECSecretBcpgKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECSecretBcpgKey();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::MPInteger* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ECSecretBcpgKey, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ECSecretBcpgKey, ___x) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ECSecretBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ECSecretBcpgKey*, "Org.BouncyCastle.Bcpg", "ECSecretBcpgKey");
