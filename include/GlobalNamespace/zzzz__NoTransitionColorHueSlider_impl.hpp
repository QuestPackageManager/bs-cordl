#pragma once
// IWYU pragma private; include "GlobalNamespace\NoTransitionColorHueSlider.hpp"
#include "HMUI/zzzz__NoTransitionCircleSlider_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__NoTransitionColorHueSlider_def.hpp"
#include "GlobalNamespace/zzzz__ColorChangeUIEventType_def.hpp"
#include "HMUI/zzzz__CircleSlider_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoTransitionColorHueSlider.add_colorHueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionColorHueSlider::*)(
    ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*)>(
    &::GlobalNamespace::NoTransitionColorHueSlider::add_colorHueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a2dae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(),
                                         { "add_colorHueDidChangeEvent",
                                           {},
                                           { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionColorHueSlider.remove_colorHueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionColorHueSlider::*)(
    ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*)>(
    &::GlobalNamespace::NoTransitionColorHueSlider::remove_colorHueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a2dba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(),
                                         { "remove_colorHueDidChangeEvent",
                                           {},
                                           { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionColorHueSlider.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionColorHueSlider::*)()>(&::GlobalNamespace::NoTransitionColorHueSlider::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a2dc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), { ::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionColorHueSlider.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionColorHueSlider::*)()>(&::GlobalNamespace::NoTransitionColorHueSlider::OnDestroy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a2dcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), { ::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionColorHueSlider.UpdateVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionColorHueSlider::*)()>(&::GlobalNamespace::NoTransitionColorHueSlider::UpdateVisuals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a2dd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), { ::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionColorHueSlider.HandleNormalizedValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionColorHueSlider::*)(::HMUI::CircleSlider*, float_t)>(
    &::GlobalNamespace::NoTransitionColorHueSlider::HandleNormalizedValueDidChange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a2de24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(),
                                                             { "HandleNormalizedValueDidChange", {}, { ::i2c::type_of<::HMUI::CircleSlider*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionColorHueSlider.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionColorHueSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::GlobalNamespace::NoTransitionColorHueSlider::OnPointerUp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a2de4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), { ::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionColorHueSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionColorHueSlider::*)()>(&::GlobalNamespace::NoTransitionColorHueSlider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2de8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::NoTransitionColorHueSlider::__cordl_internal_get__darkColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____darkColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::NoTransitionColorHueSlider::__cordl_internal_get__darkColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____darkColor;
}
constexpr void GlobalNamespace::NoTransitionColorHueSlider::__cordl_internal_set__darkColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____darkColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::NoTransitionColorHueSlider::__cordl_internal_get__lightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::NoTransitionColorHueSlider::__cordl_internal_get__lightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor;
}
constexpr void GlobalNamespace::NoTransitionColorHueSlider::__cordl_internal_set__lightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColor = value;
}
constexpr ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*&
GlobalNamespace::NoTransitionColorHueSlider::__cordl_internal_get_colorHueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorHueDidChangeEvent;
}
constexpr ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* const&
GlobalNamespace::NoTransitionColorHueSlider::__cordl_internal_get_colorHueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorHueDidChangeEvent;
}
constexpr void GlobalNamespace::NoTransitionColorHueSlider::__cordl_internal_set_colorHueDidChangeEvent(
    ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorHueDidChangeEvent = value;
}
inline void GlobalNamespace::NoTransitionColorHueSlider::add_colorHueDidChangeEvent(
    ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(),
                                       { "add_colorHueDidChangeEvent",
                                         {},
                                         { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoTransitionColorHueSlider::remove_colorHueDidChangeEvent(
    ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(),
                                       { "remove_colorHueDidChangeEvent",
                                         {},
                                         { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoTransitionColorHueSlider::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionColorHueSlider::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionColorHueSlider::UpdateVisuals() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionColorHueSlider::HandleNormalizedValueDidChange(::HMUI::CircleSlider* slider, float_t normalizedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(),
                                                           { "HandleNormalizedValueDidChange", {}, { ::i2c::type_of<::HMUI::CircleSlider*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, normalizedValue);
}
inline void GlobalNamespace::NoTransitionColorHueSlider::OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::NoTransitionColorHueSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionColorHueSlider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoTransitionColorHueSlider* GlobalNamespace::NoTransitionColorHueSlider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoTransitionColorHueSlider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoTransitionColorHueSlider::NoTransitionColorHueSlider() {}
