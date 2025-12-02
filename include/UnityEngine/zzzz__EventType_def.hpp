#pragma once
// IWYU pragma private; include "UnityEngine/EventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventType)
// Forward declare root types
namespace UnityEngine {
struct EventType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventType);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.EventType
struct CORDL_TYPE EventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventType_Unwrapped
  enum struct __EventType_Unwrapped : int32_t {
    __E_MouseDown = static_cast<int32_t>(0x0),
    __E_MouseUp = static_cast<int32_t>(0x1),
    __E_MouseMove = static_cast<int32_t>(0x2),
    __E_MouseDrag = static_cast<int32_t>(0x3),
    __E_KeyDown = static_cast<int32_t>(0x4),
    __E_KeyUp = static_cast<int32_t>(0x5),
    __E_ScrollWheel = static_cast<int32_t>(0x6),
    __E_Repaint = static_cast<int32_t>(0x7),
    __E_Layout = static_cast<int32_t>(0x8),
    __E_DragUpdated = static_cast<int32_t>(0x9),
    __E_DragPerform = static_cast<int32_t>(0xa),
    __E_DragExited = static_cast<int32_t>(0xf),
    __E_Ignore = static_cast<int32_t>(0xb),
    __E_Used = static_cast<int32_t>(0xc),
    __E_ValidateCommand = static_cast<int32_t>(0xd),
    __E_ExecuteCommand = static_cast<int32_t>(0xe),
    __E_ContextClick = static_cast<int32_t>(0x10),
    __E_MouseEnterWindow = static_cast<int32_t>(0x14),
    __E_MouseLeaveWindow = static_cast<int32_t>(0x15),
    __E_TouchDown = static_cast<int32_t>(0x1e),
    __E_TouchUp = static_cast<int32_t>(0x1f),
    __E_TouchMove = static_cast<int32_t>(0x20),
    __E_TouchEnter = static_cast<int32_t>(0x21),
    __E_TouchLeave = static_cast<int32_t>(0x22),
    __E_TouchStationary = static_cast<int32_t>(0x23),
    __E_mouseDown = static_cast<int32_t>(0x0),
    __E_mouseUp = static_cast<int32_t>(0x1),
    __E_mouseMove = static_cast<int32_t>(0x2),
    __E_mouseDrag = static_cast<int32_t>(0x3),
    __E_keyDown = static_cast<int32_t>(0x4),
    __E_keyUp = static_cast<int32_t>(0x5),
    __E_scrollWheel = static_cast<int32_t>(0x6),
    __E_repaint = static_cast<int32_t>(0x7),
    __E_layout = static_cast<int32_t>(0x8),
    __E_dragUpdated = static_cast<int32_t>(0x9),
    __E_dragPerform = static_cast<int32_t>(0xa),
    __E_ignore = static_cast<int32_t>(0xb),
    __E_used = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventType_Unwrapped() const noexcept {
    return static_cast<__EventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventType(int32_t value__) noexcept;

  /// @brief Field ContextClick value: I32(16)
  static ::UnityEngine::EventType const ContextClick;

  /// @brief Field DragExited value: I32(15)
  static ::UnityEngine::EventType const DragExited;

  /// @brief Field DragPerform value: I32(10)
  static ::UnityEngine::EventType const DragPerform;

  /// @brief Field DragUpdated value: I32(9)
  static ::UnityEngine::EventType const DragUpdated;

  /// @brief Field ExecuteCommand value: I32(14)
  static ::UnityEngine::EventType const ExecuteCommand;

  /// @brief Field Ignore value: I32(11)
  static ::UnityEngine::EventType const Ignore;

  /// @brief Field KeyDown value: I32(4)
  static ::UnityEngine::EventType const KeyDown;

  /// @brief Field KeyUp value: I32(5)
  static ::UnityEngine::EventType const KeyUp;

  /// @brief Field Layout value: I32(8)
  static ::UnityEngine::EventType const Layout;

  /// @brief Field MouseDown value: I32(0)
  static ::UnityEngine::EventType const MouseDown;

  /// @brief Field MouseDrag value: I32(3)
  static ::UnityEngine::EventType const MouseDrag;

  /// @brief Field MouseEnterWindow value: I32(20)
  static ::UnityEngine::EventType const MouseEnterWindow;

  /// @brief Field MouseLeaveWindow value: I32(21)
  static ::UnityEngine::EventType const MouseLeaveWindow;

  /// @brief Field MouseMove value: I32(2)
  static ::UnityEngine::EventType const MouseMove;

  /// @brief Field MouseUp value: I32(1)
  static ::UnityEngine::EventType const MouseUp;

  /// @brief Field Repaint value: I32(7)
  static ::UnityEngine::EventType const Repaint;

  /// @brief Field ScrollWheel value: I32(6)
  static ::UnityEngine::EventType const ScrollWheel;

  /// @brief Field TouchDown value: I32(30)
  static ::UnityEngine::EventType const TouchDown;

  /// @brief Field TouchEnter value: I32(33)
  static ::UnityEngine::EventType const TouchEnter;

  /// @brief Field TouchLeave value: I32(34)
  static ::UnityEngine::EventType const TouchLeave;

  /// @brief Field TouchMove value: I32(32)
  static ::UnityEngine::EventType const TouchMove;

  /// @brief Field TouchStationary value: I32(35)
  static ::UnityEngine::EventType const TouchStationary;

  /// @brief Field TouchUp value: I32(31)
  static ::UnityEngine::EventType const TouchUp;

  /// @brief Field Used value: I32(12)
  static ::UnityEngine::EventType const Used;

  /// @brief Field ValidateCommand value: I32(13)
  static ::UnityEngine::EventType const ValidateCommand;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19558 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field dragPerform value: I32(10)
  static ::UnityEngine::EventType const dragPerform;

  /// @brief Field dragUpdated value: I32(9)
  static ::UnityEngine::EventType const dragUpdated;

  /// @brief Field ignore value: I32(11)
  static ::UnityEngine::EventType const ignore;

  /// @brief Field keyDown value: I32(4)
  static ::UnityEngine::EventType const keyDown;

  /// @brief Field keyUp value: I32(5)
  static ::UnityEngine::EventType const keyUp;

  /// @brief Field layout value: I32(8)
  static ::UnityEngine::EventType const layout;

  /// @brief Field mouseDown value: I32(0)
  static ::UnityEngine::EventType const mouseDown;

  /// @brief Field mouseDrag value: I32(3)
  static ::UnityEngine::EventType const mouseDrag;

  /// @brief Field mouseMove value: I32(2)
  static ::UnityEngine::EventType const mouseMove;

  /// @brief Field mouseUp value: I32(1)
  static ::UnityEngine::EventType const mouseUp;

  /// @brief Field repaint value: I32(7)
  static ::UnityEngine::EventType const repaint;

  /// @brief Field scrollWheel value: I32(6)
  static ::UnityEngine::EventType const scrollWheel;

  /// @brief Field used value: I32(12)
  static ::UnityEngine::EventType const used;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventType, "UnityEngine", "EventType");
