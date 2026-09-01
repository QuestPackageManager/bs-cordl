#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXVisibilityEventBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXVisibilityEventBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXVisibilityEventBinder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation::VFXVisibilityEventBinder_Activation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation::VFXVisibilityEventBinder_Activation() {}
constexpr ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation::OnBecameVisible{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation::OnBecameInvisible{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder.SetEventAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXVisibilityEventBinder::*)(::ArrayW<::System::Object*>)>(
    &::UnityEngine::VFX::Utility::VFXVisibilityEventBinder::SetEventAttribute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69e1c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder.OnBecameVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXVisibilityEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXVisibilityEventBinder::OnBecameVisible)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x69e1c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*>(), { "OnBecameVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder.OnBecameInvisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXVisibilityEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXVisibilityEventBinder::OnBecameInvisible)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69e1cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*>(), { "OnBecameInvisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXVisibilityEventBinder::*)()>(&::UnityEngine::VFX::Utility::VFXVisibilityEventBinder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69e1d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation& UnityEngine::VFX::Utility::VFXVisibilityEventBinder::__cordl_internal_get_activation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activation;
}
constexpr ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation const& UnityEngine::VFX::Utility::VFXVisibilityEventBinder::__cordl_internal_get_activation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activation;
}
constexpr void UnityEngine::VFX::Utility::VFXVisibilityEventBinder::__cordl_internal_set_activation(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activation = value;
}
inline void UnityEngine::VFX::Utility::VFXVisibilityEventBinder::SetEventAttribute(::ArrayW<::System::Object*> parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void UnityEngine::VFX::Utility::VFXVisibilityEventBinder::OnBecameVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*>(), { "OnBecameVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXVisibilityEventBinder::OnBecameInvisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*>(), { "OnBecameInvisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXVisibilityEventBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder* UnityEngine::VFX::Utility::VFXVisibilityEventBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder::VFXVisibilityEventBinder() {}
