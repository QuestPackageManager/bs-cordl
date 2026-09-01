#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorSaturationValueSlider.hpp"
#include "HMUI/zzzz__Slider2D_impl.hpp"
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSaturationValueSlider_def.hpp"
#include "GlobalNamespace/zzzz__ColorChangeUIEventType_def.hpp"
#include "HMUI/zzzz__Slider2D_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSaturationValueSlider.add_colorSaturationOrValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSaturationValueSlider::*)(
    ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*)>(
    &::GlobalNamespace::ColorSaturationValueSlider::add_colorSaturationOrValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a2c914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(),
                         { "add_colorSaturationOrValueDidChangeEvent",
                           {},
                           { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSaturationValueSlider.remove_colorSaturationOrValueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSaturationValueSlider::*)(
    ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*)>(
    &::GlobalNamespace::ColorSaturationValueSlider::remove_colorSaturationOrValueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a2c9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(),
                         { "remove_colorSaturationOrValueDidChangeEvent",
                           {},
                           { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSaturationValueSlider.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSaturationValueSlider::*)()>(&::GlobalNamespace::ColorSaturationValueSlider::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a2ca94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), { ::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSaturationValueSlider.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSaturationValueSlider::*)()>(&::GlobalNamespace::ColorSaturationValueSlider::OnDestroy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a2cb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), { ::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSaturationValueSlider.SetHue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSaturationValueSlider::*)(float_t)>(&::GlobalNamespace::ColorSaturationValueSlider::SetHue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a2cba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), { "SetHue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSaturationValueSlider.UpdateVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSaturationValueSlider::*)()>(&::GlobalNamespace::ColorSaturationValueSlider::UpdateVisuals)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a2cbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), { ::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSaturationValueSlider.HandleNormalizedValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSaturationValueSlider::*)(::HMUI::Slider2D*, ::UnityEngine::Vector2)>(
    &::GlobalNamespace::ColorSaturationValueSlider::HandleNormalizedValueDidChange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a2ccdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(),
                                                             { "HandleNormalizedValueDidChange", {}, { ::i2c::type_of<::HMUI::Slider2D*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSaturationValueSlider.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSaturationValueSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::GlobalNamespace::ColorSaturationValueSlider::OnPointerUp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a2cd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), { ::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSaturationValueSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSaturationValueSlider::*)()>(&::GlobalNamespace::ColorSaturationValueSlider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2cd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_get__hue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hue;
}
constexpr float_t const& GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_get__hue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hue;
}
constexpr void GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_set__hue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hue = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>>& GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_get__graphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphics;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>> const& GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_get__graphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphics;
}
constexpr void GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_set__graphics(::ArrayW<::UnityW<::UnityEngine::UI::Graphic>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphics = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_get__darkColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____darkColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_get__darkColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____darkColor;
}
constexpr void GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_set__darkColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____darkColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_get__lightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_get__lightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor;
}
constexpr void GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_set__lightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColor = value;
}
constexpr ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*&
GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_get_colorSaturationOrValueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSaturationOrValueDidChangeEvent;
}
constexpr ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* const&
GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_get_colorSaturationOrValueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSaturationOrValueDidChangeEvent;
}
constexpr void GlobalNamespace::ColorSaturationValueSlider::__cordl_internal_set_colorSaturationOrValueDidChangeEvent(
    ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorSaturationOrValueDidChangeEvent = value;
}
inline void GlobalNamespace::ColorSaturationValueSlider::add_colorSaturationOrValueDidChangeEvent(
    ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(),
                          { "add_colorSaturationOrValueDidChangeEvent",
                            {},
                            { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorSaturationValueSlider::remove_colorSaturationOrValueDidChangeEvent(
    ::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(),
                          { "remove_colorSaturationOrValueDidChangeEvent",
                            {},
                            { ::i2c::type_of<::System::Action_3<::UnityW<::GlobalNamespace::ColorSaturationValueSlider>, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorSaturationValueSlider::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSaturationValueSlider::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSaturationValueSlider::SetHue(float_t hue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), { "SetHue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hue);
}
inline void GlobalNamespace::ColorSaturationValueSlider::UpdateVisuals() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSaturationValueSlider::HandleNormalizedValueDidChange(::HMUI::Slider2D* slider, ::UnityEngine::Vector2 normalizedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(),
                                                           { "HandleNormalizedValueDidChange", {}, { ::i2c::type_of<::HMUI::Slider2D*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, normalizedValue);
}
inline void GlobalNamespace::ColorSaturationValueSlider::OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::ColorSaturationValueSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSaturationValueSlider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSaturationValueSlider* GlobalNamespace::ColorSaturationValueSlider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorSaturationValueSlider*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr GlobalNamespace::ColorSaturationValueSlider::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* GlobalNamespace::ColorSaturationValueSlider::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr GlobalNamespace::ColorSaturationValueSlider::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::ColorSaturationValueSlider::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSaturationValueSlider::ColorSaturationValueSlider() {}
