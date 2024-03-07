#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ucs4Encoding)
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class Ucs4Decoder;
}
// Forward declare root types
namespace System::Xml {
class Ucs4Encoding;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Ucs4Encoding);
// Type: System.Xml::Ucs4Encoding
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::Ucs4Encoding*
class CORDL_TYPE Ucs4Encoding : public ::System::Text::Encoding {
public:
  // Declarations
  __declspec(property(get = get_CodePage)) int32_t CodePage;

  __declspec(property(get = get_WebName))::StringW WebName;

  /// @brief Field ucs4Decoder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ucs4Decoder, put = __cordl_internal_set_ucs4Decoder))::System::Xml::Ucs4Decoder* ucs4Decoder;

  /// @brief Method GetByteCount, addr 0x29f1ef8, size 0x60, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetBytes, addr 0x29f1f58, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(::StringW s);

  /// @brief Method GetBytes, addr 0x29f1f60, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetCharCount, addr 0x29f1f70, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetChars, addr 0x29f1f90, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetDecoder, addr 0x29f1ef0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder, addr 0x29f1fd0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetMaxByteCount, addr 0x29f1f68, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0x29f1fb0, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  static inline ::System::Xml::Ucs4Encoding* New_ctor();

  constexpr ::System::Xml::Ucs4Decoder*& __cordl_internal_get_ucs4Decoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Ucs4Decoder*> const& __cordl_internal_get_ucs4Decoder() const;

  constexpr void __cordl_internal_set_ucs4Decoder(::System::Xml::Ucs4Decoder* value);

  /// @brief Method .ctor, addr 0x29f22d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodePage, addr 0x29f1fc8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_CodePage();

  /// @brief Method get_UCS4_2143, addr 0x29f2158, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_UCS4_2143();

  /// @brief Method get_UCS4_3412, addr 0x29f2218, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_UCS4_3412();

  /// @brief Method get_UCS4_Bigendian, addr 0x29f2098, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_UCS4_Bigendian();

  /// @brief Method get_UCS4_Littleendian, addr 0x29f1fd8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_UCS4_Littleendian();

  /// @brief Method get_WebName, addr 0x29f1ee4, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_WebName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ucs4Encoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ucs4Encoding(Ucs4Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ucs4Encoding(Ucs4Encoding const&) = delete;

  /// @brief Field ucs4Decoder, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Ucs4Decoder* ___ucs4Decoder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Ucs4Encoding, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Ucs4Encoding, ___ucs4Decoder) == 0x38, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Ucs4Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Encoding*, "System.Xml", "Ucs4Encoding");
