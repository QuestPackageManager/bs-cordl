#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/INotifyBindablePropertyChanged.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyBindablePropertyChanged_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindablePropertyChangedEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::INotifyBindablePropertyChanged.add_propertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::INotifyBindablePropertyChanged::*)(
    ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*)>(&::UnityEngine::UIElements::INotifyBindablePropertyChanged::add_propertyChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::INotifyBindablePropertyChanged.remove_propertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::INotifyBindablePropertyChanged::*)(
    ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*)>(&::UnityEngine::UIElements::INotifyBindablePropertyChanged::remove_propertyChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::INotifyBindablePropertyChanged::add_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::INotifyBindablePropertyChanged::remove_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::INotifyBindablePropertyChanged*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
