#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEvent::*)()>(&::UnityEngine::Events::UnityEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6afb644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.AddListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEvent::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::Events::UnityEvent::AddListener)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6afb64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { "AddListener", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.RemoveListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEvent::*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::Events::UnityEvent::RemoveListener)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6afb6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { "RemoveListener", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.FindMethod_Impl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::UnityEngine::Events::UnityEvent::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::Events::UnityEvent::FindMethod_Impl)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6afb720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { ::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.GetDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::BaseInvokableCall* (::UnityEngine::Events::UnityEvent::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(
    &::UnityEngine::Events::UnityEvent::GetDelegate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6afb788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { ::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.GetDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::BaseInvokableCall* (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::Events::UnityEvent::GetDelegate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6afb678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { "GetDelegate", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEvent.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEvent::*)()>(&::UnityEngine::Events::UnityEvent::Invoke)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6afb7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { "Invoke", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*>& UnityEngine::Events::UnityEvent::__cordl_internal_get_m_InvokeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
constexpr ::ArrayW<::System::Object*> const& UnityEngine::Events::UnityEvent::__cordl_internal_get_m_InvokeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
constexpr void UnityEngine::Events::UnityEvent::__cordl_internal_set_m_InvokeArray(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InvokeArray = value;
}
inline void UnityEngine::Events::UnityEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Events::UnityEvent::AddListener(::UnityEngine::Events::UnityAction* call) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { "AddListener", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, call);
}
inline void UnityEngine::Events::UnityEvent::RemoveListener(::UnityEngine::Events::UnityAction* call) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { "RemoveListener", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, call);
}
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent::FindMethod_Impl(::StringW name, ::System::Type* targetObjType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, targetObjType);
}
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent::GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*>(this, ___internal_method, target, theFunction);
}
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent::GetDelegate(::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { "GetDelegate", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*>(nullptr, ___internal_method, action);
}
inline void UnityEngine::Events::UnityEvent::Invoke() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Events::UnityEvent*>(), { "Invoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* UnityEngine::Events::UnityEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::UnityEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::UnityEvent::UnityEvent() {}
