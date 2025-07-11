#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/ConstructedOctetStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstructedOctetStream)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class ConstructedOctetStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::ConstructedOctetStream);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseInputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.ConstructedOctetStream
class CORDL_TYPE ConstructedOctetStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  /// @brief Field _currentStream, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__currentStream, put = __cordl_internal_set__currentStream)) ::System::IO::Stream* _currentStream;

  /// @brief Field _first, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__first, put = __cordl_internal_set__first)) bool _first;

  /// @brief Field _parser, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__parser, put = __cordl_internal_set__parser)) ::Org::BouncyCastle::Asn1::Asn1StreamParser* _parser;

  /// @brief Method GetNextParser, addr 0x2637110, size 0x100, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* GetNextParser();

  static inline ::Org::BouncyCastle::Asn1::ConstructedOctetStream* New_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser);

  /// @brief Method Read, addr 0x2636f4c, size 0x1c4, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x2637210, size 0x134, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  constexpr ::System::IO::Stream* const& __cordl_internal_get__currentStream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__currentStream();

  constexpr bool const& __cordl_internal_get__first() const;

  constexpr bool& __cordl_internal_get__first();

  constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser* const& __cordl_internal_get__parser() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& __cordl_internal_get__parser();

  constexpr void __cordl_internal_set__currentStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__first(bool value);

  constexpr void __cordl_internal_set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value);

  /// @brief Method .ctor, addr 0x2634b4c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstructedOctetStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstructedOctetStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstructedOctetStream(ConstructedOctetStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstructedOctetStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstructedOctetStream(ConstructedOctetStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 499 };

  /// @brief Field _parser, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1StreamParser* ____parser;

  /// @brief Field _first, offset: 0x38, size: 0x1, def value: None
  bool ____first;

  /// @brief Field _currentStream, offset: 0x40, size: 0x8, def value: None
  ::System::IO::Stream* ____currentStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::ConstructedOctetStream, ____parser) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::ConstructedOctetStream, ____first) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::ConstructedOctetStream, ____currentStream) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::ConstructedOctetStream, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::ConstructedOctetStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::ConstructedOctetStream*, "Org.BouncyCastle.Asn1", "ConstructedOctetStream");
