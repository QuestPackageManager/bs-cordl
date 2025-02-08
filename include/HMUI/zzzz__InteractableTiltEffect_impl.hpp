#pragma once
// IWYU pragma private; include "HMUI/InteractableTiltEffect.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerMoveHandler_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "HMUI/zzzz__InteractableTiltEffect_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::HMUI::InteractableTiltEffect.set_effectStrengthMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InteractableTiltEffect::*)(float_t)>(&::HMUI::InteractableTiltEffect::set_effectStrengthMultiplier)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x39fa1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(), "set_effectStrengthMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTiltEffect.get_effectStrengthMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::InteractableTiltEffect::*)()>(&::HMUI::InteractableTiltEffect::get_effectStrengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39fa2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(),
                                                                               "get_effectStrengthMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTiltEffect.OnPointerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InteractableTiltEffect::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::HMUI::InteractableTiltEffect::OnPointerEnter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x39fa2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(), "OnPointerEnter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTiltEffect.OnPointerMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InteractableTiltEffect::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::HMUI::InteractableTiltEffect::OnPointerMove)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x39fa30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(), "OnPointerMove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTiltEffect.ComputeNewTargetRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::HMUI::InteractableTiltEffect::*)(::UnityEngine::Vector2)>(
    &::HMUI::InteractableTiltEffect::ComputeNewTargetRotation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x39fa224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(), "ComputeNewTargetRotation", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InteractableTiltEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InteractableTiltEffect::*)()>(&::HMUI::InteractableTiltEffect::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x39fa35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(), "set_effectStrengthMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t HMUI::InteractableTiltEffect::get_effectStrengthMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(),
                                                                             "get_effectStrengthMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void HMUI::InteractableTiltEffect::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(), "OnPointerEnter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void HMUI::InteractableTiltEffect::OnPointerMove(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(), "OnPointerMove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::UnityEngine::Quaternion HMUI::InteractableTiltEffect::ComputeNewTargetRotation(::UnityEngine::Vector2 localPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(), "ComputeNewTargetRotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, localPoint);
}
inline void HMUI::InteractableTiltEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InteractableTiltEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::InteractableTiltEffect* HMUI::InteractableTiltEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::InteractableTiltEffect*>());
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
