#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseManager_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.SetPollTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)(::System::TimeSpan)>(
    &::System::Runtime::Remoting::Lifetime::LeaseManager::SetPollTime)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x249b658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(), "SetPollTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.TrackLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)(::System::Runtime::Remoting::ServerIdentity*)>(
    &::System::Runtime::Remoting::Lifetime::LeaseManager::TrackLifetime)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x249b750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(), "TrackLifetime", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.StartManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(
    &::System::Runtime::Remoting::Lifetime::LeaseManager::StartManager)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x249b884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(),
                                                                               "StartManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.StopManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(
    &::System::Runtime::Remoting::Lifetime::LeaseManager::StopManager)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x249b9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(),
                                                                               "StopManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.ManageLeases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Lifetime::LeaseManager::ManageLeases)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x249ba00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(), "ManageLeases",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(
    &::System::Runtime::Remoting::Lifetime::LeaseManager::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x249bc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::Lifetime::LeaseManager::__get__objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Runtime::Remoting::Lifetime::LeaseManager::__get__objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
constexpr void System::Runtime::Remoting::Lifetime::LeaseManager::__set__objects(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Timer*& System::Runtime::Remoting::Lifetime::LeaseManager::__get__timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& System::Runtime::Remoting::Lifetime::LeaseManager::__get__timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr void System::Runtime::Remoting::Lifetime::LeaseManager::__set__timer(::System::Threading::Timer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::SetPollTime(::System::TimeSpan timeSpan) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(), "SetPollTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSpan);
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::TrackLifetime(::System::Runtime::Remoting::ServerIdentity* identity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(), "TrackLifetime", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identity);
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::StartManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(),
                                                                             "StartManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::StopManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(),
                                                                             "StopManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::ManageLeases(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(), "ManageLeases",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::System::Runtime::Remoting::Lifetime::LeaseManager* System::Runtime::Remoting::Lifetime::LeaseManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Lifetime::LeaseManager*>());
}
inline void System::Runtime::Remoting::Lifetime::LeaseManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Lifetime::LeaseManager::LeaseManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
