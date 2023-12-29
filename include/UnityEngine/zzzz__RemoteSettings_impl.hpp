#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RemoteSettings_def.hpp"
#include "UnityEngine/zzzz__RemoteSettings_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::__RemoteSettings__UpdatedEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__RemoteSettings__UpdatedEventHandler::*)(::System::Object*, void*)>(
    &::UnityEngine::__RemoteSettings__UpdatedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d423e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__RemoteSettings__UpdatedEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__RemoteSettings__UpdatedEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__RemoteSettings__UpdatedEventHandler::*)()>(
    &::UnityEngine::__RemoteSettings__UpdatedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d424a0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__RemoteSettings__UpdatedEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__RemoteSettings__UpdatedEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::__RemoteSettings__UpdatedEventHandler* UnityEngine::__RemoteSettings__UpdatedEventHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::__RemoteSettings__UpdatedEventHandler*>(object, method));
}
inline void UnityEngine::__RemoteSettings__UpdatedEventHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__RemoteSettings__UpdatedEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::__RemoteSettings__UpdatedEventHandler::Invoke() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__RemoteSettings__UpdatedEventHandler*>::get(),
                                                                             "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::__RemoteSettings__UpdatedEventHandler::__RemoteSettings__UpdatedEventHandler() {}
//  Writing Method size for method: ::UnityEngine::RemoteSettings.RemoteSettingsUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::RemoteSettings::RemoteSettingsUpdated)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d42294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(), "RemoteSettingsUpdated", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RemoteSettings.RemoteSettingsBeforeFetchFromServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d422f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(),
                                                                               "RemoteSettingsBeforeFetchFromServer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RemoteSettings.RemoteSettingsUpdateCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, bool, int32_t)>(&::UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d4235c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(), "RemoteSettingsUpdateCompleted", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::RemoteSettings::setStaticF_Updated(::UnityEngine::__RemoteSettings__UpdatedEventHandler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::__RemoteSettings__UpdatedEventHandler*, "Updated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>(
      std::forward<::UnityEngine::__RemoteSettings__UpdatedEventHandler*>(value));
}
inline ::UnityEngine::__RemoteSettings__UpdatedEventHandler* UnityEngine::RemoteSettings::getStaticF_Updated() {
  return ::cordl_internals::getStaticField<::UnityEngine::__RemoteSettings__UpdatedEventHandler*, "Updated",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>();
}
inline void UnityEngine::RemoteSettings::setStaticF_BeforeFetchFromServer(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "BeforeFetchFromServer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::RemoteSettings::getStaticF_BeforeFetchFromServer() {
  return ::cordl_internals::getStaticField<::System::Action*, "BeforeFetchFromServer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>();
}
inline void UnityEngine::RemoteSettings::setStaticF_Completed(::System::Action_3<bool, bool, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<bool, bool, int32_t>*, "Completed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>(
      std::forward<::System::Action_3<bool, bool, int32_t>*>(value));
}
inline ::System::Action_3<bool, bool, int32_t>* UnityEngine::RemoteSettings::getStaticF_Completed() {
  return ::cordl_internals::getStaticField<::System::Action_3<bool, bool, int32_t>*, "Completed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>();
}
inline void UnityEngine::RemoteSettings::RemoteSettingsUpdated(bool wasLastUpdatedFromServer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(), "RemoteSettingsUpdated", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, wasLastUpdatedFromServer);
}
inline void UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(),
                                                                             "RemoteSettingsBeforeFetchFromServer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int32_t response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(), "RemoteSettingsUpdateCompleted", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, wasLastUpdatedFromServer, settingsChanged, response);
}
// Ctor Parameters []
constexpr ::UnityEngine::RemoteSettings::RemoteSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
