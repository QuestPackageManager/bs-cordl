#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventSource)
// Forward declare root types
namespace UnityEngine::InputForUI {
struct EventSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::EventSource);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.EventSource
struct CORDL_TYPE EventSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventSource_Unwrapped
  enum struct __EventSource_Unwrapped : int32_t {
    __E_Unspecified = static_cast<int32_t>(0x0),
    __E_Keyboard = static_cast<int32_t>(0x1),
    __E_Gamepad = static_cast<int32_t>(0x2),
    __E_Mouse = static_cast<int32_t>(0x3),
    __E_Pen = static_cast<int32_t>(0x4),
    __E_Touch = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventSource_Unwrapped() const noexcept {
    return static_cast<__EventSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventSource(int32_t value__) noexcept;

  /// @brief Field Gamepad value: I32(2)
  static ::UnityEngine::InputForUI::EventSource const Gamepad;

  /// @brief Field Keyboard value: I32(1)
  static ::UnityEngine::InputForUI::EventSource const Keyboard;

  /// @brief Field Mouse value: I32(3)
  static ::UnityEngine::InputForUI::EventSource const Mouse;

  /// @brief Field Pen value: I32(4)
  static ::UnityEngine::InputForUI::EventSource const Pen;

  /// @brief Field Touch value: I32(5)
  static ::UnityEngine::InputForUI::EventSource const Touch;

  /// @brief Field Unspecified value: I32(0)
  static ::UnityEngine::InputForUI::EventSource const Unspecified;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21587 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::EventSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::EventSource, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::EventSource, "UnityEngine.InputForUI", "EventSource");
