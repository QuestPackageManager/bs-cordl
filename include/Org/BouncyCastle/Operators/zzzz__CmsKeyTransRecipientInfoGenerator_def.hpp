#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Operators/CmsKeyTransRecipientInfoGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__KeyTransRecipientInfoGenerator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsKeyTransRecipientInfoGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Operators {
class CmsKeyTransRecipientInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator);
// Dependencies Org.BouncyCastle.Cms.KeyTransRecipientInfoGenerator
namespace Org::BouncyCastle::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Operators.CmsKeyTransRecipientInfoGenerator
class CORDL_TYPE CmsKeyTransRecipientInfoGenerator : public ::Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmDetails;

  /// @brief Field keyWrapper, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_keyWrapper, put = __cordl_internal_set_keyWrapper)) ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper;

  /// @brief Method GenerateWrappedKey, addr 0x23bae30, size 0x130, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateWrappedKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentKey);

  static inline ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator* New_ctor(::Org::BouncyCastle::X509::X509Certificate* recipCert,
                                                                                            ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper);

  static inline ::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper);

  constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* const& __cordl_internal_get_keyWrapper() const;

  constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& __cordl_internal_get_keyWrapper();

  constexpr void __cordl_internal_set_keyWrapper(::Org::BouncyCastle::Crypto::IKeyWrapper* value);

  /// @brief Method .ctor, addr 0x23bab84, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* recipCert, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper);

  /// @brief Method .ctor, addr 0x23bacd0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper);

  /// @brief Method get_AlgorithmDetails, addr 0x23bad44, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmDetails();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsKeyTransRecipientInfoGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsKeyTransRecipientInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsKeyTransRecipientInfoGenerator(CmsKeyTransRecipientInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsKeyTransRecipientInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsKeyTransRecipientInfoGenerator(CmsKeyTransRecipientInfoGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 998 };

  /// @brief Field keyWrapper, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IKeyWrapper* ___keyWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator, ___keyWrapper) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Operators
NEED_NO_BOX(::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator*, "Org.BouncyCastle.Operators", "CmsKeyTransRecipientInfoGenerator");
