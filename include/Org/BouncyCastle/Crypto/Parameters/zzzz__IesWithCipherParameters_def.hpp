#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/IesWithCipherParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IesWithCipherParameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class IesWithCipherParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters);
// Dependencies Org.BouncyCastle.Crypto.Parameters.IesParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters
class CORDL_TYPE IesWithCipherParameters : public ::Org::BouncyCastle::Crypto::Parameters::IesParameters {
public:
  // Declarations
  __declspec(property(get = get_CipherKeySize)) int32_t CipherKeySize;

  /// @brief Field cipherKeySize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_cipherKeySize, put = __cordl_internal_set_cipherKeySize)) int32_t cipherKeySize;

  static inline ::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> derivation, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding,
                                                                                           int32_t macKeySize, int32_t cipherKeySize);

  constexpr int32_t const& __cordl_internal_get_cipherKeySize() const;

  constexpr int32_t& __cordl_internal_get_cipherKeySize();

  constexpr void __cordl_internal_set_cipherKeySize(int32_t value);

  /// @brief Method .ctor, addr 0x23be5d0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> derivation, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding, int32_t macKeySize, int32_t cipherKeySize);

  /// @brief Method get_CipherKeySize, addr 0x23be610, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CipherKeySize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IesWithCipherParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IesWithCipherParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IesWithCipherParameters(IesWithCipherParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IesWithCipherParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IesWithCipherParameters(IesWithCipherParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1059 };

  /// @brief Field cipherKeySize, offset: 0x24, size: 0x4, def value: None
  int32_t ___cipherKeySize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters, ___cipherKeySize) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*, "Org.BouncyCastle.Crypto.Parameters", "IesWithCipherParameters");
