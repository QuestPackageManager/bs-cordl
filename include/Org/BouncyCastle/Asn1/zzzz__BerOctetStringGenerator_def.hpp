#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerOctetStringGenerator)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class __BerOctetStringGenerator__BufferedBerOctetStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerOctetStringGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class __BerOctetStringGenerator__BufferedBerOctetStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerOctetStringGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream);
// Type: ::BufferedBerOctetStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(482))
// CS Name: ::BerOctetStringGenerator::BufferedBerOctetStream*
class CORDL_TYPE __BerOctetStringGenerator__BufferedBerOctetStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  /// @brief Field _buf, offset 0x30, size 0x8
  __declspec(property(get = __get__buf, put = __set__buf))::ArrayW<uint8_t, ::Array<uint8_t>*> _buf;

  /// @brief Field _off, offset 0x38, size 0x4
  __declspec(property(get = __get__off, put = __set__off)) int32_t _off;

  /// @brief Field _gen, offset 0x40, size 0x8
  __declspec(property(get = __get__gen, put = __set__gen))::Org::BouncyCastle::Asn1::BerOctetStringGenerator* _gen;

  /// @brief Field _derOut, offset 0x48, size 0x8
  __declspec(property(get = __get__derOut, put = __set__derOut))::Org::BouncyCastle::Asn1::DerOutputStream* _derOut;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__buf() const;

  constexpr void __set__buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__off();

  constexpr int32_t const& __get__off() const;

  constexpr void __set__off(int32_t value);

  constexpr ::Org::BouncyCastle::Asn1::BerOctetStringGenerator*& __get__gen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*> const& __get__gen() const;

  constexpr void __set__gen(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::DerOutputStream*& __get__derOut();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerOutputStream*> const& __get__derOut() const;

  constexpr void __set__derOut(::Org::BouncyCastle::Asn1::DerOutputStream* value);

  static inline ::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream* New_ctor(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* gen,
                                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method .ctor addr 0x114c020 size 0x8c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* gen, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method WriteByte addr 0x114c104 size 0x68 virtual true final false
  inline void WriteByte(uint8_t b);

  /// @brief Method Write addr 0x114c16c size 0x120 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len);

  /// @brief Method Close addr 0x114c28c size 0x48 virtual true final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "__BerOctetStringGenerator__BufferedBerOctetStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BerOctetStringGenerator__BufferedBerOctetStream(__BerOctetStringGenerator__BufferedBerOctetStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BerOctetStringGenerator__BufferedBerOctetStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BerOctetStringGenerator__BufferedBerOctetStream(__BerOctetStringGenerator__BufferedBerOctetStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BerOctetStringGenerator__BufferedBerOctetStream();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream, ____buf) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream, ____off) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream, ____gen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream, ____derOut) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
// Type: Org.BouncyCastle.Asn1::BerOctetStringGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(476))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(483))
// CS Name: ::Org.BouncyCastle.Asn1::BerOctetStringGenerator*
class CORDL_TYPE BerOctetStringGenerator : public ::Org::BouncyCastle::Asn1::BerGenerator {
public:
  // Declarations
  using BufferedBerOctetStream = ::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream;

  static inline ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* New_ctor(::System::IO::Stream* outStream);

  /// @brief Method .ctor addr 0x114be64 size 0x34 virtual false final false
  inline void _ctor(::System::IO::Stream* outStream);

  static inline ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method .ctor addr 0x114be98 size 0x54 virtual false final false
  inline void _ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method GetOctetOutputStream addr 0x114beec size 0x54 virtual false final false
  inline ::System::IO::Stream* GetOctetOutputStream();

  /// @brief Method GetOctetOutputStream addr 0x114bfb0 size 0x70 virtual false final false
  inline ::System::IO::Stream* GetOctetOutputStream(int32_t bufSize);

  /// @brief Method GetOctetOutputStream addr 0x114bf40 size 0x70 virtual false final false
  inline ::System::IO::Stream* GetOctetOutputStream(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  // Ctor Parameters [CppParam { name: "", ty: "BerOctetStringGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerOctetStringGenerator(BerOctetStringGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerOctetStringGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerOctetStringGenerator(BerOctetStringGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerOctetStringGenerator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerOctetStringGenerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerOctetStringGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerOctetStringGenerator*, "Org.BouncyCastle.Asn1", "BerOctetStringGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*, "Org.BouncyCastle.Asn1", "BerOctetStringGenerator/BufferedBerOctetStream");
