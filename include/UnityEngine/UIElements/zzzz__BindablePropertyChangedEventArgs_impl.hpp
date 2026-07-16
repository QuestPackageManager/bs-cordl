#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindablePropertyChangedEventArgs.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindablePropertyChangedEventArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BindablePropertyChangedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BindablePropertyChangedEventArgs::*)(::by_ref<::UnityEngine::UIElements::BindingId>)>(
    &::UnityEngine::UIElements::BindablePropertyChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c41ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindablePropertyChangedEventArgs.get_propertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingId (::UnityEngine::UIElements::BindablePropertyChangedEventArgs::*)()>(
    &::UnityEngine::UIElements::BindablePropertyChangedEventArgs::get_propertyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c41eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>(), { "get_propertyName", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BindablePropertyChangedEventArgs::_ctor(::by_ref<::UnityEngine::UIElements::BindingId> propertyName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, propertyName);
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BindablePropertyChangedEventArgs::get_propertyName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>(), { "get_propertyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingId>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_PropertyName", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindablePropertyChangedEventArgs::BindablePropertyChangedEventArgs(::UnityEngine::UIElements::BindingId m_PropertyName) noexcept {
  this->m_PropertyName = m_PropertyName;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindablePropertyChangedEventArgs::BindablePropertyChangedEventArgs() {}
