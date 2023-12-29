#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDerivationFunction)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IDerivationFunction);
// Type: Org.BouncyCastle.Crypto::IDerivationFunction
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(721))
// CS Name: ::Org.BouncyCastle.Crypto::IDerivationFunction*
class CORDL_TYPE IDerivationFunction {
public:
  // Declarations
  __declspec(property(get = get_Digest))::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters);

  /// @brief Method get_Digest addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

  /// @brief Method GenerateBytes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "IDerivationFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDerivationFunction(IDerivationFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDerivationFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDerivationFunction(IDerivationFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IDerivationFunction);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IDerivationFunction*, "Org.BouncyCastle.Crypto", "IDerivationFunction");
