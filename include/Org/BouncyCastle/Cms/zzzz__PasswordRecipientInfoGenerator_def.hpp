#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/PasswordRecipientInfoGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PasswordRecipientInfoGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class PasswordRecipientInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator);
// Dependencies Org.BouncyCastle.Cms.RecipientInfoGenerator, System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.PasswordRecipientInfoGenerator
class CORDL_TYPE PasswordRecipientInfoGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field Helper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper)) ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Helper;

  __declspec(property(put = set_KeyDerivationAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* KeyDerivationAlgorithm;

  __declspec(property(put = set_KeyEncryptionKey)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* KeyEncryptionKey;

  __declspec(property(put = set_KeyEncryptionKeyOID)) ::StringW KeyEncryptionKeyOID;

  /// @brief Field keyDerivationAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyDerivationAlgorithm,
                      put = __cordl_internal_set_keyDerivationAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm;

  /// @brief Field keyEncryptionKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keyEncryptionKey, put = __cordl_internal_set_keyEncryptionKey)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* keyEncryptionKey;

  /// @brief Field keyEncryptionKeyOID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_keyEncryptionKeyOID, put = __cordl_internal_set_keyEncryptionKeyOID)) ::StringW keyEncryptionKeyOID;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
  constexpr operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept;

  /// @brief Method Generate, addr 0x267b868, size 0x4a0, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator* New_ctor();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_keyDerivationAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_keyDerivationAlgorithm();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& __cordl_internal_get_keyEncryptionKey() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __cordl_internal_get_keyEncryptionKey();

  constexpr ::StringW const& __cordl_internal_get_keyEncryptionKeyOID() const;

  constexpr ::StringW& __cordl_internal_get_keyEncryptionKeyOID();

  constexpr void __cordl_internal_set_keyDerivationAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_keyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  constexpr void __cordl_internal_set_keyEncryptionKeyOID(::StringW value);

  /// @brief Method .ctor, addr 0x267b848, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* getStaticF_Helper();

  /// @brief Convert to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
  constexpr ::Org::BouncyCastle::Cms::RecipientInfoGenerator* i___Org__BouncyCastle__Cms__RecipientInfoGenerator() noexcept;

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value);

  /// @brief Method set_KeyDerivationAlgorithm, addr 0x267b850, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyDerivationAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  /// @brief Method set_KeyEncryptionKey, addr 0x267b858, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  /// @brief Method set_KeyEncryptionKeyOID, addr 0x267b860, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyEncryptionKeyOID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PasswordRecipientInfoGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PasswordRecipientInfoGenerator(PasswordRecipientInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PasswordRecipientInfoGenerator(PasswordRecipientInfoGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 682 };

  /// @brief Field keyDerivationAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___keyDerivationAlgorithm;

  /// @brief Field keyEncryptionKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___keyEncryptionKey;

  /// @brief Field keyEncryptionKeyOID, offset: 0x20, size: 0x8, def value: None
  ::StringW ___keyEncryptionKeyOID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator, ___keyDerivationAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator, ___keyEncryptionKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator, ___keyEncryptionKeyOID) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator*, "Org.BouncyCastle.Cms", "PasswordRecipientInfoGenerator");
