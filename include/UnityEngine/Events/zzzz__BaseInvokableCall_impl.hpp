#pragma once
// IWYU pragma private; include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::BaseInvokableCall._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::BaseInvokableCall::*)()>(&::UnityEngine::Events::BaseInvokableCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6af96dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::BaseInvokableCall._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::BaseInvokableCall::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(
    &::UnityEngine::Events::BaseInvokableCall::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6af96e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::BaseInvokableCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::BaseInvokableCall::*)(::ArrayW<::System::Object*>)>(&::UnityEngine::Events::BaseInvokableCall::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), { ::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::BaseInvokableCall.AllowInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Delegate*)>(&::UnityEngine::Events::BaseInvokableCall::AllowInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6af97b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), { "AllowInvoke", {}, { ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::BaseInvokableCall.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Events::BaseInvokableCall::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(
    &::UnityEngine::Events::BaseInvokableCall::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), { ::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), 5 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Events::BaseInvokableCall::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Events::BaseInvokableCall::_ctor(::System::Object* target, ::System::Reflection::MethodInfo* function) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, function);
}
inline void UnityEngine::Events::BaseInvokableCall::Invoke(::ArrayW<::System::Object*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
template <typename T> inline void UnityEngine::Events::BaseInvokableCall::ThrowOnInvalidArg(::System::Object* arg) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), { "ThrowOnInvalidArg", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arg);
}
inline bool UnityEngine::Events::BaseInvokableCall::AllowInvoke(::System::Delegate* delegate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), { "AllowInvoke", {}, { ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, delegate);
}
inline bool UnityEngine::Events::BaseInvokableCall::Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::BaseInvokableCall*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetObj, method);
}
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::BaseInvokableCall::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::BaseInvokableCall*>());
}
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::BaseInvokableCall::New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* function) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::BaseInvokableCall*>(target, function));
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::BaseInvokableCall::BaseInvokableCall() {}
