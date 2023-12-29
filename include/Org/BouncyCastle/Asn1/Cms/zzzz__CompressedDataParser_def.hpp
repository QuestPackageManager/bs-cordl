#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CompressedDataParser)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CompressedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser);
// Type: Org.BouncyCastle.Asn1.Cms::CompressedDataParser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(65))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::CompressedDataParser*
class CORDL_TYPE CompressedDataParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __get__version, put = __set__version))::Org::BouncyCastle::Asn1::DerInteger* _version;

  /// @brief Field _compressionAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __get__compressionAlgorithm, put = __set__compressionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _compressionAlgorithm;

  /// @brief Field _encapContentInfo, offset 0x20, size 0x8
  __declspec(property(get = __get__encapContentInfo, put = __set__encapContentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* _encapContentInfo;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_CompressionAlgorithmIdentifier))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* CompressionAlgorithmIdentifier;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get__version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get__version() const;

  constexpr void __set__version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get__compressionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get__compressionAlgorithm() const;

  constexpr void __set__compressionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*& __get__encapContentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*> const& __get__encapContentInfo() const;

  constexpr void __set__encapContentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method .ctor addr 0xe00994 size 0x2bc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_Version addr 0xe00c50 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_CompressionAlgorithmIdentifier addr 0xe00c58 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_CompressionAlgorithmIdentifier();

  /// @brief Method GetEncapContentInfo addr 0xe00c60 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* GetEncapContentInfo();

  // Ctor Parameters [CppParam { name: "", ty: "CompressedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompressedDataParser(CompressedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompressedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompressedDataParser(CompressedDataParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompressedDataParser();

public:
  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ____version;

  /// @brief Field _compressionAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ____compressionAlgorithm;

  /// @brief Field _encapContentInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* ____encapContentInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser, ____compressionAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser, ____encapContentInfo) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*, "Org.BouncyCastle.Asn1.Cms", "CompressedDataParser");
