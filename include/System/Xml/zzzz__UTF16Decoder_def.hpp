#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF16Decoder)
// Forward declare root types
namespace System::Xml {
class UTF16Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::UTF16Decoder);
// Type: System.Xml::UTF16Decoder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2827))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11453))
// CS Name: ::System.Xml::UTF16Decoder*
class CORDL_TYPE UTF16Decoder : public ::System::Text::Decoder {
public:
  // Declarations
  /// @brief Field bigEndian, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_bigEndian, put = __cordl_internal_set_bigEndian)) bool bigEndian;

  /// @brief Field lastByte, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_lastByte, put = __cordl_internal_set_lastByte)) int32_t lastByte;

  constexpr bool& __cordl_internal_get_bigEndian();

  constexpr bool const& __cordl_internal_get_bigEndian() const;

  constexpr void __cordl_internal_set_bigEndian(bool value);

  constexpr int32_t& __cordl_internal_get_lastByte();

  constexpr int32_t const& __cordl_internal_get_lastByte() const;

  constexpr void __cordl_internal_set_lastByte(int32_t value);

  static inline ::System::Xml::UTF16Decoder* New_ctor(bool bigEndian);

  /// @brief Method .ctor, addr 0x28a8b2c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian);

  /// @brief Method GetCharCount, addr 0x28a8b5c, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x28a8b6c, size 0xec, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count, bool flush);

  /// @brief Method GetChars, addr 0x28a8c58, size 0x238, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method Convert, addr 0x28a8e90, size 0x298, virtual true, abstract: false, final false
  inline void Convert(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, bool flush,
                      ByRef<int32_t> bytesUsed, ByRef<int32_t> charsUsed, ByRef<bool> completed);

  // Ctor Parameters [CppParam { name: "", ty: "UTF16Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UTF16Decoder(UTF16Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UTF16Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UTF16Decoder(UTF16Decoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UTF16Decoder();

public:
  /// @brief Field bigEndian, offset: 0x20, size: 0x1, def value: None
  bool ___bigEndian;

  /// @brief Field lastByte, offset: 0x24, size: 0x4, def value: None
  int32_t ___lastByte;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::UTF16Decoder, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::UTF16Decoder, ___bigEndian) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::UTF16Decoder, ___lastByte) == 0x24, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::UTF16Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::UTF16Decoder*, "System.Xml", "UTF16Decoder");
