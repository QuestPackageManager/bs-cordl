#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/CommandEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandEvent)
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
struct CommandEvent_Command;
}
namespace UnityEngine::InputForUI {
struct CommandEvent_Type;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
class IEventProperties;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct CommandEvent_Command;
}
namespace UnityEngine::InputForUI {
struct CommandEvent_Type;
}
namespace UnityEngine::InputForUI {
struct CommandEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::CommandEvent_Command);
MARK_VAL_T(::UnityEngine::InputForUI::CommandEvent_Type);
MARK_VAL_T(::UnityEngine::InputForUI::CommandEvent);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.CommandEvent/Type
struct CORDL_TYPE CommandEvent_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CommandEvent_Type_Unwrapped
  enum struct __CommandEvent_Type_Unwrapped : int32_t {
    __E_Validate = static_cast<int32_t>(0x1),
    __E_Execute = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CommandEvent_Type_Unwrapped() const noexcept {
    return static_cast<__CommandEvent_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandEvent_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CommandEvent_Type(int32_t value__) noexcept;

  /// @brief Field Execute value: I32(2)
  static ::UnityEngine::InputForUI::CommandEvent_Type const Execute;

  /// @brief Field Validate value: I32(1)
  static ::UnityEngine::InputForUI::CommandEvent_Type const Validate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21603 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::CommandEvent_Type, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.CommandEvent/Command
struct CORDL_TYPE CommandEvent_Command {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CommandEvent_Command_Unwrapped
  enum struct __CommandEvent_Command_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_Cut = static_cast<int32_t>(0x1),
    __E_Copy = static_cast<int32_t>(0x2),
    __E_Paste = static_cast<int32_t>(0x3),
    __E_SelectAll = static_cast<int32_t>(0x4),
    __E_DeselectAll = static_cast<int32_t>(0x5),
    __E_InvertSelection = static_cast<int32_t>(0x6),
    __E_Duplicate = static_cast<int32_t>(0x7),
    __E_Rename = static_cast<int32_t>(0x8),
    __E_Delete = static_cast<int32_t>(0x9),
    __E_SoftDelete = static_cast<int32_t>(0xa),
    __E_Find = static_cast<int32_t>(0xb),
    __E_SelectChildren = static_cast<int32_t>(0xc),
    __E_SelectPrefabRoot = static_cast<int32_t>(0xd),
    __E_UndoRedoPerformed = static_cast<int32_t>(0xe),
    __E_OnLostFocus = static_cast<int32_t>(0xf),
    __E_NewKeyboardFocus = static_cast<int32_t>(0x10),
    __E_ModifierKeysChanged = static_cast<int32_t>(0x11),
    __E_EyeDropperUpdate = static_cast<int32_t>(0x12),
    __E_EyeDropperClicked = static_cast<int32_t>(0x13),
    __E_EyeDropperCancelled = static_cast<int32_t>(0x14),
    __E_ColorPickerChanged = static_cast<int32_t>(0x15),
    __E_FrameSelected = static_cast<int32_t>(0x16),
    __E_FrameSelectedWithLock = static_cast<int32_t>(0x17),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CommandEvent_Command_Unwrapped() const noexcept {
    return static_cast<__CommandEvent_Command_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandEvent_Command();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CommandEvent_Command(int32_t value__) noexcept;

  /// @brief Field ColorPickerChanged value: I32(21)
  static ::UnityEngine::InputForUI::CommandEvent_Command const ColorPickerChanged;

  /// @brief Field Copy value: I32(2)
  static ::UnityEngine::InputForUI::CommandEvent_Command const Copy;

  /// @brief Field Cut value: I32(1)
  static ::UnityEngine::InputForUI::CommandEvent_Command const Cut;

  /// @brief Field Delete value: I32(9)
  static ::UnityEngine::InputForUI::CommandEvent_Command const Delete;

  /// @brief Field DeselectAll value: I32(5)
  static ::UnityEngine::InputForUI::CommandEvent_Command const DeselectAll;

  /// @brief Field Duplicate value: I32(7)
  static ::UnityEngine::InputForUI::CommandEvent_Command const Duplicate;

  /// @brief Field EyeDropperCancelled value: I32(20)
  static ::UnityEngine::InputForUI::CommandEvent_Command const EyeDropperCancelled;

  /// @brief Field EyeDropperClicked value: I32(19)
  static ::UnityEngine::InputForUI::CommandEvent_Command const EyeDropperClicked;

  /// @brief Field EyeDropperUpdate value: I32(18)
  static ::UnityEngine::InputForUI::CommandEvent_Command const EyeDropperUpdate;

  /// @brief Field Find value: I32(11)
  static ::UnityEngine::InputForUI::CommandEvent_Command const Find;

  /// @brief Field FrameSelected value: I32(22)
  static ::UnityEngine::InputForUI::CommandEvent_Command const FrameSelected;

  /// @brief Field FrameSelectedWithLock value: I32(23)
  static ::UnityEngine::InputForUI::CommandEvent_Command const FrameSelectedWithLock;

  /// @brief Field Invalid value: I32(0)
  static ::UnityEngine::InputForUI::CommandEvent_Command const Invalid;

  /// @brief Field InvertSelection value: I32(6)
  static ::UnityEngine::InputForUI::CommandEvent_Command const InvertSelection;

  /// @brief Field ModifierKeysChanged value: I32(17)
  static ::UnityEngine::InputForUI::CommandEvent_Command const ModifierKeysChanged;

  /// @brief Field NewKeyboardFocus value: I32(16)
  static ::UnityEngine::InputForUI::CommandEvent_Command const NewKeyboardFocus;

  /// @brief Field OnLostFocus value: I32(15)
  static ::UnityEngine::InputForUI::CommandEvent_Command const OnLostFocus;

  /// @brief Field Paste value: I32(3)
  static ::UnityEngine::InputForUI::CommandEvent_Command const Paste;

  /// @brief Field Rename value: I32(8)
  static ::UnityEngine::InputForUI::CommandEvent_Command const Rename;

  /// @brief Field SelectAll value: I32(4)
  static ::UnityEngine::InputForUI::CommandEvent_Command const SelectAll;

  /// @brief Field SelectChildren value: I32(12)
  static ::UnityEngine::InputForUI::CommandEvent_Command const SelectChildren;

  /// @brief Field SelectPrefabRoot value: I32(13)
  static ::UnityEngine::InputForUI::CommandEvent_Command const SelectPrefabRoot;

  /// @brief Field SoftDelete value: I32(10)
  static ::UnityEngine::InputForUI::CommandEvent_Command const SoftDelete;

  /// @brief Field UndoRedoPerformed value: I32(14)
  static ::UnityEngine::InputForUI::CommandEvent_Command const UndoRedoPerformed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21604 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent_Command, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::CommandEvent_Command, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.CommandEvent::Command, UnityEngine.InputForUI.CommandEvent::Type, UnityEngine.InputForUI.EventModifiers,
// UnityEngine.InputForUI.EventSource
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.CommandEvent
struct CORDL_TYPE CommandEvent {
public:
  // Declarations
  using Command = ::UnityEngine::InputForUI::CommandEvent_Command;

  using Type = ::UnityEngine::InputForUI::CommandEvent_Type;

  __declspec(property(get = get_eventModifiers, put = set_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers eventModifiers;

  __declspec(property(get = get_eventSource, put = set_eventSource)) ::UnityEngine::InputForUI::EventSource eventSource;

  __declspec(property(put = set_playerId)) uint32_t playerId;

  __declspec(property(put = set_timestamp)) ::Unity::IntegerTime::DiscreteTime timestamp;

  /// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
  constexpr operator ::UnityEngine::InputForUI::IEventProperties*();

  /// @brief Method ToString, addr 0x698d1f0, size 0xe0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_eventModifiers, addr 0x698d1e0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers();

  /// @brief Method get_eventSource, addr 0x698d1c8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventSource get_eventSource();

  /// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
  constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties();

  /// @brief Method set_eventModifiers, addr 0x698d1e8, size 0x8, virtual false, abstract: false, final false
  inline void set_eventModifiers(::UnityEngine::InputForUI::EventModifiers value);

  /// @brief Method set_eventSource, addr 0x698d1d0, size 0x8, virtual false, abstract: false, final false
  inline void set_eventSource(::UnityEngine::InputForUI::EventSource value);

  /// @brief Method set_playerId, addr 0x698d1d8, size 0x8, virtual false, abstract: false, final false
  inline void set_playerId(uint32_t value);

  /// @brief Method set_timestamp, addr 0x698d1c0, size 0x8, virtual false, abstract: false, final false
  inline void set_timestamp(::Unity::IntegerTime::DiscreteTime value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandEvent();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputForUI::CommandEvent_Type", modifiers: "", def_value: None }, CppParam { name: "command", ty:
  // "::UnityEngine::InputForUI::CommandEvent_Command", modifiers: "", def_value: None }, CppParam { name: "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "",
  // def_value: None }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: None }, CppParam { name: "_playerId_k__BackingField",
  // ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: None }]
  constexpr CommandEvent(::UnityEngine::InputForUI::CommandEvent_Type type, ::UnityEngine::InputForUI::CommandEvent_Command command, ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField,
                         ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField, uint32_t _playerId_k__BackingField,
                         ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21605 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputForUI::CommandEvent_Type type;

  /// @brief Field command, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputForUI::CommandEvent_Command command;

  /// @brief Field <timestamp>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField;

  /// @brief Field <eventSource>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField;

  /// @brief Field <playerId>k__BackingField, offset: 0x14, size: 0x4, def value: None
  uint32_t _playerId_k__BackingField;

  /// @brief Field <eventModifiers>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, command) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, _timestamp_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, _eventSource_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, _playerId_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, _eventModifiers_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::CommandEvent, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::CommandEvent_Command, "UnityEngine.InputForUI", "CommandEvent/Command");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::CommandEvent_Type, "UnityEngine.InputForUI", "CommandEvent/Type");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::CommandEvent, "UnityEngine.InputForUI", "CommandEvent");
