#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ed25519PrivateKeyParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PublicKeyParameters;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
struct __Ed25519__Algorithm;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Ed25519PrivateKeyParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Ed25519PrivateKeyParameters*
class CORDL_TYPE Ed25519PrivateKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
  // Declarations
  /// @brief Field KeySize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_KeySize, put = setStaticF_KeySize)) int32_t KeySize;

  /// @brief Field SignatureSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SignatureSize, put = setStaticF_SignatureSize)) int32_t SignatureSize;

  /// @brief Field cachedPublicKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedPublicKey, put = __cordl_internal_set_cachedPublicKey))::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* cachedPublicKey;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Method Encode, addr 0x1192a88, size 0x84, virtual false, abstract: false, final false
  inline void Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method GeneratePublicKey, addr 0x1192b68, size 0x174, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* GeneratePublicKey();

  /// @brief Method GetEncoded, addr 0x1192b0c, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* New_ctor(::System::IO::Stream* input);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Sign, addr 0x1192db8, size 0x280, virtual false, abstract: false, final false
  inline void Sign(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> msg, int32_t msgOff,
                   int32_t msgLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method Sign, addr 0x1192d98, size 0x20, virtual false, abstract: false, final false
  inline void Sign(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm algorithm, ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey,
                   ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> msg, int32_t msgOff, int32_t msgLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*& __cordl_internal_get_cachedPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*> const& __cordl_internal_get_cachedPublicKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_cachedPublicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* value);

  constexpr void __cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x11928bc, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method .ctor, addr 0x119297c, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x11927ec, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random);

  static inline int32_t getStaticF_KeySize();

  static inline int32_t getStaticF_SignatureSize();

  static inline void setStaticF_KeySize(int32_t value);

  static inline void setStaticF_SignatureSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ed25519PrivateKeyParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ed25519PrivateKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ed25519PrivateKeyParameters(Ed25519PrivateKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ed25519PrivateKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ed25519PrivateKeyParameters(Ed25519PrivateKeyParameters const&) = delete;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___data;

  /// @brief Field cachedPublicKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* ___cachedPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters, ___cachedPublicKey) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Ed25519PrivateKeyParameters");
