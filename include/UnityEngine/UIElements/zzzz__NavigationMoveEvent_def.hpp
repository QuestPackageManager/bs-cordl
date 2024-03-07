#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationMoveEvent)
namespace UnityEngine::UIElements {
struct __NavigationMoveEvent__Direction;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __NavigationMoveEvent__Direction;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__NavigationMoveEvent__Direction);
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationMoveEvent);
// Type: ::Direction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::NavigationMoveEvent::Direction
struct CORDL_TYPE __NavigationMoveEvent__Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NavigationMoveEvent__Direction_Unwrapped
  enum struct ____NavigationMoveEvent__Direction_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Up = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
    __E_Down = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NavigationMoveEvent__Direction_Unwrapped() const noexcept {
    return static_cast<____NavigationMoveEvent__Direction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationMoveEvent__Direction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NavigationMoveEvent__Direction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Down value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Down;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Left;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const None;

  /// @brief Field Right value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Right;

  /// @brief Field Up value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Up;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__NavigationMoveEvent__Direction, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__NavigationMoveEvent__Direction, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::NavigationMoveEvent
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::NavigationMoveEvent*
class CORDL_TYPE NavigationMoveEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationMoveEvent*> {
public:
  // Declarations
  using Direction = ::UnityEngine::UIElements::__NavigationMoveEvent__Direction;

  /// @brief Field <direction>k__BackingField, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__direction_k__BackingField,
                      put = __cordl_internal_set__direction_k__BackingField))::UnityEngine::UIElements::__NavigationMoveEvent__Direction _direction_k__BackingField;

  /// @brief Field <move>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__move_k__BackingField, put = __cordl_internal_set__move_k__BackingField))::UnityEngine::Vector2 _move_k__BackingField;

  __declspec(property(get = get_direction, put = set_direction))::UnityEngine::UIElements::__NavigationMoveEvent__Direction direction;

  __declspec(property(put = set_move))::UnityEngine::Vector2 move;

  /// @brief Method DetermineMoveDirection, addr 0x2fba1fc, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::__NavigationMoveEvent__Direction DetermineMoveDirection(float_t x, float_t y, float_t deadZone);

  /// @brief Method GetPooled, addr 0x2fba268, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::NavigationMoveEvent* GetPooled(::UnityEngine::Vector2 moveVector);

  /// @brief Method Init, addr 0x2fba348, size 0x88, virtual true, abstract: false, final false
  inline void Init();

  static inline ::UnityEngine::UIElements::NavigationMoveEvent* New_ctor();

  constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const& __cordl_internal_get__direction_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction& __cordl_internal_get__direction_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__move_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__move_k__BackingField();

  constexpr void __cordl_internal_set__direction_k__BackingField(::UnityEngine::UIElements::__NavigationMoveEvent__Direction value);

  constexpr void __cordl_internal_set__move_k__BackingField(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x2fba3d0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_direction, addr 0x2fba250, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__NavigationMoveEvent__Direction get_direction();

  /// @brief Method set_direction, addr 0x2fba258, size 0x8, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::UIElements::__NavigationMoveEvent__Direction value);

  /// @brief Method set_move, addr 0x2fba260, size 0x8, virtual false, abstract: false, final false
  inline void set_move(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationMoveEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationMoveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationMoveEvent(NavigationMoveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationMoveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationMoveEvent(NavigationMoveEvent const&) = delete;

  /// @brief Field <direction>k__BackingField, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::UIElements::__NavigationMoveEvent__Direction ____direction_k__BackingField;

  /// @brief Field <move>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____move_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationMoveEvent, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::NavigationMoveEvent, ____direction_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::NavigationMoveEvent, ____move_k__BackingField) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__NavigationMoveEvent__Direction, "UnityEngine.UIElements", "NavigationMoveEvent/Direction");
NEED_NO_BOX(::UnityEngine::UIElements::NavigationMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationMoveEvent*, "UnityEngine.UIElements", "NavigationMoveEvent");
