#pragma once
// IWYU pragma private; include "System/Text/InternalDecoderBestFitFallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalDecoderBestFitFallback)
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class InternalDecoderBestFitFallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::InternalDecoderBestFitFallback);
// Dependencies System.Text.DecoderFallback
namespace System::Text {
// Is value type: false
// CS Name: System.Text.InternalDecoderBestFitFallback
class CORDL_TYPE InternalDecoderBestFitFallback : public ::System::Text::DecoderFallback {
public:
  // Declarations
  __declspec(property(get = get_MaxCharCount)) int32_t MaxCharCount;

  /// @brief Field _arrayBestFit, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arrayBestFit, put = __cordl_internal_set__arrayBestFit)) ::ArrayW<char16_t, ::Array<char16_t>*> _arrayBestFit;

  /// @brief Field _cReplacement, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get__cReplacement, put = __cordl_internal_set__cReplacement)) char16_t _cReplacement;

  /// @brief Field _encoding, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding)) ::System::Text::Encoding* _encoding;

  /// @brief Method CreateFallbackBuffer, addr 0x3e6eb48, size 0x58, virtual true, abstract: false, final false
  inline ::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();

  /// @brief Method Equals, addr 0x3e6eccc, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x3e6ed74, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Text::InternalDecoderBestFitFallback* New_ctor(::System::Text::Encoding* encoding);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__arrayBestFit() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__arrayBestFit();

  constexpr char16_t const& __cordl_internal_get__cReplacement() const;

  constexpr char16_t& __cordl_internal_get__cReplacement();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr void __cordl_internal_set__arrayBestFit(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__cReplacement(char16_t value);

  constexpr void __cordl_internal_set__encoding(::System::Text::Encoding* value);

  /// @brief Method .ctor, addr 0x3e6eb10, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::Encoding* encoding);

  /// @brief Method get_MaxCharCount, addr 0x3e6ecc4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MaxCharCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalDecoderBestFitFallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalDecoderBestFitFallback(InternalDecoderBestFitFallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalDecoderBestFitFallback(InternalDecoderBestFitFallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2831 };

  /// @brief Field _encoding, offset: 0x10, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _arrayBestFit, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____arrayBestFit;

  /// @brief Field _cReplacement, offset: 0x20, size: 0x2, def value: None
  char16_t ____cReplacement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::InternalDecoderBestFitFallback, ____encoding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::InternalDecoderBestFitFallback, ____arrayBestFit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::InternalDecoderBestFitFallback, ____cReplacement) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::InternalDecoderBestFitFallback, 0x28>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::InternalDecoderBestFitFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalDecoderBestFitFallback*, "System.Text", "InternalDecoderBestFitFallback");
