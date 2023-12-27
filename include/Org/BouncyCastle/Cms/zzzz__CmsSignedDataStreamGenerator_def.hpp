#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsSignedDataStreamGenerator)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Cms {
class __CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Cms {
class __CmsSignedDataStreamGenerator__CmsSignedDataOutputStream;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Cms {
class __CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Generator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class ISignerInfoGenerator;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class __CmsSignedDataStreamGenerator__CmsSignedDataOutputStream;
}
namespace Org::BouncyCastle::Cms {
class __CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder;
}
namespace Org::BouncyCastle::Cms {
class __CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl);
// Type: ::DigestAndSignerInfoGeneratorHolder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(653))
// CS Name: ::CmsSignedDataStreamGenerator::DigestAndSignerInfoGeneratorHolder*
class CORDL_TYPE __CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field signerInf, offset 0x10, size 0x8
  __declspec(property(get = __get_signerInf, put = __set_signerInf))::Org::BouncyCastle::Cms::ISignerInfoGenerator* signerInf;

  /// @brief Field digestOID, offset 0x18, size 0x8
  __declspec(property(get = __get_digestOID, put = __set_digestOID))::StringW digestOID;

  __declspec(property(get = get_DigestAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestAlgorithm;

  constexpr ::Org::BouncyCastle::Cms::ISignerInfoGenerator*& __get_signerInf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::ISignerInfoGenerator*> const& __get_signerInf() const;

  constexpr void __set_signerInf(::Org::BouncyCastle::Cms::ISignerInfoGenerator* value);

  constexpr ::StringW& __get_digestOID();

  constexpr ::StringW const& __get_digestOID() const;

  constexpr void __set_digestOID(::StringW value);

  static inline ::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder* New_ctor(::Org::BouncyCastle::Cms::ISignerInfoGenerator* signerInf, ::StringW digestOID);

  /// @brief Method .ctor addr 0x11f0af4 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Cms::ISignerInfoGenerator* signerInf, ::StringW digestOID);

  /// @brief Method get_DigestAlgorithm addr 0x11f2848 size 0xd4 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithm();

  // Ctor Parameters [CppParam { name: "", ty: "__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder(__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder(__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder();

public:
  /// @brief Field signerInf, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::ISignerInfoGenerator* ___signerInf;

  /// @brief Field digestOID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___digestOID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Type: ::SignerInfoGeneratorImpl
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(654))
// CS Name: ::CmsSignedDataStreamGenerator::SignerInfoGeneratorImpl*
class CORDL_TYPE __CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl : public ::System::Object {
public:
  // Declarations
  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __get_outer, put = __set_outer))::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer;

  /// @brief Field _signerIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __get__signerIdentifier, put = __set__signerIdentifier))::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* _signerIdentifier;

  /// @brief Field _digestOID, offset 0x20, size 0x8
  __declspec(property(get = __get__digestOID, put = __set__digestOID))::StringW _digestOID;

  /// @brief Field _encOID, offset 0x28, size 0x8
  __declspec(property(get = __get__encOID, put = __set__encOID))::StringW _encOID;

  /// @brief Field _sAttr, offset 0x30, size 0x8
  __declspec(property(get = __get__sAttr, put = __set__sAttr))::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* _sAttr;

  /// @brief Field _unsAttr, offset 0x38, size 0x8
  __declspec(property(get = __get__unsAttr, put = __set__unsAttr))::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* _unsAttr;

  /// @brief Field _encName, offset 0x40, size 0x8
  __declspec(property(get = __get__encName, put = __set__encName))::StringW _encName;

  /// @brief Field _sig, offset 0x48, size 0x8
  __declspec(property(get = __get__sig, put = __set__sig))::Org::BouncyCastle::Crypto::ISigner* _sig;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::ISignerInfoGenerator"
  constexpr operator ::Org::BouncyCastle::Cms::ISignerInfoGenerator*() noexcept;

  constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*& __get_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*> const& __get_outer() const;

  constexpr void __set_outer(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*& __get__signerIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*> const& __get__signerIdentifier() const;

  constexpr void __set__signerIdentifier(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* value);

  constexpr ::StringW& __get__digestOID();

  constexpr ::StringW const& __get__digestOID() const;

  constexpr void __set__digestOID(::StringW value);

  constexpr ::StringW& __get__encOID();

  constexpr ::StringW const& __get__encOID() const;

  constexpr void __set__encOID(::StringW value);

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __get__sAttr();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> const& __get__sAttr() const;

  constexpr void __set__sAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& __get__unsAttr();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*> const& __get__unsAttr() const;

  constexpr void __set__unsAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value);

  constexpr ::StringW& __get__encName();

  constexpr ::StringW const& __get__encName() const;

  constexpr void __set__encName(::StringW value);

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __get__sig();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __get__sig() const;

  constexpr void __set__sig(::Org::BouncyCastle::Crypto::ISigner* value);

  static inline ::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl*
  New_ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier,
           ::StringW digestOID, ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr);

  /// @brief Method .ctor addr 0x11f07d0 size 0x324 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                    ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW digestOID, ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr,
                    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr);

  /// @brief Method Generate addr 0x11f2974 size 0x8f0 virtual true final true
  inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm,
                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> calculatedDigest);

  // Ctor Parameters [CppParam { name: "", ty: "__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl(__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl(__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Type: ::CmsSignedDataOutputStream
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(655))
// CS Name: ::CmsSignedDataStreamGenerator::CmsSignedDataOutputStream*
class CORDL_TYPE __CmsSignedDataStreamGenerator__CmsSignedDataOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field outer, offset 0x30, size 0x8
  __declspec(property(get = __get_outer, put = __set_outer))::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer;

  /// @brief Field _out, offset 0x38, size 0x8
  __declspec(property(get = __get__out, put = __set__out))::System::IO::Stream* _out;

  /// @brief Field _contentOID, offset 0x40, size 0x8
  __declspec(property(get = __get__contentOID, put = __set__contentOID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* _contentOID;

  /// @brief Field _sGen, offset 0x48, size 0x8
  __declspec(property(get = __get__sGen, put = __set__sGen))::Org::BouncyCastle::Asn1::BerSequenceGenerator* _sGen;

  /// @brief Field _sigGen, offset 0x50, size 0x8
  __declspec(property(get = __get__sigGen, put = __set__sigGen))::Org::BouncyCastle::Asn1::BerSequenceGenerator* _sigGen;

  /// @brief Field _eiGen, offset 0x58, size 0x8
  __declspec(property(get = __get__eiGen, put = __set__eiGen))::Org::BouncyCastle::Asn1::BerSequenceGenerator* _eiGen;

  constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*& __get_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*> const& __get_outer() const;

  constexpr void __set_outer(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* value);

  constexpr ::System::IO::Stream*& __get__out();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get__out() const;

  constexpr void __set__out(::System::IO::Stream* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get__contentOID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get__contentOID() const;

  constexpr void __set__contentOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __get__sGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __get__sGen() const;

  constexpr void __set__sGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __get__sigGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __get__sigGen() const;

  constexpr void __set__sigGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __get__eiGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __get__eiGen() const;

  constexpr void __set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  static inline ::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream*
  New_ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::System::IO::Stream* outStream, ::StringW contentOID, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen,
           ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sigGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);

  /// @brief Method .ctor addr 0x11f2230 size 0xa8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, ::System::IO::Stream* outStream, ::StringW contentOID, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen,
                    ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sigGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);

  /// @brief Method WriteByte addr 0x11f326c size 0x24 virtual true final false
  inline void WriteByte(uint8_t b);

  /// @brief Method Write addr 0x11f3290 size 0x24 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t len);

  /// @brief Method Close addr 0x11f32b4 size 0x1c virtual true final false
  inline void Close();

  /// @brief Method DoClose addr 0x11f32d0 size 0xfd0 virtual false final false
  inline void DoClose();

  /// @brief Method WriteToGenerator addr 0x11f42a0 size 0x64 virtual false final false
  static inline void WriteToGenerator(::Org::BouncyCastle::Asn1::Asn1Generator* ag, ::Org::BouncyCastle::Asn1::Asn1Encodable* ae);

  // Ctor Parameters [CppParam { name: "", ty: "__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CmsSignedDataStreamGenerator__CmsSignedDataOutputStream(__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CmsSignedDataStreamGenerator__CmsSignedDataOutputStream(__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CmsSignedDataStreamGenerator__CmsSignedDataOutputStream();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsSignedDataStreamGenerator
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(649))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(656))
// CS Name: ::Org.BouncyCastle.Cms::CmsSignedDataStreamGenerator*
class CORDL_TYPE CmsSignedDataStreamGenerator : public ::Org::BouncyCastle::Cms::CmsSignedGenerator {
public:
  // Declarations
  using CmsSignedDataOutputStream = ::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream;

  using SignerInfoGeneratorImpl = ::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl;

  using DigestAndSignerInfoGeneratorHolder = ::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder;

  /// @brief Field _signerInfs, offset 0x40, size 0x8
  __declspec(property(get = __get__signerInfs, put = __set__signerInfs))::System::Collections::IList* _signerInfs;

  /// @brief Field _messageDigestOids, offset 0x48, size 0x8
  __declspec(property(get = __get__messageDigestOids, put = __set__messageDigestOids))::Org::BouncyCastle::Utilities::Collections::ISet* _messageDigestOids;

  /// @brief Field _messageDigests, offset 0x50, size 0x8
  __declspec(property(get = __get__messageDigests, put = __set__messageDigests))::System::Collections::IDictionary* _messageDigests;

  /// @brief Field _messageHashes, offset 0x58, size 0x8
  __declspec(property(get = __get__messageHashes, put = __set__messageHashes))::System::Collections::IDictionary* _messageHashes;

  /// @brief Field _messageDigestsLocked, offset 0x60, size 0x1
  __declspec(property(get = __get__messageDigestsLocked, put = __set__messageDigestsLocked)) bool _messageDigestsLocked;

  /// @brief Field _bufferSize, offset 0x64, size 0x4
  __declspec(property(get = __get__bufferSize, put = __set__bufferSize)) int32_t _bufferSize;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper))::Org::BouncyCastle::Cms::CmsSignedHelper* Helper;

  constexpr ::System::Collections::IList*& __get__signerInfs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get__signerInfs() const;

  constexpr void __set__signerInfs(::System::Collections::IList* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get__messageDigestOids();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get__messageDigestOids() const;

  constexpr void __set__messageDigestOids(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::System::Collections::IDictionary*& __get__messageDigests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get__messageDigests() const;

  constexpr void __set__messageDigests(::System::Collections::IDictionary* value);

  constexpr ::System::Collections::IDictionary*& __get__messageHashes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get__messageHashes() const;

  constexpr void __set__messageHashes(::System::Collections::IDictionary* value);

  constexpr bool& __get__messageDigestsLocked();

  constexpr bool const& __get__messageDigestsLocked() const;

  constexpr void __set__messageDigestsLocked(bool value);

  constexpr int32_t& __get__bufferSize();

  constexpr int32_t const& __get__bufferSize() const;

  constexpr void __set__bufferSize(int32_t value);

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value);

  static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* getStaticF_Helper();

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* New_ctor();

  /// @brief Method .ctor addr 0x11ef5d0 size 0xd0 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x11efbe4 size 0xe0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method SetBufferSize addr 0x11efcc4 size 0x8 virtual false final false
  inline void SetBufferSize(int32_t bufferSize);

  /// @brief Method AddDigests addr 0x11efccc size 0x4 virtual false final false
  inline void AddDigests(::ArrayW<::StringW, ::Array<::StringW>*> digestOids);

  /// @brief Method AddDigests addr 0x11ef850 size 0x31c virtual false final false
  inline void AddDigests(::System::Collections::IEnumerable* digestOids);

  /// @brief Method AddSigner addr 0x11eff00 size 0x8c virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOid);

  /// @brief Method AddSigner addr 0x11f0044 size 0x94 virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW encryptionOid, ::StringW digestOid);

  /// @brief Method AddSigner addr 0x11f017c size 0xd0 virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOid,
                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method AddSigner addr 0x11f024c size 0xd8 virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW encryptionOid, ::StringW digestOid,
                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method AddSigner addr 0x11eff8c size 0xb8 virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW digestOid,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator);

  /// @brief Method AddSigner addr 0x11f00d8 size 0xa4 virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert, ::StringW encryptionOid, ::StringW digestOid,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator);

  /// @brief Method AddSigner addr 0x11f0484 size 0x8c virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW digestOid);

  /// @brief Method AddSigner addr 0x11f05c8 size 0x94 virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW encryptionOid, ::StringW digestOid);

  /// @brief Method AddSigner addr 0x11f0700 size 0xd0 virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW digestOid,
                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr);

  /// @brief Method AddSigner addr 0x11f0510 size 0xb8 virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW digestOid,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator);

  /// @brief Method AddSigner addr 0x11f065c size 0xa4 virtual false final false
  inline void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyID, ::StringW encryptionOid, ::StringW digestOid,
                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator);

  /// @brief Method DoAddSigner addr 0x11f0324 size 0x160 virtual false final false
  inline void DoAddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW encryptionOid,
                          ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGenerator);

  /// @brief Method AddSignerCallback addr 0x11f0b20 size 0x38 virtual true final false
  inline void AddSignerCallback(::Org::BouncyCastle::Cms::SignerInformation* si);

  /// @brief Method Open addr 0x11f0cb8 size 0x8 virtual false final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream);

  /// @brief Method Open addr 0x11f0cc0 size 0x7c virtual false final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, bool encapsulate);

  /// @brief Method Open addr 0x11f0d3c size 0x88 virtual false final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, bool encapsulate, ::System::IO::Stream* dataOutputStream);

  /// @brief Method Open addr 0x11ef6a0 size 0xc virtual false final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, ::StringW signedContentType, bool encapsulate);

  /// @brief Method Open addr 0x11f0dc4 size 0x848 virtual false final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, ::StringW signedContentType, bool encapsulate, ::System::IO::Stream* dataOutputStream);

  /// @brief Method RegisterDigestOid addr 0x11f0b58 size 0x160 virtual false final false
  inline void RegisterDigestOid(::StringW digestOid);

  /// @brief Method ConfigureDigest addr 0x11efcd0 size 0x230 virtual false final false
  inline void ConfigureDigest(::StringW digestOid);

  /// @brief Method Generate addr 0x11f22d8 size 0x10c virtual false final false
  inline void Generate(::System::IO::Stream* outStream, ::StringW eContentType, bool encapsulate, ::System::IO::Stream* dataOutputStream, ::Org::BouncyCastle::Cms::CmsProcessable* content);

  /// @brief Method CalculateVersion addr 0x11f160c size 0x720 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* CalculateVersion(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentOid);

  /// @brief Method CheckForVersion3 addr 0x11f23e4 size 0x388 virtual false final false
  inline bool CheckForVersion3(::System::Collections::IList* signerInfos);

  /// @brief Method AttachDigestsToOutputStream addr 0x11f1e7c size 0x3b4 virtual false final false
  static inline ::System::IO::Stream* AttachDigestsToOutputStream(::System::Collections::ICollection* digests, ::System::IO::Stream* s);

  /// @brief Method GetSafeOutputStream addr 0x11f276c size 0x64 virtual false final false
  static inline ::System::IO::Stream* GetSafeOutputStream(::System::IO::Stream* s);

  /// @brief Method GetSafeTeeOutputStream addr 0x11f1dbc size 0xc0 virtual false final false
  static inline ::System::IO::Stream* GetSafeTeeOutputStream(::System::IO::Stream* s1, ::System::IO::Stream* s2);

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedDataStreamGenerator(CmsSignedDataStreamGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedDataStreamGenerator(CmsSignedDataStreamGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedDataStreamGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, 0x68>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*, "Org.BouncyCastle.Cms", "CmsSignedDataStreamGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream*, "Org.BouncyCastle.Cms", "CmsSignedDataStreamGenerator/CmsSignedDataOutputStream");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder*, "Org.BouncyCastle.Cms",
                       "CmsSignedDataStreamGenerator/DigestAndSignerInfoGeneratorHolder");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl*, "Org.BouncyCastle.Cms", "CmsSignedDataStreamGenerator/SignerInfoGeneratorImpl");
