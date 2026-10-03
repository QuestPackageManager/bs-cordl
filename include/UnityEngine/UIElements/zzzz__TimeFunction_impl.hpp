#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TimeFunction.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TimeFunction_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TimeFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TimeFunction::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::UIElements::TimeFunction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x726c948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimeFunction*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimeFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::UIElements::TimeFunction::*)()>(&::UnityEngine::UIElements::TimeFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x726c9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimeFunction*>(), { ::i2c::class_of<::UnityEngine::UIElements::TimeFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TimeFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimeFunction*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline double_t UnityEngine::UIElements::TimeFunction::Invoke() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TimeFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TimeFunction* UnityEngine::UIElements::TimeFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TimeFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TimeFunction::TimeFunction() {}
