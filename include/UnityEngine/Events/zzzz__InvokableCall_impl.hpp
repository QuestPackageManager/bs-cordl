#pragma once
// IWYU pragma private; include "UnityEngine/Events/InvokableCall.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall.add_Delegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCall::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::Events::InvokableCall::add_Delegate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6af9858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { "add_Delegate", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall.remove_Delegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCall::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::Events::InvokableCall::remove_Delegate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6af9904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { "remove_Delegate", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCall::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(
    &::UnityEngine::Events::InvokableCall::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6af99b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCall::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::Events::InvokableCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6af9a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCall::*)(::ArrayW<::System::Object*>)>(&::UnityEngine::Events::InvokableCall::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6af9a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { ::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::InvokableCall::*)()>(&::UnityEngine::Events::InvokableCall::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6af9ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { "Invoke", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall.Find
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Events::InvokableCall::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(
    &::UnityEngine::Events::InvokableCall::Find)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6af9b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { ::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityAction*& UnityEngine::Events::InvokableCall::__cordl_internal_get_Delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Delegate;
}
constexpr ::UnityEngine::Events::UnityAction* const& UnityEngine::Events::InvokableCall::__cordl_internal_get_Delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Delegate;
}
constexpr void UnityEngine::Events::InvokableCall::__cordl_internal_set_Delegate(::UnityEngine::Events::UnityAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Delegate = value;
}
inline void UnityEngine::Events::InvokableCall::add_Delegate(::UnityEngine::Events::UnityAction* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { "add_Delegate", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Events::InvokableCall::remove_Delegate(::UnityEngine::Events::UnityAction* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { "remove_Delegate", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Events::InvokableCall::_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, theFunction);
}
inline void UnityEngine::Events::InvokableCall::_ctor(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void UnityEngine::Events::InvokableCall::Invoke(::ArrayW<::System::Object*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::Events::InvokableCall::Invoke() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), { "Invoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Events::InvokableCall::Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::InvokableCall*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetObj, method);
}
inline ::UnityEngine::Events::InvokableCall* UnityEngine::Events::InvokableCall::New_ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::InvokableCall*>(target, theFunction));
}
inline ::UnityEngine::Events::InvokableCall* UnityEngine::Events::InvokableCall::New_ctor(::UnityEngine::Events::UnityAction* action) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::InvokableCall*>(action));
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::InvokableCall::InvokableCall() {}
