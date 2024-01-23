#pragma once
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
// Type: UnityEngine::EventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14601))
// CS Name: ::UnityEngine::EventType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MouseDown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::EventType const MouseDown;

  /// @brief Field MouseUp value: static_cast<int32_t>(0x1)
  static ::UnityEngine::EventType const MouseUp;

  /// @brief Field MouseMove value: static_cast<int32_t>(0x2)
  static ::UnityEngine::EventType const MouseMove;

  /// @brief Field MouseDrag value: static_cast<int32_t>(0x3)
  static ::UnityEngine::EventType const MouseDrag;

  /// @brief Field KeyDown value: static_cast<int32_t>(0x4)
  static ::UnityEngine::EventType const KeyDown;

  /// @brief Field KeyUp value: static_cast<int32_t>(0x5)
  static ::UnityEngine::EventType const KeyUp;

  /// @brief Field ScrollWheel value: static_cast<int32_t>(0x6)
  static ::UnityEngine::EventType const ScrollWheel;

  /// @brief Field Repaint value: static_cast<int32_t>(0x7)
  static ::UnityEngine::EventType const Repaint;

  /// @brief Field Layout value: static_cast<int32_t>(0x8)
  static ::UnityEngine::EventType const Layout;

  /// @brief Field DragUpdated value: static_cast<int32_t>(0x9)
  static ::UnityEngine::EventType const DragUpdated;

  /// @brief Field DragPerform value: static_cast<int32_t>(0xa)
  static ::UnityEngine::EventType const DragPerform;

  /// @brief Field DragExited value: static_cast<int32_t>(0xf)
  static ::UnityEngine::EventType const DragExited;

  /// @brief Field Ignore value: static_cast<int32_t>(0xb)
  static ::UnityEngine::EventType const Ignore;

  /// @brief Field Used value: static_cast<int32_t>(0xc)
  static ::UnityEngine::EventType const Used;

  /// @brief Field ValidateCommand value: static_cast<int32_t>(0xd)
  static ::UnityEngine::EventType const ValidateCommand;

  /// @brief Field ExecuteCommand value: static_cast<int32_t>(0xe)
  static ::UnityEngine::EventType const ExecuteCommand;

  /// @brief Field ContextClick value: static_cast<int32_t>(0x10)
  static ::UnityEngine::EventType const ContextClick;

  /// @brief Field MouseEnterWindow value: static_cast<int32_t>(0x14)
  static ::UnityEngine::EventType const MouseEnterWindow;

  /// @brief Field MouseLeaveWindow value: static_cast<int32_t>(0x15)
  static ::UnityEngine::EventType const MouseLeaveWindow;

  /// @brief Field TouchDown value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::EventType const TouchDown;

  /// @brief Field TouchUp value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::EventType const TouchUp;

  /// @brief Field TouchMove value: static_cast<int32_t>(0x20)
  static ::UnityEngine::EventType const TouchMove;

  /// @brief Field TouchEnter value: static_cast<int32_t>(0x21)
  static ::UnityEngine::EventType const TouchEnter;

  /// @brief Field TouchLeave value: static_cast<int32_t>(0x22)
  static ::UnityEngine::EventType const TouchLeave;

  /// @brief Field TouchStationary value: static_cast<int32_t>(0x23)
  static ::UnityEngine::EventType const TouchStationary;

  /// @brief Field mouseDown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::EventType const mouseDown;

  /// @brief Field mouseUp value: static_cast<int32_t>(0x1)
  static ::UnityEngine::EventType const mouseUp;

  /// @brief Field mouseMove value: static_cast<int32_t>(0x2)
  static ::UnityEngine::EventType const mouseMove;

  /// @brief Field mouseDrag value: static_cast<int32_t>(0x3)
  static ::UnityEngine::EventType const mouseDrag;

  /// @brief Field keyDown value: static_cast<int32_t>(0x4)
  static ::UnityEngine::EventType const keyDown;

  /// @brief Field keyUp value: static_cast<int32_t>(0x5)
  static ::UnityEngine::EventType const keyUp;

  /// @brief Field scrollWheel value: static_cast<int32_t>(0x6)
  static ::UnityEngine::EventType const scrollWheel;

  /// @brief Field repaint value: static_cast<int32_t>(0x7)
  static ::UnityEngine::EventType const repaint;

  /// @brief Field layout value: static_cast<int32_t>(0x8)
  static ::UnityEngine::EventType const layout;

  /// @brief Field dragUpdated value: static_cast<int32_t>(0x9)
  static ::UnityEngine::EventType const dragUpdated;

  /// @brief Field dragPerform value: static_cast<int32_t>(0xa)
  static ::UnityEngine::EventType const dragPerform;

  /// @brief Field ignore value: static_cast<int32_t>(0xb)
  static ::UnityEngine::EventType const ignore;

  /// @brief Field used value: static_cast<int32_t>(0xc)
  static ::UnityEngine::EventType const used;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventType, "UnityEngine", "EventType");
