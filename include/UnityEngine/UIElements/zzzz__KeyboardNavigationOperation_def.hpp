#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardNavigationOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardNavigationOperation)
// Forward declare root types
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::KeyboardNavigationOperation);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.KeyboardNavigationOperation
struct CORDL_TYPE KeyboardNavigationOperation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __KeyboardNavigationOperation_Unwrapped
  enum struct __KeyboardNavigationOperation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SelectAll = static_cast<int32_t>(0x1),
    __E_Cancel = static_cast<int32_t>(0x2),
    __E_Submit = static_cast<int32_t>(0x3),
    __E_Previous = static_cast<int32_t>(0x4),
    __E_Next = static_cast<int32_t>(0x5),
    __E_MoveRight = static_cast<int32_t>(0x6),
    __E_MoveLeft = static_cast<int32_t>(0x7),
    __E_PageUp = static_cast<int32_t>(0x8),
    __E_PageDown = static_cast<int32_t>(0x9),
    __E_Begin = static_cast<int32_t>(0xa),
    __E_End = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __KeyboardNavigationOperation_Unwrapped() const noexcept {
    return static_cast<__KeyboardNavigationOperation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardNavigationOperation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr KeyboardNavigationOperation(int32_t value__) noexcept;

  /// @brief Field Begin value: I32(10)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const Begin;

  /// @brief Field Cancel value: I32(2)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const Cancel;

  /// @brief Field End value: I32(11)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const End;

  /// @brief Field MoveLeft value: I32(7)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const MoveLeft;

  /// @brief Field MoveRight value: I32(6)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const MoveRight;

  /// @brief Field Next value: I32(5)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const Next;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const None;

  /// @brief Field PageDown value: I32(9)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const PageDown;

  /// @brief Field PageUp value: I32(8)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const PageUp;

  /// @brief Field Previous value: I32(4)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const Previous;

  /// @brief Field SelectAll value: I32(1)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const SelectAll;

  /// @brief Field Submit value: I32(3)
  static ::UnityEngine::UIElements::KeyboardNavigationOperation const Submit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4615 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::KeyboardNavigationOperation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyboardNavigationOperation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyboardNavigationOperation, "UnityEngine.UIElements", "KeyboardNavigationOperation");
