#pragma once
// IWYU pragma private; include "System/Text/UTF8Encoding_UTF8EncodingSealed.hpp"
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
namespace GlobalNamespace {
class UTF8Encoding_UTF8EncodingSealed;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed);
// Dependencies System.Text.UTF8Encoding
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Text.UTF8Encoding/UTF8EncodingSealed
class CORDL_TYPE UTF8Encoding_UTF8EncodingSealed : public ::System::Text::UTF8Encoding {
public:
  // Declarations
  __declspec(property(get = get_Preamble)) ::System::ReadOnlySpan_1<uint8_t> Preamble;

  static inline ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed* New_ctor(bool encoderShouldEmitUTF8Identifier);

  /// @brief Method .ctor, addr 0x3c88880, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(bool encoderShouldEmitUTF8Identifier);

  /// @brief Method get_Preamble, addr 0x3c888e8, size 0xe4, virtual true, abstract: false, final false
  inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UTF8Encoding_UTF8EncodingSealed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding_UTF8EncodingSealed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UTF8Encoding_UTF8EncodingSealed(UTF8Encoding_UTF8EncodingSealed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding_UTF8EncodingSealed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UTF8Encoding_UTF8EncodingSealed(UTF8Encoding_UTF8EncodingSealed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*, "System.Text", "UTF8Encoding/UTF8EncodingSealed");
