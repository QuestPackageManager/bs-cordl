#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsEnvelopedDataParser)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EnvelopedDataParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser);
// Type: Org.BouncyCastle.Cms::CmsEnvelopedDataParser
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(620))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(635))
// CS Name: ::Org.BouncyCastle.Cms::CmsEnvelopedDataParser*
class CORDL_TYPE CmsEnvelopedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
  // Declarations
  /// @brief Field recipientInfoStore, offset 0x20, size 0x8
  __declspec(property(get = __get_recipientInfoStore, put = __set_recipientInfoStore))::Org::BouncyCastle::Cms::RecipientInformationStore* recipientInfoStore;

  /// @brief Field envelopedData, offset 0x28, size 0x8
  __declspec(property(get = __get_envelopedData, put = __set_envelopedData))::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser* envelopedData;

  /// @brief Field _encAlg, offset 0x30, size 0x8
  __declspec(property(get = __get__encAlg, put = __set__encAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _encAlg;

  /// @brief Field _unprotectedAttributes, offset 0x38, size 0x8
  __declspec(property(get = __get__unprotectedAttributes, put = __set__unprotectedAttributes))::Org::BouncyCastle::Asn1::Cms::AttributeTable* _unprotectedAttributes;

  /// @brief Field _attrNotRead, offset 0x40, size 0x1
  __declspec(property(get = __get__attrNotRead, put = __set__attrNotRead)) bool _attrNotRead;

  __declspec(property(get = get_EncryptionAlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* EncryptionAlgorithmID;

  __declspec(property(get = get_EncryptionAlgOid))::StringW EncryptionAlgOid;

  __declspec(property(get = get_EncryptionAlgParams))::Org::BouncyCastle::Asn1::Asn1Object* EncryptionAlgParams;

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& __get_recipientInfoStore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> const& __get_recipientInfoStore() const;

  constexpr void __set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser*& __get_envelopedData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser*> const& __get_envelopedData() const;

  constexpr void __set_envelopedData(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get__encAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get__encAlg() const;

  constexpr void __set__encAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __get__unprotectedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& __get__unprotectedAttributes() const;

  constexpr void __set__unprotectedAttributes(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr bool& __get__attrNotRead();

  constexpr bool const& __get__attrNotRead() const;

  constexpr void __set__attrNotRead(bool value);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> envelopedData);

  /// @brief Method .ctor addr 0x116e3dc size 0x78 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> envelopedData);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser* New_ctor(::System::IO::Stream* envelopedData);

  /// @brief Method .ctor addr 0x116e454 size 0x2f8 virtual false final false
  inline void _ctor(::System::IO::Stream* envelopedData);

  /// @brief Method get_EncryptionAlgorithmID addr 0x116e74c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithmID();

  /// @brief Method get_EncryptionAlgOid addr 0x116e754 size 0x2c virtual false final false
  inline ::StringW get_EncryptionAlgOid();

  /// @brief Method get_EncryptionAlgParams addr 0x116e780 size 0x38 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_EncryptionAlgParams();

  /// @brief Method GetRecipientInfos addr 0x116e7b8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos();

  /// @brief Method GetUnprotectedAttributes addr 0x116e7c0 size 0x24c virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnprotectedAttributes();

  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsEnvelopedDataParser(CmsEnvelopedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsEnvelopedDataParser(CmsEnvelopedDataParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsEnvelopedDataParser();

public:
  /// @brief Field recipientInfoStore, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::RecipientInformationStore* ___recipientInfoStore;

  /// @brief Field envelopedData, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser* ___envelopedData;

  /// @brief Field _encAlg, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ____encAlg;

  /// @brief Field _unprotectedAttributes, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::AttributeTable* ____unprotectedAttributes;

  /// @brief Field _attrNotRead, offset: 0x40, size: 0x1, def value: None
  bool ____attrNotRead;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser, ___recipientInfoStore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser, ___envelopedData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser, ____encAlg) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser, ____unprotectedAttributes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser, ____attrNotRead) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*, "Org.BouncyCastle.Cms", "CmsEnvelopedDataParser");
