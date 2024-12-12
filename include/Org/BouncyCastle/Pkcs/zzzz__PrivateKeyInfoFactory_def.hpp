#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/PrivateKeyInfoFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateKeyInfoFactory)
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class PrivateKeyInfoFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory);
// Dependencies System.Object
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkcs.PrivateKeyInfoFactory
class CORDL_TYPE PrivateKeyInfoFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreatePrivateKeyInfo, addr 0x2564154, size 0xc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                      ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);

  /// @brief Method CreatePrivateKeyInfo, addr 0x2564160, size 0x214, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool wrongPkcs12Zero,
                                                                                      ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);

  /// @brief Method CreatePrivateKeyInfo, addr 0x2563058, size 0x8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method CreatePrivateKeyInfo, addr 0x2563060, size 0xfec, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  /// @brief Method ExtractBytes, addr 0x256404c, size 0x108, virtual false, abstract: false, final false
  static inline void ExtractBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> encKey, int32_t size, int32_t offSet, ::Org::BouncyCastle::Math::BigInteger* bI);

  static inline ::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2563050, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateKeyInfoFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfoFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateKeyInfoFactory(PrivateKeyInfoFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfoFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateKeyInfoFactory(PrivateKeyInfoFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1707 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*, "Org.BouncyCastle.Pkcs", "PrivateKeyInfoFactory");
