#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDsa)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IDsa);
// Type: Org.BouncyCastle.Crypto::IDsa
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1125))
// CS Name: ::Org.BouncyCastle.Crypto::IDsa*
class CORDL_TYPE IDsa {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GenerateSignature addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> GenerateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method VerifySignature addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> message, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s);

  // Ctor Parameters [CppParam { name: "", ty: "IDsa", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDsa(IDsa&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDsa", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDsa(IDsa const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IDsa);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IDsa*, "Org.BouncyCastle.Crypto", "IDsa");
