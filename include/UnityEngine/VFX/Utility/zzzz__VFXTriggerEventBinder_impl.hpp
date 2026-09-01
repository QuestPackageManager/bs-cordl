#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXTriggerEventBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXTriggerEventBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXTriggerEventBinder_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation::VFXTriggerEventBinder_Activation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation::VFXTriggerEventBinder_Activation() {}
constexpr ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation::OnEnter{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation::OnExit{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation::OnStay{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXTriggerEventBinder.SetEventAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXTriggerEventBinder::*)(::ArrayW<::System::Object*>)>(
    &::UnityEngine::VFX::Utility::VFXTriggerEventBinder::SetEventAttribute)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x69e17b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXTriggerEventBinder.OnTriggerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXTriggerEventBinder::*)(::UnityEngine::Collider*)>(
    &::UnityEngine::VFX::Utility::VFXTriggerEventBinder::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x69e1898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), { "OnTriggerEnter", {}, { ::i2c::type_of<::UnityEngine::Collider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXTriggerEventBinder.OnTriggerExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXTriggerEventBinder::*)(::UnityEngine::Collider*)>(
    &::UnityEngine::VFX::Utility::VFXTriggerEventBinder::OnTriggerExit)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69e1984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), { "OnTriggerExit", {}, { ::i2c::type_of<::UnityEngine::Collider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXTriggerEventBinder.OnTriggerStay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXTriggerEventBinder::*)(::UnityEngine::Collider*)>(
    &::UnityEngine::VFX::Utility::VFXTriggerEventBinder::OnTriggerStay)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69e1a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), { "OnTriggerStay", {}, { ::i2c::type_of<::UnityEngine::Collider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXTriggerEventBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXTriggerEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXTriggerEventBinder::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69e1b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::VFX::Utility::VFXTriggerEventBinder::__cordl_internal_get_colliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::VFX::Utility::VFXTriggerEventBinder::__cordl_internal_get_colliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colliders;
}
constexpr void UnityEngine::VFX::Utility::VFXTriggerEventBinder::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colliders = value;
}
constexpr ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation& UnityEngine::VFX::Utility::VFXTriggerEventBinder::__cordl_internal_get_activation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activation;
}
constexpr ::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation const& UnityEngine::VFX::Utility::VFXTriggerEventBinder::__cordl_internal_get_activation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activation;
}
constexpr void UnityEngine::VFX::Utility::VFXTriggerEventBinder::__cordl_internal_set_activation(::UnityEngine::VFX::Utility::VFXTriggerEventBinder_Activation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activation = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXTriggerEventBinder::__cordl_internal_get_positionParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionParameter;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXTriggerEventBinder::__cordl_internal_get_positionParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionParameter;
}
constexpr void UnityEngine::VFX::Utility::VFXTriggerEventBinder::__cordl_internal_set_positionParameter(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionParameter = value;
}
inline void UnityEngine::VFX::Utility::VFXTriggerEventBinder::SetEventAttribute(::ArrayW<::System::Object*> parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void UnityEngine::VFX::Utility::VFXTriggerEventBinder::OnTriggerEnter(::UnityEngine::Collider* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), { "OnTriggerEnter", {}, { ::i2c::type_of<::UnityEngine::Collider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::VFX::Utility::VFXTriggerEventBinder::OnTriggerExit(::UnityEngine::Collider* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), { "OnTriggerExit", {}, { ::i2c::type_of<::UnityEngine::Collider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::VFX::Utility::VFXTriggerEventBinder::OnTriggerStay(::UnityEngine::Collider* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), { "OnTriggerStay", {}, { ::i2c::type_of<::UnityEngine::Collider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::VFX::Utility::VFXTriggerEventBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXTriggerEventBinder* UnityEngine::VFX::Utility::VFXTriggerEventBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXTriggerEventBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXTriggerEventBinder::VFXTriggerEventBinder() {}
