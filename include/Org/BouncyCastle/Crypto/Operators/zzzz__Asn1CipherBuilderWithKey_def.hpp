#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
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
// Type: Org.BouncyCastle.Crypto.Operators::Asn1CipherBuilderWithKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(980))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::Asn1CipherBuilderWithKey*
class CORDL_TYPE Asn1CipherBuilderWithKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field encKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_encKey, put = __cordl_internal_set_encKey))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* encKey;

  /// @brief Field algorithmIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithmIdentifier, put = __cordl_internal_set_algorithmIdentifier))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier;

  __declspec(property(get = get_AlgorithmDetails))::System::Object* AlgorithmDetails;

  __declspec(property(get = get_Key))::Org::BouncyCastle::Crypto::ICipherParameters* Key;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilderWithKey"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherBuilderWithKey"
  constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* i___Org__BouncyCastle__Crypto__ICipherBuilderWithKey() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilder"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherBuilder*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherBuilder"
  constexpr ::Org::BouncyCastle::Crypto::ICipherBuilder* i___Org__BouncyCastle__Crypto__ICipherBuilder() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __cordl_internal_get_encKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& __cordl_internal_get_encKey() const;

  constexpr void __cordl_internal_set_encKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algorithmIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_algorithmIdentifier() const;

  constexpr void __cordl_internal_set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize,
                                                                                           ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor, addr 0xf53070, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method get_AlgorithmDetails, addr 0xf53290, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Method GetMaxOutputSize, addr 0xf53298, size 0x40, virtual true, abstract: false, final true
  inline int32_t GetMaxOutputSize(int32_t inputLen);

  /// @brief Method BuildCipher, addr 0xf532d8, size 0x198, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::ICipher* BuildCipher(::System::IO::Stream* stream);

  /// @brief Method get_Key, addr 0xf534fc, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* get_Key();

  // Ctor Parameters [CppParam { name: "", ty: "Asn1CipherBuilderWithKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1CipherBuilderWithKey(Asn1CipherBuilderWithKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1CipherBuilderWithKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1CipherBuilderWithKey(Asn1CipherBuilderWithKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1CipherBuilderWithKey();

public:
  /// @brief Field encKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___encKey;

  /// @brief Field algorithmIdentifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algorithmIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey, ___encKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey, ___algorithmIdentifier) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey*, "Org.BouncyCastle.Crypto.Operators", "Asn1CipherBuilderWithKey");
