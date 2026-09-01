#pragma once
// IWYU pragma private; include "UnityEngine\UI\Scrollbar.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Scrollbar_Direction::Scrollbar_Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Scrollbar_Direction::Scrollbar_Direction() {}
constexpr ::UnityEngine::UI::Scrollbar_Direction UnityEngine::UI::Scrollbar_Direction::LeftToRight{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Scrollbar_Direction UnityEngine::UI::Scrollbar_Direction::RightToLeft{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::Scrollbar_Direction UnityEngine::UI::Scrollbar_Direction::BottomToTop{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::Scrollbar_Direction UnityEngine::UI::Scrollbar_Direction::TopToBottom{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar_ScrollEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar_ScrollEvent::*)()>(&::UnityEngine::UI::Scrollbar_ScrollEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e04484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar_ScrollEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::Scrollbar_ScrollEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar_ScrollEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::Scrollbar_ScrollEvent* UnityEngine::UI::Scrollbar_ScrollEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Scrollbar_ScrollEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Scrollbar_ScrollEvent::Scrollbar_ScrollEvent() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Scrollbar_Axis::Scrollbar_Axis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Scrollbar_Axis::Scrollbar_Axis() {}
constexpr ::UnityEngine::UI::Scrollbar_Axis UnityEngine::UI::Scrollbar_Axis::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Scrollbar_Axis UnityEngine::UI::Scrollbar_Axis::Vertical{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar__ClickRepeat_d__59._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::*)(int32_t)>(&::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e055bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar__ClickRepeat_d__59.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::*)()>(&::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e05e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar__ClickRepeat_d__59.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::*)()>(&::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::MoveNext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6e05e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar__ClickRepeat_d__59.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::*)()>(
    &::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e05f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar__ClickRepeat_d__59.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::*)()>(
    &::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e05fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar__ClickRepeat_d__59.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::*)()>(
    &::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e05fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::Scrollbar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_get_screenPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_get_screenPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenPosition;
}
constexpr void UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_set_screenPosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenPosition = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_get_camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_get_camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr void UnityEngine::UI::Scrollbar__ClickRepeat_d__59::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___camera = value;
}
inline void UnityEngine::UI::Scrollbar__ClickRepeat_d__59::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UI::Scrollbar__ClickRepeat_d__59::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::Scrollbar__ClickRepeat_d__59::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::Scrollbar__ClickRepeat_d__59::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar__ClickRepeat_d__59::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::Scrollbar__ClickRepeat_d__59::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityEngine::UI::Scrollbar__ClickRepeat_d__59* UnityEngine::UI::Scrollbar__ClickRepeat_d__59::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Scrollbar__ClickRepeat_d__59*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr UnityEngine::UI::Scrollbar__ClickRepeat_d__59::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
UnityEngine::UI::Scrollbar__ClickRepeat_d__59::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UI::Scrollbar__ClickRepeat_d__59::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UI::Scrollbar__ClickRepeat_d__59::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UI::Scrollbar__ClickRepeat_d__59::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UI::Scrollbar__ClickRepeat_d__59::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Scrollbar__ClickRepeat_d__59::Scrollbar__ClickRepeat_d__59() {}
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.get_handleRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::get_handleRect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e04000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_handleRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.set_handleRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::RectTransform*)>(&::UnityEngine::UI::Scrollbar::set_handleRect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e04008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_handleRect", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.get_direction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::Scrollbar_Direction (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::get_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e04338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_direction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.set_direction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::UI::Scrollbar_Direction)>(&::UnityEngine::UI::Scrollbar::set_direction)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e04340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_direction", {}, { ::i2c::type_of<::UnityEngine::UI::Scrollbar_Direction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e043b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::get_value)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e045e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(float_t)>(&::UnityEngine::UI::Scrollbar::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(float_t)>(&::UnityEngine::UI::Scrollbar::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0476c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.get_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::get_size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e04774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.set_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(float_t)>(&::UnityEngine::UI::Scrollbar::set_size)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e0477c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_size", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.get_numberOfSteps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::get_numberOfSteps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e04808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_numberOfSteps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.set_numberOfSteps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(int32_t)>(&::UnityEngine::UI::Scrollbar::set_numberOfSteps)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e04810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_numberOfSteps", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.get_onValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::Scrollbar_ScrollEvent* (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e04898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_onValueChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.set_onValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::UI::Scrollbar_ScrollEvent*)>(&::UnityEngine::UI::Scrollbar::set_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e048a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_onValueChanged", {}, { ::i2c::type_of<::UnityEngine::UI::Scrollbar_ScrollEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.get_stepSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::get_stepSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e048a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_stepSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::UI::CanvasUpdate)>(&::UnityEngine::UI::Scrollbar::Rebuild)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e048d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.LayoutComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e048d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.GraphicUpdateComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e048dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e048e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e04bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e04cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.UpdateCachedReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::UpdateCachedReferences)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e04098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "UpdateCachedReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(float_t, bool)>(&::UnityEngine::UI::Scrollbar::Set)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6e04694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "Set", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e04d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.get_axis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::Scrollbar_Axis (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::get_axis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e04d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_axis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.get_reverseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::get_reverseValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e04d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_reverseValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.UpdateVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::UpdateVisuals)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6e04180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "UpdateVisuals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.UpdateDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::Scrollbar::UpdateDrag)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6e04d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "UpdateDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.UpdateDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*)>(
    &::UnityEngine::UI::Scrollbar::UpdateDrag)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6e04e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(),
                            { "UpdateDrag", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.DoUpdateDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::Vector2, float_t)>(&::UnityEngine::UI::Scrollbar::DoUpdateDrag)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e05018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "DoUpdateDrag", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.MayDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::Scrollbar::MayDrag)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e05088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "MayDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.OnBeginDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::Scrollbar::OnBeginDrag)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6e050ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.OnDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::Scrollbar::OnDrag)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e052ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::Scrollbar::OnPointerDown)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e0534c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.ClickRepeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Scrollbar::ClickRepeat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e0557c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "ClickRepeat", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.ClickRepeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(
    &::UnityEngine::UI::Scrollbar::ClickRepeat)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e05504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "ClickRepeat", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::Scrollbar::OnPointerUp)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e055c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.OnMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::EventSystems::AxisEventData*)>(&::UnityEngine::UI::Scrollbar::OnMove)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6e055fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.FindSelectableOnLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::FindSelectableOnLeft)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e058e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.FindSelectableOnRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::FindSelectableOnRight)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e059e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.FindSelectableOnUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::FindSelectableOnUp)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e05ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.FindSelectableOnDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::UnityEngine::UI::Scrollbar::*)()>(&::UnityEngine::UI::Scrollbar::FindSelectableOnDown)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e05be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.OnInitializePotentialDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Scrollbar::OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e05ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.SetDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Scrollbar::*)(::UnityEngine::UI::Scrollbar_Direction, bool)>(&::UnityEngine::UI::Scrollbar::SetDirection)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6e05cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "SetDirection", {}, { ::i2c::type_of<::UnityEngine::UI::Scrollbar_Direction>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Scrollbar.UnityEngine_UI_ICanvasElement_get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::UI::Scrollbar::*)()>(
    &::UnityEngine::UI::Scrollbar::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e05e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "UnityEngine.UI.ICanvasElement.get_transform", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_HandleRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandleRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_HandleRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HandleRect;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_HandleRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HandleRect = value;
}
constexpr ::UnityEngine::UI::Scrollbar_Direction& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_Direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr ::UnityEngine::UI::Scrollbar_Direction const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_Direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_Direction(::UnityEngine::UI::Scrollbar_Direction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Direction = value;
}
constexpr float_t& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr float_t const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_Value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
constexpr float_t& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr float_t const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_Size(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Size = value;
}
constexpr int32_t& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_NumberOfSteps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfSteps;
}
constexpr int32_t const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_NumberOfSteps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfSteps;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_NumberOfSteps(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NumberOfSteps = value;
}
constexpr ::UnityEngine::UI::Scrollbar_ScrollEvent*& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_OnValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr ::UnityEngine::UI::Scrollbar_ScrollEvent* const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_OnValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::Scrollbar_ScrollEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnValueChanged = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_ContainerRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainerRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_ContainerRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContainerRect;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_ContainerRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContainerRect = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Offset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Offset;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_Offset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Offset = value;
}
constexpr ::UnityEngine::DrivenRectTransformTracker& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_Tracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_Tracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracker;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tracker = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_PointerDownRepeat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerDownRepeat;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_PointerDownRepeat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerDownRepeat;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_PointerDownRepeat(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerDownRepeat = value;
}
constexpr bool& UnityEngine::UI::Scrollbar::__cordl_internal_get_isPointerDownAndNotDragging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPointerDownAndNotDragging;
}
constexpr bool const& UnityEngine::UI::Scrollbar::__cordl_internal_get_isPointerDownAndNotDragging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPointerDownAndNotDragging;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_isPointerDownAndNotDragging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPointerDownAndNotDragging = value;
}
constexpr bool& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_DelayedUpdateVisuals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedUpdateVisuals;
}
constexpr bool const& UnityEngine::UI::Scrollbar::__cordl_internal_get_m_DelayedUpdateVisuals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DelayedUpdateVisuals;
}
constexpr void UnityEngine::UI::Scrollbar::__cordl_internal_set_m_DelayedUpdateVisuals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DelayedUpdateVisuals = value;
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::Scrollbar::get_handleRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_handleRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::set_handleRect(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_handleRect", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::Scrollbar_Direction UnityEngine::UI::Scrollbar::get_direction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_direction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Scrollbar_Direction>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::set_direction(::UnityEngine::UI::Scrollbar_Direction value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_direction", {}, { ::i2c::type_of<::UnityEngine::UI::Scrollbar_Direction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Scrollbar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Scrollbar::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::set_value(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Scrollbar::SetValueWithoutNotify(float_t input) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline float_t UnityEngine::UI::Scrollbar::get_size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::set_size(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_size", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::Scrollbar::get_numberOfSteps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_numberOfSteps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::set_numberOfSteps(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_numberOfSteps", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::Scrollbar_ScrollEvent* UnityEngine::UI::Scrollbar::get_onValueChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_onValueChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Scrollbar_ScrollEvent*>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::set_onValueChanged(::UnityEngine::UI::Scrollbar_ScrollEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "set_onValueChanged", {}, { ::i2c::type_of<::UnityEngine::UI::Scrollbar_ScrollEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Scrollbar::get_stepSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_stepSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::Rebuild(::UnityEngine::UI::CanvasUpdate executing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, executing);
}
inline void UnityEngine::UI::Scrollbar::LayoutComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::GraphicUpdateComplete() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::Update() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::UpdateCachedReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "UpdateCachedReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::Set(float_t input, bool sendCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "Set", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, sendCallback);
}
inline void UnityEngine::UI::Scrollbar::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::Scrollbar_Axis UnityEngine::UI::Scrollbar::get_axis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_axis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Scrollbar_Axis>(this, ___internal_method);
}
inline bool UnityEngine::UI::Scrollbar::get_reverseValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "get_reverseValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::UpdateVisuals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "UpdateVisuals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "UpdateDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Scrollbar::UpdateDrag(::UnityEngine::RectTransform* containerRect, ::UnityEngine::Vector2 position, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(),
                                       { "UpdateDrag", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, containerRect, position, camera);
}
inline void UnityEngine::UI::Scrollbar::DoUpdateDrag(::UnityEngine::Vector2 handleCorner, float_t remainingSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "DoUpdateDrag", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handleCorner, remainingSize);
}
inline bool UnityEngine::UI::Scrollbar::MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "MayDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Scrollbar::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Scrollbar::OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Scrollbar::OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::System::Collections::IEnumerator* UnityEngine::UI::Scrollbar::ClickRepeat(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "ClickRepeat", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, eventData);
}
inline ::System::Collections::IEnumerator* UnityEngine::UI::Scrollbar::ClickRepeat(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "ClickRepeat", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, screenPosition, camera);
}
inline void UnityEngine::UI::Scrollbar::OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Scrollbar::OnMove(::UnityEngine::EventSystems::AxisEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Scrollbar::FindSelectableOnLeft() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Scrollbar::FindSelectableOnRight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Scrollbar::FindSelectableOnUp() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Selectable> UnityEngine::UI::Scrollbar::FindSelectableOnDown() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>>(this, ___internal_method);
}
inline void UnityEngine::UI::Scrollbar::OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Scrollbar::SetDirection(::UnityEngine::UI::Scrollbar_Direction direction, bool includeRectLayouts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "SetDirection", {}, { ::i2c::type_of<::UnityEngine::UI::Scrollbar_Direction>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction, includeRectLayouts);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::UI::Scrollbar::UnityEngine_UI_ICanvasElement_get_transform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Scrollbar*>(), { "UnityEngine.UI.ICanvasElement.get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::UI::Scrollbar* UnityEngine::UI::Scrollbar::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Scrollbar*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr UnityEngine::UI::Scrollbar::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* UnityEngine::UI::Scrollbar::i___UnityEngine__EventSystems__IBeginDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::UI::Scrollbar::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::UI::Scrollbar::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr UnityEngine::UI::Scrollbar::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* UnityEngine::UI::Scrollbar::i___UnityEngine__EventSystems__IDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr UnityEngine::UI::Scrollbar::operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* UnityEngine::UI::Scrollbar::i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr UnityEngine::UI::Scrollbar::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ICanvasElement"
constexpr ::UnityEngine::UI::ICanvasElement* UnityEngine::UI::Scrollbar::i___UnityEngine__UI__ICanvasElement() noexcept {
  return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Scrollbar::Scrollbar() {}
