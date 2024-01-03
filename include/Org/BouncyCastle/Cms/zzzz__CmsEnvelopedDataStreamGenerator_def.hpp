#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsEnvelopedDataStreamGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedGenerator;
}
namespace Org::BouncyCastle::Cms {
class __CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream;
}
namespace Org::BouncyCastle::Crypto::IO {
class CipherStream;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class __CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream);
// Type: ::CmsEnvelopedDataOutputStream
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(636))
// CS Name: ::CmsEnvelopedDataStreamGenerator::CmsEnvelopedDataOutputStream*
class CORDL_TYPE __CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field _outer, offset 0x30, size 0x8
  __declspec(property(get = __get__outer, put = __set__outer))::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* _outer;

  /// @brief Field _out, offset 0x38, size 0x8
  __declspec(property(get = __get__out, put = __set__out))::Org::BouncyCastle::Crypto::IO::CipherStream* _out;

  /// @brief Field _cGen, offset 0x40, size 0x8
  __declspec(property(get = __get__cGen, put = __set__cGen))::Org::BouncyCastle::Asn1::BerSequenceGenerator* _cGen;

  /// @brief Field _envGen, offset 0x48, size 0x8
  __declspec(property(get = __get__envGen, put = __set__envGen))::Org::BouncyCastle::Asn1::BerSequenceGenerator* _envGen;

  /// @brief Field _eiGen, offset 0x50, size 0x8
  __declspec(property(get = __get__eiGen, put = __set__eiGen))::Org::BouncyCastle::Asn1::BerSequenceGenerator* _eiGen;

  constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*& __get__outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*> const& __get__outer() const;

  constexpr void __set__outer(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* value);

  constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream*& __get__out();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::CipherStream*> const& __get__out() const;

  constexpr void __set__out(::Org::BouncyCastle::Crypto::IO::CipherStream* value);

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __get__cGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __get__cGen() const;

  constexpr void __set__cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __get__envGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __get__envGen() const;

  constexpr void __set__envGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __get__eiGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __get__eiGen() const;

  constexpr void __set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  static inline ::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*
  New_ctor(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* outer, ::Org::BouncyCastle::Crypto::IO::CipherStream* outStream, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
           ::Org::BouncyCastle::Asn1::BerSequenceGenerator* envGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);

  /// @brief Method .ctor, addr 0x11e1dec, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* outer, ::Org::BouncyCastle::Crypto::IO::CipherStream* outStream, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                    ::Org::BouncyCastle::Asn1::BerSequenceGenerator* envGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);

  /// @brief Method WriteByte, addr 0x11e1e3c, size 0x24, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method Write, addr 0x11e1e60, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t len);

  /// @brief Method Close, addr 0x11e1e84, size 0x1e4, virtual true, abstract: false, final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream(__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream(__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream();

public:
  /// @brief Field _outer, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* ____outer;

  /// @brief Field _out, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IO::CipherStream* ____out;

  /// @brief Field _cGen, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ____cGen;

  /// @brief Field _envGen, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ____envGen;

  /// @brief Field _eiGen, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ____eiGen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream, ____outer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream, ____out) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream, ____cGen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream, ____envGen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream, ____eiGen) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsEnvelopedDataStreamGenerator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 61, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(617))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(637))
// CS Name: ::Org.BouncyCastle.Cms::CmsEnvelopedDataStreamGenerator*
class CORDL_TYPE CmsEnvelopedDataStreamGenerator : public ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator {
public:
  // Declarations
  using CmsEnvelopedDataOutputStream = ::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream;

  /// @brief Field _originatorInfo, offset 0x28, size 0x8
  __declspec(property(get = __get__originatorInfo, put = __set__originatorInfo))::System::Object* _originatorInfo;

  /// @brief Field _unprotectedAttributes, offset 0x30, size 0x8
  __declspec(property(get = __get__unprotectedAttributes, put = __set__unprotectedAttributes))::System::Object* _unprotectedAttributes;

  /// @brief Field _bufferSize, offset 0x38, size 0x4
  __declspec(property(get = __get__bufferSize, put = __set__bufferSize)) int32_t _bufferSize;

  /// @brief Field _berEncodeRecipientSet, offset 0x3c, size 0x1
  __declspec(property(get = __get__berEncodeRecipientSet, put = __set__berEncodeRecipientSet)) bool _berEncodeRecipientSet;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  constexpr ::System::Object*& __get__originatorInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__originatorInfo() const;

  constexpr void __set__originatorInfo(::System::Object* value);

  constexpr ::System::Object*& __get__unprotectedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__unprotectedAttributes() const;

  constexpr void __set__unprotectedAttributes(::System::Object* value);

  constexpr int32_t& __get__bufferSize();

  constexpr int32_t const& __get__bufferSize() const;

  constexpr void __set__bufferSize(int32_t value);

  constexpr bool& __get__berEncodeRecipientSet();

  constexpr bool const& __get__berEncodeRecipientSet() const;

  constexpr void __set__berEncodeRecipientSet(bool value);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x11dfc5c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x11dfcb4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method SetBufferSize, addr 0x11dfd1c, size 0x8, virtual false, abstract: false, final false
  inline void SetBufferSize(int32_t bufferSize);

  /// @brief Method SetBerEncodeRecipients, addr 0x11dfd24, size 0xc, virtual false, abstract: false, final false
  inline void SetBerEncodeRecipients(bool berEncodeRecipientSet);

  /// @brief Method get_Version, addr 0x11dfd30, size 0x80, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method Open, addr 0x11dfdb0, size 0x600, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, ::StringW encryptionOid, ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen);

  /// @brief Method Open, addr 0x11e03b0, size 0x880, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encAlgID, ::Org::BouncyCastle::Crypto::ICipherParameters* cipherParameters,
                                    ::Org::BouncyCastle::Asn1::Asn1EncodableVector* recipientInfos);

  /// @brief Method Open, addr 0x11e0c30, size 0xdc, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, ::StringW encryptionOid);

  /// @brief Method Open, addr 0x11e0d0c, size 0x10e0, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, ::StringW encryptionOid, int32_t keySize);

  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataStreamGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsEnvelopedDataStreamGenerator(CmsEnvelopedDataStreamGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataStreamGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsEnvelopedDataStreamGenerator(CmsEnvelopedDataStreamGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsEnvelopedDataStreamGenerator();

public:
  /// @brief Field _originatorInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____originatorInfo;

  /// @brief Field _unprotectedAttributes, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____unprotectedAttributes;

  /// @brief Field _bufferSize, offset: 0x38, size: 0x4, def value: None
  int32_t ____bufferSize;

  /// @brief Field _berEncodeRecipientSet, offset: 0x3c, size: 0x1, def value: None
  bool ____berEncodeRecipientSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator, ____originatorInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator, ____unprotectedAttributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator, ____bufferSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator, ____berEncodeRecipientSet) == 0x3c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*, "Org.BouncyCastle.Cms", "CmsEnvelopedDataStreamGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*, "Org.BouncyCastle.Cms",
                       "CmsEnvelopedDataStreamGenerator/CmsEnvelopedDataOutputStream");
