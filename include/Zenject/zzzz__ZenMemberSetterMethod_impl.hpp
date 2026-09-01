#pragma once
// IWYU pragma private; include "Zenject\ZenMemberSetterMethod.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Zenject/zzzz__ZenMemberSetterMethod_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::ZenMemberSetterMethod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenMemberSetterMethod::*)(::System::Object*, ::System::IntPtr)>(&::Zenject::ZenMemberSetterMethod::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6e3daa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenMemberSetterMethod.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenMemberSetterMethod::*)(::System::Object*, ::System::Object*)>(&::Zenject::ZenMemberSetterMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3dbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), { ::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenMemberSetterMethod.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Zenject::ZenMemberSetterMethod::*)(::System::Object*, ::System::Object*, ::System::AsyncCallback*,
                                                                                                                     ::System::Object*)>(&::Zenject::ZenMemberSetterMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e3dc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), { ::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenMemberSetterMethod.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenMemberSetterMethod::*)(::System::IAsyncResult*)>(&::Zenject::ZenMemberSetterMethod::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3dc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), { ::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), 15 }));
    return ___internal_method;
  }
};
inline void Zenject::ZenMemberSetterMethod::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Zenject::ZenMemberSetterMethod::Invoke(::System::Object* obj, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value);
}
inline ::System::IAsyncResult* Zenject::ZenMemberSetterMethod::BeginInvoke(::System::Object* obj, ::System::Object* value, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, obj, value, callback, object);
}
inline void Zenject::ZenMemberSetterMethod::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ZenMemberSetterMethod*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Zenject::ZenMemberSetterMethod* Zenject::ZenMemberSetterMethod::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ZenMemberSetterMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::Zenject::ZenMemberSetterMethod::ZenMemberSetterMethod() {}
