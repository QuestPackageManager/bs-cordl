#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/RsaKeyGenerationParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaKeyGenerationParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::RsaKeyGenerationParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::RsaKeyGenerationParameters*
class CORDL_TYPE RsaKeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
  // Declarations
  __declspec(property(get = get_Certainty)) int32_t Certainty;

  __declspec(property(get = get_PublicExponent))::Org::BouncyCastle::Math::BigInteger* PublicExponent;

  /// @brief Field certainty, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_certainty, put = __cordl_internal_set_certainty)) int32_t certainty;

  /// @brief Field publicExponent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_publicExponent, put = __cordl_internal_set_publicExponent))::Org::BouncyCastle::Math::BigInteger* publicExponent;

  /// @brief Method Equals, addr 0x11aa960, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x11aaa14, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* publicExponent,
                                                                                              ::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength, int32_t certainty);

  constexpr int32_t const& __cordl_internal_get_certainty() const;

  constexpr int32_t& __cordl_internal_get_certainty();

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_publicExponent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_publicExponent() const;

  constexpr void __cordl_internal_set_certainty(int32_t value);

  constexpr void __cordl_internal_set_publicExponent(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x11aa918, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* publicExponent, ::Org::BouncyCastle::Security::SecureRandom* random, int32_t strength, int32_t certainty);

  /// @brief Method get_Certainty, addr 0x11aa958, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Certainty();

  /// @brief Method get_PublicExponent, addr 0x11aa950, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PublicExponent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaKeyGenerationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaKeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaKeyGenerationParameters(RsaKeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaKeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaKeyGenerationParameters(RsaKeyGenerationParameters const&) = delete;

  /// @brief Field publicExponent, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___publicExponent;

  /// @brief Field certainty, offset: 0x28, size: 0x4, def value: None
  int32_t ___certainty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters, ___publicExponent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters, ___certainty) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaKeyGenerationParameters");
