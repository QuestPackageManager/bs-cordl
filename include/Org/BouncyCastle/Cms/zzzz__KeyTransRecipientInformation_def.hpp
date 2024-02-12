#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyTransRecipientInformation)
namespace Org::BouncyCastle::Asn1::Cms {
class KeyTransRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KeyTransRecipientInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::KeyTransRecipientInformation);
// Type: Org.BouncyCastle.Cms::KeyTransRecipientInformation
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(671))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(676))
// CS Name: ::Org.BouncyCastle.Cms::KeyTransRecipientInformation*
class CORDL_TYPE KeyTransRecipientInformation : public ::Org::BouncyCastle::Cms::RecipientInformation {
public:
  // Declarations
  /// @brief Field info, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info))::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info;

  constexpr ::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo*& __cordl_internal_get_info();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo*> const& __cordl_internal_get_info() const;

  constexpr void __cordl_internal_set_info(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* value);

  static inline ::Org::BouncyCastle::Cms::KeyTransRecipientInformation* New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info,
                                                                                 ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method .ctor, addr 0x1210590, size 0x21c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method GetExchangeEncryptionAlgorithmName, addr 0x1231ed8, size 0x1c4, virtual false, abstract: false, final false
  inline ::StringW GetExchangeEncryptionAlgorithmName(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algo);

  /// @brief Method UnwrapKey, addr 0x123209c, size 0x388, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* UnwrapKey(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  /// @brief Method GetContentStream, addr 0x1232424, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  // Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyTransRecipientInformation(KeyTransRecipientInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyTransRecipientInformation(KeyTransRecipientInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyTransRecipientInformation();

public:
  /// @brief Field info, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* ___info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::KeyTransRecipientInformation, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::KeyTransRecipientInformation, ___info) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::KeyTransRecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KeyTransRecipientInformation*, "Org.BouncyCastle.Cms", "KeyTransRecipientInformation");
