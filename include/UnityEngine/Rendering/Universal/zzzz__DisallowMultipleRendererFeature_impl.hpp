#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DisallowMultipleRendererFeature.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DisallowMultipleRendererFeature_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature.set_customTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::*)(::StringW)>(
    &::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::set_customTitle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68a9db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature*>(), { "set_customTitle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature.get_customTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::*)()>(
    &::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::get_customTitle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68a9db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature*>(), { "get_customTitle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::*)(::StringW)>(
    &::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68a9dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::__cordl_internal_get__customTitle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customTitle_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::__cordl_internal_get__customTitle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customTitle_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::__cordl_internal_set__customTitle_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customTitle_k__BackingField = value;
}
inline void UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::set_customTitle(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature*>(), { "set_customTitle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::get_customTitle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature*>(), { "get_customTitle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::_ctor(::StringW customTitle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customTitle);
}
inline ::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature* UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::New_ctor(::StringW customTitle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature*>(customTitle));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature::DisallowMultipleRendererFeature() {}
