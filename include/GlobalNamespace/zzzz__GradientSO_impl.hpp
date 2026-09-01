#pragma once
// IWYU pragma private; include "GlobalNamespace\GradientSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GradientSO_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GradientSO.get_gradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (::GlobalNamespace::GradientSO::*)()>(&::GlobalNamespace::GradientSO::get_gradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f8708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GradientSO*>(), { "get_gradient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GradientSO.SetGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GradientSO::*)(::UnityEngine::Gradient*)>(&::GlobalNamespace::GradientSO::SetGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f8710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GradientSO*>(), { "SetGradient", {}, { ::i2c::type_of<::UnityEngine::Gradient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GradientSO.op_Implicit___UnityEngine__Gradient_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (*)(::GlobalNamespace::GradientSO*)>(&::GlobalNamespace::GradientSO::op_Implicit___UnityEngine__Gradient_)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36f7d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GradientSO*>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::GradientSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GradientSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GradientSO::*)()>(&::GlobalNamespace::GradientSO::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36f8718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GradientSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Gradient*& GlobalNamespace::GradientSO::__cordl_internal_get__gradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradient;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::GradientSO::__cordl_internal_get__gradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradient;
}
constexpr void GlobalNamespace::GradientSO::__cordl_internal_set__gradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gradient = value;
}
inline ::UnityEngine::Gradient* GlobalNamespace::GradientSO::get_gradient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GradientSO*>(), { "get_gradient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(this, ___internal_method);
}
inline void GlobalNamespace::GradientSO::SetGradient(::UnityEngine::Gradient* gradient) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GradientSO*>(), { "SetGradient", {}, { ::i2c::type_of<::UnityEngine::Gradient*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gradient);
}
inline ::UnityEngine::Gradient* GlobalNamespace::GradientSO::op_Implicit___UnityEngine__Gradient_(::GlobalNamespace::GradientSO* gradientSo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GradientSO*>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::GradientSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(nullptr, ___internal_method, gradientSo);
}
inline void GlobalNamespace::GradientSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GradientSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GradientSO* GlobalNamespace::GradientSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GradientSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GradientSO::GradientSO() {}
