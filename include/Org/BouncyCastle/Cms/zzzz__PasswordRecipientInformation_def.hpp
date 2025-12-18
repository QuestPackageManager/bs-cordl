#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/PasswordRecipientInformation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
CORDL_MODULE_EXPORT(PasswordRecipientInformation)
namespace Org::BouncyCastle::Asn1::Cms {
class PasswordRecipientInfo;
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
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class PasswordRecipientInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::PasswordRecipientInformation);
// Dependencies Org.BouncyCastle.Cms.RecipientInformation
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.PasswordRecipientInformation
class CORDL_TYPE PasswordRecipientInformation : public ::Org::BouncyCastle::Cms::RecipientInformation {
public:
  // Declarations
  __declspec(property(get = get_KeyDerivationAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* KeyDerivationAlgorithm;

  /// @brief Field info, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info)) ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info;

  /// @brief Method GetContentStream, addr 0x35d6e88, size 0x558, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  static inline ::Org::BouncyCastle::Cms::PasswordRecipientInformation* New_ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info,
                                                                                 ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  constexpr ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* const& __cordl_internal_get_info() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo*& __cordl_internal_get_info();

  constexpr void __cordl_internal_set_info(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* value);

  /// @brief Method .ctor, addr 0x35b3874, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method get_KeyDerivationAlgorithm, addr 0x35d6e70, size 0x18, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyDerivationAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PasswordRecipientInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PasswordRecipientInformation(PasswordRecipientInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PasswordRecipientInformation(PasswordRecipientInformation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 683 };

  /// @brief Field info, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* ___info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::PasswordRecipientInformation, ___info) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::PasswordRecipientInformation, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::PasswordRecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::PasswordRecipientInformation*, "Org.BouncyCastle.Cms", "PasswordRecipientInformation");
