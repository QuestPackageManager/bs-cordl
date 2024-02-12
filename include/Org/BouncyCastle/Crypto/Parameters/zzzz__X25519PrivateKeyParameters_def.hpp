#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X25519PrivateKeyParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class X25519PublicKeyParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class X25519PrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::X25519PrivateKeyParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1020))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1089))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::X25519PrivateKeyParameters*
class CORDL_TYPE X25519PrivateKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
  // Declarations
  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Field KeySize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_KeySize, put = setStaticF_KeySize)) int32_t KeySize;

  /// @brief Field SecretSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SecretSize, put = setStaticF_SecretSize)) int32_t SecretSize;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_KeySize(int32_t value);

  static inline int32_t getStaticF_KeySize();

  static inline void setStaticF_SecretSize(int32_t value);

  static inline int32_t getStaticF_SecretSize();

  static inline ::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor, addr 0xf667a4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method .ctor, addr 0xf66848, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  static inline ::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters* New_ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0xf66904, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method Encode, addr 0xf66a0c, size 0x84, virtual false, abstract: false, final false
  inline void Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method GetEncoded, addr 0xf66a90, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GeneratePublicKey, addr 0xf66aec, size 0xac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters* GeneratePublicKey();

  /// @brief Method GenerateSecret, addr 0xf66c54, size 0xf4, virtual false, abstract: false, final false
  inline void GenerateSecret(::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  // Ctor Parameters [CppParam { name: "", ty: "X25519PrivateKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X25519PrivateKeyParameters(X25519PrivateKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X25519PrivateKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X25519PrivateKeyParameters(X25519PrivateKeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X25519PrivateKeyParameters();

public:
  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters, ___data) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "X25519PrivateKeyParameters");
