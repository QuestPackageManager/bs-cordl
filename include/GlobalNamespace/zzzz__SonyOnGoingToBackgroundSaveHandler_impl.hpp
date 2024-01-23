#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SonyBackgroundExecutionHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::*)()>(
    &::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::Initialize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2369be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::*)()>(
    &::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2369ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler.HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::*)()>(
    &::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2369d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                                    "HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::*)()>(
    &::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2369d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardsModel>& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__localLeaderboardModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardModel;
}
constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardsModel> const& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__localLeaderboardModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardModel;
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_set__localLeaderboardModel(::UnityW<::GlobalNamespace::LocalLeaderboardsModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localLeaderboardModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ISaveData*& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__saveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__saveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_set__saveData(::GlobalNamespace::ISaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper*& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__sonyBackgroundExecutionHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyBackgroundExecutionHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyBackgroundExecutionHelper*> const&
GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__sonyBackgroundExecutionHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyBackgroundExecutionHelper;
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_set__sonyBackgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sonyBackgroundExecutionHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                                  "HandlePlatformBackgroundExecutionHelperDidGoToBackgroundExecution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>());
}
inline void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::SonyOnGoingToBackgroundSaveHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
