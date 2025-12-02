#pragma once
// IWYU pragma private; include "System/Xml/UTF16Decoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Decoder_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF16Decoder)
// Forward declare root types
namespace System::Xml {
class UTF16Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::UTF16Decoder);
// Dependencies System.Text.Decoder
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.UTF16Decoder
class CORDL_TYPE UTF16Decoder : public ::System::Text::Decoder {
public:
  // Declarations
  /// @brief Field bigEndian, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_bigEndian, put = __cordl_internal_set_bigEndian)) bool bigEndian;

  /// @brief Field lastByte, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_lastByte, put = __cordl_internal_set_lastByte)) int32_t lastByte;

  /// @brief Method Convert, addr 0x60c6abc, size 0x1d0, virtual true, abstract: false, final false
  inline void Convert(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, bool flush,
                      ::ByRef<int32_t> bytesUsed, ::ByRef<int32_t> charsUsed, ::ByRef<bool> completed);

  /// @brief Method GetCharCount, addr 0x60c685c, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x60c686c, size 0xd8, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count, bool flush);

  /// @brief Method GetChars, addr 0x60c6944, size 0x178, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  static inline ::System::Xml::UTF16Decoder* New_ctor(bool bigEndian);

  constexpr bool const& __cordl_internal_get_bigEndian() const;

  constexpr bool& __cordl_internal_get_bigEndian();

  constexpr int32_t const& __cordl_internal_get_lastByte() const;

  constexpr int32_t& __cordl_internal_get_lastByte();

  constexpr void __cordl_internal_set_bigEndian(bool value);

  constexpr void __cordl_internal_set_lastByte(int32_t value);

  /// @brief Method .ctor, addr 0x60c684c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UTF16Decoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UTF16Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UTF16Decoder(UTF16Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UTF16Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UTF16Decoder(UTF16Decoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9416 };

  /// @brief Field bigEndian, offset: 0x20, size: 0x1, def value: None
  bool ___bigEndian;

  /// @brief Field lastByte, offset: 0x24, size: 0x4, def value: None
  int32_t ___lastByte;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::UTF16Decoder, ___bigEndian) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::UTF16Decoder, ___lastByte) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::UTF16Decoder, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::UTF16Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::UTF16Decoder*, "System.Xml", "UTF16Decoder");
