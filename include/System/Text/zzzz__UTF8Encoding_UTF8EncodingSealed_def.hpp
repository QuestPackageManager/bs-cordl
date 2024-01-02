#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__UTF8Encoding_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF8Encoding_UTF8EncodingSealed)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text {
class __UTF8Encoding__UTF8EncodingSealed;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::__UTF8Encoding__UTF8EncodingSealed);
// Type: ::UTF8EncodingSealed
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2865))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2862))
// CS Name: ::UTF8Encoding::UTF8EncodingSealed*
class CORDL_TYPE __UTF8Encoding__UTF8EncodingSealed : public ::System::Text::UTF8Encoding {
public:
  // Declarations
  __declspec(property(get = get_Preamble))::System::ReadOnlySpan_1<uint8_t> Preamble;

  static inline ::System::Text::__UTF8Encoding__UTF8EncodingSealed* New_ctor(bool encoderShouldEmitUTF8Identifier);

  /// @brief Method .ctor, addr 0x2445430, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(bool encoderShouldEmitUTF8Identifier);

  /// @brief Method get_Preamble, addr 0x24454a8, size 0xd4, virtual true, abstract: false, final false
  inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble();

  // Ctor Parameters [CppParam { name: "", ty: "__UTF8Encoding__UTF8EncodingSealed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UTF8Encoding__UTF8EncodingSealed(__UTF8Encoding__UTF8EncodingSealed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UTF8Encoding__UTF8EncodingSealed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UTF8Encoding__UTF8EncodingSealed(__UTF8Encoding__UTF8EncodingSealed const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UTF8Encoding__UTF8EncodingSealed();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__UTF8Encoding__UTF8EncodingSealed, 0x40>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::__UTF8Encoding__UTF8EncodingSealed);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__UTF8Encoding__UTF8EncodingSealed*, "System.Text", "UTF8Encoding/UTF8EncodingSealed");
