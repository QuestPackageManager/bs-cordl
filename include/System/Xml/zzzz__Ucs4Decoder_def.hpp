#pragma once
// IWYU pragma private; include "System/Xml/Ucs4Decoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Decoder_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ucs4Decoder)
// Forward declare root types
namespace System::Xml {
class Ucs4Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Ucs4Decoder);
// Dependencies System.Text.Decoder
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.Ucs4Decoder
class CORDL_TYPE Ucs4Decoder : public ::System::Text::Decoder {
public:
  // Declarations
  /// @brief Field lastBytes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lastBytes, put = __cordl_internal_set_lastBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> lastBytes;

  /// @brief Field lastBytesCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_lastBytesCount, put = __cordl_internal_set_lastBytesCount)) int32_t lastBytesCount;

  /// @brief Method Convert, addr 0x436493c, size 0x214, virtual true, abstract: false, final false
  inline void Convert(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, bool flush,
                      ::ByRef<int32_t> bytesUsed, ::ByRef<int32_t> charsUsed, ::ByRef<bool> completed);

  /// @brief Method GetCharCount, addr 0x4364778, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetChars, addr 0x4364794, size 0x1a8, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetFullChars, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetFullChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  static inline ::System::Xml::Ucs4Decoder* New_ctor();

  /// @brief Method Ucs4ToUTF16, addr 0x4364b50, size 0x58, virtual false, abstract: false, final false
  inline void Ucs4ToUTF16(uint32_t code, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_lastBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_lastBytes();

  constexpr int32_t const& __cordl_internal_get_lastBytesCount() const;

  constexpr int32_t& __cordl_internal_get_lastBytesCount();

  constexpr void __cordl_internal_set_lastBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_lastBytesCount(int32_t value);

  /// @brief Method .ctor, addr 0x4364ba8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ucs4Decoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ucs4Decoder(Ucs4Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ucs4Decoder(Ucs4Decoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7358 };

  /// @brief Field lastBytes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___lastBytes;

  /// @brief Field lastBytesCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___lastBytesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Ucs4Decoder, ___lastBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Ucs4Decoder, ___lastBytesCount) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Ucs4Decoder, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Ucs4Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Decoder*, "System.Xml", "Ucs4Decoder");
