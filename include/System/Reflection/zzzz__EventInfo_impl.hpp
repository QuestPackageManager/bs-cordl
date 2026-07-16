#pragma once
// IWYU pragma private; include "System/Reflection/EventInfo.hpp"
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "Mono/zzzz__RuntimeEventHandle_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::EventInfo_AddEventAdapter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::EventInfo_AddEventAdapter::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Reflection::EventInfo_AddEventAdapter::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b7bbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo_AddEventAdapter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo_AddEventAdapter.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::EventInfo_AddEventAdapter::*)(::System::Object*, ::System::Delegate*)>(
    &::System::Reflection::EventInfo_AddEventAdapter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7bd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo_AddEventAdapter*>(), { ::i2c::class_of<::System::Reflection::EventInfo_AddEventAdapter*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Reflection::EventInfo_AddEventAdapter::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo_AddEventAdapter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Reflection::EventInfo_AddEventAdapter::Invoke(::System::Object* _this, ::System::Delegate* dele) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::EventInfo_AddEventAdapter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _this, dele);
}
inline ::System::Reflection::EventInfo_AddEventAdapter* System::Reflection::EventInfo_AddEventAdapter::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::EventInfo_AddEventAdapter*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Reflection::EventInfo_AddEventAdapter::EventInfo_AddEventAdapter() {}
//  Writing Method size for method: ::System::Reflection::EventInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::EventInfo::*)()>(&::System::Reflection::EventInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7b944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.get_MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberTypes (::System::Reflection::EventInfo::*)()>(&::System::Reflection::EventInfo::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7b94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { ::i2c::class_of<::System::Reflection::EventInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetAddMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::EventInfo::*)()>(&::System::Reflection::EventInfo::GetAddMethod)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7b954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { "GetAddMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetRemoveMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::EventInfo::*)()>(&::System::Reflection::EventInfo::GetRemoveMethod)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7b968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { "GetRemoveMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetAddMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::EventInfo::*)(bool)>(&::System::Reflection::EventInfo::GetAddMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { ::i2c::class_of<::System::Reflection::EventInfo*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetRemoveMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::EventInfo::*)(bool)>(&::System::Reflection::EventInfo::GetRemoveMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { ::i2c::class_of<::System::Reflection::EventInfo*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetRaiseMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::EventInfo::*)(bool)>(&::System::Reflection::EventInfo::GetRaiseMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { ::i2c::class_of<::System::Reflection::EventInfo*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.get_EventHandlerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::EventInfo::*)()>(&::System::Reflection::EventInfo::get_EventHandlerType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b7b97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { ::i2c::class_of<::System::Reflection::EventInfo*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::EventInfo::*)(::System::Object*)>(&::System::Reflection::EventInfo::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b7ba8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { ::i2c::class_of<::System::Reflection::EventInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::EventInfo::*)()>(&::System::Reflection::EventInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7baa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { ::i2c::class_of<::System::Reflection::EventInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*)>(&::System::Reflection::EventInfo::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b7bacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Reflection::EventInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*)>(&::System::Reflection::EventInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b7baf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Reflection::EventInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.internal_from_handle_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::EventInfo* (*)(::System::IntPtr, ::System::IntPtr)>(&::System::Reflection::EventInfo::internal_from_handle_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7bb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { "internal_from_handle_type", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetEventFromHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::EventInfo* (*)(::Mono::RuntimeEventHandle, ::System::RuntimeTypeHandle)>(
    &::System::Reflection::EventInfo::GetEventFromHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b7bb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(),
                                                             { "GetEventFromHandle", {}, { ::i2c::type_of<::Mono::RuntimeEventHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::EventInfo_AddEventAdapter*& System::Reflection::EventInfo::__cordl_internal_get_cached_add_event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cached_add_event;
}
constexpr ::System::Reflection::EventInfo_AddEventAdapter* const& System::Reflection::EventInfo::__cordl_internal_get_cached_add_event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cached_add_event;
}
constexpr void System::Reflection::EventInfo::__cordl_internal_set_cached_add_event(::System::Reflection::EventInfo_AddEventAdapter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cached_add_event = value;
}
inline void System::Reflection::EventInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Reflection::EventInfo::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::EventInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::EventInfo::GetAddMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { "GetAddMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::EventInfo::GetRemoveMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { "GetRemoveMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::EventInfo::GetAddMethod(bool nonPublic) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::EventInfo*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, nonPublic);
}
inline ::System::Reflection::MethodInfo* System::Reflection::EventInfo::GetRemoveMethod(bool nonPublic) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::EventInfo*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, nonPublic);
}
inline ::System::Reflection::MethodInfo* System::Reflection::EventInfo::GetRaiseMethod(bool nonPublic) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::EventInfo*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, nonPublic);
}
inline ::System::Type* System::Reflection::EventInfo::get_EventHandlerType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::EventInfo*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Reflection::EventInfo::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::EventInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::EventInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::EventInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::EventInfo::op_Equality(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Reflection::EventInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::EventInfo::op_Inequality(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Reflection::EventInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::System::Reflection::EventInfo* System::Reflection::EventInfo::internal_from_handle_type(::System::IntPtr event_handle, ::System::IntPtr type_handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(), { "internal_from_handle_type", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*>(nullptr, ___internal_method, event_handle, type_handle);
}
inline ::System::Reflection::EventInfo* System::Reflection::EventInfo::GetEventFromHandle(::Mono::RuntimeEventHandle handle, ::System::RuntimeTypeHandle reflectedType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::EventInfo*>(),
                                                           { "GetEventFromHandle", {}, { ::i2c::type_of<::Mono::RuntimeEventHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*>(nullptr, ___internal_method, handle, reflectedType);
}
inline ::System::Reflection::EventInfo* System::Reflection::EventInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::EventInfo*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::EventInfo::EventInfo() {}
