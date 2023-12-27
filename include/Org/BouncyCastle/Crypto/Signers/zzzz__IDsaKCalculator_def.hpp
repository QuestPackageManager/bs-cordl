#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDsaKCalculator)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator);
// Type: Org.BouncyCastle.Crypto.Signers::IDsaKCalculator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1142))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::IDsaKCalculator*
class CORDL_TYPE IDsaKCalculator {
public:
  // Declarations
  __declspec(property(get = get_IsDeterministic)) bool IsDeterministic;

  /// @brief Method get_IsDeterministic addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsDeterministic();

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method NextK addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* NextK();

  // Ctor Parameters [CppParam { name: "", ty: "IDsaKCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDsaKCalculator(IDsaKCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDsaKCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDsaKCalculator(IDsaKCalculator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*, "Org.BouncyCastle.Crypto.Signers", "IDsaKCalculator");
