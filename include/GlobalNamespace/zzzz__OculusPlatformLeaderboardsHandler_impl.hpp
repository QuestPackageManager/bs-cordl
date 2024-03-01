#pragma once
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformLeaderboardsHandler_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModel_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformLeaderboardsHandler_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::*)()>(
    &::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12b349c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c.__ctor_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*)>(&::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::__ctor_b__3_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12b34a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*>::get(), "<.ctor>b__3_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::setStaticF___9(::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*>::get>(
      std::forward<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*>(value));
}
inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*>::get>();
}
inline void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::setStaticF___9__3_0(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* value) {
  ::cordl_internals::setStaticField<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*>::get>(
      std::forward<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>*>(value));
}
inline ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList*>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*>::get>();
}
inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c* GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*>());
}
inline void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::__ctor_b__3_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c*>::get(), "<.ctor>b__3_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c::__OculusPlatformLeaderboardsHandler____c() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12b2ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0._AddOculusRequest_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::*)(
    ::GlobalNamespace::HMAsyncRequest*)>(&::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::_AddOculusRequest_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x12b34a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0*>::get(), "<AddOculusRequest>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformLeaderboardsHandler*> const&
GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Request*& GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__cordl_internal_get_oculusRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusRequest;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Request*> const&
GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__cordl_internal_get_oculusRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusRequest;
}
constexpr void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__cordl_internal_set_oculusRequest(::Oculus::Platform::Request* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___oculusRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0* GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0*>());
}
inline void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::_AddOculusRequest_b__0(::GlobalNamespace::HMAsyncRequest* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0*>::get(), "<AddOculusRequest>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0::__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12b31f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0._GetScores_g__Callback_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*)>(&::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::_GetScores_g__Callback_0)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x12b350c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0*>::get(), "<GetScores>g__Callback|0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformLeaderboardsHandler*> const&
GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*&
GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__cordl_internal_get_completionHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*> const&
GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__cordl_internal_get_completionHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr void
GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__cordl_internal_set_completionHandler(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___completionHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__cordl_internal_get_referencePlayerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencePlayerId;
}
constexpr ::StringW const& GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__cordl_internal_get_referencePlayerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencePlayerId;
}
constexpr void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__cordl_internal_set_referencePlayerId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___referencePlayerId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0* GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0*>());
}
inline void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::_GetScores_g__Callback_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0*>::get(), "<GetScores>g__Callback|0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0::__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::*)()>(
    &::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12b3430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0._UploadScore_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::*)(
    ::Oculus::Platform::Message_1<bool>*)>(&::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::_UploadScore_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x12b3884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0*>::get(), "<UploadScore>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<bool>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformLeaderboardsHandler*> const&
GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*&
GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__cordl_internal_get_completionHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*> const&
GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__cordl_internal_get_completionHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__cordl_internal_set_completionHandler(
    ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___completionHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0* GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0*>());
}
inline void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::_UploadScore_b__0(::Oculus::Platform::Message_1<bool>* messsage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0*>::get(), "<UploadScore>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messsage);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0::__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)()>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x12b2ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.AddOculusRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(
    ::Oculus::Platform::Request*, ::GlobalNamespace::HMAsyncRequest*)>(&::GlobalNamespace::OculusPlatformLeaderboardsHandler::AddOculusRequest)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x12b2df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(), "AddOculusRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Request*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.CheckMessageForValidRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(::Oculus::Platform::Message*)>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler::CheckMessageForValidRequest)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x12b2ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(), "CheckMessageForValidRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.GetScores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(ByRef<::GlobalNamespace::BeatmapKey>, int32_t, int32_t, ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::StringW,
                                                             ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*)>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler::GetScores)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x12b2f80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.UploadScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*, ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*)>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler::UploadScore)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x12b31fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LeaderboardIdsModel*& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__leaderboardIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardIdsModel*> const& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__leaderboardIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIdsModel;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_set__leaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__oculusRequestIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusRequestIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint64_t>*> const&
GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__oculusRequestIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusRequestIds;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_set__oculusRequestIds(::System::Collections::Generic::HashSet_1<uint64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusRequestIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiersModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler* GlobalNamespace::OculusPlatformLeaderboardsHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>());
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler::AddOculusRequest(::Oculus::Platform::Request* oculusRequest, ::GlobalNamespace::HMAsyncRequest* asyncRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(), "AddOculusRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Request*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oculusRequest, asyncRequest);
}
inline bool GlobalNamespace::OculusPlatformLeaderboardsHandler::CheckMessageForValidRequest(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(), "CheckMessageForValidRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, message);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::OculusPlatformLeaderboardsHandler::GetScores(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                                                                        ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId,
                                                                                                        ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, beatmapKey, count, fromRank, scope, referencePlayerId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::OculusPlatformLeaderboardsHandler::UploadScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                                ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, scoreData, completionHandler);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler::OculusPlatformLeaderboardsHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
