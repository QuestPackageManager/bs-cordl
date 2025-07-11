#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsCompressedDataStreamGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsCompressedDataStreamGenerator)
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsCompressedDataStreamGenerator_CmsCompressedOutputStream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZOutputStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsCompressedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsCompressedDataStreamGenerator_CmsCompressedOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseOutputStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsCompressedDataStreamGenerator/CmsCompressedOutputStream
class CORDL_TYPE CmsCompressedDataStreamGenerator_CmsCompressedOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field _cGen, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__cGen, put = __cordl_internal_set__cGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator* _cGen;

  /// @brief Field _eiGen, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__eiGen, put = __cordl_internal_set__eiGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator* _eiGen;

  /// @brief Field _out, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__out, put = __cordl_internal_set__out)) ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* _out;

  /// @brief Field _sGen, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sGen, put = __cordl_internal_set__sGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator* _sGen;

  /// @brief Method Close, addr 0x2654210, size 0xa8, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream* New_ctor(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* outStream,
                                                                                                               ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen,
                                                                                                               ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                                                                                                               ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);

  /// @brief Method Write, addr 0x26541ec, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t len);

  /// @brief Method WriteByte, addr 0x26541c8, size 0x24, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& __cordl_internal_get__cGen() const;

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __cordl_internal_get__cGen();

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& __cordl_internal_get__eiGen() const;

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __cordl_internal_get__eiGen();

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* const& __cordl_internal_get__out() const;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*& __cordl_internal_get__out();

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& __cordl_internal_get__sGen() const;

  constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& __cordl_internal_get__sGen();

  constexpr void __cordl_internal_set__cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr void __cordl_internal_set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  constexpr void __cordl_internal_set__out(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* value);

  constexpr void __cordl_internal_set__sGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value);

  /// @brief Method .ctor, addr 0x2654188, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* outStream, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                    ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsCompressedDataStreamGenerator_CmsCompressedOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataStreamGenerator_CmsCompressedOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsCompressedDataStreamGenerator_CmsCompressedOutputStream(CmsCompressedDataStreamGenerator_CmsCompressedOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataStreamGenerator_CmsCompressedOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsCompressedDataStreamGenerator_CmsCompressedOutputStream(CmsCompressedDataStreamGenerator_CmsCompressedOutputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 631 };

  /// @brief Field _out, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* ____out;

  /// @brief Field _sGen, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ____sGen;

  /// @brief Field _cGen, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ____cGen;

  /// @brief Field _eiGen, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerSequenceGenerator* ____eiGen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream, ____out) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream, ____sGen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream, ____cGen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream, ____eiGen) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsCompressedDataStreamGenerator
class CORDL_TYPE CmsCompressedDataStreamGenerator : public ::System::Object {
public:
  // Declarations
  using CmsCompressedOutputStream = ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream;

  /// @brief Field _bufferSize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__bufferSize, put = __cordl_internal_set__bufferSize)) int32_t _bufferSize;

  static inline ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator* New_ctor();

  /// @brief Method Open, addr 0x2653e60, size 0x7c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, ::StringW compressionOID);

  /// @brief Method Open, addr 0x2653edc, size 0x2ac, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStream, ::StringW contentOID, ::StringW compressionOID);

  /// @brief Method SetBufferSize, addr 0x2653e58, size 0x8, virtual false, abstract: false, final false
  inline void SetBufferSize(int32_t bufferSize);

  constexpr int32_t const& __cordl_internal_get__bufferSize() const;

  constexpr int32_t& __cordl_internal_get__bufferSize();

  constexpr void __cordl_internal_set__bufferSize(int32_t value);

  /// @brief Method .ctor, addr 0x2653e50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsCompressedDataStreamGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataStreamGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsCompressedDataStreamGenerator(CmsCompressedDataStreamGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataStreamGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsCompressedDataStreamGenerator(CmsCompressedDataStreamGenerator const&) = delete;

  /// @brief Field ZLib offset 0xffffffff size 0x8
  static constexpr ::ConstString ZLib{ u"1.2.840.113549.1.9.16.3.8" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 632 };

  /// @brief Field _bufferSize, offset: 0x10, size: 0x4, def value: None
  int32_t ____bufferSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator, ____bufferSize) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*, "Org.BouncyCastle.Cms", "CmsCompressedDataStreamGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream*, "Org.BouncyCastle.Cms", "CmsCompressedDataStreamGenerator/CmsCompressedOutputStream");
