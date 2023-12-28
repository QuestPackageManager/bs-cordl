#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubjectPublicKeyInfoFactory)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class SubjectPublicKeyInfoFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory);
// Type: Org.BouncyCastle.X509::SubjectPublicKeyInfoFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1857))
// CS Name: ::Org.BouncyCastle.X509::SubjectPublicKeyInfoFactory*
class CORDL_TYPE SubjectPublicKeyInfoFactory : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory* New_ctor();

  /// @brief Method .ctor addr 0x11751d4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method CreateSubjectPublicKeyInfo addr 0x11751dc size 0xdbc virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* CreateSubjectPublicKeyInfo(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method ExtractBytes addr 0x11760a4 size 0xc0 virtual false final false
  static inline void ExtractBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> encKey, int32_t offset, ::Org::BouncyCastle::Math::BigInteger* bI);

  /// @brief Method ExtractBytes addr 0x1175f98 size 0x10c virtual false final false
  static inline void ExtractBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> encKey, int32_t size, int32_t offSet, ::Org::BouncyCastle::Math::BigInteger* bI);

  // Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfoFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubjectPublicKeyInfoFactory(SubjectPublicKeyInfoFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfoFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubjectPublicKeyInfoFactory(SubjectPublicKeyInfoFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubjectPublicKeyInfoFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory*, "Org.BouncyCastle.X509", "SubjectPublicKeyInfoFactory");
