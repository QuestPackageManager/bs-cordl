#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__KeyTransRecipientInfoGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsKeyTransRecipientInfoGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Operators {
class CmsKeyTransRecipientInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator);
// Type: Org.BouncyCastle.Operators::CmsKeyTransRecipientInfoGenerator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(998))
// CS Name: ::Org.BouncyCastle.Operators::CmsKeyTransRecipientInfoGenerator*
class CORDL_TYPE CmsKeyTransRecipientInfoGenerator : public ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator {
public:
  // Declarations
  /// @brief Field keyWrapper, offset 0x40, size 0x8
  __declspec(property(get = __get_keyWrapper, put = __set_keyWrapper))::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper;

  __declspec(property(get = get_AlgorithmDetails))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmDetails;

  constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& __get_keyWrapper();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IKeyWrapper*> const& __get_keyWrapper() const;

  constexpr void __set_keyWrapper(::Org::BouncyCastle::Crypto::IKeyWrapper* value);

  static inline ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator* New_ctor(::Org::BouncyCastle::X509::X509Certificate* recipCert,
                                                                                            ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper);

  /// @brief Method .ctor addr 0xf2d928 size 0x14c virtual false final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* recipCert, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper);

  static inline ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper);

  /// @brief Method .ctor addr 0xf2da74 size 0x74 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper);

  /// @brief Method get_AlgorithmDetails addr 0xf2dae8 size 0xec virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmDetails();

  /// @brief Method GenerateWrappedKey addr 0xf2dbd4 size 0x130 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateWrappedKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentKey);

  // Ctor Parameters [CppParam { name: "", ty: "CmsKeyTransRecipientInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsKeyTransRecipientInfoGenerator(CmsKeyTransRecipientInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsKeyTransRecipientInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsKeyTransRecipientInfoGenerator(CmsKeyTransRecipientInfoGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsKeyTransRecipientInfoGenerator();

public:
  /// @brief Field keyWrapper, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IKeyWrapper* ___keyWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Operators
NEED_NO_BOX(::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*, "Org.BouncyCastle.Operators", "CmsKeyTransRecipientInfoGenerator");
