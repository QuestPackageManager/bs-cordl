#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(KekRecipientInfo)
namespace Org::BouncyCastle::Asn1::Cms {
class KekIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class KekRecipientInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo);
// Type: Org.BouncyCastle.Asn1.Cms::KekRecipientInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::KekRecipientInfo*
class CORDL_TYPE KekRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_EncryptedKey))::Org::BouncyCastle::Asn1::Asn1OctetString* EncryptedKey;

  __declspec(property(get = get_KekID))::Org::BouncyCastle::Asn1::Cms::KekIdentifier* KekID;

  __declspec(property(get = get_KeyEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* KeyEncryptionAlgorithm;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field encryptedKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptedKey, put = __cordl_internal_set_encryptedKey))::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey;

  /// @brief Field kekID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_kekID, put = __cordl_internal_set_kekID))::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekID;

  /// @brief Field keyEncryptionAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_keyEncryptionAlgorithm,
                      put = __cordl_internal_set_keyEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x10d7984, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x10d799c, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekID,
                                                                           ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm,
                                                                           ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey);

  static inline ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x10d7b34, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_encryptedKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_encryptedKey() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::KekIdentifier*& __cordl_internal_get_kekID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::KekIdentifier*> const& __cordl_internal_get_kekID() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_keyEncryptionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_keyEncryptionAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_version() const;

  constexpr void __cordl_internal_set_encryptedKey(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_kekID(::Org::BouncyCastle::Asn1::Cms::KekIdentifier* value);

  constexpr void __cordl_internal_set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x10d776c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekID, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm,
                    ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey);

  /// @brief Method .ctor, addr 0x10d77fc, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_EncryptedKey, addr 0x10d7b2c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_EncryptedKey();

  /// @brief Method get_KekID, addr 0x10d7b1c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* get_KekID();

  /// @brief Method get_KeyEncryptionAlgorithm, addr 0x10d7b24, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyEncryptionAlgorithm();

  /// @brief Method get_Version, addr 0x10d7b14, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KekRecipientInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KekRecipientInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KekRecipientInfo(KekRecipientInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KekRecipientInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KekRecipientInfo(KekRecipientInfo const&) = delete;

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field kekID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::KekIdentifier* ___kekID;

  /// @brief Field keyEncryptionAlgorithm, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___keyEncryptionAlgorithm;

  /// @brief Field encryptedKey, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___encryptedKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo, ___kekID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo, ___keyEncryptionAlgorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo, ___encryptedKey) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*, "Org.BouncyCastle.Asn1.Cms", "KekRecipientInfo");
