#pragma once
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "Mono/zzzz__RuntimeEventHandle_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
//  Writing Method size for method: ::System::Reflection::__EventInfo__AddEventAdapter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::__EventInfo__AddEventAdapter::*)(::System::Object*, void*)>(
    &::System::Reflection::__EventInfo__AddEventAdapter::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x24e661c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::__EventInfo__AddEventAdapter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::__EventInfo__AddEventAdapter.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::__EventInfo__AddEventAdapter::*)(::System::Object*, ::System::Delegate*)>(
    &::System::Reflection::__EventInfo__AddEventAdapter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24e674c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::__EventInfo__AddEventAdapter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::__EventInfo__AddEventAdapter*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Reflection::__EventInfo__AddEventAdapter* System::Reflection::__EventInfo__AddEventAdapter::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::__EventInfo__AddEventAdapter*>(object, method));
}
inline void System::Reflection::__EventInfo__AddEventAdapter::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::__EventInfo__AddEventAdapter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Reflection::__EventInfo__AddEventAdapter::Invoke(::System::Object* _this, ::System::Delegate* dele) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::__EventInfo__AddEventAdapter*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _this, dele);
}
// Ctor Parameters []
constexpr ::System::Reflection::__EventInfo__AddEventAdapter::__EventInfo__AddEventAdapter() {}
//  Writing Method size for method: ::System::Reflection::EventInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::EventInfo::*)()>(&::System::Reflection::EventInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e6340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.get_MemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (::System::Reflection::EventInfo::*)()>(
    &::System::Reflection::EventInfo::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e6350;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetAddMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::EventInfo::*)()>(
    &::System::Reflection::EventInfo::GetAddMethod)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24e6358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "GetAddMethod",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetRemoveMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::EventInfo::*)()>(
    &::System::Reflection::EventInfo::GetRemoveMethod)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24e636c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "GetRemoveMethod",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetAddMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::EventInfo::*)(bool)>(
    &::System::Reflection::EventInfo::GetAddMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetRemoveMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::EventInfo::*)(bool)>(
    &::System::Reflection::EventInfo::GetRemoveMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetRaiseMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::EventInfo::*)(bool)>(
    &::System::Reflection::EventInfo::GetRaiseMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.get_EventHandlerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::EventInfo::*)()>(&::System::Reflection::EventInfo::get_EventHandlerType)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x24e6380;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::EventInfo::*)(::System::Object*)>(&::System::Reflection::EventInfo::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e64a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::EventInfo::*)()>(&::System::Reflection::EventInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e64b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*)>(
    &::System::Reflection::EventInfo::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24e64c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*)>(
    &::System::Reflection::EventInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24e64f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.internal_from_handle_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::EventInfo* (*)(void*, void*)>(&::System::Reflection::EventInfo::internal_from_handle_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24e6530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "internal_from_handle_type", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::EventInfo.GetEventFromHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::EventInfo* (*)(::Mono::RuntimeEventHandle, ::System::RuntimeTypeHandle)>(
    &::System::Reflection::EventInfo::GetEventFromHandle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x24e6534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "GetEventFromHandle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::RuntimeEventHandle>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::__EventInfo__AddEventAdapter*& System::Reflection::EventInfo::__get_cached_add_event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cached_add_event;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::__EventInfo__AddEventAdapter*> const& System::Reflection::EventInfo::__get_cached_add_event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cached_add_event;
}
constexpr void System::Reflection::EventInfo::__set_cached_add_event(::System::Reflection::__EventInfo__AddEventAdapter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cached_add_event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::EventInfo* System::Reflection::EventInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::EventInfo*>());
}
inline void System::Reflection::EventInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Reflection::EventInfo::get_MemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "get_MemberType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::EventInfo::GetAddMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "GetAddMethod",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::EventInfo::GetRemoveMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "GetRemoveMethod",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::EventInfo::GetAddMethod(bool nonPublic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "GetAddMethod", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, nonPublic);
}
inline ::System::Reflection::MethodInfo* System::Reflection::EventInfo::GetRemoveMethod(bool nonPublic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "GetRemoveMethod", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, nonPublic);
}
inline ::System::Reflection::MethodInfo* System::Reflection::EventInfo::GetRaiseMethod(bool nonPublic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "GetRaiseMethod", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, nonPublic);
}
inline ::System::Type* System::Reflection::EventInfo::get_EventHandlerType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "get_EventHandlerType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline bool System::Reflection::EventInfo::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::EventInfo::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Reflection::EventInfo::op_Equality(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::EventInfo::op_Inequality(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline ::System::Reflection::EventInfo* System::Reflection::EventInfo::internal_from_handle_type(void* event_handle, void* type_handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "internal_from_handle_type", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*, false>(nullptr, ___internal_method, event_handle, type_handle);
}
inline ::System::Reflection::EventInfo* System::Reflection::EventInfo::GetEventFromHandle(::Mono::RuntimeEventHandle handle, ::System::RuntimeTypeHandle reflectedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::EventInfo*>::get(), "GetEventFromHandle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::RuntimeEventHandle>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*, false>(nullptr, ___internal_method, handle, reflectedType);
}
// Ctor Parameters []
constexpr ::System::Reflection::EventInfo::EventInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
