#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptedContentInfoParser)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfoParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser);
// Type: Org.BouncyCastle.Asn1.Cms::EncryptedContentInfoParser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::EncryptedContentInfoParser*
class CORDL_TYPE EncryptedContentInfoParser : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ContentEncryptionAlgorithm;

  __declspec(property(get = get_ContentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ContentType;

  /// @brief Field _contentEncryptionAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__contentEncryptionAlgorithm,
                      put = __cordl_internal_set__contentEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _contentEncryptionAlgorithm;

  /// @brief Field _contentType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__contentType, put = __cordl_internal_set__contentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* _contentType;

  /// @brief Field _encryptedContent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptedContent, put = __cordl_internal_set__encryptedContent))::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* _encryptedContent;

  /// @brief Method GetEncryptedContent, addr 0x10d4e84, size 0xb0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* GetEncryptedContent(int32_t tag);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get__contentEncryptionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get__contentEncryptionAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get__contentType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get__contentType() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*& __cordl_internal_get__encryptedContent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*> const& __cordl_internal_get__encryptedContent() const;

  constexpr void __cordl_internal_set__contentEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set__contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set__encryptedContent(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* value);

  /// @brief Method .ctor, addr 0x10d35b0, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_ContentEncryptionAlgorithm, addr 0x10d4e7c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_ContentEncryptionAlgorithm();

  /// @brief Method get_ContentType, addr 0x10d4e74, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedContentInfoParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptedContentInfoParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedContentInfoParser(EncryptedContentInfoParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedContentInfoParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedContentInfoParser(EncryptedContentInfoParser const&) = delete;

  /// @brief Field _contentType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ____contentType;

  /// @brief Field _contentEncryptionAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ____contentEncryptionAlgorithm;

  /// @brief Field _encryptedContent, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* ____encryptedContent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser, ____contentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser, ____contentEncryptionAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser, ____encryptedContent) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser*, "Org.BouncyCastle.Asn1.Cms", "EncryptedContentInfoParser");
