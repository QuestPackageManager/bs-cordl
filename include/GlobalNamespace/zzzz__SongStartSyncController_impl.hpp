#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongStartSyncController_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__SongStartHandler_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.get_isSongStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SongStartSyncController::*)()>(
    &::GlobalNamespace::SongStartSyncController::get_isSongStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26395f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(),
                                                                               "get_isSongStarted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.get_songStartSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::SongStartSyncController::*)()>(
    &::GlobalNamespace::SongStartSyncController::get_songStartSyncTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26395fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(),
                                                                               "get_songStartSyncTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.add_syncStartFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action*)>(
    &::GlobalNamespace::SongStartSyncController::add_syncStartFailedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2639618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "add_syncStartFailedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.remove_syncStartFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action*)>(
    &::GlobalNamespace::SongStartSyncController::remove_syncStartFailedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26396b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "remove_syncStartFailedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.add_syncStartSuccessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action_1<int64_t>*)>(
    &::GlobalNamespace::SongStartSyncController::add_syncStartSuccessEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "add_syncStartSuccessEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.remove_syncStartSuccessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action_1<int64_t>*)>(
    &::GlobalNamespace::SongStartSyncController::remove_syncStartSuccessEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "remove_syncStartSuccessEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.add_syncResumeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action_1<int64_t>*)>(
    &::GlobalNamespace::SongStartSyncController::add_syncResumeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26398b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "add_syncResumeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.remove_syncResumeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::System::Action_1<int64_t>*)>(
    &::GlobalNamespace::SongStartSyncController::remove_syncResumeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "remove_syncResumeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)()>(&::GlobalNamespace::SongStartSyncController::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2639a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)()>(&::GlobalNamespace::SongStartSyncController::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2639a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)()>(&::GlobalNamespace::SongStartSyncController::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2639a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.OnApplicationPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(bool)>(
    &::GlobalNamespace::SongStartSyncController::OnApplicationPause)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2639a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "OnApplicationPause",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.StartSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SongStartSyncController::*)(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, ::StringW)>(&::GlobalNamespace::SongStartSyncController::StartSong)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2639ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "StartSong", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController.HandleSetSongStartSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)(int64_t)>(
    &::GlobalNamespace::SongStartSyncController::HandleSetSongStartSyncTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2639c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "HandleSetSongStartSyncTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongStartSyncController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongStartSyncController::*)()>(&::GlobalNamespace::SongStartSyncController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::SongStartSyncController::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& GlobalNamespace::SongStartSyncController::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::SongStartSyncController::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::SongStartSyncController::__get__gameplayRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& GlobalNamespace::SongStartSyncController::__get__gameplayRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr void GlobalNamespace::SongStartSyncController::__set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayRpcManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SongStartSyncController::__get__waitStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitStartTime;
}
constexpr float_t const& GlobalNamespace::SongStartSyncController::__get__waitStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitStartTime;
}
constexpr void GlobalNamespace::SongStartSyncController::__set__waitStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waitStartTime = value;
}
constexpr bool& GlobalNamespace::SongStartSyncController::__get__songStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStarted;
}
constexpr bool const& GlobalNamespace::SongStartSyncController::__get__songStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStarted;
}
constexpr void GlobalNamespace::SongStartSyncController::__set__songStarted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songStarted = value;
}
constexpr float_t& GlobalNamespace::SongStartSyncController::__get__startTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr float_t const& GlobalNamespace::SongStartSyncController::__get__startTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr void GlobalNamespace::SongStartSyncController::__set__startTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTime = value;
}
constexpr ::StringW& GlobalNamespace::SongStartSyncController::__get__sessionGameId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionGameId;
}
constexpr ::StringW const& GlobalNamespace::SongStartSyncController::__get__sessionGameId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionGameId;
}
constexpr void GlobalNamespace::SongStartSyncController::__set__sessionGameId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionGameId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongStartHandler*& GlobalNamespace::SongStartSyncController::__get__songStartHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStartHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongStartHandler*> const& GlobalNamespace::SongStartSyncController::__get__songStartHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStartHandler;
}
constexpr void GlobalNamespace::SongStartSyncController::__set__songStartHandler(::GlobalNamespace::SongStartHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songStartHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::SongStartSyncController::__get_syncStartFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncStartFailedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::SongStartSyncController::__get_syncStartFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncStartFailedEvent;
}
constexpr void GlobalNamespace::SongStartSyncController::__set_syncStartFailedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___syncStartFailedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int64_t>*& GlobalNamespace::SongStartSyncController::__get_syncStartSuccessEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncStartSuccessEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int64_t>*> const& GlobalNamespace::SongStartSyncController::__get_syncStartSuccessEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncStartSuccessEvent;
}
constexpr void GlobalNamespace::SongStartSyncController::__set_syncStartSuccessEvent(::System::Action_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___syncStartSuccessEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int64_t>*& GlobalNamespace::SongStartSyncController::__get_syncResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncResumeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int64_t>*> const& GlobalNamespace::SongStartSyncController::__get_syncResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncResumeEvent;
}
constexpr void GlobalNamespace::SongStartSyncController::__set_syncResumeEvent(::System::Action_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___syncResumeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::SongStartSyncController::get_isSongStarted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(),
                                                                             "get_isSongStarted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::SongStartSyncController::get_songStartSyncTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(),
                                                                             "get_songStartSyncTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartSyncController::add_syncStartFailedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "add_syncStartFailedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::remove_syncStartFailedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "remove_syncStartFailedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::add_syncStartSuccessEvent(::System::Action_1<int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "add_syncStartSuccessEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::remove_syncStartSuccessEvent(::System::Action_1<int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "remove_syncStartSuccessEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::add_syncResumeEvent(::System::Action_1<int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "add_syncResumeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::remove_syncResumeEvent(::System::Action_1<int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "remove_syncResumeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongStartSyncController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartSyncController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartSyncController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongStartSyncController::OnApplicationPause(bool pauseStatus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "OnApplicationPause",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::SongStartSyncController::StartSong(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel, ::StringW sessionGameId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "StartSong", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playersSpecificSettingsAtGameStartModel, sessionGameId);
}
inline void GlobalNamespace::SongStartSyncController::HandleSetSongStartSyncTime(int64_t songStartSyncTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), "HandleSetSongStartSyncTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songStartSyncTime);
}
inline ::GlobalNamespace::SongStartSyncController* GlobalNamespace::SongStartSyncController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongStartSyncController*>());
}
inline void GlobalNamespace::SongStartSyncController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongStartSyncController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongStartSyncController::SongStartSyncController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
