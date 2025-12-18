#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/PrivateKeyInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateKeyInfo)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo
class CORDL_TYPE PrivateKeyInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::Org::BouncyCastle::Asn1::Asn1Set* Attributes;

  __declspec(property(get = get_HasPublicKey)) bool HasPublicKey;

  __declspec(property(get = get_PrivateKeyAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* PrivateKeyAlgorithm;

  __declspec(property(get = get_PrivateKeyData)) ::Org::BouncyCastle::Asn1::Asn1OctetString* PrivateKeyData;

  __declspec(property(get = get_PublicKeyData)) ::Org::BouncyCastle::Asn1::DerBitString* PublicKeyData;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field attributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::Org::BouncyCastle::Asn1::Asn1Set* attributes;

  /// @brief Field privateKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKey, put = __cordl_internal_set_privateKey)) ::Org::BouncyCastle::Asn1::Asn1OctetString* privateKey;

  /// @brief Field privateKeyAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKeyAlgorithm, put = __cordl_internal_set_privateKeyAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm;

  /// @brief Field publicKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey)) ::Org::BouncyCastle::Asn1::DerBitString* publicKey;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x336b2b4, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x336b2c8, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* GetInstance(::System::Object* obj);

  /// @brief Method GetVersionValue, addr 0x336b684, size 0x124, virtual false, abstract: false, final false
  static inline int32_t GetVersionValue(::Org::BouncyCastle::Asn1::DerInteger* version);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm,
                                                                          ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm,
                                                                          ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm,
                                                                          ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ParsePrivateKey, addr 0x336b93c, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ParsePrivateKey();

  /// @brief Method ParsePublicKey, addr 0x336b964, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ParsePublicKey();

  /// @brief Method ToAsn1Object, addr 0x336b994, size 0x188, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_attributes() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_attributes();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_privateKey() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_privateKey();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_privateKeyAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_privateKeyAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_publicKey() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_publicKey();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_attributes(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_privateKey(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_privateKeyAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_publicKey(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x336b7a8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey);

  /// @brief Method .ctor, addr 0x336b904, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  /// @brief Method .ctor, addr 0x336b7b4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method .ctor, addr 0x336b368, size 0x31c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Attributes, addr 0x336b914, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Attributes();

  /// @brief Method get_HasPublicKey, addr 0x336b91c, size 0x10, virtual true, abstract: false, final false
  inline bool get_HasPublicKey();

  /// @brief Method get_PrivateKeyAlgorithm, addr 0x336b92c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_PrivateKeyAlgorithm();

  /// @brief Method get_PrivateKeyData, addr 0x336b934, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_PrivateKeyData();

  /// @brief Method get_PublicKeyData, addr 0x336b98c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_PublicKeyData();

  /// @brief Method get_Version, addr 0x336b90c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateKeyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateKeyInfo(PrivateKeyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateKeyInfo(PrivateKeyInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 246 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field privateKeyAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___privateKeyAlgorithm;

  /// @brief Field privateKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___privateKey;

  /// @brief Field attributes, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___attributes;

  /// @brief Field publicKey, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, ___privateKeyAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, ___privateKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, ___attributes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, ___publicKey) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, "Org.BouncyCastle.Asn1.Pkcs", "PrivateKeyInfo");
