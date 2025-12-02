#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsSignedDataStreamGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsSignedDataStreamGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Generator;
}
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedDataStreamGenerator_CmsSignedDataOutputStream;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::Cms {
class ISignerInfoGenerator;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedDataStreamGenerator_CmsSignedDataOutputStream;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataStreamGenerator/DigestAndSignerInfoGeneratorHolder
class CORDL_TYPE CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DigestAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestAlgorithm;

  /// @brief Field digestOID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_digestOID, put = __cordl_internal_set_digestOID)) ::StringW digestOID;

  /// @brief Field signerInf, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_signerInf, put = __cordl_internal_set_signerInf)) ::Org::BouncyCastle::Cms::ISignerInfoGenerator* signerInf;

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder* New_ctor(::Org::BouncyCastle::Cms::ISignerInfoGenerator* signerInf, ::StringW digestOID);

  constexpr ::StringW const& __cordl_internal_get_digestOID() const;

  constexpr ::StringW& __cordl_internal_get_digestOID();

  constexpr ::Org::BouncyCastle::Cms::ISignerInfoGenerator* const& __cordl_internal_get_signerInf() const;

  constexpr ::Org::BouncyCastle::Cms::ISignerInfoGenerator*& __cordl_internal_get_signerInf();

  constexpr void __cordl_internal_set_digestOID(::StringW value);

  constexpr void __cordl_internal_set_signerInf(::Org::BouncyCastle::Cms::ISignerInfoGenerator* value);

  /// @brief Method .ctor, addr 0x359595c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::ISignerInfoGenerator* signerInf, ::StringW digestOID);

  /// @brief Method get_DigestAlgorithm, addr 0x35975ec, size 0xb8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder(CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder(CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 653 };

  /// @brief Field signerInf, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::ISignerInfoGenerator* ___signerInf;

  /// @brief Field digestOID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___digestOID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder, ___signerInf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder, ___digestOID) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataStreamGenerator/SignerInfoGeneratorImpl
class CORDL_TYPE CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl : public ::System::Object {
public:
  // Declarations
  /// @brief Field _digestOID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__digestOID, put = __cordl_internal_set__digestOID)) ::StringW _digestOID;

  /// @brief Field _encName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__encName, put = __cordl_internal_set__encName)) ::StringW _encName;

  /// @brief Field _encOID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__encOID, put = __cordl_internal_set__encOID)) ::StringW _encOID;

  /// @brief Field _sAttr, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sAttr, put = __cordl_internal_set__sAttr)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* _sAttr;

  /// @brief Field _sig, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__sig, put = __cordl_internal_set__sig)) ::Org::BouncyCastle::Crypto::ISigner* _sig;

  /// @brief Field _signerIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__signerIdentifier, put = __cordl_internal_set__signerIdentifier)) ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* _signerIdentifier;

  /// @brief Field _unsAttr, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__unsAttr, put = __cordl_internal_set__unsAttr)) ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* _unsAttr;

  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_outer, put = __cordl_internal_set_outer)) ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::ISignerInfoGenerator"
  constexpr operator ::Org::BouncyCastle::Cms::ISignerInfoGenerator*() noexcept;

  /// @brief Method Generate, addr 0x3597700, size 0x8c4, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm,
                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> calculatedDigest);

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl*
  New_ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier,
           ::StringW digestOID, ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr);

  constexpr ::StringW const& __cordl_internal_get__digestOID() const;

  constexpr ::StringW& __cordl_internal_get__digestOID();

  constexpr ::StringW const& __cordl_internal_get__encName() const;

  constexpr ::StringW& __cordl_internal_get__encName();

  constexpr ::StringW const& __cordl_internal_get__encOID() const;

  constexpr ::StringW& __cordl_internal_get__encOID();

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& __cordl_internal_get__sAttr() const;

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __cordl_internal_get__sAttr();

  constexpr ::Org::BouncyCastle::Crypto::ISigner* const& __cordl_internal_get__sig() const;

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get__sig();

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* const& __cordl_internal_get__signerIdentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*& __cordl_internal_get__signerIdentifier();

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& __cordl_internal_get__unsAttr() const;

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __cordl_internal_get__unsAttr();

  constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* const& __cordl_internal_get_outer() const;

  constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*& __cordl_internal_get_outer();

  constexpr void __cordl_internal_set__digestOID(::StringW value);

  constexpr void __cordl_internal_set__encName(::StringW value);

  constexpr void __cordl_internal_set__encOID(::StringW value);

  constexpr void __cordl_internal_set__sAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  constexpr void __cordl_internal_set__sig(::Org::BouncyCastle::Crypto::ISigner* value);

  constexpr void __cordl_internal_set__signerIdentifier(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* value);

  constexpr void __cordl_internal_set__unsAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  constexpr void __cordl_internal_set_outer(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* value);

  /// @brief Method .ctor, addr 0x3595634, size 0x328, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                    ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW digestOID, ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr,
                    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr);

  /// @brief Convert to "::Org::BouncyCastle::Cms::ISignerInfoGenerator"
  constexpr ::Org::BouncyCastle::Cms::ISignerInfoGenerator* i___Org__BouncyCastle__Cms__ISignerInfoGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl(CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl(CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 654 };

  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* ___outer;

  /// @brief Field _signerIdentifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* ____signerIdentifier;

  /// @brief Field _digestOID, offset: 0x20, size: 0x8, def value: None
  ::StringW ____digestOID;

  /// @brief Field _encOID, offset: 0x28, size: 0x8, def value: None
  ::StringW ____encOID;

  /// @brief Field _sAttr, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* ____sAttr;

  /// @brief Field _unsAttr, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* ____unsAttr;

  /// @brief Field _encName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____encName;

  /// @brief Field _sig, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ____sig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl, ____signerIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl, ____digestOID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl, ____encOID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl, ____sAttr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl, ____unsAttr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl, ____encName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl, ____sig) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Dependencies Org.BouncyCastle.Utilities.IO.BaseOutputStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataStreamGenerator/CmsSignedDataOutputStream
class CORDL_TYPE CmsSignedDataStreamGenerator_CmsSignedDataOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field _contentOID, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__contentOID, put = __cordl_internal_set__contentOID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _contentOID;

  /// @brief Field _eiGen, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__eiGen, put = __cordl_internal_set__eiGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator* _eiGen;

  /// @brief Field _out, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__out, put = __cordl_internal_set__out)) ::System::IO::Stream* _out;

  /// @brief Field _sGen, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__sGen, put = __cordl_internal_set__sGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator* _sGen;

  /// @brief Field _sigGen, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__sigGen, put = __cordl_internal_set__sigGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator* _sigGen;

  /// @brief Field outer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_outer, put = __cordl_internal_set_outer)) ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer;

  /// @brief Method Close, addr 0x3598028, size 0x24, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method DoClose, addr 0x359804c, size 0xf08, virtual false, abstract: false, final false
  inline void DoClose();

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*
  New_ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::System::IO::Stream* outStream, ::StringW contentOID, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen,
           ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sigGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);

  /// @brief Method Write, addr 0x3598008, size 0x20, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0x3597fe8, size 0x20, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method WriteToGenerator, addr 0x3598f54, size 0x64, virtual false, abstract: false, final false
  static inline void WriteToGenerator(::Org::BouncyCastle::Asn1::Asn1Generator* ag, ::Org::BouncyCastle::Asn1::Asn1Encodable* ae);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get__contentOID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get__contentOID();

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& __cordl_internal_get__eiGen() const;

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __cordl_internal_get__eiGen();

  constexpr ::System::IO::Stream* const& __cordl_internal_get__out() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__out();

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& __cordl_internal_get__sGen() const;

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __cordl_internal_get__sGen();

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& __cordl_internal_get__sigGen() const;

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __cordl_internal_get__sigGen();

  constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* const& __cordl_internal_get_outer() const;

  constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*& __cordl_internal_get_outer();

  constexpr void __cordl_internal_set__contentOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr void __cordl_internal_set__out(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__sGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr void __cordl_internal_set__sigGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr void __cordl_internal_set_outer(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* value);

  /// @brief Method .ctor, addr 0x3596fec, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::System::IO::Stream* outStream, ::StringW contentOID, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen,
                    ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sigGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedDataStreamGenerator_CmsSignedDataOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator_CmsSignedDataOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedDataStreamGenerator_CmsSignedDataOutputStream(CmsSignedDataStreamGenerator_CmsSignedDataOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator_CmsSignedDataOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedDataStreamGenerator_CmsSignedDataOutputStream(CmsSignedDataStreamGenerator_CmsSignedDataOutputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 655 };

  /// @brief Field outer, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* ___outer;

  /// @brief Field _out, offset: 0x38, size: 0x8, def value: None
  ::System::IO::Stream* ____out;

  /// @brief Field _contentOID, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ____contentOID;

  /// @brief Field _sGen, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ____sGen;

  /// @brief Field _sigGen, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ____sigGen;

  /// @brief Field _eiGen, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ____eiGen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream, ___outer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream, ____out) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream, ____contentOID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream, ____sGen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream, ____sigGen) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream, ____eiGen) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Dependencies Org.BouncyCastle.Cms.CmsSignedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataStreamGenerator
class CORDL_TYPE CmsSignedDataStreamGenerator : public ::Org::BouncyCastle::Cms::CmsSignedGenerator {
public:
  // Declarations
  using CmsSignedDataOutputStream = ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream;

  using DigestAndSignerInfoGeneratorHolder = ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder;

  using SignerInfoGeneratorImpl = ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper)) ::Org::BouncyCastle::Cms::CmsSignedHelper* Helper;

  /// @brief Field _bufferSize, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__bufferSize, put = __cordl_internal_set__bufferSize)) int32_t _bufferSize;

  /// @brief Field _messageDigestOids, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__messageDigestOids, put = __cordl_internal_set__messageDigestOids)) ::Org::BouncyCastle::Utilities::Collections::ISet* _messageDigestOids;

  /// @brief Field _messageDigests, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__messageDigests, put = __cordl_internal_set__messageDigests)) ::System::Collections::IDictionary* _messageDigests;

  /// @brief Field _messageDigestsLocked, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__messageDigestsLocked, put = __cordl_internal_set__messageDigestsLocked)) bool _messageDigestsLocked;

  /// @brief Field _messageHashes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__messageHashes, put = __cordl_internal_set__messageHashes)) ::System::Collections::IDictionary* _messageHashes;

  /// @brief Field _signerInfs, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__signerInfs, put = __cordl_internal_set__signerInfs)) ::System::Collections::IList* _signerInfs;

  /// @brief Method AddDigests, addr 0x3594b5c, size 0x4, virtual false, abstract: false, final false
  inline void AddDigests(::ArrayW<::StringW, ::Array<::StringW>*> digestOids);

  /// @brief Method AddDigests, addr 0x3594708, size 0x2e0, virtual false, abstract: false, final false
  inline void AddDigests(::System::Collections::IEnumerable* digestOids);

  /// @brief Method AddSigner, addr 0x3594d98, size 0x88, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOid);

  /// @brief Method AddSigner, addr 0x3595014, size 0xc0, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOid,
                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method AddSigner, addr 0x3594e20, size 0xbc, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOid,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator);

  /// @brief Method AddSigner, addr 0x3594edc, size 0x90, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW encryptionOid, ::StringW digestOid);

  /// @brief Method AddSigner, addr 0x35950d4, size 0xc8, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW encryptionOid, ::StringW digestOid,
                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method AddSigner, addr 0x3594f6c, size 0xa8, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW encryptionOid, ::StringW digestOid,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator);

  /// @brief Method AddSigner, addr 0x35952f8, size 0x88, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW digestOid);

  /// @brief Method AddSigner, addr 0x3595574, size 0xc0, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW digestOid,
                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method AddSigner, addr 0x3595380, size 0xbc, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW digestOid,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator);

  /// @brief Method AddSigner, addr 0x359543c, size 0x90, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW encryptionOid, ::StringW digestOid);

  /// @brief Method AddSigner, addr 0x35954cc, size 0xa8, virtual false, abstract: false, final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW encryptionOid, ::StringW digestOid,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator);

  /// @brief Method AddSignerCallback, addr 0x3595964, size 0x38, virtual true, abstract: false, final false
  inline void AddSignerCallback(::Org::BouncyCastle::Cms::SignerInformation* si);

  /// @brief Method AttachDigestsToOutputStream, addr 0x3596c68, size 0x384, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* AttachDigestsToOutputStream(::System::Collections::ICollection* digests, ::System::IO::Stream* s);

  /// @brief Method CalculateVersion, addr 0x3596418, size 0x6c4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* CalculateVersion(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentOid);

  /// @brief Method CheckForVersion3, addr 0x35971bc, size 0x350, virtual false, abstract: false, final false
  inline bool CheckForVersion3(::System::Collections::IList* signerInfos);

  /// @brief Method ConfigureDigest, addr 0x3594b60, size 0x238, virtual false, abstract: false, final false
  inline void ConfigureDigest(::StringW digestOid);

  /// @brief Method DoAddSigner, addr 0x359519c, size 0x15c, virtual false, abstract: false, final false
  inline void DoAddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW encryptionOid,
                          ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator);

  /// @brief Method Generate, addr 0x3597090, size 0x12c, virtual false, abstract: false, final false
  inline void Generate(::System::IO::Stream* outStream, ::StringW eContentType, bool encapsulate, ::System::IO::Stream* dataOutputStream, ::Org::BouncyCastle::Cms::CmsProcessable* content);

  /// @brief Method GetSafeOutputStream, addr 0x359750c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* GetSafeOutputStream(::System::IO::Stream* s);

  /// @brief Method GetSafeTeeOutputStream, addr 0x3596b74, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* GetSafeTeeOutputStream(::System::IO::Stream* s1, ::System::IO::Stream* s2);

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method Open, addr 0x3595b1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream);

  /// @brief Method Open, addr 0x3595b24, size 0x80, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, bool encapsulate);

  /// @brief Method Open, addr 0x3595ba4, size 0x8c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, bool encapsulate, ::System::IO::Stream* dataOutputStream);

  /// @brief Method Open, addr 0x3594544, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, ::StringW signedContentType, bool encapsulate);

  /// @brief Method Open, addr 0x3595c30, size 0x7e8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, ::StringW signedContentType, bool encapsulate, ::System::IO::Stream* dataOutputStream);

  /// @brief Method RegisterDigestOid, addr 0x359599c, size 0x180, virtual false, abstract: false, final false
  inline void RegisterDigestOid(::StringW digestOid);

  /// @brief Method SetBufferSize, addr 0x3594b54, size 0x8, virtual false, abstract: false, final false
  inline void SetBufferSize(int32_t bufferSize);

  constexpr int32_t const& __cordl_internal_get__bufferSize() const;

  constexpr int32_t& __cordl_internal_get__bufferSize();

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& __cordl_internal_get__messageDigestOids() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get__messageDigestOids();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get__messageDigests() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get__messageDigests();

  constexpr bool const& __cordl_internal_get__messageDigestsLocked() const;

  constexpr bool& __cordl_internal_get__messageDigestsLocked();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get__messageHashes() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get__messageHashes();

  constexpr ::System::Collections::IList* const& __cordl_internal_get__signerInfs() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get__signerInfs();

  constexpr void __cordl_internal_set__bufferSize(int32_t value);

  constexpr void __cordl_internal_set__messageDigestOids(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set__messageDigests(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set__messageDigestsLocked(bool value);

  constexpr void __cordl_internal_set__messageHashes(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set__signerInfs(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x3594468, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3594a68, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* getStaticF_Helper();

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedDataStreamGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedDataStreamGenerator(CmsSignedDataStreamGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedDataStreamGenerator(CmsSignedDataStreamGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 656 };

  /// @brief Field _signerInfs, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IList* ____signerInfs;

  /// @brief Field _messageDigestOids, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ____messageDigestOids;

  /// @brief Field _messageDigests, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::IDictionary* ____messageDigests;

  /// @brief Field _messageHashes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::IDictionary* ____messageHashes;

  /// @brief Field _messageDigestsLocked, offset: 0x60, size: 0x1, def value: None
  bool ____messageDigestsLocked;

  /// @brief Field _bufferSize, offset: 0x64, size: 0x4, def value: None
  int32_t ____bufferSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, ____signerInfs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, ____messageDigestOids) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, ____messageDigests) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, ____messageHashes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, ____messageDigestsLocked) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, ____bufferSize) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, 0x68>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*, "Org.BouncyCastle.Cms", "CmsSignedDataStreamGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream*, "Org.BouncyCastle.Cms", "CmsSignedDataStreamGenerator/CmsSignedDataOutputStream");
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_DigestAndSignerInfoGeneratorHolder*, "Org.BouncyCastle.Cms",
                       "CmsSignedDataStreamGenerator/DigestAndSignerInfoGeneratorHolder");
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_SignerInfoGeneratorImpl*, "Org.BouncyCastle.Cms", "CmsSignedDataStreamGenerator/SignerInfoGeneratorImpl");
