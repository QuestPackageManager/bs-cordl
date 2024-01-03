#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RsaBlindingParameters)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaBlindingParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::RsaBlindingParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1078))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::RsaBlindingParameters*
class CORDL_TYPE RsaBlindingParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field publicKey, offset 0x10, size 0x8
  __declspec(property(get = __get_publicKey, put = __set_publicKey))::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey;

  /// @brief Field blindingFactor, offset 0x18, size 0x8
  __declspec(property(get = __get_blindingFactor, put = __set_blindingFactor))::Org::BouncyCastle::Math::BigInteger* blindingFactor;

  __declspec(property(get = get_PublicKey))::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* PublicKey;

  __declspec(property(get = get_BlindingFactor))::Org::BouncyCastle::Math::BigInteger* BlindingFactor;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __get_publicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> const& __get_publicKey() const;

  constexpr void __set_publicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_blindingFactor();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_blindingFactor() const;

  constexpr void __set_blindingFactor(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey,
                                                                                         ::Org::BouncyCastle::Math::BigInteger* blindingFactor);

  /// @brief Method .ctor, addr 0xf3950c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey, ::Org::BouncyCastle::Math::BigInteger* blindingFactor);

  /// @brief Method get_PublicKey, addr 0xf39594, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* get_PublicKey();

  /// @brief Method get_BlindingFactor, addr 0xf3959c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_BlindingFactor();

  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindingParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaBlindingParameters(RsaBlindingParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaBlindingParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaBlindingParameters(RsaBlindingParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaBlindingParameters();

public:
  /// @brief Field publicKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ___publicKey;

  /// @brief Field blindingFactor, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___blindingFactor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters, ___publicKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters, ___blindingFactor) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaBlindingParameters");
