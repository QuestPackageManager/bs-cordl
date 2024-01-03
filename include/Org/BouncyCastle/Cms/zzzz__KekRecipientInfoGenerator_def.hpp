#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KekRecipientInfoGenerator)
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KekIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KekRecipientInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::KekRecipientInfoGenerator);
// Type: Org.BouncyCastle.Cms::KekRecipientInfoGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(670))
// CS Name: ::Org.BouncyCastle.Cms::KekRecipientInfoGenerator*
class CORDL_TYPE KekRecipientInfoGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field keyEncryptionKey, offset 0x10, size 0x8
  __declspec(property(get = __get_keyEncryptionKey, put = __set_keyEncryptionKey))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* keyEncryptionKey;

  /// @brief Field keyEncryptionKeyOID, offset 0x18, size 0x8
  __declspec(property(get = __get_keyEncryptionKeyOID, put = __set_keyEncryptionKeyOID))::StringW keyEncryptionKeyOID;

  /// @brief Field kekIdentifier, offset 0x20, size 0x8
  __declspec(property(get = __get_kekIdentifier, put = __set_kekIdentifier))::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekIdentifier;

  /// @brief Field keyEncryptionAlgorithm, offset 0x28, size 0x8
  __declspec(property(get = __get_keyEncryptionAlgorithm, put = __set_keyEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper))::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Helper;

  __declspec(property(put = set_KekIdentifier))::Org::BouncyCastle::Asn1::Cms::KekIdentifier* KekIdentifier;

  __declspec(property(put = set_KeyEncryptionKey))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* KeyEncryptionKey;

  __declspec(property(put = set_KeyEncryptionKeyOID))::StringW KeyEncryptionKeyOID;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
  constexpr operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __get_keyEncryptionKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& __get_keyEncryptionKey() const;

  constexpr void __set_keyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  constexpr ::StringW& __get_keyEncryptionKeyOID();

  constexpr ::StringW const& __get_keyEncryptionKeyOID() const;

  constexpr void __set_keyEncryptionKeyOID(::StringW value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::KekIdentifier*& __get_kekIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::KekIdentifier*> const& __get_kekIdentifier() const;

  constexpr void __set_kekIdentifier(::Org::BouncyCastle::Asn1::Cms::KekIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_keyEncryptionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_keyEncryptionAlgorithm() const;

  constexpr void __set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* getStaticF_Helper();

  static inline ::Org::BouncyCastle::Cms::KekRecipientInfoGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x1201864, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_KekIdentifier, addr 0x120186c, size 0x8, virtual false, abstract: false, final false
  inline void set_KekIdentifier(::Org::BouncyCastle::Asn1::Cms::KekIdentifier* value);

  /// @brief Method set_KeyEncryptionKey, addr 0x1201874, size 0x74, virtual false, abstract: false, final false
  inline void set_KeyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  /// @brief Method set_KeyEncryptionKeyOID, addr 0x1201d68, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyEncryptionKeyOID(::StringW value);

  /// @brief Method Generate, addr 0x1201d70, size 0x288, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method DetermineKeyEncAlg, addr 0x12018e8, size 0x480, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DetermineKeyEncAlg(::StringW algorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key);

  // Ctor Parameters [CppParam { name: "", ty: "KekRecipientInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KekRecipientInfoGenerator(KekRecipientInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KekRecipientInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KekRecipientInfoGenerator(KekRecipientInfoGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KekRecipientInfoGenerator();

public:
  /// @brief Field keyEncryptionKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___keyEncryptionKey;

  /// @brief Field keyEncryptionKeyOID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___keyEncryptionKeyOID;

  /// @brief Field kekIdentifier, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* ___kekIdentifier;

  /// @brief Field keyEncryptionAlgorithm, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___keyEncryptionAlgorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::KekRecipientInfoGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::KekRecipientInfoGenerator, ___keyEncryptionKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::KekRecipientInfoGenerator, ___keyEncryptionKeyOID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::KekRecipientInfoGenerator, ___kekIdentifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::KekRecipientInfoGenerator, ___keyEncryptionAlgorithm) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::KekRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KekRecipientInfoGenerator*, "Org.BouncyCastle.Cms", "KekRecipientInfoGenerator");
