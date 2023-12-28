#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderExceptionFallback)
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class DecoderExceptionFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderExceptionFallback);
// Type: System.Text::DecoderExceptionFallback
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2833))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2830))
// CS Name: ::System.Text::DecoderExceptionFallback*
class CORDL_TYPE DecoderExceptionFallback : public ::System::Text::DecoderFallback {
public:
  // Declarations
  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  static inline ::System::Text::DecoderExceptionFallback* New_ctor();

  /// @brief Method .ctor addr 0x2631024 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method CreateFallbackBuffer addr 0x263102c size 0x5c virtual true final false
  inline ::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method get_MaxCharCount addr 0x2631090 size 0x8 virtual true final false
  inline int32_t get_MaxCharCount();

  /// @brief Method Equals addr 0x2631098 size 0x5c virtual true final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode addr 0x26310f4 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderExceptionFallback(DecoderExceptionFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderExceptionFallback(DecoderExceptionFallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderExceptionFallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderExceptionFallback, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderExceptionFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderExceptionFallback*, "System.Text", "DecoderExceptionFallback");
