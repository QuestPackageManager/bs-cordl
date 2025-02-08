#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/Base64Encoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__IEncoder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Base64Encoder)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class Base64Encoder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::Base64Encoder);
// Dependencies Org.BouncyCastle.Utilities.Encoders.IEncoder, System.Object
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Encoders.Base64Encoder
class CORDL_TYPE Base64Encoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field decodingTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_decodingTable, put = __cordl_internal_set_decodingTable)) ::ArrayW<uint8_t, ::Array<uint8_t>*> decodingTable;

  /// @brief Field encodingTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_encodingTable, put = __cordl_internal_set_encodingTable)) ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingTable;

  /// @brief Field padding, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_padding, put = __cordl_internal_set_padding)) uint8_t padding;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::Encoders::IEncoder"
  constexpr operator ::Org::BouncyCastle::Utilities::Encoders::IEncoder*() noexcept;

  /// @brief Method Decode, addr 0x25d6f44, size 0x3f0, virtual true, abstract: false, final true
  inline int32_t Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t off, int32_t length, ::System::IO::Stream* outStream);

  /// @brief Method DecodeString, addr 0x25d7598, size 0x3fc, virtual true, abstract: false, final true
  inline int32_t DecodeString(::StringW data, ::System::IO::Stream* outStream);

  /// @brief Method Encode, addr 0x25d6dec, size 0x12c, virtual true, abstract: false, final true
  inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, ::System::IO::Stream* outStream);

  /// @brief Method Encode, addr 0x25d6a5c, size 0x390, virtual false, abstract: false, final false
  inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuf, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBuf, int32_t outOff);

  /// @brief Method InitialiseDecodingTable, addr 0x25d68fc, size 0xbc, virtual false, abstract: false, final false
  inline void InitialiseDecodingTable();

  static inline ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_decodingTable() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_decodingTable();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_encodingTable() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_encodingTable();

  constexpr uint8_t const& __cordl_internal_get_padding() const;

  constexpr uint8_t& __cordl_internal_get_padding();

  constexpr void __cordl_internal_set_decodingTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_encodingTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_padding(uint8_t value);

  /// @brief Method .ctor, addr 0x25d69b8, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method decodeLastBlock, addr 0x25d73ac, size 0x1ec, virtual false, abstract: false, final false
  inline int32_t decodeLastBlock(::System::IO::Stream* outStream, char16_t c1, char16_t c2, char16_t c3, char16_t c4);

  /// @brief Convert to "::Org::BouncyCastle::Utilities::Encoders::IEncoder"
  constexpr ::Org::BouncyCastle::Utilities::Encoders::IEncoder* i___Org__BouncyCastle__Utilities__Encoders__IEncoder() noexcept;

  /// @brief Method ignore, addr 0x25d6f18, size 0x2c, virtual false, abstract: false, final false
  inline bool ignore(char16_t c);

  /// @brief Method nextI, addr 0x25d7334, size 0x78, virtual false, abstract: false, final false
  inline int32_t nextI(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t i, int32_t finish);

  /// @brief Method nextI, addr 0x25d7994, size 0x84, virtual false, abstract: false, final false
  inline int32_t nextI(::StringW data, int32_t i, int32_t finish);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Base64Encoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Base64Encoder(Base64Encoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Base64Encoder(Base64Encoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1795 };

  /// @brief Field encodingTable, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___encodingTable;

  /// @brief Field padding, offset: 0x18, size: 0x1, def value: None
  uint8_t ___padding;

  /// @brief Field decodingTable, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___decodingTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::Base64Encoder, ___encodingTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::Base64Encoder, ___padding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::Base64Encoder, ___decodingTable) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::Base64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*, "Org.BouncyCastle.Utilities.Encoders", "Base64Encoder");
