#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Tls::TlsSrpLoginParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1327))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsSrpLoginParameters*
class CORDL_TYPE TlsSrpLoginParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field mGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mGroup, put = __cordl_internal_set_mGroup))::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* mGroup;

  /// @brief Field mVerifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mVerifier, put = __cordl_internal_set_mVerifier))::Org::BouncyCastle::Math::BigInteger* mVerifier;

  /// @brief Field mSalt, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mSalt, put = __cordl_internal_set_mSalt))::ArrayW<uint8_t, ::Array<uint8_t>*> mSalt;

  __declspec(property(get = get_Group))::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* Group;

  __declspec(property(get = get_Salt))::ArrayW<uint8_t, ::Array<uint8_t>*> Salt;

  __declspec(property(get = get_Verifier))::Org::BouncyCastle::Math::BigInteger* Verifier;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*& __cordl_internal_get_mGroup();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*> const& __cordl_internal_get_mGroup() const;

  constexpr void __cordl_internal_set_mGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_mVerifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_mVerifier() const;

  constexpr void __cordl_internal_set_mVerifier(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSalt();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSalt() const;

  constexpr void __cordl_internal_set_mSalt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Math::BigInteger* verifier,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  /// @brief Method .ctor, addr 0xfb8a24, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Math::BigInteger* verifier, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  /// @brief Method get_Group, addr 0xfb8a60, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* get_Group();

  /// @brief Method get_Salt, addr 0xfb8a68, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Salt();

  /// @brief Method get_Verifier, addr 0xfb8a70, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Verifier();

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpLoginParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSrpLoginParameters(TlsSrpLoginParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpLoginParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSrpLoginParameters(TlsSrpLoginParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsSrpLoginParameters();

public:
  /// @brief Field mGroup, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* ___mGroup;

  /// @brief Field mVerifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___mVerifier;

  /// @brief Field mSalt, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSalt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, ___mGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, ___mVerifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters, ___mSalt) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*, "Org.BouncyCastle.Crypto.Tls", "TlsSrpLoginParameters");
