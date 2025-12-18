#pragma once
// IWYU pragma private; include "System/Text/SurrogateChar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SurrogateChar)
// Forward declare root types
namespace System::Text {
struct SurrogateChar;
}
// Write type traits
MARK_VAL_T(::System::Text::SurrogateChar);
// Dependencies
namespace System::Text {
// Is value type: true
// CS Name: System.Text.SurrogateChar
struct CORDL_TYPE SurrogateChar {
public:
  // Declarations
  __declspec(property(get = get_Char)) int32_t Char;

  __declspec(property(get = get_HighChar)) char16_t HighChar;

  __declspec(property(get = get_LowChar)) char16_t LowChar;

  /// @brief Method .ctor, addr 0x5f74e30, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(int32_t ch);

  /// @brief Method .ctor, addr 0x5f7e914, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(char16_t lowChar, char16_t highChar);

  /// @brief Method get_Char, addr 0x5f7eb10, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_Char();

  /// @brief Method get_HighChar, addr 0x5f7eb08, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_HighChar();

  /// @brief Method get_LowChar, addr 0x5f7eb00, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_LowChar();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SurrogateChar();

  // Ctor Parameters [CppParam { name: "lowChar", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "highChar", ty: "char16_t", modifiers: "", def_value: None }]
  constexpr SurrogateChar(char16_t lowChar, char16_t highChar) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16967 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field lowChar, offset: 0x0, size: 0x2, def value: None
  char16_t lowChar;

  /// @brief Field highChar, offset: 0x2, size: 0x2, def value: None
  char16_t highChar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Text::SurrogateChar, lowChar) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::SurrogateChar, highChar) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::SurrogateChar, 0x4>, "Size mismatch!");

} // namespace System::Text
DEFINE_IL2CPP_ARG_TYPE(::System::Text::SurrogateChar, "System.Text", "SurrogateChar");
