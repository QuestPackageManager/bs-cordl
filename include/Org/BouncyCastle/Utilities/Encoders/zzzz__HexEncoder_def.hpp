#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/HexEncoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HexEncoder)
namespace Org::BouncyCastle::Utilities::Encoders {
class IEncoder;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class HexEncoder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::HexEncoder);
// Type: Org.BouncyCastle.Utilities.Encoders::HexEncoder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::HexEncoder*
class CORDL_TYPE HexEncoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field decodingTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_decodingTable, put = __cordl_internal_set_decodingTable))::ArrayW<uint8_t, ::Array<uint8_t>*> decodingTable;

  /// @brief Field encodingTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_encodingTable, put = __cordl_internal_set_encodingTable))::ArrayW<uint8_t, ::Array<uint8_t>*> encodingTable;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::Encoders::IEncoder"
  constexpr operator ::Org::BouncyCastle::Utilities::Encoders::IEncoder*() noexcept;

  /// @brief Method Decode, addr 0x13bf520, size 0x2e4, virtual true, abstract: false, final true
  inline int32_t Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t off, int32_t length, ::System::IO::Stream* outStream);

  /// @brief Method DecodeStrict, addr 0x13bfcbc, size 0x248, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeStrict(::StringW str, int32_t off, int32_t len);

  /// @brief Method DecodeString, addr 0x13bf8d4, size 0x2fc, virtual true, abstract: false, final true
  inline int32_t DecodeString(::StringW data, ::System::IO::Stream* outStream);

  /// @brief Method Encode, addr 0x13bf22c, size 0x110, virtual true, abstract: false, final true
  inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, ::System::IO::Stream* outStream);

  /// @brief Method Encode, addr 0x13c01f8, size 0xd0, virtual false, abstract: false, final false
  inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuf, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBuf, int32_t outOff);

  /// @brief Method Ignore, addr 0x13c02c8, size 0x38, virtual false, abstract: false, final false
  static inline bool Ignore(char16_t c);

  /// @brief Method InitialiseDecodingTable, addr 0x13c0094, size 0x164, virtual false, abstract: false, final false
  inline void InitialiseDecodingTable();

  static inline ::Org::BouncyCastle::Utilities::Encoders::HexEncoder* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_decodingTable() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_decodingTable();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_encodingTable() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_encodingTable();

  constexpr void __cordl_internal_set_decodingTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_encodingTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x13bfff8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Utilities::Encoders::IEncoder"
  constexpr ::Org::BouncyCastle::Utilities::Encoders::IEncoder* i___Org__BouncyCastle__Utilities__Encoders__IEncoder() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HexEncoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HexEncoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HexEncoder(HexEncoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HexEncoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HexEncoder(HexEncoder const&) = delete;

  /// @brief Field encodingTable, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___encodingTable;

  /// @brief Field decodingTable, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___decodingTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::HexEncoder, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::HexEncoder, ___encodingTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Encoders::HexEncoder, ___decodingTable) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::HexEncoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::HexEncoder*, "Org.BouncyCastle.Utilities.Encoders", "HexEncoder");
