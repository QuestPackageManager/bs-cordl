#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/RecipientInformation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecipientInformation)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class RecipientInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::RecipientInformation);
// Type: Org.BouncyCastle.Cms::RecipientInformation
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::RecipientInformation*
class CORDL_TYPE RecipientInformation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_KeyEncryptionAlgOid)) ::StringW KeyEncryptionAlgOid;

  __declspec(property(get = get_KeyEncryptionAlgParams)) ::Org::BouncyCastle::Asn1::Asn1Object* KeyEncryptionAlgParams;

  __declspec(property(get = get_KeyEncryptionAlgorithmID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* KeyEncryptionAlgorithmID;

  __declspec(property(get = get_RecipientID)) ::Org::BouncyCastle::Cms::RecipientID* RecipientID;

  /// @brief Field keyEncAlg, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keyEncAlg, put = __cordl_internal_set_keyEncAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg;

  /// @brief Field resultMac, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_resultMac, put = __cordl_internal_set_resultMac)) ::ArrayW<uint8_t, ::Array<uint8_t>*> resultMac;

  /// @brief Field rid, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rid, put = __cordl_internal_set_rid)) ::Org::BouncyCastle::Cms::RecipientID* rid;

  /// @brief Field secureReadable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_secureReadable, put = __cordl_internal_set_secureReadable)) ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable;

  /// @brief Method GetContent, addr 0x26374b4, size 0xfc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContent(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  /// @brief Method GetContentAlgorithmName, addr 0x2637168, size 0xbc, virtual false, abstract: false, final false
  inline ::StringW GetContentAlgorithmName();

  /// @brief Method GetContentFromSessionKey, addr 0x2637298, size 0x21c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContentFromSessionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* sKey);

  /// @brief Method GetContentStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  /// @brief Method GetMac, addr 0x26375b0, size 0x168, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  static inline ::Org::BouncyCastle::Cms::RecipientInformation* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_keyEncAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_keyEncAlg() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_resultMac() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_resultMac();

  constexpr ::Org::BouncyCastle::Cms::RecipientID*& __cordl_internal_get_rid();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientID*> const& __cordl_internal_get_rid() const;

  constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable*& __cordl_internal_get_secureReadable();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsSecureReadable*> const& __cordl_internal_get_secureReadable() const;

  constexpr void __cordl_internal_set_keyEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_resultMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_rid(::Org::BouncyCastle::Cms::RecipientID* value);

  constexpr void __cordl_internal_set_secureReadable(::Org::BouncyCastle::Cms::CmsSecureReadable* value);

  /// @brief Method .ctor, addr 0x26370d8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method get_KeyEncryptionAlgOid, addr 0x2637234, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_KeyEncryptionAlgOid();

  /// @brief Method get_KeyEncryptionAlgParams, addr 0x2637260, size 0x38, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_KeyEncryptionAlgParams();

  /// @brief Method get_KeyEncryptionAlgorithmID, addr 0x263722c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyEncryptionAlgorithmID();

  /// @brief Method get_RecipientID, addr 0x2637224, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::RecipientID* get_RecipientID();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecipientInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientInformation(RecipientInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientInformation(RecipientInformation const&) = delete;

  /// @brief Field rid, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::RecipientID* ___rid;

  /// @brief Field keyEncAlg, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___keyEncAlg;

  /// @brief Field secureReadable, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsSecureReadable* ___secureReadable;

  /// @brief Field resultMac, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___resultMac;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 671 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::RecipientInformation, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::RecipientInformation, ___rid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::RecipientInformation, ___keyEncAlg) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::RecipientInformation, ___secureReadable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::RecipientInformation, ___resultMac) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::RecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::RecipientInformation*, "Org.BouncyCastle.Cms", "RecipientInformation");
