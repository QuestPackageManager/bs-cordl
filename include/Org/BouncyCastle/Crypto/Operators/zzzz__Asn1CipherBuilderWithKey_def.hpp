#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/Asn1CipherBuilderWithKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1CipherBuilderWithKey)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipher;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1CipherBuilderWithKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey);
// Dependencies Org.BouncyCastle.Crypto.ICipherBuilder, Org.BouncyCastle.Crypto.ICipherBuilderWithKey, System.Object
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Operators.Asn1CipherBuilderWithKey
class CORDL_TYPE Asn1CipherBuilderWithKey : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails)) ::System::Object* AlgorithmDetails;

  __declspec(property(get = get_Key)) ::Org::BouncyCastle::Crypto::ICipherParameters* Key;

  /// @brief Field algorithmIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithmIdentifier, put = __cordl_internal_set_algorithmIdentifier)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier;

  /// @brief Field encKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_encKey, put = __cordl_internal_set_encKey)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* encKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilder"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherBuilder*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilderWithKey"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*() noexcept;

  /// @brief Method BuildCipher, addr 0x23ad8f4, size 0x188, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::ICipher* BuildCipher(::System::IO::Stream* stream);

  /// @brief Method GetMaxOutputSize, addr 0x23ad8bc, size 0x38, virtual true, abstract: false, final true
  inline int32_t GetMaxOutputSize(int32_t inputLen);

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                                           ::Org::BouncyCastle::Security::SecureRandom* random);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_algorithmIdentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algorithmIdentifier();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& __cordl_internal_get_encKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __cordl_internal_get_encKey();

  constexpr void __cordl_internal_set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_encKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  /// @brief Method .ctor, addr 0x23ad69c, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method get_AlgorithmDetails, addr 0x23ad8b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Method get_Key, addr 0x23adb00, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* get_Key();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherBuilder"
  constexpr ::Org::BouncyCastle::Crypto::ICipherBuilder* i___Org__BouncyCastle__Crypto__ICipherBuilder() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherBuilderWithKey"
  constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* i___Org__BouncyCastle__Crypto__ICipherBuilderWithKey() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1CipherBuilderWithKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1CipherBuilderWithKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1CipherBuilderWithKey(Asn1CipherBuilderWithKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1CipherBuilderWithKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1CipherBuilderWithKey(Asn1CipherBuilderWithKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 980 };

  /// @brief Field encKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___encKey;

  /// @brief Field algorithmIdentifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algorithmIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey, ___encKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey, ___algorithmIdentifier) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*, "Org.BouncyCastle.Crypto.Operators", "Asn1CipherBuilderWithKey");
