#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsSrpLoginParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSrpLoginParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSrpLoginParameters
class CORDL_TYPE TlsSrpLoginParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Group)) ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* Group;

  __declspec(property(get = get_Salt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Salt;

  __declspec(property(get = get_Verifier)) ::Org::BouncyCastle::Math::BigInteger* Verifier;

  /// @brief Field mGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mGroup, put = __cordl_internal_set_mGroup)) ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* mGroup;

  /// @brief Field mSalt, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mSalt, put = __cordl_internal_set_mSalt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mSalt;

  /// @brief Field mVerifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mVerifier, put = __cordl_internal_set_mVerifier)) ::Org::BouncyCastle::Math::BigInteger* mVerifier;

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Math::BigInteger* verifier,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* const& __cordl_internal_get_mGroup() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*& __cordl_internal_get_mGroup();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSalt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSalt();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_mVerifier() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_mVerifier();

  constexpr void __cordl_internal_set_mGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* value);

  constexpr void __cordl_internal_set_mSalt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mVerifier(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x243d638, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Math::BigInteger* verifier, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  /// @brief Method get_Group, addr 0x243d674, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* get_Group();

  /// @brief Method get_Salt, addr 0x243d67c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Salt();

  /// @brief Method get_Verifier, addr 0x243d684, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Verifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsSrpLoginParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpLoginParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSrpLoginParameters(TlsSrpLoginParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpLoginParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSrpLoginParameters(TlsSrpLoginParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1327 };

  /// @brief Field mGroup, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* ___mGroup;

  /// @brief Field mVerifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___mVerifier;

  /// @brief Field mSalt, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSalt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, ___mGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, ___mVerifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, ___mSalt) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*, "Org.BouncyCastle.Crypto.Tls", "TlsSrpLoginParameters");
