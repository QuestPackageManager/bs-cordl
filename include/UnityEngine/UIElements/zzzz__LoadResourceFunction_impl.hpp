#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\LoadResourceFunction.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__LoadResourceFunction_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::LoadResourceFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::LoadResourceFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::LoadResourceFunction::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6db88f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LoadResourceFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::LoadResourceFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::UIElements::LoadResourceFunction::*)(::StringW, ::System::Type*, float_t)>(
    &::UnityEngine::UIElements::LoadResourceFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6db8978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LoadResourceFunction*>(), { ::i2c::class_of<::UnityEngine::UIElements::LoadResourceFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::LoadResourceFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LoadResourceFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::UIElements::LoadResourceFunction::Invoke(::StringW pathName, ::System::Type* type, float_t dpiScaling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::LoadResourceFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, pathName, type, dpiScaling);
}
inline ::UnityEngine::UIElements::LoadResourceFunction* UnityEngine::UIElements::LoadResourceFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::LoadResourceFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::LoadResourceFunction::LoadResourceFunction() {}
