#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyOnGoingToBackgroundSaveHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SonyBackgroundExecutionHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::*)()>(
    &::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::Initialize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26ed5d4;

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
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26ed690;

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
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26ed71c;

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
  constexpr static std::size_t addrs = 0x26ed7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
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
constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper*& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__sonyBackgroundExecutionHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyBackgroundExecutionHelper;
}
constexpr ::GlobalNamespace::SonyBackgroundExecutionHelper* const& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__sonyBackgroundExecutionHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyBackgroundExecutionHelper;
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_set__sonyBackgroundExecutionHelper(::GlobalNamespace::SonyBackgroundExecutionHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sonyBackgroundExecutionHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LocalLeaderboardsModel*& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__localLeaderboardModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardModel;
}
constexpr ::GlobalNamespace::LocalLeaderboardsModel* const& GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_get__localLeaderboardModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardModel;
}
constexpr void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::__cordl_internal_set__localLeaderboardModel(::GlobalNamespace::LocalLeaderboardsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localLeaderboardModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline void GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler* GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler::SonyOnGoingToBackgroundSaveHandler() {}
