#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputValue.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputValue_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputValue.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputValue::*)()>(&::UnityEngine::InputSystem::InputValue::Get)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x657ca34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputValue*>(), { "Get", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputValue.get_isPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputValue::*)()>(&::UnityEngine::InputSystem::InputValue::get_isPressed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x657caa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputValue*>(), { "get_isPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputValue::*)()>(&::UnityEngine::InputSystem::InputValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x657cb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext>& UnityEngine::InputSystem::InputValue::__cordl_internal_get_m_Context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Context;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext> const& UnityEngine::InputSystem::InputValue::__cordl_internal_get_m_Context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Context;
}
constexpr void UnityEngine::InputSystem::InputValue::__cordl_internal_set_m_Context(::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Context = value;
}
inline ::System::Object* UnityEngine::InputSystem::InputValue::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputValue*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputValue::Get() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputValue*>(), { "Get", { ::i2c::class_of<TValue>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputValue::get_isPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputValue*>(), { "get_isPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputValue* UnityEngine::InputSystem::InputValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputValue*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputValue::InputValue() {}
