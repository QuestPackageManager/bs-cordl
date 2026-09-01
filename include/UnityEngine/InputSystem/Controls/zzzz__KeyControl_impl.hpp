#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Controls\KeyControl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__KeyControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.get_keyCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Key (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(
    &::UnityEngine::InputSystem::Controls::KeyControl::get_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64fbfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), { "get_keyCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.set_keyCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)(::UnityEngine::InputSystem::Key)>(
    &::UnityEngine::InputSystem::Controls::KeyControl::set_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64fbff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), { "set_keyCode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.get_scanCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::get_scanCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64fbff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), { "get_scanCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.RefreshConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::RefreshConfiguration)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x64fc034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64fc1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Key& UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_get__keyCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Key const& UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_get__keyCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_set__keyCode_k__BackingField(::UnityEngine::InputSystem::Key value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyCode_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_get_m_ScanCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScanCode;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_get_m_ScanCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScanCode;
}
constexpr void UnityEngine::InputSystem::Controls::KeyControl::__cordl_internal_set_m_ScanCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScanCode = value;
}
inline ::UnityEngine::InputSystem::Key UnityEngine::InputSystem::Controls::KeyControl::get_keyCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), { "get_keyCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Key>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::KeyControl::set_keyCode(::UnityEngine::InputSystem::Key value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), { "set_keyCode", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Key>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Controls::KeyControl::get_scanCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), { "get_scanCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::KeyControl::RefreshConfiguration() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::KeyControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::KeyControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Controls::KeyControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Controls::KeyControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::KeyControl::KeyControl() {}
