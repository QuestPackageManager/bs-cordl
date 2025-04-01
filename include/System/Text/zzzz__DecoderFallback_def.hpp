#pragma once
// IWYU pragma private; include "System/Text/DecoderFallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderFallback)
namespace System::Text {
class DecoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class DecoderFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderFallback);
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.DecoderFallback
class CORDL_TYPE DecoderFallback : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  /// @brief Field s_exceptionFallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_exceptionFallback, put = setStaticF_s_exceptionFallback)) ::System::Text::DecoderFallback* s_exceptionFallback;

  /// @brief Field s_replacementFallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_replacementFallback, put = setStaticF_s_replacementFallback)) ::System::Text::DecoderFallback* s_replacementFallback;

  /// @brief Method CreateFallbackBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();

  static inline ::System::Text::DecoderFallback* New_ctor();

  /// @brief Method .ctor, addr 0x3e69c44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::DecoderFallback* getStaticF_s_exceptionFallback();

  static inline ::System::Text::DecoderFallback* getStaticF_s_replacementFallback();

  /// @brief Method get_ExceptionFallback, addr 0x3e6a4ac, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Text::DecoderFallback* get_ExceptionFallback();

  /// @brief Method get_MaxCharCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_MaxCharCount();

  /// @brief Method get_ReplacementFallback, addr 0x3e671c4, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Text::DecoderFallback* get_ReplacementFallback();

  static inline void setStaticF_s_exceptionFallback(::System::Text::DecoderFallback* value);

  static inline void setStaticF_s_replacementFallback(::System::Text::DecoderFallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderFallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecoderFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderFallback(DecoderFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderFallback(DecoderFallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderFallback, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderFallback*, "System.Text", "DecoderFallback");
