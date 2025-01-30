#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/CompressedDataParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CompressedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CompressedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.CompressedDataParser
class CORDL_TYPE CompressedDataParser : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CompressionAlgorithmIdentifier)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* CompressionAlgorithmIdentifier;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field _compressionAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__compressionAlgorithm, put = __cordl_internal_set__compressionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _compressionAlgorithm;

  /// @brief Field _encapContentInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__encapContentInfo, put = __cordl_internal_set__encapContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* _encapContentInfo;

  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) ::Org::BouncyCastle::Asn1::DerInteger* _version;

  /// @brief Method GetEncapContentInfo, addr 0x2303c64, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* GetEncapContentInfo();

  static inline ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get__compressionAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get__compressionAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* const& __cordl_internal_get__encapContentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*& __cordl_internal_get__encapContentInfo();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get__version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__compressionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set__encapContentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* value);

  constexpr void __cordl_internal_set__version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x230399c, size 0x2b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_CompressionAlgorithmIdentifier, addr 0x2303c5c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_CompressionAlgorithmIdentifier();

  /// @brief Method get_Version, addr 0x2303c54, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompressedDataParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompressedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompressedDataParser(CompressedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompressedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompressedDataParser(CompressedDataParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 65 };

  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ____version;

  /// @brief Field _compressionAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ____compressionAlgorithm;

  /// @brief Field _encapContentInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* ____encapContentInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser, ____compressionAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser, ____encapContentInfo) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*, "Org.BouncyCastle.Asn1.Cms", "CompressedDataParser");
