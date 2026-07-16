#pragma once
// IWYU pragma private; include "Zenject/ZenInjectMethod.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Zenject/zzzz__ZenInjectMethod_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::ZenInjectMethod._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenInjectMethod::*)(::System::Object*, ::System::IntPtr)>(&::Zenject::ZenInjectMethod::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6e3a208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenInjectMethod*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenInjectMethod.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenInjectMethod::*)(::System::Object*, ::ArrayW<::System::Object*>)>(&::Zenject::ZenInjectMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3a350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ZenInjectMethod*>(), { ::i2c::class_of<::Zenject::ZenInjectMethod*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenInjectMethod.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Zenject::ZenInjectMethod::*)(::System::Object*, ::ArrayW<::System::Object*>, ::System::AsyncCallback*,
                                                                                                               ::System::Object*)>(&::Zenject::ZenInjectMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e3a364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ZenInjectMethod*>(), { ::i2c::class_of<::Zenject::ZenInjectMethod*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenInjectMethod.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenInjectMethod::*)(::System::IAsyncResult*)>(&::Zenject::ZenInjectMethod::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3a38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ZenInjectMethod*>(), { ::i2c::class_of<::Zenject::ZenInjectMethod*>(), 15 }));
    return ___internal_method;
  }
};
inline void Zenject::ZenInjectMethod::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenInjectMethod*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Zenject::ZenInjectMethod::Invoke(::System::Object* obj, ::ArrayW<::System::Object*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ZenInjectMethod*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, args);
}
inline ::System::IAsyncResult* Zenject::ZenInjectMethod::BeginInvoke(::System::Object* obj, ::ArrayW<::System::Object*> args, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ZenInjectMethod*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, obj, args, callback, object);
}
inline void Zenject::ZenInjectMethod::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ZenInjectMethod*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Zenject::ZenInjectMethod* Zenject::ZenInjectMethod::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ZenInjectMethod*>(object, method));
}
// Ctor Parameters []
constexpr ::Zenject::ZenInjectMethod::ZenInjectMethod() {}
