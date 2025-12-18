#pragma once
// IWYU pragma private; include "System/Text/EncoderFallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderFallback)
namespace System::Text {
class EncoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class EncoderFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncoderFallback);
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.EncoderFallback
class CORDL_TYPE EncoderFallback : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  /// @brief Field s_exceptionFallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_exceptionFallback, put = setStaticF_s_exceptionFallback)) ::System::Text::EncoderFallback* s_exceptionFallback;

  /// @brief Field s_replacementFallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_replacementFallback, put = setStaticF_s_replacementFallback)) ::System::Text::EncoderFallback* s_replacementFallback;

  /// @brief Method CreateFallbackBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();

  static inline ::System::Text::EncoderFallback* New_ctor();

  /// @brief Method .ctor, addr 0x5923644, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::EncoderFallback* getStaticF_s_exceptionFallback();

  static inline ::System::Text::EncoderFallback* getStaticF_s_replacementFallback();

  /// @brief Method get_ExceptionFallback, addr 0x592428c, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Text::EncoderFallback* get_ExceptionFallback();

  /// @brief Method get_MaxCharCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_MaxCharCount();

  /// @brief Method get_ReplacementFallback, addr 0x5922c38, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Text::EncoderFallback* get_ReplacementFallback();

  static inline void setStaticF_s_exceptionFallback(::System::Text::EncoderFallback* value);

  static inline void setStaticF_s_replacementFallback(::System::Text::EncoderFallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderFallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncoderFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderFallback(EncoderFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderFallback(EncoderFallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2863 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderFallback, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderFallback*, "System.Text", "EncoderFallback");
