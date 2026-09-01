#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorHueSlider.hpp"
#include "HMUI/zzzz__CircleSlider_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__ColorHueSlider_def.hpp"
#include "GlobalNamespace/zzzz__ColorChangeUIEventType_def.hpp"
#include "HMUI/zzzz__CircleSlider_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorHueSlider.add_colorHueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorHueSlider::*)(
    ::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*)>(&::GlobalNamespace::ColorHueSlider::add_colorHueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a2c568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(),
            { "add_colorHueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorHueSlider.remove_colorHueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorHueSlider::*)(
    ::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*)>(&::GlobalNamespace::ColorHueSlider::remove_colorHueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a2c628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(),
            { "remove_colorHueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorHueSlider.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorHueSlider::*)()>(&::GlobalNamespace::ColorHueSlider::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a2c6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), { ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorHueSlider.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorHueSlider::*)()>(&::GlobalNamespace::ColorHueSlider::OnDestroy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a2c778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), { ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorHueSlider.UpdateVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorHueSlider::*)()>(&::GlobalNamespace::ColorHueSlider::UpdateVisuals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a2c7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), { ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorHueSlider.HandleNormalizedValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorHueSlider::*)(::HMUI::CircleSlider*, float_t)>(
    &::GlobalNamespace::ColorHueSlider::HandleNormalizedValueDidChange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a2c8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), { "HandleNormalizedValueDidChange", {}, { ::i2c::type_of<::HMUI::CircleSlider*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorHueSlider.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorHueSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::ColorHueSlider::OnPointerUp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a2c8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), { ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorHueSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorHueSlider::*)()>(&::GlobalNamespace::ColorHueSlider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2c90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::ColorHueSlider::__cordl_internal_get__darkColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____darkColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorHueSlider::__cordl_internal_get__darkColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____darkColor;
}
constexpr void GlobalNamespace::ColorHueSlider::__cordl_internal_set__darkColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____darkColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ColorHueSlider::__cordl_internal_get__lightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorHueSlider::__cordl_internal_get__lightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor;
}
constexpr void GlobalNamespace::ColorHueSlider::__cordl_internal_set__lightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColor = value;
}
constexpr ::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*&
GlobalNamespace::ColorHueSlider::__cordl_internal_get_colorHueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorHueDidChangeEvent;
}
constexpr ::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* const&
GlobalNamespace::ColorHueSlider::__cordl_internal_get_colorHueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorHueDidChangeEvent;
}
constexpr void GlobalNamespace::ColorHueSlider::__cordl_internal_set_colorHueDidChangeEvent(
    ::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorHueDidChangeEvent = value;
}
inline void GlobalNamespace::ColorHueSlider::add_colorHueDidChangeEvent(::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(),
          { "add_colorHueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorHueSlider::remove_colorHueDidChangeEvent(::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(),
          { "remove_colorHueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorHueSlider::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorHueSlider::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorHueSlider::UpdateVisuals() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorHueSlider::HandleNormalizedValueDidChange(::HMUI::CircleSlider* slider, float_t normalizedValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), { "HandleNormalizedValueDidChange", {}, { ::i2c::type_of<::HMUI::CircleSlider*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, normalizedValue);
}
inline void GlobalNamespace::ColorHueSlider::OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::ColorHueSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorHueSlider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorHueSlider* GlobalNamespace::ColorHueSlider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorHueSlider*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr GlobalNamespace::ColorHueSlider::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* GlobalNamespace::ColorHueSlider::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr GlobalNamespace::ColorHueSlider::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::ColorHueSlider::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorHueSlider::ColorHueSlider() {}
