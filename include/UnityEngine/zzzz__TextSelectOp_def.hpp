#pragma once
// IWYU pragma private; include "UnityEngine/TextSelectOp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSelectOp)
// Forward declare root types
namespace UnityEngine {
struct TextSelectOp;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextSelectOp);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextSelectOp
struct CORDL_TYPE TextSelectOp {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextSelectOp_Unwrapped
  enum struct __TextSelectOp_Unwrapped : int32_t {
    __E_SelectLeft = static_cast<int32_t>(0x0),
    __E_SelectRight = static_cast<int32_t>(0x1),
    __E_SelectUp = static_cast<int32_t>(0x2),
    __E_SelectDown = static_cast<int32_t>(0x3),
    __E_SelectTextStart = static_cast<int32_t>(0x4),
    __E_SelectTextEnd = static_cast<int32_t>(0x5),
    __E_SelectPageUp = static_cast<int32_t>(0x6),
    __E_SelectPageDown = static_cast<int32_t>(0x7),
    __E_ExpandSelectGraphicalLineStart = static_cast<int32_t>(0x8),
    __E_ExpandSelectGraphicalLineEnd = static_cast<int32_t>(0x9),
    __E_SelectGraphicalLineStart = static_cast<int32_t>(0xa),
    __E_SelectGraphicalLineEnd = static_cast<int32_t>(0xb),
    __E_SelectWordLeft = static_cast<int32_t>(0xc),
    __E_SelectWordRight = static_cast<int32_t>(0xd),
    __E_SelectToEndOfPreviousWord = static_cast<int32_t>(0xe),
    __E_SelectToStartOfNextWord = static_cast<int32_t>(0xf),
    __E_SelectParagraphBackward = static_cast<int32_t>(0x10),
    __E_SelectParagraphForward = static_cast<int32_t>(0x11),
    __E_Copy = static_cast<int32_t>(0x12),
    __E_SelectAll = static_cast<int32_t>(0x13),
    __E_SelectNone = static_cast<int32_t>(0x14),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextSelectOp_Unwrapped() const noexcept {
    return static_cast<__TextSelectOp_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSelectOp();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextSelectOp(int32_t value__) noexcept;

  /// @brief Field Copy value: I32(18)
  static ::UnityEngine::TextSelectOp const Copy;

  /// @brief Field ExpandSelectGraphicalLineEnd value: I32(9)
  static ::UnityEngine::TextSelectOp const ExpandSelectGraphicalLineEnd;

  /// @brief Field ExpandSelectGraphicalLineStart value: I32(8)
  static ::UnityEngine::TextSelectOp const ExpandSelectGraphicalLineStart;

  /// @brief Field SelectAll value: I32(19)
  static ::UnityEngine::TextSelectOp const SelectAll;

  /// @brief Field SelectDown value: I32(3)
  static ::UnityEngine::TextSelectOp const SelectDown;

  /// @brief Field SelectGraphicalLineEnd value: I32(11)
  static ::UnityEngine::TextSelectOp const SelectGraphicalLineEnd;

  /// @brief Field SelectGraphicalLineStart value: I32(10)
  static ::UnityEngine::TextSelectOp const SelectGraphicalLineStart;

  /// @brief Field SelectLeft value: I32(0)
  static ::UnityEngine::TextSelectOp const SelectLeft;

  /// @brief Field SelectNone value: I32(20)
  static ::UnityEngine::TextSelectOp const SelectNone;

  /// @brief Field SelectPageDown value: I32(7)
  static ::UnityEngine::TextSelectOp const SelectPageDown;

  /// @brief Field SelectPageUp value: I32(6)
  static ::UnityEngine::TextSelectOp const SelectPageUp;

  /// @brief Field SelectParagraphBackward value: I32(16)
  static ::UnityEngine::TextSelectOp const SelectParagraphBackward;

  /// @brief Field SelectParagraphForward value: I32(17)
  static ::UnityEngine::TextSelectOp const SelectParagraphForward;

  /// @brief Field SelectRight value: I32(1)
  static ::UnityEngine::TextSelectOp const SelectRight;

  /// @brief Field SelectTextEnd value: I32(5)
  static ::UnityEngine::TextSelectOp const SelectTextEnd;

  /// @brief Field SelectTextStart value: I32(4)
  static ::UnityEngine::TextSelectOp const SelectTextStart;

  /// @brief Field SelectToEndOfPreviousWord value: I32(14)
  static ::UnityEngine::TextSelectOp const SelectToEndOfPreviousWord;

  /// @brief Field SelectToStartOfNextWord value: I32(15)
  static ::UnityEngine::TextSelectOp const SelectToStartOfNextWord;

  /// @brief Field SelectUp value: I32(2)
  static ::UnityEngine::TextSelectOp const SelectUp;

  /// @brief Field SelectWordLeft value: I32(12)
  static ::UnityEngine::TextSelectOp const SelectWordLeft;

  /// @brief Field SelectWordRight value: I32(13)
  static ::UnityEngine::TextSelectOp const SelectWordRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16669 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextSelectOp, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextSelectOp, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextSelectOp, "UnityEngine", "TextSelectOp");
