#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerOctetStringGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerOctetStringGenerator)
namespace Org::BouncyCastle::Asn1 {
class BerOctetStringGenerator_BufferedBerOctetStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerOctetStringGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class BerOctetStringGenerator_BufferedBerOctetStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerOctetStringGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseOutputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BerOctetStringGenerator/BufferedBerOctetStream
class CORDL_TYPE BerOctetStringGenerator_BufferedBerOctetStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field _buf, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buf, put = __cordl_internal_set__buf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _buf;

  /// @brief Field _derOut, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__derOut, put = __cordl_internal_set__derOut)) ::Org::BouncyCastle::Asn1::DerOutputStream* _derOut;

  /// @brief Field _gen, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gen, put = __cordl_internal_set__gen)) ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* _gen;

  /// @brief Field _off, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__off, put = __cordl_internal_set__off)) int32_t _off;

  /// @brief Method Close, addr 0x35645c4, size 0x48, virtual true, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream* New_ctor(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* gen, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method Write, addr 0x3564490, size 0x134, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len);

  /// @brief Method WriteByte, addr 0x3564428, size 0x68, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__buf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__buf();

  constexpr ::Org::BouncyCastle::Asn1::DerOutputStream* const& __cordl_internal_get__derOut() const;

  constexpr ::Org::BouncyCastle::Asn1::DerOutputStream*& __cordl_internal_get__derOut();

  constexpr ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* const& __cordl_internal_get__gen() const;

  constexpr ::Org::BouncyCastle::Asn1::BerOctetStringGenerator*& __cordl_internal_get__gen();

  constexpr int32_t const& __cordl_internal_get__off() const;

  constexpr int32_t& __cordl_internal_get__off();

  constexpr void __cordl_internal_set__buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__derOut(::Org::BouncyCastle::Asn1::DerOutputStream* value);

  constexpr void __cordl_internal_set__gen(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* value);

  constexpr void __cordl_internal_set__off(int32_t value);

  /// @brief Method .ctor, addr 0x3564348, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* gen, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerOctetStringGenerator_BufferedBerOctetStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerOctetStringGenerator_BufferedBerOctetStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerOctetStringGenerator_BufferedBerOctetStream(BerOctetStringGenerator_BufferedBerOctetStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerOctetStringGenerator_BufferedBerOctetStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerOctetStringGenerator_BufferedBerOctetStream(BerOctetStringGenerator_BufferedBerOctetStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 482 };

  /// @brief Field _buf, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buf;

  /// @brief Field _off, offset: 0x38, size: 0x4, def value: None
  int32_t ____off;

  /// @brief Field _gen, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* ____gen;

  /// @brief Field _derOut, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerOutputStream* ____derOut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream, ____buf) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream, ____off) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream, ____gen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream, ____derOut) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
// Dependencies Org.BouncyCastle.Asn1.BerGenerator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BerOctetStringGenerator
class CORDL_TYPE BerOctetStringGenerator : public ::Org::BouncyCastle::Asn1::BerGenerator {
public:
  // Declarations
  using BufferedBerOctetStream = ::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream;

  /// @brief Method GetOctetOutputStream, addr 0x3564204, size 0x58, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetOctetOutputStream();

  /// @brief Method GetOctetOutputStream, addr 0x356425c, size 0x6c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetOctetOutputStream(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method GetOctetOutputStream, addr 0x35642c8, size 0x80, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetOctetOutputStream(int32_t bufSize);

  static inline ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* New_ctor(::System::IO::Stream* outStream);

  static inline ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method .ctor, addr 0x35641d4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream);

  /// @brief Method .ctor, addr 0x35641e8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerOctetStringGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerOctetStringGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerOctetStringGenerator(BerOctetStringGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerOctetStringGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerOctetStringGenerator(BerOctetStringGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 483 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerOctetStringGenerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerOctetStringGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerOctetStringGenerator*, "Org.BouncyCastle.Asn1", "BerOctetStringGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*, "Org.BouncyCastle.Asn1", "BerOctetStringGenerator/BufferedBerOctetStream");
