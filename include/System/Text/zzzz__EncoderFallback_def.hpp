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
// Type: System.Text::EncoderFallback
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::EncoderFallback*
class CORDL_TYPE EncoderFallback : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  /// @brief Field s_exceptionFallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_exceptionFallback, put = setStaticF_s_exceptionFallback)) ::System::Text::EncoderFallback* s_exceptionFallback;

  /// @brief Field s_replacementFallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_replacementFallback, put = setStaticF_s_replacementFallback)) ::System::Text::EncoderFallback* s_replacementFallback;

  /// @brief Method CreateFallbackBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();

  static inline ::System::Text::EncoderFallback* New_ctor();

  /// @brief Method .ctor, addr 0x3c1724c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::EncoderFallback* getStaticF_s_exceptionFallback();

  static inline ::System::Text::EncoderFallback* getStaticF_s_replacementFallback();

  /// @brief Method get_ExceptionFallback, addr 0x3c18004, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Text::EncoderFallback* get_ExceptionFallback();

  /// @brief Method get_MaxCharCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_MaxCharCount();

  /// @brief Method get_ReplacementFallback, addr 0x3c17f2c, size 0x90, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2847 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderFallback, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderFallback*, "System.Text", "EncoderFallback");
