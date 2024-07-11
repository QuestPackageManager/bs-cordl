#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/MPInteger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
CORDL_MODULE_EXPORT(MPInteger)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::MPInteger);
// Type: Org.BouncyCastle.Bcpg::MPInteger
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::MPInteger*
class CORDL_TYPE MPInteger : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
  // Declarations
  __declspec(property(get = get_Value))::Org::BouncyCastle::Math::BigInteger* Value;

  /// @brief Field val, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_val, put = __cordl_internal_set_val))::Org::BouncyCastle::Math::BigInteger* val;

  /// @brief Method Encode, addr 0x1445248, size 0x70, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method Encode, addr 0x14452b8, size 0x6c, virtual false, abstract: false, final false
  static inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut, ::Org::BouncyCastle::Math::BigInteger* val);

  static inline ::Org::BouncyCastle::Bcpg::MPInteger* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::MPInteger* New_ctor(::Org::BouncyCastle::Math::BigInteger* val);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_val();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_val() const;

  constexpr void __cordl_internal_set_val(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x1443924, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x1443b44, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method get_Value, addr 0x1445240, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MPInteger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MPInteger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MPInteger(MPInteger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MPInteger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MPInteger(MPInteger const&) = delete;

  /// @brief Field val, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::MPInteger, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::MPInteger, ___val) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::MPInteger);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::MPInteger*, "Org.BouncyCastle.Bcpg", "MPInteger");
