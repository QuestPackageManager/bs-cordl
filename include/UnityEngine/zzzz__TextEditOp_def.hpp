#pragma once
// IWYU pragma private; include "UnityEngine/TextEditOp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextEditOp)
// Forward declare root types
namespace UnityEngine {
struct TextEditOp;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextEditOp);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextEditOp
struct CORDL_TYPE TextEditOp {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextEditOp_Unwrapped
  enum struct __TextEditOp_Unwrapped : int32_t {
    __E_MoveLeft = static_cast<int32_t>(0x0),
    __E_MoveRight = static_cast<int32_t>(0x1),
    __E_MoveUp = static_cast<int32_t>(0x2),
    __E_MoveDown = static_cast<int32_t>(0x3),
    __E_MoveLineStart = static_cast<int32_t>(0x4),
    __E_MoveLineEnd = static_cast<int32_t>(0x5),
    __E_MoveTextStart = static_cast<int32_t>(0x6),
    __E_MoveTextEnd = static_cast<int32_t>(0x7),
    __E_MovePageUp = static_cast<int32_t>(0x8),
    __E_MovePageDown = static_cast<int32_t>(0x9),
    __E_MoveGraphicalLineStart = static_cast<int32_t>(0xa),
    __E_MoveGraphicalLineEnd = static_cast<int32_t>(0xb),
    __E_MoveWordLeft = static_cast<int32_t>(0xc),
    __E_MoveWordRight = static_cast<int32_t>(0xd),
    __E_MoveParagraphForward = static_cast<int32_t>(0xe),
    __E_MoveParagraphBackward = static_cast<int32_t>(0xf),
    __E_MoveToStartOfNextWord = static_cast<int32_t>(0x10),
    __E_MoveToEndOfPreviousWord = static_cast<int32_t>(0x11),
    __E_Delete = static_cast<int32_t>(0x12),
    __E_Backspace = static_cast<int32_t>(0x13),
    __E_DeleteWordBack = static_cast<int32_t>(0x14),
    __E_DeleteWordForward = static_cast<int32_t>(0x15),
    __E_DeleteLineBack = static_cast<int32_t>(0x16),
    __E_Cut = static_cast<int32_t>(0x17),
    __E_Paste = static_cast<int32_t>(0x18),
    __E_ScrollStart = static_cast<int32_t>(0x19),
    __E_ScrollEnd = static_cast<int32_t>(0x1a),
    __E_ScrollPageUp = static_cast<int32_t>(0x1b),
    __E_ScrollPageDown = static_cast<int32_t>(0x1c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextEditOp_Unwrapped() const noexcept {
    return static_cast<__TextEditOp_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditOp();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextEditOp(int32_t value__) noexcept;

  /// @brief Field Backspace value: I32(19)
  static ::UnityEngine::TextEditOp const Backspace;

  /// @brief Field Cut value: I32(23)
  static ::UnityEngine::TextEditOp const Cut;

  /// @brief Field Delete value: I32(18)
  static ::UnityEngine::TextEditOp const Delete;

  /// @brief Field DeleteLineBack value: I32(22)
  static ::UnityEngine::TextEditOp const DeleteLineBack;

  /// @brief Field DeleteWordBack value: I32(20)
  static ::UnityEngine::TextEditOp const DeleteWordBack;

  /// @brief Field DeleteWordForward value: I32(21)
  static ::UnityEngine::TextEditOp const DeleteWordForward;

  /// @brief Field MoveDown value: I32(3)
  static ::UnityEngine::TextEditOp const MoveDown;

  /// @brief Field MoveGraphicalLineEnd value: I32(11)
  static ::UnityEngine::TextEditOp const MoveGraphicalLineEnd;

  /// @brief Field MoveGraphicalLineStart value: I32(10)
  static ::UnityEngine::TextEditOp const MoveGraphicalLineStart;

  /// @brief Field MoveLeft value: I32(0)
  static ::UnityEngine::TextEditOp const MoveLeft;

  /// @brief Field MoveLineEnd value: I32(5)
  static ::UnityEngine::TextEditOp const MoveLineEnd;

  /// @brief Field MoveLineStart value: I32(4)
  static ::UnityEngine::TextEditOp const MoveLineStart;

  /// @brief Field MovePageDown value: I32(9)
  static ::UnityEngine::TextEditOp const MovePageDown;

  /// @brief Field MovePageUp value: I32(8)
  static ::UnityEngine::TextEditOp const MovePageUp;

  /// @brief Field MoveParagraphBackward value: I32(15)
  static ::UnityEngine::TextEditOp const MoveParagraphBackward;

  /// @brief Field MoveParagraphForward value: I32(14)
  static ::UnityEngine::TextEditOp const MoveParagraphForward;

  /// @brief Field MoveRight value: I32(1)
  static ::UnityEngine::TextEditOp const MoveRight;

  /// @brief Field MoveTextEnd value: I32(7)
  static ::UnityEngine::TextEditOp const MoveTextEnd;

  /// @brief Field MoveTextStart value: I32(6)
  static ::UnityEngine::TextEditOp const MoveTextStart;

  /// @brief Field MoveToEndOfPreviousWord value: I32(17)
  static ::UnityEngine::TextEditOp const MoveToEndOfPreviousWord;

  /// @brief Field MoveToStartOfNextWord value: I32(16)
  static ::UnityEngine::TextEditOp const MoveToStartOfNextWord;

  /// @brief Field MoveUp value: I32(2)
  static ::UnityEngine::TextEditOp const MoveUp;

  /// @brief Field MoveWordLeft value: I32(12)
  static ::UnityEngine::TextEditOp const MoveWordLeft;

  /// @brief Field MoveWordRight value: I32(13)
  static ::UnityEngine::TextEditOp const MoveWordRight;

  /// @brief Field Paste value: I32(24)
  static ::UnityEngine::TextEditOp const Paste;

  /// @brief Field ScrollEnd value: I32(26)
  static ::UnityEngine::TextEditOp const ScrollEnd;

  /// @brief Field ScrollPageDown value: I32(28)
  static ::UnityEngine::TextEditOp const ScrollPageDown;

  /// @brief Field ScrollPageUp value: I32(27)
  static ::UnityEngine::TextEditOp const ScrollPageUp;

  /// @brief Field ScrollStart value: I32(25)
  static ::UnityEngine::TextEditOp const ScrollStart;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16666 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextEditOp, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextEditOp, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextEditOp, "UnityEngine", "TextEditOp");
