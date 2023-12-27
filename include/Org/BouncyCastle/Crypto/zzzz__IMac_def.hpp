#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IMac)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IMac);
// Type: Org.BouncyCastle.Crypto::IMac
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(934))
// CS Name: ::Org.BouncyCastle.Crypto::IMac*
class CORDL_TYPE IMac {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetMacSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetMacSize();

  /// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "IMac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMac(IMac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMac(IMac const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IMac*, "Org.BouncyCastle.Crypto", "IMac");
