#pragma once
// IWYU pragma private; include "System/Text/InternalEncoderBestFitFallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalEncoderBestFitFallback)
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class InternalEncoderBestFitFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::InternalEncoderBestFitFallback);
// Dependencies System.Text.EncoderFallback
namespace System::Text {
// Is value type: false
// CS Name: System.Text.InternalEncoderBestFitFallback
class CORDL_TYPE InternalEncoderBestFitFallback : public ::System::Text::EncoderFallback {
public:
  // Declarations
  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  /// @brief Field _arrayBestFit, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arrayBestFit, put = __cordl_internal_set__arrayBestFit)) ::ArrayW<char16_t, ::Array<char16_t>*> _arrayBestFit;

  /// @brief Field _encoding, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding)) ::System::Text::Encoding* _encoding;

  /// @brief Method CreateFallbackBuffer, addr 0x3c7d22c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method Equals, addr 0x3c7d3b0, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x3c7d474, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Text::InternalEncoderBestFitFallback* New_ctor(::System::Text::Encoding* encoding);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__arrayBestFit() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__arrayBestFit();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr void __cordl_internal_set__arrayBestFit(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__encoding(::System::Text::Encoding* value);

  /// @brief Method .ctor, addr 0x3c7d1fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::Encoding* encoding);

  /// @brief Method get_MaxCharCount, addr 0x3c7d3a8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MaxCharCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalEncoderBestFitFallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalEncoderBestFitFallback(InternalEncoderBestFitFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalEncoderBestFitFallback(InternalEncoderBestFitFallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2842 };

  /// @brief Field _encoding, offset: 0x10, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _arrayBestFit, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____arrayBestFit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::InternalEncoderBestFitFallback, ____encoding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::InternalEncoderBestFitFallback, ____arrayBestFit) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::InternalEncoderBestFitFallback, 0x20>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::InternalEncoderBestFitFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalEncoderBestFitFallback*, "System.Text", "InternalEncoderBestFitFallback");
