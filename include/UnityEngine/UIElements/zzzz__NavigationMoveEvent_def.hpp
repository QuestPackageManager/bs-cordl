#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationMoveEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationMoveEvent)
namespace UnityEngine::UIElements {
struct NavigationDeviceType;
}
namespace UnityEngine::UIElements {
struct __NavigationMoveEvent__Direction;
}
namespace UnityEngine::UIElements {
class __NavigationMoveEvent____c;
}
namespace UnityEngine {
struct EventModifiers;
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
namespace UnityEngine::UIElements {
class __NavigationMoveEvent____c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__NavigationMoveEvent__Direction);
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationMoveEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__NavigationMoveEvent____c);
// Type: ::Direction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
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
    __E_Next = static_cast<int32_t>(0x5),
    __E_Previous = static_cast<int32_t>(0x6),
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

  /// @brief Field Next value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Next;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const None;

  /// @brief Field Previous value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Previous;

  /// @brief Field Right value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Right;

  /// @brief Field Up value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Up;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5853 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__NavigationMoveEvent__Direction, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__NavigationMoveEvent__Direction, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::NavigationMoveEvent::<>c*
class CORDL_TYPE __NavigationMoveEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__NavigationMoveEvent____c* __9;

  static inline ::UnityEngine::UIElements::__NavigationMoveEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49b4584, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::NavigationMoveEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49b457c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__NavigationMoveEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__NavigationMoveEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationMoveEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NavigationMoveEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NavigationMoveEvent____c(__NavigationMoveEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NavigationMoveEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NavigationMoveEvent____c(__NavigationMoveEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__NavigationMoveEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::NavigationMoveEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::NavigationMoveEvent*
class CORDL_TYPE NavigationMoveEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationMoveEvent*> {
public:
  // Declarations
  using Direction = ::UnityEngine::UIElements::__NavigationMoveEvent__Direction;

  using __c = ::UnityEngine::UIElements::__NavigationMoveEvent____c;

  /// @brief Field <direction>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__direction_k__BackingField,
                      put = __cordl_internal_set__direction_k__BackingField)) ::UnityEngine::UIElements::__NavigationMoveEvent__Direction _direction_k__BackingField;

  /// @brief Field <move>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__move_k__BackingField, put = __cordl_internal_set__move_k__BackingField)) ::UnityEngine::Vector2 _move_k__BackingField;

  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::UIElements::__NavigationMoveEvent__Direction direction;

  __declspec(property(put = set_move)) ::UnityEngine::Vector2 move;

  /// @brief Method DetermineMoveDirection, addr 0x49b4218, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::__NavigationMoveEvent__Direction DetermineMoveDirection(float_t x, float_t y, float_t deadZone);

  /// @brief Method GetPooled, addr 0x49af81c, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::NavigationMoveEvent* GetPooled(::UnityEngine::UIElements::__NavigationMoveEvent__Direction direction,
                                                                          ::UnityEngine::UIElements::NavigationDeviceType deviceType, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method GetPooled, addr 0x49b4384, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::NavigationMoveEvent* GetPooled(::UnityEngine::UIElements::__NavigationMoveEvent__Direction direction, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method GetPooled, addr 0x49af8c8, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::NavigationMoveEvent* GetPooled(::UnityEngine::Vector2 moveVector, ::UnityEngine::UIElements::NavigationDeviceType deviceType,
                                                                          ::UnityEngine::EventModifiers modifiers);

  /// @brief Method GetPooled, addr 0x49b4284, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::NavigationMoveEvent* GetPooled(::UnityEngine::Vector2 moveVector, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method Init, addr 0x49b442c, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49b447c, size 0x54, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::NavigationMoveEvent* New_ctor();

  constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const& __cordl_internal_get__direction_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction& __cordl_internal_get__direction_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__move_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__move_k__BackingField();

  constexpr void __cordl_internal_set__direction_k__BackingField(::UnityEngine::UIElements::__NavigationMoveEvent__Direction value);

  constexpr void __cordl_internal_set__move_k__BackingField(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x49b44d0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_direction, addr 0x49b426c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__NavigationMoveEvent__Direction get_direction();

  /// @brief Method set_direction, addr 0x49b4274, size 0x8, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::UIElements::__NavigationMoveEvent__Direction value);

  /// @brief Method set_move, addr 0x49b427c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <direction>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  ::UnityEngine::UIElements::__NavigationMoveEvent__Direction ____direction_k__BackingField;

  /// @brief Field <move>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____move_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5855 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationMoveEvent, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::NavigationMoveEvent, ____direction_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::NavigationMoveEvent, ____move_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__NavigationMoveEvent__Direction, "UnityEngine.UIElements", "NavigationMoveEvent/Direction");
NEED_NO_BOX(::UnityEngine::UIElements::NavigationMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationMoveEvent*, "UnityEngine.UIElements", "NavigationMoveEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__NavigationMoveEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__NavigationMoveEvent____c*, "UnityEngine.UIElements", "NavigationMoveEvent/<>c");
