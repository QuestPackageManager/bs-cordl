#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\VisualElementFocusChangeDirection.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusChangeDirection.get_left
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (*)()>(&::UnityEngine::UIElements::VisualElementFocusChangeDirection::get_left)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ccaf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(), { "get_left", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusChangeDirection.get_right
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (*)()>(&::UnityEngine::UIElements::VisualElementFocusChangeDirection::get_right)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ccaf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(), { "get_right", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusChangeDirection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusChangeDirection::*)(int32_t)>(
    &::UnityEngine::UIElements::VisualElementFocusChangeDirection::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ccaff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualElementFocusChangeDirection::setStaticF_s_Left(::UnityEngine::UIElements::VisualElementFocusChangeDirection* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::VisualElementFocusChangeDirection*, "s_Left", ::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(
      std::forward<::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::VisualElementFocusChangeDirection* UnityEngine::UIElements::VisualElementFocusChangeDirection::getStaticF_s_Left() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::VisualElementFocusChangeDirection*, "s_Left", ::UnityEngine::UIElements::VisualElementFocusChangeDirection*>();
}
inline void UnityEngine::UIElements::VisualElementFocusChangeDirection::setStaticF_s_Right(::UnityEngine::UIElements::VisualElementFocusChangeDirection* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::VisualElementFocusChangeDirection*, "s_Right", ::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(
      std::forward<::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::VisualElementFocusChangeDirection* UnityEngine::UIElements::VisualElementFocusChangeDirection::getStaticF_s_Right() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::VisualElementFocusChangeDirection*, "s_Right", ::UnityEngine::UIElements::VisualElementFocusChangeDirection*>();
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::VisualElementFocusChangeDirection::get_left() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(), { "get_left", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*>(nullptr, ___internal_method);
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::VisualElementFocusChangeDirection::get_right() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(), { "get_right", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::VisualElementFocusChangeDirection::_ctor(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElementFocusChangeDirection* UnityEngine::UIElements::VisualElementFocusChangeDirection::New_ctor(int32_t value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualElementFocusChangeDirection*>(value));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementFocusChangeDirection::VisualElementFocusChangeDirection() {}
