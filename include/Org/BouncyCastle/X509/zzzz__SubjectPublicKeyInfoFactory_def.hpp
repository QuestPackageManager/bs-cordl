#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/SubjectPublicKeyInfoFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubjectPublicKeyInfoFactory)
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class SubjectPublicKeyInfoFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory);
// Dependencies System.Object
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.SubjectPublicKeyInfoFactory
class CORDL_TYPE SubjectPublicKeyInfoFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateSubjectPublicKeyInfo, addr 0x25f370c, size 0xe60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* CreateSubjectPublicKeyInfo(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method ExtractBytes, addr 0x25f4674, size 0xc4, virtual false, abstract: false, final false
  static inline void ExtractBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> encKey, int32_t offset, ::Org::BouncyCastle::Math::BigInteger* bI);

  /// @brief Method ExtractBytes, addr 0x25f456c, size 0x108, virtual false, abstract: false, final false
  static inline void ExtractBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> encKey, int32_t size, int32_t offSet, ::Org::BouncyCastle::Math::BigInteger* bI);

  static inline ::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory* New_ctor();

  /// @brief Method .ctor, addr 0x25f3704, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubjectPublicKeyInfoFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfoFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubjectPublicKeyInfoFactory(SubjectPublicKeyInfoFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfoFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubjectPublicKeyInfoFactory(SubjectPublicKeyInfoFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1857 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*, "Org.BouncyCastle.X509", "SubjectPublicKeyInfoFactory");
