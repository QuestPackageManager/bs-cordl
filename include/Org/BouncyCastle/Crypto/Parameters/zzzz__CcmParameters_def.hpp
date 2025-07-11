#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/CcmParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__AeadParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CcmParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class CcmParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::CcmParameters);
// Dependencies Org.BouncyCastle.Crypto.Parameters.AeadParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.CcmParameters
class CORDL_TYPE CcmParameters : public ::Org::BouncyCastle::Crypto::Parameters::AeadParameters {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Parameters::CcmParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize,
                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> associatedText);

  /// @brief Method .ctor, addr 0x23b8528, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> associatedText);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CcmParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CcmParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CcmParameters(CcmParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CcmParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CcmParameters(CcmParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1014 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::CcmParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::CcmParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::CcmParameters*, "Org.BouncyCastle.Crypto.Parameters", "CcmParameters");
