#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderExceptionFallback)
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class EncoderExceptionFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncoderExceptionFallback);
// Type: System.Text::EncoderExceptionFallback
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::EncoderExceptionFallback*
class CORDL_TYPE EncoderExceptionFallback : public ::System::Text::EncoderFallback {
public:
  // Declarations
  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  /// @brief Method CreateFallbackBuffer, addr 0x26b2384, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method Equals, addr 0x26b23f0, size 0x5c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x26b244c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Text::EncoderExceptionFallback* New_ctor();

  /// @brief Method .ctor, addr 0x26b237c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MaxCharCount, addr 0x26b23e8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MaxCharCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderExceptionFallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderExceptionFallback(EncoderExceptionFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderExceptionFallback(EncoderExceptionFallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderExceptionFallback, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderExceptionFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderExceptionFallback*, "System.Text", "EncoderExceptionFallback");
