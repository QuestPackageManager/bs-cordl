#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAuthenticatedDataStreamGenerator)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Cms {
class __CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class __CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream);
// Type: ::CmsAuthenticatedDataOutputStream
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(622))
// CS Name: ::CmsAuthenticatedDataStreamGenerator::CmsAuthenticatedDataOutputStream*
class CORDL_TYPE __CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field macStream, offset 0x30, size 0x8
  __declspec(property(get = __get_macStream, put = __set_macStream))::System::IO::Stream* macStream;

  /// @brief Field mac, offset 0x38, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::Org::BouncyCastle::Crypto::IMac* mac;

  /// @brief Field cGen, offset 0x40, size 0x8
  __declspec(property(get = __get_cGen, put = __set_cGen))::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen;

  /// @brief Field authGen, offset 0x48, size 0x8
  __declspec(property(get = __get_authGen, put = __set_authGen))::Org::BouncyCastle::Asn1::BerSequenceGenerator* authGen;

  /// @brief Field eiGen, offset 0x50, size 0x8
  __declspec(property(get = __get_eiGen, put = __set_eiGen))::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen;

  constexpr ::System::IO::Stream*& __get_macStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_macStream() const;

  constexpr void __set_macStream(::System::IO::Stream* value);

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __get_mac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __get_mac() const;

  constexpr void __set_mac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __get_cGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __get_cGen() const;

  constexpr void __set_cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __get_authGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __get_authGen() const;

  constexpr void __set_authGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __get_eiGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const& __get_eiGen() const;

  constexpr void __set_eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  static inline ::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream* New_ctor(::System::IO::Stream* macStream, ::Org::BouncyCastle::Crypto::IMac* mac,
                                                                                                                            ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                                                                                                                            ::Org::BouncyCastle::Asn1::BerSequenceGenerator* authGen,
                                                                                                                            ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);

  /// @brief Method .ctor, addr 0x11dbfcc, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* macStream, ::Org::BouncyCastle::Crypto::IMac* mac, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                    ::Org::BouncyCastle::Asn1::BerSequenceGenerator* authGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);

  /// @brief Method WriteByte, addr 0x11dc1d8, size 0x24, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method Write, addr 0x11dc1fc, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t len);

  /// @brief Method Close, addr 0x11dc220, size 0x138, virtual true, abstract: false, final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream(__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream(__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream();

public:
  /// @brief Field macStream, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___macStream;

  /// @brief Field mac, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mac;

  /// @brief Field cGen, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ___cGen;

  /// @brief Field authGen, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ___authGen;

  /// @brief Field eiGen, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ___eiGen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, ___macStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, ___mac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, ___cGen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, ___authGen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, ___eiGen) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedDataStreamGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(618))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(623))
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthenticatedDataStreamGenerator*
class CORDL_TYPE CmsAuthenticatedDataStreamGenerator : public ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator {
public:
  // Declarations
  using CmsAuthenticatedDataOutputStream = ::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream;

  /// @brief Field _bufferSize, offset 0x28, size 0x4
  __declspec(property(get = __get__bufferSize, put = __set__bufferSize)) int32_t _bufferSize;

  /// @brief Field _berEncodeRecipientSet, offset 0x2c, size 0x1
  __declspec(property(get = __get__berEncodeRecipientSet, put = __set__berEncodeRecipientSet)) bool _berEncodeRecipientSet;

  constexpr int32_t& __get__bufferSize();

  constexpr int32_t const& __get__bufferSize() const;

  constexpr void __set__bufferSize(int32_t value);

  constexpr bool& __get__berEncodeRecipientSet();

  constexpr bool const& __get__berEncodeRecipientSet() const;

  constexpr void __set__berEncodeRecipientSet(bool value);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x11db10c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x11db110, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method SetBufferSize, addr 0x11db114, size 0x8, virtual false, abstract: false, final false
  inline void SetBufferSize(int32_t bufferSize);

  /// @brief Method SetBerEncodeRecipients, addr 0x11db11c, size 0xc, virtual false, abstract: false, final false
  inline void SetBerEncodeRecipients(bool berEncodeRecipientSet);

  /// @brief Method Open, addr 0x11db128, size 0x5f8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, ::StringW macOid, ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen);

  /// @brief Method Open, addr 0x11db720, size 0x8ac, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgId, ::Org::BouncyCastle::Crypto::ICipherParameters* cipherParameters,
                                    ::Org::BouncyCastle::Asn1::Asn1EncodableVector* recipientInfos);

  /// @brief Method Open, addr 0x11dc01c, size 0xdc, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, ::StringW encryptionOid);

  /// @brief Method Open, addr 0x11dc0f8, size 0xe0, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, ::StringW encryptionOid, int32_t keySize);

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataStreamGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthenticatedDataStreamGenerator(CmsAuthenticatedDataStreamGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataStreamGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthenticatedDataStreamGenerator(CmsAuthenticatedDataStreamGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthenticatedDataStreamGenerator();

public:
  /// @brief Field _bufferSize, offset: 0x28, size: 0x4, def value: None
  int32_t ____bufferSize;

  /// @brief Field _berEncodeRecipientSet, offset: 0x2c, size: 0x1, def value: None
  bool ____berEncodeRecipientSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator, ____bufferSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator, ____berEncodeRecipientSet) == 0x2c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataStreamGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream*, "Org.BouncyCastle.Cms",
                       "CmsAuthenticatedDataStreamGenerator/CmsAuthenticatedDataOutputStream");
