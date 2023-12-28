#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateKeyInfoFactory)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class PrivateKeyInfoFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory);
// Type: Org.BouncyCastle.Pkcs::PrivateKeyInfoFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1707))
// CS Name: ::Org.BouncyCastle.Pkcs::PrivateKeyInfoFactory*
class CORDL_TYPE PrivateKeyInfoFactory : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory* New_ctor();

  /// @brief Method .ctor addr 0x10e72a0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method CreatePrivateKeyInfo addr 0x10e72a8 size 0x8 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method CreatePrivateKeyInfo addr 0x10e72b0 size 0xfa8 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  /// @brief Method CreatePrivateKeyInfo addr 0x10e8364 size 0xc virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                      ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);

  /// @brief Method CreatePrivateKeyInfo addr 0x10e8370 size 0x21c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool wrongPkcs12Zero,
                                                                                      ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);

  /// @brief Method ExtractBytes addr 0x10e8258 size 0x10c virtual false final false
  static inline void ExtractBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> encKey, int32_t size, int32_t offSet, ::Org::BouncyCastle::Math::BigInteger* bI);

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfoFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateKeyInfoFactory(PrivateKeyInfoFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfoFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateKeyInfoFactory(PrivateKeyInfoFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateKeyInfoFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*, "Org.BouncyCastle.Pkcs", "PrivateKeyInfoFactory");
