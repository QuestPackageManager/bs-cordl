#pragma once
// IWYU pragma private; include "System/Xml/Base64Decoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__IncrementalReadDecoder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Base64Decoder)
namespace System {
class Array;
}
// Forward declare root types
namespace System::Xml {
class Base64Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Base64Decoder);
// Dependencies System.Xml.IncrementalReadDecoder
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.Base64Decoder
class CORDL_TYPE Base64Decoder : public ::System::Xml::IncrementalReadDecoder {
public:
  // Declarations
  /// @brief Field CharsBase64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CharsBase64, put = setStaticF_CharsBase64)) ::StringW CharsBase64;

  __declspec(property(get = get_DecodedCount)) int32_t DecodedCount;

  __declspec(property(get = get_IsFull)) bool IsFull;

  /// @brief Field MapBase64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MapBase64, put = setStaticF_MapBase64)) ::ArrayW<uint8_t, ::Array<uint8_t>*> MapBase64;

  /// @brief Field bits, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_bits, put = __cordl_internal_set_bits)) int32_t bits;

  /// @brief Field bitsFilled, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_bitsFilled, put = __cordl_internal_set_bitsFilled)) int32_t bitsFilled;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field curIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_curIndex, put = __cordl_internal_set_curIndex)) int32_t curIndex;

  /// @brief Field endIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_endIndex, put = __cordl_internal_set_endIndex)) int32_t endIndex;

  /// @brief Field startIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_startIndex, put = __cordl_internal_set_startIndex)) int32_t startIndex;

  /// @brief Method ConstructMapBase64, addr 0x5f75c88, size 0x324, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConstructMapBase64();

  /// @brief Method Decode, addr 0x5f756bc, size 0x150, virtual true, abstract: false, final false
  inline int32_t Decode(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len);

  /// @brief Method Decode, addr 0x5f75a88, size 0x14c, virtual true, abstract: false, final false
  inline int32_t Decode(::StringW str, int32_t startPos, int32_t len);

  /// @brief Method Decode, addr 0x5f7580c, size 0x27c, virtual false, abstract: false, final false
  inline void Decode(char16_t* pChars, char16_t* pCharsEndPos, uint8_t* pBytes, uint8_t* pBytesEndPos, ::ByRef<int32_t> charsDecoded, ::ByRef<int32_t> bytesDecoded);

  static inline ::System::Xml::Base64Decoder* New_ctor();

  /// @brief Method Reset, addr 0x5f75bd4, size 0x8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SetNextOutputBuffer, addr 0x5f75bdc, size 0xac, virtual true, abstract: false, final false
  inline void SetNextOutputBuffer(::System::Array* buffer, int32_t index, int32_t count);

  constexpr int32_t const& __cordl_internal_get_bits() const;

  constexpr int32_t& __cordl_internal_get_bits();

  constexpr int32_t const& __cordl_internal_get_bitsFilled() const;

  constexpr int32_t& __cordl_internal_get_bitsFilled();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_curIndex() const;

  constexpr int32_t& __cordl_internal_get_curIndex();

  constexpr int32_t const& __cordl_internal_get_endIndex() const;

  constexpr int32_t& __cordl_internal_get_endIndex();

  constexpr int32_t const& __cordl_internal_get_startIndex() const;

  constexpr int32_t& __cordl_internal_get_startIndex();

  constexpr void __cordl_internal_set_bits(int32_t value);

  constexpr void __cordl_internal_set_bitsFilled(int32_t value);

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_curIndex(int32_t value);

  constexpr void __cordl_internal_set_endIndex(int32_t value);

  constexpr void __cordl_internal_set_startIndex(int32_t value);

  /// @brief Method .ctor, addr 0x5f75fac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_CharsBase64();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_MapBase64();

  /// @brief Method get_DecodedCount, addr 0x5f756a0, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_DecodedCount();

  /// @brief Method get_IsFull, addr 0x5f756ac, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsFull();

  static inline void setStaticF_CharsBase64(::StringW value);

  static inline void setStaticF_MapBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Base64Decoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Base64Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Base64Decoder(Base64Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Base64Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Base64Decoder(Base64Decoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9216 };

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field startIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___startIndex;

  /// @brief Field curIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___curIndex;

  /// @brief Field endIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___endIndex;

  /// @brief Field bits, offset: 0x24, size: 0x4, def value: None
  int32_t ___bits;

  /// @brief Field bitsFilled, offset: 0x28, size: 0x4, def value: None
  int32_t ___bitsFilled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Base64Decoder, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Base64Decoder, ___startIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Base64Decoder, ___curIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Base64Decoder, ___endIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Base64Decoder, ___bits) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Base64Decoder, ___bitsFilled) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Base64Decoder, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Base64Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Base64Decoder*, "System.Xml", "Base64Decoder");
