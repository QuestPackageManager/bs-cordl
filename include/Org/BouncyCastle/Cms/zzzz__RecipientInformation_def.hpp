#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecipientInformation)
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class RecipientInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::RecipientInformation);
// Type: Org.BouncyCastle.Cms::RecipientInformation
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(671))
// CS Name: ::Org.BouncyCastle.Cms::RecipientInformation*
class CORDL_TYPE RecipientInformation : public ::System::Object {
public:
  // Declarations
  /// @brief Field rid, offset 0x10, size 0x8
  __declspec(property(get = __get_rid, put = __set_rid))::Org::BouncyCastle::Cms::RecipientID* rid;

  /// @brief Field keyEncAlg, offset 0x18, size 0x8
  __declspec(property(get = __get_keyEncAlg, put = __set_keyEncAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg;

  /// @brief Field secureReadable, offset 0x20, size 0x8
  __declspec(property(get = __get_secureReadable, put = __set_secureReadable))::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable;

  /// @brief Field resultMac, offset 0x28, size 0x8
  __declspec(property(get = __get_resultMac, put = __set_resultMac))::ArrayW<uint8_t, ::Array<uint8_t>*> resultMac;

  __declspec(property(get = get_RecipientID))::Org::BouncyCastle::Cms::RecipientID* RecipientID;

  __declspec(property(get = get_KeyEncryptionAlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* KeyEncryptionAlgorithmID;

  __declspec(property(get = get_KeyEncryptionAlgOid))::StringW KeyEncryptionAlgOid;

  __declspec(property(get = get_KeyEncryptionAlgParams))::Org::BouncyCastle::Asn1::Asn1Object* KeyEncryptionAlgParams;

  constexpr ::Org::BouncyCastle::Cms::RecipientID*& __get_rid();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientID*> const& __get_rid() const;

  constexpr void __set_rid(::Org::BouncyCastle::Cms::RecipientID* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_keyEncAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_keyEncAlg() const;

  constexpr void __set_keyEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable*& __get_secureReadable();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsSecureReadable*> const& __get_secureReadable() const;

  constexpr void __set_secureReadable(::Org::BouncyCastle::Cms::CmsSecureReadable* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_resultMac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_resultMac() const;

  constexpr void __set_resultMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Cms::RecipientInformation* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method .ctor addr 0x1202070 size 0x88 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method GetContentAlgorithmName addr 0x1202108 size 0xbc virtual false final false
  inline ::StringW GetContentAlgorithmName();

  /// @brief Method get_RecipientID addr 0x12021c4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Cms::RecipientID* get_RecipientID();

  /// @brief Method get_KeyEncryptionAlgorithmID addr 0x12021cc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyEncryptionAlgorithmID();

  /// @brief Method get_KeyEncryptionAlgOid addr 0x12021d4 size 0x2c virtual false final false
  inline ::StringW get_KeyEncryptionAlgOid();

  /// @brief Method get_KeyEncryptionAlgParams addr 0x1202200 size 0x38 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_KeyEncryptionAlgParams();

  /// @brief Method GetContentFromSessionKey addr 0x1202238 size 0x22c virtual false final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContentFromSessionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* sKey);

  /// @brief Method GetContent addr 0x1202464 size 0x104 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContent(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  /// @brief Method GetMac addr 0x1202568 size 0x168 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetContentStream addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  // Ctor Parameters [CppParam { name: "", ty: "RecipientInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientInformation(RecipientInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientInformation(RecipientInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientInformation();

public:
  /// @brief Field rid, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::RecipientID* ___rid;

  /// @brief Field keyEncAlg, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___keyEncAlg;

  /// @brief Field secureReadable, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsSecureReadable* ___secureReadable;

  /// @brief Field resultMac, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___resultMac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::RecipientInformation, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::RecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::RecipientInformation*, "Org.BouncyCastle.Cms", "RecipientInformation");
