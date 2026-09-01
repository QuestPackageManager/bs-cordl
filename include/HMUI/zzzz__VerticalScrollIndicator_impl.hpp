#pragma once
// IWYU pragma private; include "HMUI\VerticalScrollIndicator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__VerticalScrollIndicator_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::HMUI::VerticalScrollIndicator.set_progress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollIndicator::*)(float_t)>(&::HMUI::VerticalScrollIndicator::set_progress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58895f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "set_progress", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollIndicator.get_progress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::VerticalScrollIndicator::*)()>(&::HMUI::VerticalScrollIndicator::get_progress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58912b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "get_progress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollIndicator.set_normalizedPageHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollIndicator::*)(float_t)>(&::HMUI::VerticalScrollIndicator::set_normalizedPageHeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x588933c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "set_normalizedPageHeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollIndicator.get_normalizedPageHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::VerticalScrollIndicator::*)()>(&::HMUI::VerticalScrollIndicator::get_normalizedPageHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58912bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "get_normalizedPageHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollIndicator.get_handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::VerticalScrollIndicator::*)()>(&::HMUI::VerticalScrollIndicator::get_handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58912c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "get_handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollIndicator.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollIndicator::*)()>(&::HMUI::VerticalScrollIndicator::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58912cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollIndicator.RefreshHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollIndicator::*)()>(&::HMUI::VerticalScrollIndicator::RefreshHandle)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58911dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "RefreshHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::VerticalScrollIndicator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::VerticalScrollIndicator::*)()>(&::HMUI::VerticalScrollIndicator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58912d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::VerticalScrollIndicator::__cordl_internal_get__handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::VerticalScrollIndicator::__cordl_internal_get__handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
constexpr void HMUI::VerticalScrollIndicator::__cordl_internal_set__handle(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handle = value;
}
constexpr float_t& HMUI::VerticalScrollIndicator::__cordl_internal_get__padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____padding;
}
constexpr float_t const& HMUI::VerticalScrollIndicator::__cordl_internal_get__padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____padding;
}
constexpr void HMUI::VerticalScrollIndicator::__cordl_internal_set__padding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____padding = value;
}
constexpr float_t& HMUI::VerticalScrollIndicator::__cordl_internal_get__progress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progress;
}
constexpr float_t const& HMUI::VerticalScrollIndicator::__cordl_internal_get__progress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progress;
}
constexpr void HMUI::VerticalScrollIndicator::__cordl_internal_set__progress(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____progress = value;
}
constexpr float_t& HMUI::VerticalScrollIndicator::__cordl_internal_get__normalizedPageHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedPageHeight;
}
constexpr float_t const& HMUI::VerticalScrollIndicator::__cordl_internal_get__normalizedPageHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedPageHeight;
}
constexpr void HMUI::VerticalScrollIndicator::__cordl_internal_set__normalizedPageHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalizedPageHeight = value;
}
inline void HMUI::VerticalScrollIndicator::set_progress(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "set_progress", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::VerticalScrollIndicator::get_progress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "get_progress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::VerticalScrollIndicator::set_normalizedPageHeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "set_normalizedPageHeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::VerticalScrollIndicator::get_normalizedPageHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "get_normalizedPageHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::VerticalScrollIndicator::get_handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "get_handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void HMUI::VerticalScrollIndicator::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::VerticalScrollIndicator::RefreshHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { "RefreshHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::VerticalScrollIndicator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::VerticalScrollIndicator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::VerticalScrollIndicator* HMUI::VerticalScrollIndicator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::VerticalScrollIndicator*>());
}
// Ctor Parameters []
constexpr ::HMUI::VerticalScrollIndicator::VerticalScrollIndicator() {}
