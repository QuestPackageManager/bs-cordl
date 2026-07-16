#pragma once
// IWYU pragma private; include "HMUI/InteractableTiltEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "HMUI/zzzz__InteractableTiltEffect_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::HMUI::InteractableTiltEffect.set_effectStrengthMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InteractableTiltEffect::*)(float_t)>(&::HMUI::InteractableTiltEffect::set_effectStrengthMultiplier)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x588439c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { "set_effectStrengthMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTiltEffect.get_effectStrengthMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::InteractableTiltEffect::*)()>(&::HMUI::InteractableTiltEffect::get_effectStrengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5884458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { "get_effectStrengthMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTiltEffect.OnPointerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InteractableTiltEffect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::InteractableTiltEffect::OnPointerEnter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5884460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { "OnPointerEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTiltEffect.OnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InteractableTiltEffect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::InteractableTiltEffect::OnPointerMove)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58844b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTiltEffect.ComputeNewTargetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::HMUI::InteractableTiltEffect::*)(::UnityEngine::Vector2)>(
    &::HMUI::InteractableTiltEffect::ComputeNewTargetRotation)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58843cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { "ComputeNewTargetRotation", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTiltEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InteractableTiltEffect::*)()>(&::HMUI::InteractableTiltEffect::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5884500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::InteractableTiltEffect::__cordl_internal_get__rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::InteractableTiltEffect::__cordl_internal_get__rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr void HMUI::InteractableTiltEffect::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rectTransform = value;
}
constexpr float_t& HMUI::InteractableTiltEffect::__cordl_internal_get__maxHorizontalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHorizontalRotation;
}
constexpr float_t const& HMUI::InteractableTiltEffect::__cordl_internal_get__maxHorizontalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHorizontalRotation;
}
constexpr void HMUI::InteractableTiltEffect::__cordl_internal_set__maxHorizontalRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxHorizontalRotation = value;
}
constexpr float_t& HMUI::InteractableTiltEffect::__cordl_internal_get__maxVerticalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVerticalRotation;
}
constexpr float_t const& HMUI::InteractableTiltEffect::__cordl_internal_get__maxVerticalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxVerticalRotation;
}
constexpr void HMUI::InteractableTiltEffect::__cordl_internal_set__maxVerticalRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxVerticalRotation = value;
}
constexpr ::UnityEngine::Vector2& HMUI::InteractableTiltEffect::__cordl_internal_get__prevLocalPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevLocalPoint;
}
constexpr ::UnityEngine::Vector2 const& HMUI::InteractableTiltEffect::__cordl_internal_get__prevLocalPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevLocalPoint;
}
constexpr void HMUI::InteractableTiltEffect::__cordl_internal_set__prevLocalPoint(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevLocalPoint = value;
}
constexpr float_t& HMUI::InteractableTiltEffect::__cordl_internal_get__effectStrengthMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectStrengthMultiplier;
}
constexpr float_t const& HMUI::InteractableTiltEffect::__cordl_internal_get__effectStrengthMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectStrengthMultiplier;
}
constexpr void HMUI::InteractableTiltEffect::__cordl_internal_set__effectStrengthMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectStrengthMultiplier = value;
}
inline void HMUI::InteractableTiltEffect::set_effectStrengthMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { "set_effectStrengthMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::InteractableTiltEffect::get_effectStrengthMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { "get_effectStrengthMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::InteractableTiltEffect::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { "OnPointerEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::InteractableTiltEffect::OnPointerMove(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::UnityEngine::Quaternion HMUI::InteractableTiltEffect::ComputeNewTargetRotation(::UnityEngine::Vector2 localPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { "ComputeNewTargetRotation", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, localPoint);
}
inline void HMUI::InteractableTiltEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InteractableTiltEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::InteractableTiltEffect* HMUI::InteractableTiltEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::InteractableTiltEffect*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr HMUI::InteractableTiltEffect::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* HMUI::InteractableTiltEffect::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr HMUI::InteractableTiltEffect::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* HMUI::InteractableTiltEffect::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerMoveHandler"
constexpr HMUI::InteractableTiltEffect::operator ::UnityEngine::EventSystems::IPointerMoveHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerMoveHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerMoveHandler"
constexpr ::UnityEngine::EventSystems::IPointerMoveHandler* HMUI::InteractableTiltEffect::i___UnityEngine__EventSystems__IPointerMoveHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerMoveHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::InteractableTiltEffect::InteractableTiltEffect() {}
