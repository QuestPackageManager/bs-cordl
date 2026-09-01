#pragma once
// IWYU pragma private; include "HMUI\ColorGradientSlider.hpp"
#include "HMUI/zzzz__ImageViewBase_impl.hpp"
#include "HMUI/zzzz__TextSlider_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "HMUI/zzzz__ColorGradientSlider_def.hpp"
#include "GlobalNamespace/zzzz__ColorChangeUIEventType_def.hpp"
#include "HMUI/zzzz__TextSlider_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::HMUI::ColorGradientSlider.add_colorDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ColorGradientSlider::*)(
    ::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*)>(&::HMUI::ColorGradientSlider::add_colorDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587d270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::ColorGradientSlider*>(),
            { "add_colorDidChangeEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ColorGradientSlider.remove_colorDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ColorGradientSlider::*)(
    ::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*)>(&::HMUI::ColorGradientSlider::remove_colorDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587d330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::ColorGradientSlider*>(),
            { "remove_colorDidChangeEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ColorGradientSlider.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ColorGradientSlider::*)()>(&::HMUI::ColorGradientSlider::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x587d3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { ::i2c::class_of<::HMUI::ColorGradientSlider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ColorGradientSlider.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ColorGradientSlider::*)()>(&::HMUI::ColorGradientSlider::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x587d5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { ::i2c::class_of<::HMUI::ColorGradientSlider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ColorGradientSlider.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ColorGradientSlider::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::HMUI::ColorGradientSlider::SetColors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x587d71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { "SetColors", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ColorGradientSlider.UpdateVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ColorGradientSlider::*)()>(&::HMUI::ColorGradientSlider::UpdateVisuals)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x587d74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { ::i2c::class_of<::HMUI::ColorGradientSlider*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ColorGradientSlider.TextForNormalizedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::ColorGradientSlider::*)(float_t)>(&::HMUI::ColorGradientSlider::TextForNormalizedValue)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x587dd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { ::i2c::class_of<::HMUI::ColorGradientSlider*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ColorGradientSlider.HandleNormalizedValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ColorGradientSlider::*)(::HMUI::TextSlider*, float_t)>(&::HMUI::ColorGradientSlider::HandleNormalizedValueDidChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x587df2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { "HandleNormalizedValueDidChange", {}, { ::i2c::type_of<::HMUI::TextSlider*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ColorGradientSlider.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ColorGradientSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::ColorGradientSlider::OnPointerUp)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x587df88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { ::i2c::class_of<::HMUI::ColorGradientSlider*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ColorGradientSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ColorGradientSlider::*)()>(&::HMUI::ColorGradientSlider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587e00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& HMUI::ColorGradientSlider::__cordl_internal_get__textPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPrefix;
}
constexpr ::StringW const& HMUI::ColorGradientSlider::__cordl_internal_get__textPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPrefix;
}
constexpr void HMUI::ColorGradientSlider::__cordl_internal_set__textPrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textPrefix = value;
}
constexpr ::UnityEngine::Color& HMUI::ColorGradientSlider::__cordl_internal_get__color0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0;
}
constexpr ::UnityEngine::Color const& HMUI::ColorGradientSlider::__cordl_internal_get__color0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0;
}
constexpr void HMUI::ColorGradientSlider::__cordl_internal_set__color0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color0 = value;
}
constexpr ::UnityEngine::Color& HMUI::ColorGradientSlider::__cordl_internal_get__color1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1;
}
constexpr ::UnityEngine::Color const& HMUI::ColorGradientSlider::__cordl_internal_get__color1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1;
}
constexpr void HMUI::ColorGradientSlider::__cordl_internal_set__color1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color1 = value;
}
constexpr ::ArrayW<::UnityW<::HMUI::ImageViewBase>>& HMUI::ColorGradientSlider::__cordl_internal_get__gradientImages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradientImages;
}
constexpr ::ArrayW<::UnityW<::HMUI::ImageViewBase>> const& HMUI::ColorGradientSlider::__cordl_internal_get__gradientImages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradientImages;
}
constexpr void HMUI::ColorGradientSlider::__cordl_internal_set__gradientImages(::ArrayW<::UnityW<::HMUI::ImageViewBase>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gradientImages = value;
}
constexpr ::UnityEngine::Color& HMUI::ColorGradientSlider::__cordl_internal_get__darkColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____darkColor;
}
constexpr ::UnityEngine::Color const& HMUI::ColorGradientSlider::__cordl_internal_get__darkColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____darkColor;
}
constexpr void HMUI::ColorGradientSlider::__cordl_internal_set__darkColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____darkColor = value;
}
constexpr ::UnityEngine::Color& HMUI::ColorGradientSlider::__cordl_internal_get__lightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor;
}
constexpr ::UnityEngine::Color const& HMUI::ColorGradientSlider::__cordl_internal_get__lightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor;
}
constexpr void HMUI::ColorGradientSlider::__cordl_internal_set__lightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColor = value;
}
constexpr ::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*&
HMUI::ColorGradientSlider::__cordl_internal_get_colorDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorDidChangeEvent;
}
constexpr ::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* const&
HMUI::ColorGradientSlider::__cordl_internal_get_colorDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorDidChangeEvent;
}
constexpr void
HMUI::ColorGradientSlider::__cordl_internal_set_colorDidChangeEvent(::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorDidChangeEvent = value;
}
inline void HMUI::ColorGradientSlider::setStaticF__stringBuilder(::System::Text::StringBuilder* value) {
  ::cordl_internals::setStaticField<::System::Text::StringBuilder*, "_stringBuilder", ::HMUI::ColorGradientSlider*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* HMUI::ColorGradientSlider::getStaticF__stringBuilder() {
  return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "_stringBuilder", ::HMUI::ColorGradientSlider*>();
}
inline void HMUI::ColorGradientSlider::add_colorDidChangeEvent(::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::ColorGradientSlider*>(),
          { "add_colorDidChangeEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ColorGradientSlider::remove_colorDidChangeEvent(::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::ColorGradientSlider*>(),
          { "remove_colorDidChangeEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::HMUI::ColorGradientSlider>, ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ColorGradientSlider::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ColorGradientSlider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ColorGradientSlider::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ColorGradientSlider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ColorGradientSlider::SetColors(::UnityEngine::Color color0, ::UnityEngine::Color color1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { "SetColors", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color0, color1);
}
inline void HMUI::ColorGradientSlider::UpdateVisuals() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ColorGradientSlider*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW HMUI::ColorGradientSlider::TextForNormalizedValue(float_t normalizedValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ColorGradientSlider*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, normalizedValue);
}
inline void HMUI::ColorGradientSlider::HandleNormalizedValueDidChange(::HMUI::TextSlider* slider, float_t normalizedValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { "HandleNormalizedValueDidChange", {}, { ::i2c::type_of<::HMUI::TextSlider*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, normalizedValue);
}
inline void HMUI::ColorGradientSlider::OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ColorGradientSlider*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::ColorGradientSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ColorGradientSlider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ColorGradientSlider* HMUI::ColorGradientSlider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ColorGradientSlider*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr HMUI::ColorGradientSlider::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* HMUI::ColorGradientSlider::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr HMUI::ColorGradientSlider::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* HMUI::ColorGradientSlider::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ColorGradientSlider::ColorGradientSlider() {}
