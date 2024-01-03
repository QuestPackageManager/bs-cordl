#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDsaExt)
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IDsaExt);
// Type: Org.BouncyCastle.Crypto::IDsaExt
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1126))
// CS Name: ::Org.BouncyCastle.Crypto::IDsaExt*
class CORDL_TYPE IDsaExt {
public:
  // Declarations
  __declspec(property(get = get_Order))::Org::BouncyCastle::Math::BigInteger* Order;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsa"
  constexpr operator ::Org::BouncyCastle::Crypto::IDsa*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDsa"
  constexpr ::Org::BouncyCastle::Crypto::IDsa* i___Org__BouncyCastle__Crypto__IDsa() noexcept;

  /// @brief Method get_Order, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Order();

  // Ctor Parameters [CppParam { name: "", ty: "IDsaExt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDsaExt(IDsaExt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDsaExt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDsaExt(IDsaExt const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IDsaExt);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IDsaExt*, "Org.BouncyCastle.Crypto", "IDsaExt");
