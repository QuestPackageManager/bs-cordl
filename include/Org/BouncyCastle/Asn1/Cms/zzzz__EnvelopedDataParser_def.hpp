#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvelopedDataParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfoParser;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EnvelopedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser);
// Type: Org.BouncyCastle.Asn1.Cms::EnvelopedDataParser
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(72))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::EnvelopedDataParser*
class CORDL_TYPE EnvelopedDataParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _seq, offset 0x10, size 0x8
  __declspec(property(get = __get__seq, put = __set__seq))::Org::BouncyCastle::Asn1::Asn1SequenceParser* _seq;

  /// @brief Field _version, offset 0x18, size 0x8
  __declspec(property(get = __get__version, put = __set__version))::Org::BouncyCastle::Asn1::DerInteger* _version;

  /// @brief Field _nextObject, offset 0x20, size 0x8
  __declspec(property(get = __get__nextObject, put = __set__nextObject))::Org::BouncyCastle::Asn1::IAsn1Convertible* _nextObject;

  /// @brief Field _originatorInfoCalled, offset 0x28, size 0x1
  __declspec(property(get = __get__originatorInfoCalled, put = __set__originatorInfoCalled)) bool _originatorInfoCalled;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& __get__seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1SequenceParser*> const& __get__seq() const;

  constexpr void __set__seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get__version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get__version() const;

  constexpr void __set__version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible*& __get__nextObject();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IAsn1Convertible*> const& __get__nextObject() const;

  constexpr void __set__nextObject(::Org::BouncyCastle::Asn1::IAsn1Convertible* value);

  constexpr bool& __get__originatorInfoCalled();

  constexpr bool const& __get__originatorInfoCalled() const;

  constexpr void __set__originatorInfoCalled(bool value);

  static inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method .ctor, addr 0xe77940, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_Version, addr 0xe77a64, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method GetOriginatorInfo, addr 0xe77a6c, size 0x2e0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetOriginatorInfo();

  /// @brief Method GetRecipientInfos, addr 0xe77d4c, size 0x100, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetRecipientInfos();

  /// @brief Method GetEncryptedContentInfo, addr 0xe77e4c, size 0x120, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser* GetEncryptedContentInfo();

  /// @brief Method GetUnprotectedAttrs, addr 0xe77f6c, size 0x1ac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetUnprotectedAttrs();

  // Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvelopedDataParser(EnvelopedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvelopedDataParser(EnvelopedDataParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvelopedDataParser();

public:
  /// @brief Field _seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1SequenceParser* ____seq;

  /// @brief Field _version, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ____version;

  /// @brief Field _nextObject, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::IAsn1Convertible* ____nextObject;

  /// @brief Field _originatorInfoCalled, offset: 0x28, size: 0x1, def value: None
  bool ____originatorInfoCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, ____seq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, ____version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, ____nextObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, ____originatorInfoCalled) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser*, "Org.BouncyCastle.Asn1.Cms", "EnvelopedDataParser");
