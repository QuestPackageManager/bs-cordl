#pragma once
// IWYU pragma private; include "System/Text/DecoderExceptionFallback.hpp"
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::DecoderExceptionFallback*
class CORDL_TYPE DecoderExceptionFallback : public ::System::Text::DecoderFallback {
public:
  // Declarations
  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  /// @brief Method CreateFallbackBuffer, addr 0x3df912c, size 0x54, virtual true, abstract: false, final false
  inline ::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method Equals, addr 0x3df9190, size 0x5c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x3df91ec, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Text::DecoderExceptionFallback* New_ctor();

  /// @brief Method .ctor, addr 0x3df9124, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MaxCharCount, addr 0x3df9188, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MaxCharCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderExceptionFallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderExceptionFallback(DecoderExceptionFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderExceptionFallback(DecoderExceptionFallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2833 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderExceptionFallback, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderExceptionFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderExceptionFallback*, "System.Text", "DecoderExceptionFallback");
