#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/NavigationEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationEvent)
namespace Unity::IntegerTime {
struct DiscreteTime;
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
namespace UnityEngine::InputForUI {
struct NavigationEvent_Direction;
}
namespace UnityEngine::InputForUI {
struct NavigationEvent_Type;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct NavigationEvent_Direction;
}
namespace UnityEngine::InputForUI {
struct NavigationEvent_Type;
}
namespace UnityEngine::InputForUI {
struct NavigationEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::NavigationEvent_Direction);
MARK_VAL_T(::UnityEngine::InputForUI::NavigationEvent_Type);
MARK_VAL_T(::UnityEngine::InputForUI::NavigationEvent);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.NavigationEvent/Type
struct CORDL_TYPE NavigationEvent_Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NavigationEvent_Type_Unwrapped
  enum struct __NavigationEvent_Type_Unwrapped : int32_t {
    __E_Move = static_cast<int32_t>(0x1),
    __E_Submit = static_cast<int32_t>(0x2),
    __E_Cancel = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NavigationEvent_Type_Unwrapped() const noexcept {
    return static_cast<__NavigationEvent_Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationEvent_Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NavigationEvent_Type(int32_t value__) noexcept;

  /// @brief Field Cancel value: I32(3)
  static ::UnityEngine::InputForUI::NavigationEvent_Type const Cancel;

  /// @brief Field Move value: I32(1)
  static ::UnityEngine::InputForUI::NavigationEvent_Type const Move;

  /// @brief Field Submit value: I32(2)
  static ::UnityEngine::InputForUI::NavigationEvent_Type const Submit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21595 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::NavigationEvent_Type, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.NavigationEvent/Direction
struct CORDL_TYPE NavigationEvent_Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NavigationEvent_Direction_Unwrapped
  enum struct __NavigationEvent_Direction_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Up = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
    __E_Down = static_cast<int32_t>(0x4),
    __E_Next = static_cast<int32_t>(0x5),
    __E_Previous = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NavigationEvent_Direction_Unwrapped() const noexcept {
    return static_cast<__NavigationEvent_Direction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationEvent_Direction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NavigationEvent_Direction(int32_t value__) noexcept;

  /// @brief Field Down value: I32(4)
  static ::UnityEngine::InputForUI::NavigationEvent_Direction const Down;

  /// @brief Field Left value: I32(1)
  static ::UnityEngine::InputForUI::NavigationEvent_Direction const Left;

  /// @brief Field Next value: I32(5)
  static ::UnityEngine::InputForUI::NavigationEvent_Direction const Next;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::InputForUI::NavigationEvent_Direction const None;

  /// @brief Field Previous value: I32(6)
  static ::UnityEngine::InputForUI::NavigationEvent_Direction const Previous;

  /// @brief Field Right value: I32(3)
  static ::UnityEngine::InputForUI::NavigationEvent_Direction const Right;

  /// @brief Field Up value: I32(2)
  static ::UnityEngine::InputForUI::NavigationEvent_Direction const Up;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21596 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent_Direction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::NavigationEvent_Direction, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.EventModifiers, UnityEngine.InputForUI.EventSource, UnityEngine.InputForUI.NavigationEvent::Direction,
// UnityEngine.InputForUI.NavigationEvent::Type
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.NavigationEvent
struct CORDL_TYPE NavigationEvent {
public:
  // Declarations
  using Direction = ::UnityEngine::InputForUI::NavigationEvent_Direction;

  using Type = ::UnityEngine::InputForUI::NavigationEvent_Type;

  __declspec(property(get = get_eventModifiers, put = set_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers eventModifiers;

  __declspec(property(get = get_eventSource, put = set_eventSource)) ::UnityEngine::InputForUI::EventSource eventSource;

  __declspec(property(put = set_playerId)) uint32_t playerId;

  __declspec(property(put = set_timestamp)) ::Unity::IntegerTime::DiscreteTime timestamp;

  /// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
  constexpr operator ::UnityEngine::InputForUI::IEventProperties*();

  /// @brief Method DetermineMoveDirection, addr 0x6925ccc, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputForUI::NavigationEvent_Direction DetermineMoveDirection(::UnityEngine::Vector2 vec, float_t deadZone);

  /// @brief Method ToString, addr 0x6925ae8, size 0x1e4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_eventModifiers, addr 0x6925ad8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers();

  /// @brief Method get_eventSource, addr 0x6925ac0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputForUI::EventSource get_eventSource();

  /// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
  constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties();

  /// @brief Method set_eventModifiers, addr 0x6925ae0, size 0x8, virtual false, abstract: false, final false
  inline void set_eventModifiers(::UnityEngine::InputForUI::EventModifiers value);

  /// @brief Method set_eventSource, addr 0x6925ac8, size 0x8, virtual false, abstract: false, final false
  inline void set_eventSource(::UnityEngine::InputForUI::EventSource value);

  /// @brief Method set_playerId, addr 0x6925ad0, size 0x8, virtual false, abstract: false, final false
  inline void set_playerId(uint32_t value);

  /// @brief Method set_timestamp, addr 0x6925ab8, size 0x8, virtual false, abstract: false, final false
  inline void set_timestamp(::Unity::IntegerTime::DiscreteTime value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationEvent();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputForUI::NavigationEvent_Type", modifiers: "", def_value: None }, CppParam { name: "direction", ty:
  // "::UnityEngine::InputForUI::NavigationEvent_Direction", modifiers: "", def_value: None }, CppParam { name: "shouldBeUsed", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: None }, CppParam { name: "_eventSource_k__BackingField", ty:
  // "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: None }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: None }]
  constexpr NavigationEvent(::UnityEngine::InputForUI::NavigationEvent_Type type, ::UnityEngine::InputForUI::NavigationEvent_Direction direction, bool shouldBeUsed,
                            ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField, uint32_t _playerId_k__BackingField,
                            ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21597 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputForUI::NavigationEvent_Type type;

  /// @brief Field direction, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputForUI::NavigationEvent_Direction direction;

  /// @brief Field shouldBeUsed, offset: 0x8, size: 0x1, def value: None
  bool shouldBeUsed;

  /// @brief Field <timestamp>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField;

  /// @brief Field <eventSource>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField;

  /// @brief Field <playerId>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  uint32_t _playerId_k__BackingField;

  /// @brief Field <eventModifiers>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, direction) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, shouldBeUsed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, _timestamp_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, _eventSource_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, _playerId_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, _eventModifiers_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputForUI::NavigationEvent, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputForUI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::NavigationEvent_Direction, "UnityEngine.InputForUI", "NavigationEvent/Direction");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::NavigationEvent_Type, "UnityEngine.InputForUI", "NavigationEvent/Type");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::NavigationEvent, "UnityEngine.InputForUI", "NavigationEvent");
