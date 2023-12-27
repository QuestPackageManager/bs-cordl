#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Services/zzzz__TrackingServices_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Services::TrackingServices.NotifyMarshaledObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*)>(
    &::System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2495d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Services::TrackingServices*>::get(), "NotifyMarshaledObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Services::TrackingServices.NotifyUnmarshaledObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*)>(
    &::System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2496010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Services::TrackingServices*>::get(), "NotifyUnmarshaledObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Services::TrackingServices.NotifyDisconnectedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x249345c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Services::TrackingServices*>::get(), "NotifyDisconnectedObject",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Services::TrackingServices::setStaticF__handlers(::System::Collections::ArrayList* value) {
  ::cordl_internals::setStaticField<::System::Collections::ArrayList*, "_handlers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Services::TrackingServices*>::get>(
      std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::Services::TrackingServices::getStaticF__handlers() {
  return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "_handlers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Services::TrackingServices*>::get>();
}
inline void System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* _cordl_or) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Services::TrackingServices*>::get(), "NotifyMarshaledObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, _cordl_or);
}
inline void System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* _cordl_or) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Services::TrackingServices*>::get(), "NotifyUnmarshaledObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, _cordl_or);
}
inline void System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Services::TrackingServices*>::get(), "NotifyDisconnectedObject",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Services::TrackingServices::TrackingServices() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
