#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerState)
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
struct PointerEvent_Button;
}
namespace UnityEngine::InputForUI {
struct PointerEvent_ButtonsState;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct PointerState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::PointerState);
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.PointerEvent::Button, UnityEngine.InputForUI.PointerEvent::ButtonsState, UnityEngine.Vector2
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.PointerState
struct CORDL_TYPE PointerState {
public:
  // Declarations
  __declspec(property(get = get_ButtonsState)) ::UnityEngine::InputForUI::PointerEvent_ButtonsState ButtonsState;

  __declspec(property(get = get_ClickCount, put = set_ClickCount)) int32_t ClickCount;

  __declspec(property(get = get_LastDisplayIndex, put = set_LastDisplayIndex)) int32_t LastDisplayIndex;

  __declspec(property(get = get_LastPosition, put = set_LastPosition)) ::UnityEngine::Vector2 LastPosition;

  __declspec(property(get = get_LastPositionValid, put = set_LastPositionValid)) bool LastPositionValid;

  __declspec(property(get = get_LastPressedButton, put = set_LastPressedButton)) ::UnityEngine::InputForUI::PointerEvent_Button LastPressedButton;

  __declspec(property(get = get_NextPressTime, put = set_NextPressTime)) ::Unity::IntegerTime::DiscreteTime NextPressTime;

  /// @brief Field kClickDelay, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kClickDelay, put = setStaticF_kClickDelay)) ::Unity::IntegerTime::DiscreteTime kClickDelay;

  /// @brief Method OnButtonChange, addr 0x6994c68, size 0xd8, virtual false, abstract: false, final false
  inline void OnButtonChange(::Unity::IntegerTime::DiscreteTime currentTime, ::UnityEngine::InputForUI::PointerEvent_Button button, bool previousState, bool newState);

  /// @brief Method OnButtonDown, addr 0x6994938, size 0x15c, virtual false, abstract: false, final false
  inline void OnButtonDown(::Unity::IntegerTime::DiscreteTime currentTime, ::UnityEngine::InputForUI::PointerEvent_Button button);

  /// @brief Method OnButtonUp, addr 0x6994a94, size 0x90, virtual false, abstract: false, final false
  inline void OnButtonUp(::Unity::IntegerTime::DiscreteTime currentTime, ::UnityEngine::InputForUI::PointerEvent_Button button);

  /// @brief Method OnMove, addr 0x6994bb8, size 0x80, virtual false, abstract: false, final false
  inline void OnMove(::Unity::IntegerTime::DiscreteTime currentTime, ::UnityEngine::Vector2 position, int32_t displayIndex);

  /// @brief Method Reset, addr 0x69929dc, size 0xd8, virtual false, abstract: false, final false
  inline void Reset();

  static inline ::Unity::IntegerTime::DiscreteTime getStaticF_kClickDelay();

  /// @brief Method get_ButtonsState, addr 0x6995ad8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::PointerEvent_ButtonsState get_ButtonsState();

  /// @brief Method get_ClickCount, addr 0x6995af0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ClickCount();

  /// @brief Method get_LastDisplayIndex, addr 0x6995b10, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LastDisplayIndex();

  /// @brief Method get_LastPosition, addr 0x6995b00, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_LastPosition();

  /// @brief Method get_LastPositionValid, addr 0x6995b20, size 0x8, virtual false, abstract: false, final false
  inline bool get_LastPositionValid();

  /// @brief Method get_LastPressedButton, addr 0x6995ac8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputForUI::PointerEvent_Button get_LastPressedButton();

  /// @brief Method get_NextPressTime, addr 0x6995ae0, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::IntegerTime::DiscreteTime get_NextPressTime();

  static inline void setStaticF_kClickDelay(::Unity::IntegerTime::DiscreteTime value);

  /// @brief Method set_ClickCount, addr 0x6995af8, size 0x8, virtual false, abstract: false, final false
  inline void set_ClickCount(int32_t value);

  /// @brief Method set_LastDisplayIndex, addr 0x6995b18, size 0x8, virtual false, abstract: false, final false
  inline void set_LastDisplayIndex(int32_t value);

  /// @brief Method set_LastPosition, addr 0x6995b08, size 0x8, virtual false, abstract: false, final false
  inline void set_LastPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_LastPositionValid, addr 0x6995b28, size 0x8, virtual false, abstract: false, final false
  inline void set_LastPositionValid(bool value);

  /// @brief Method set_LastPressedButton, addr 0x6995ad0, size 0x8, virtual false, abstract: false, final false
  inline void set_LastPressedButton(::UnityEngine::InputForUI::PointerEvent_Button value);

  /// @brief Method set_NextPressTime, addr 0x6995ae8, size 0x8, virtual false, abstract: false, final false
  inline void set_NextPressTime(::Unity::IntegerTime::DiscreteTime value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerState();

  // Ctor Parameters [CppParam { name: "_LastPressedButton_k__BackingField", ty: "::UnityEngine::InputForUI::PointerEvent_Button", modifiers: "", def_value: None }, CppParam { name: "_buttonsState",
  // ty: "::UnityEngine::InputForUI::PointerEvent_ButtonsState", modifiers: "", def_value: None }, CppParam { name: "_NextPressTime_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime",
  // modifiers: "", def_value: None }, CppParam { name: "_ClickCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_LastPosition_k__BackingField", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_LastDisplayIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_LastPositionValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr PointerState(::UnityEngine::InputForUI::PointerEvent_Button _LastPressedButton_k__BackingField, ::UnityEngine::InputForUI::PointerEvent_ButtonsState _buttonsState,
                         ::Unity::IntegerTime::DiscreteTime _NextPressTime_k__BackingField, int32_t _ClickCount_k__BackingField, ::UnityEngine::Vector2 _LastPosition_k__BackingField,
                         int32_t _LastDisplayIndex_k__BackingField, bool _LastPositionValid_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21645 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <LastPressedButton>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputForUI::PointerEvent_Button _LastPressedButton_k__BackingField;

  /// @brief Field _buttonsState, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputForUI::PointerEvent_ButtonsState _buttonsState;

  /// @brief Field <NextPressTime>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime _NextPressTime_k__BackingField;

  /// @brief Field <ClickCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t _ClickCount_k__BackingField;

  /// @brief Field <LastPosition>k__BackingField, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 _LastPosition_k__BackingField;

  /// @brief Field <LastDisplayIndex>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t _LastDisplayIndex_k__BackingField;

  /// @brief Field <LastPositionValid>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool _LastPositionValid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::PointerState, _LastPressedButton_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerState, _buttonsState) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerState, _NextPressTime_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerState, _ClickCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerState, _LastPosition_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerState, _LastDisplayIndex_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerState, _LastPositionValid_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::PointerState, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::PointerState, "UnityEngine.InputForUI", "PointerState");
