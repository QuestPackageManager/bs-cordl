#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderExceptionFallback)
namespace System {
class Object;
}
namespace System::Text {
class EncoderFallbackBuffer;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2844))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2841))
// CS Name: ::System.Text::EncoderExceptionFallback*
class CORDL_TYPE EncoderExceptionFallback : public ::System::Text::EncoderFallback {
public:
  // Declarations
  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  static inline ::System::Text::EncoderExceptionFallback* New_ctor();

  /// @brief Method .ctor addr 0x2633a6c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method CreateFallbackBuffer addr 0x2633a74 size 0x5c virtual true final false
  inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method get_MaxCharCount addr 0x2633ad8 size 0x8 virtual true final false
  inline int32_t get_MaxCharCount();

  /// @brief Method Equals addr 0x2633ae0 size 0x5c virtual true final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode addr 0x2633b3c size 0x8 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderExceptionFallback(EncoderExceptionFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderExceptionFallback(EncoderExceptionFallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderExceptionFallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderExceptionFallback, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderExceptionFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderExceptionFallback*, "System.Text", "EncoderExceptionFallback");
