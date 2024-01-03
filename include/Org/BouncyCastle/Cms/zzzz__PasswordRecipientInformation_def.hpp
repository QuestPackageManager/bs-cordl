#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
CORDL_MODULE_EXPORT(PasswordRecipientInformation)
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Asn1::Cms {
class PasswordRecipientInfo;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class PasswordRecipientInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::PasswordRecipientInformation);
// Type: Org.BouncyCastle.Cms::PasswordRecipientInformation
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(671))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(683))
// CS Name: ::Org.BouncyCastle.Cms::PasswordRecipientInformation*
class CORDL_TYPE PasswordRecipientInformation : public ::Org::BouncyCastle::Cms::RecipientInformation {
public:
  // Declarations
  /// @brief Field info, offset 0x30, size 0x8
  __declspec(property(get = __get_info, put = __set_info))::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info;

  __declspec(property(get = get_KeyDerivationAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* KeyDerivationAlgorithm;

  constexpr ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*& __get_info();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*> const& __get_info() const;

  constexpr void __set_info(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* value);

  static inline ::Org::BouncyCastle::Cms::PasswordRecipientInformation* New_ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info,
                                                                                 ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method .ctor, addr 0x11e3f4c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method get_KeyDerivationAlgorithm, addr 0x1207ae0, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyDerivationAlgorithm();

  /// @brief Method GetContentStream, addr 0x1207afc, size 0x574, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  // Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PasswordRecipientInformation(PasswordRecipientInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PasswordRecipientInformation(PasswordRecipientInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PasswordRecipientInformation();

public:
  /// @brief Field info, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* ___info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::PasswordRecipientInformation, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::PasswordRecipientInformation, ___info) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::PasswordRecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::PasswordRecipientInformation*, "Org.BouncyCastle.Cms", "PasswordRecipientInformation");
