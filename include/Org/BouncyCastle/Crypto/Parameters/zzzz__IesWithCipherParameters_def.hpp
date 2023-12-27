#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IesWithCipherParameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class IesWithCipherParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::IesWithCipherParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1059))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::IesWithCipherParameters*
class CORDL_TYPE IesWithCipherParameters : public ::Org::BouncyCastle::Crypto::Parameters::IesParameters {
public:
  // Declarations
  /// @brief Field cipherKeySize, offset 0x24, size 0x4
  __declspec(property(get = __get_cipherKeySize, put = __set_cipherKeySize)) int32_t cipherKeySize;

  __declspec(property(get = get_CipherKeySize)) int32_t CipherKeySize;

  constexpr int32_t& __get_cipherKeySize();

  constexpr int32_t const& __get_cipherKeySize() const;

  constexpr void __set_cipherKeySize(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> derivation, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding,
                                                                                           int32_t macKeySize, int32_t cipherKeySize);

  /// @brief Method .ctor addr 0xf36ce0 size 0x40 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> derivation, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding, int32_t macKeySize, int32_t cipherKeySize);

  /// @brief Method get_CipherKeySize addr 0xf36d20 size 0x8 virtual false final false
  inline int32_t get_CipherKeySize();

  // Ctor Parameters [CppParam { name: "", ty: "IesWithCipherParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IesWithCipherParameters(IesWithCipherParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IesWithCipherParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IesWithCipherParameters(IesWithCipherParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IesWithCipherParameters();

public:
  /// @brief Field cipherKeySize, offset: 0x24, size: 0x4, def value: None
  int32_t ___cipherKeySize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*, "Org.BouncyCastle.Crypto.Parameters", "IesWithCipherParameters");
