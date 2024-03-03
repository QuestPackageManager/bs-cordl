#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Clickable_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClampedDragger_1)
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class BaseSlider_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
template <typename T> struct __ClampedDragger_1__DragDirection;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> struct __ClampedDragger_1__DragDirection;
}
namespace UnityEngine::UIElements {
template <typename T> class ClampedDragger_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ClampedDragger_1);
// Type: ::DragDirection
// SizeInfo { instance_size: 4, native_size: 20, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::ClampedDragger`1::DragDirection<T>
struct CORDL_TYPE __ClampedDragger_1__DragDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ClampedDragger_1__DragDirection_Unwrapped
  enum struct ____ClampedDragger_1__DragDirection_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LowToHigh = static_cast<int32_t>(0x1),
    __E_HighToLow = static_cast<int32_t>(0x2),
    __E_Free = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ClampedDragger_1__DragDirection_Unwrapped() const noexcept {
    return static_cast<____ClampedDragger_1__DragDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ClampedDragger_1__DragDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ClampedDragger_1__DragDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Free value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> const Free;

  /// @brief Field HighToLow value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> const HighToLow;

  /// @brief Field LowToHigh value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> const LowToHigh;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ClampedDragger`1
// SizeInfo { instance_size: 144, native_size: 144, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ClampedDragger`1<T>*
class CORDL_TYPE ClampedDragger_1 : public ::UnityEngine::UIElements::Clickable {
public:
  // Declarations
  using DragDirection = ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>;

  /// @brief Field <dragDirection>k__BackingField, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__dragDirection_k__BackingField,
                      put = __cordl_internal_set__dragDirection_k__BackingField))::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> _dragDirection_k__BackingField;

  /// @brief Field <slider>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__slider_k__BackingField, put = __cordl_internal_set__slider_k__BackingField))::UnityEngine::UIElements::BaseSlider_1<T>* _slider_k__BackingField;

  /// @brief Field <startMousePosition>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__startMousePosition_k__BackingField,
                      put = __cordl_internal_set__startMousePosition_k__BackingField))::UnityEngine::Vector2 _startMousePosition_k__BackingField;

  __declspec(property(get = get_delta))::UnityEngine::Vector2 delta;

  __declspec(property(get = get_dragDirection, put = set_dragDirection))::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> dragDirection;

  /// @brief Field dragging, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_dragging, put = __cordl_internal_set_dragging))::System::Action* dragging;

  __declspec(property(put = set_slider))::UnityEngine::UIElements::BaseSlider_1<T>* slider;

  __declspec(property(get = get_startMousePosition, put = set_startMousePosition))::UnityEngine::Vector2 startMousePosition;

  static inline ::UnityEngine::UIElements::ClampedDragger_1<T>* New_ctor(::UnityEngine::UIElements::BaseSlider_1<T>* slider, ::System::Action* clickHandler, ::System::Action* dragHandler);

  /// @brief Method ProcessDownEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId);

  /// @brief Method ProcessMoveEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessMoveEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition);

  constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> const& __cordl_internal_get__dragDirection_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>& __cordl_internal_get__dragDirection_k__BackingField();

  constexpr ::UnityEngine::UIElements::BaseSlider_1<T>*& __cordl_internal_get__slider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseSlider_1<T>*> const& __cordl_internal_get__slider_k__BackingField() const;

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__startMousePosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__startMousePosition_k__BackingField();

  constexpr ::System::Action*& __cordl_internal_get_dragging();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_dragging() const;

  constexpr void __cordl_internal_set__dragDirection_k__BackingField(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> value);

  constexpr void __cordl_internal_set__slider_k__BackingField(::UnityEngine::UIElements::BaseSlider_1<T>* value);

  constexpr void __cordl_internal_set__startMousePosition_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_dragging(::System::Action* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseSlider_1<T>* slider, ::System::Action* clickHandler, ::System::Action* dragHandler);

  /// @brief Method add_dragging, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_dragging(::System::Action* value);

  /// @brief Method get_delta, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_delta();

  /// @brief Method get_dragDirection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> get_dragDirection();

  /// @brief Method get_startMousePosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_startMousePosition();

  /// @brief Method remove_dragging, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_dragging(::System::Action* value);

  /// @brief Method set_dragDirection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_dragDirection(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> value);

  /// @brief Method set_slider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_slider(::UnityEngine::UIElements::BaseSlider_1<T>* value);

  /// @brief Method set_startMousePosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_startMousePosition(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClampedDragger_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClampedDragger_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClampedDragger_1(ClampedDragger_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClampedDragger_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClampedDragger_1(ClampedDragger_1 const&) = delete;

  /// @brief Field dragging, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___dragging;

  /// @brief Field <dragDirection>k__BackingField, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> ____dragDirection_k__BackingField;

  /// @brief Field <slider>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseSlider_1<T>* ____slider_k__BackingField;

  /// @brief Field <startMousePosition>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____startMousePosition_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection, "UnityEngine.UIElements", "ClampedDragger`1/DragDirection");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ClampedDragger_1, "UnityEngine.UIElements", "ClampedDragger`1");
