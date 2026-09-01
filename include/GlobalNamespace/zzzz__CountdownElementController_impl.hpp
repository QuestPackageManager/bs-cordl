#pragma once
// IWYU pragma private; include "GlobalNamespace\CountdownElementController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CountdownElementController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CountdownElementController.SetTextAndRunAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountdownElementController::*)(::StringW)>(&::GlobalNamespace::CountdownElementController::SetTextAndRunAnimation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a0fc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownElementController*>(), { "SetTextAndRunAnimation", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownElementController.StopAndHide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountdownElementController::*)()>(&::GlobalNamespace::CountdownElementController::StopAndHide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a0fdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownElementController*>(), { "StopAndHide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownElementController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CountdownElementController::*)()>(&::GlobalNamespace::CountdownElementController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0ff44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownElementController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::CountdownElementController::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::CountdownElementController::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::CountdownElementController::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::CountdownElementController::__cordl_internal_get__animation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::CountdownElementController::__cordl_internal_get__animation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animation;
}
constexpr void GlobalNamespace::CountdownElementController::__cordl_internal_set__animation(::UnityW<::UnityEngine::Animation> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animation = value;
}
inline void GlobalNamespace::CountdownElementController::SetTextAndRunAnimation(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownElementController*>(), { "SetTextAndRunAnimation", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::CountdownElementController::StopAndHide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownElementController*>(), { "StopAndHide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CountdownElementController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CountdownElementController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CountdownElementController* GlobalNamespace::CountdownElementController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CountdownElementController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountdownElementController::CountdownElementController() {}
