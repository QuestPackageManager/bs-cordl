#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_impl.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CustomDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__CustomDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::*)()>(
    &::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2346dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2346ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::CustomDifficultyBeatmap*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __t__builder, ::GlobalNamespace::CustomDifficultyBeatmap* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33::__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33() {}
//  Writing Method size for method: ::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::*)()>(
    &::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2347048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0._GetBeatmapDataAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::*)()>(
    &::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::_GetBeatmapDataAsync_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2347050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0*>::get(),
                                                 "<GetBeatmapDataAsync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_readonlyBeatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readonlyBeatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_readonlyBeatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readonlyBeatmapData;
}
constexpr void GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__set_readonlyBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readonlyBeatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::CustomDifficultyBeatmap*& GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomDifficultyBeatmap*> const& GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__set___4__this(::GlobalNamespace::CustomDifficultyBeatmap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO*& GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_originalEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalEnvironmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_originalEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalEnvironmentInfo;
}
constexpr void GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__set_originalEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originalEnvironmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO*& GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr void GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const&
GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0* GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0*>());
}
inline void GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::_GetBeatmapDataAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0*>::get(),
                                               "<GetBeatmapDataAsync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0::__CustomDifficultyBeatmap____c__DisplayClass34_0() {}
//  Writing Method size for method: ::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::*)()>(
    &::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x23470c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x234736c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::CustomDifficultyBeatmap*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1",
// ty: "::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder, ::GlobalNamespace::CustomDifficultyBeatmap* __4__this,
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::__CustomDifficultyBeatmap____c__DisplayClass34_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->environmentInfo = environmentInfo;
  this->playerSpecificSettings = playerSpecificSettings;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34::__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34() {}
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevel* (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(), "get_level",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_parentDifficultyBeatmapSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmapSet* (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_parentDifficultyBeatmapSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "get_parentDifficultyBeatmapSet", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_difficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "get_difficulty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_difficultyRank
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_difficultyRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "get_difficultyRank", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_noteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "get_noteJumpMovementSpeed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_noteJumpStartBeatOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "get_noteJumpStartBeatOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_beatmapDataBasicInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapDataBasicInfo* (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_beatmapDataBasicInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "get_beatmapDataBasicInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_beatmapColorSchemeIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_beatmapColorSchemeIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "get_beatmapColorSchemeIdx", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_beatsPerMinute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "get_beatsPerMinute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_environmentNameIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_environmentNameIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "get_environmentNameIdx", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.get_beatmapSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData* (::GlobalNamespace::CustomDifficultyBeatmap::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmap::get_beatmapSaveData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "get_beatmapSaveData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.GetBeatmapDataBasicInfoAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* (
    ::GlobalNamespace::CustomDifficultyBeatmap::*)()>(&::GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataBasicInfoAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2346b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                               "GetBeatmapDataBasicInfoAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap.GetBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (
    ::GlobalNamespace::CustomDifficultyBeatmap::*)(::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2346c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(), "GetBeatmapDataAsync", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomDifficultyBeatmap::*)(
    ::GlobalNamespace::IBeatmapLevel*, ::GlobalNamespace::IDifficultyBeatmapSet*, ::GlobalNamespace::BeatmapDifficulty, int32_t, float_t, float_t, float_t, int32_t, int32_t,
    ::BeatmapSaveDataVersion3::BeatmapSaveData*, ::GlobalNamespace::IBeatmapDataBasicInfo*)>(&::GlobalNamespace::CustomDifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2346d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmapSet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapDataBasicInfo*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmap"
constexpr GlobalNamespace::CustomDifficultyBeatmap::operator ::GlobalNamespace::IDifficultyBeatmap*() noexcept {
  return static_cast<::GlobalNamespace::IDifficultyBeatmap*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IBeatmapLevel*& GlobalNamespace::CustomDifficultyBeatmap::__get__level_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> const& GlobalNamespace::CustomDifficultyBeatmap::__get__level_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__level_k__BackingField(::GlobalNamespace::IBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____level_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IDifficultyBeatmapSet*& GlobalNamespace::CustomDifficultyBeatmap::__get__parentDifficultyBeatmapSet_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentDifficultyBeatmapSet_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmapSet*> const& GlobalNamespace::CustomDifficultyBeatmap::__get__parentDifficultyBeatmapSet_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentDifficultyBeatmapSet_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__parentDifficultyBeatmapSet_k__BackingField(::GlobalNamespace::IDifficultyBeatmapSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentDifficultyBeatmapSet_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::CustomDifficultyBeatmap::__get__difficulty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::CustomDifficultyBeatmap::__get__difficulty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__difficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::CustomDifficultyBeatmap::__get__difficultyRank_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyRank_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CustomDifficultyBeatmap::__get__difficultyRank_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyRank_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__difficultyRank_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultyRank_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::CustomDifficultyBeatmap::__get__noteJumpMovementSpeed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed_k__BackingField;
}
constexpr float_t const& GlobalNamespace::CustomDifficultyBeatmap::__get__noteJumpMovementSpeed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__noteJumpMovementSpeed_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpMovementSpeed_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::CustomDifficultyBeatmap::__get__noteJumpStartBeatOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset_k__BackingField;
}
constexpr float_t const& GlobalNamespace::CustomDifficultyBeatmap::__get__noteJumpStartBeatOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__noteJumpStartBeatOffset_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpStartBeatOffset_k__BackingField = value;
}
constexpr ::GlobalNamespace::IBeatmapDataBasicInfo*& GlobalNamespace::CustomDifficultyBeatmap::__get__beatmapDataBasicInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataBasicInfo_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataBasicInfo*> const& GlobalNamespace::CustomDifficultyBeatmap::__get__beatmapDataBasicInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataBasicInfo_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__beatmapDataBasicInfo_k__BackingField(::GlobalNamespace::IBeatmapDataBasicInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataBasicInfo_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CustomDifficultyBeatmap::__get__beatmapColorSchemeIdx_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapColorSchemeIdx_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CustomDifficultyBeatmap::__get__beatmapColorSchemeIdx_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapColorSchemeIdx_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__beatmapColorSchemeIdx_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapColorSchemeIdx_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::CustomDifficultyBeatmap::__get__beatsPerMinute_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute_k__BackingField;
}
constexpr float_t const& GlobalNamespace::CustomDifficultyBeatmap::__get__beatsPerMinute_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__beatsPerMinute_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatsPerMinute_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::CustomDifficultyBeatmap::__get__environmentNameIdx_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNameIdx_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CustomDifficultyBeatmap::__get__environmentNameIdx_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNameIdx_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__environmentNameIdx_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentNameIdx_k__BackingField = value;
}
constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData*& GlobalNamespace::CustomDifficultyBeatmap::__get__beatmapSaveData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSaveData_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& GlobalNamespace::CustomDifficultyBeatmap::__get__beatmapSaveData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapSaveData_k__BackingField;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmap::__set__beatmapSaveData_k__BackingField(::BeatmapSaveDataVersion3::BeatmapSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapSaveData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IBeatmapLevel* GlobalNamespace::CustomDifficultyBeatmap::get_level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(), "get_level",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevel*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IDifficultyBeatmapSet* GlobalNamespace::CustomDifficultyBeatmap::get_parentDifficultyBeatmapSet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "get_parentDifficultyBeatmapSet", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmapSet*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::CustomDifficultyBeatmap::get_difficulty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "get_difficulty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomDifficultyBeatmap::get_difficultyRank() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "get_difficultyRank", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpMovementSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "get_noteJumpMovementSpeed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpStartBeatOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "get_noteJumpStartBeatOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IBeatmapDataBasicInfo* GlobalNamespace::CustomDifficultyBeatmap::get_beatmapDataBasicInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "get_beatmapDataBasicInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapDataBasicInfo*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomDifficultyBeatmap::get_beatmapColorSchemeIdx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "get_beatmapColorSchemeIdx", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomDifficultyBeatmap::get_beatsPerMinute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "get_beatsPerMinute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomDifficultyBeatmap::get_environmentNameIdx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "get_environmentNameIdx", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::BeatmapSaveData* GlobalNamespace::CustomDifficultyBeatmap::get_beatmapSaveData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "get_beatmapSaveData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::BeatmapSaveData*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataBasicInfoAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(),
                                                                             "GetBeatmapDataBasicInfoAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(), "GetBeatmapDataAsync", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*, false>(this, ___internal_method, environmentInfo, playerSpecificSettings);
}
inline ::GlobalNamespace::CustomDifficultyBeatmap*
GlobalNamespace::CustomDifficultyBeatmap::New_ctor(::GlobalNamespace::IBeatmapLevel* level, ::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet,
                                                   ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset,
                                                   float_t beatsPerMinute, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx, ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData,
                                                   ::GlobalNamespace::IBeatmapDataBasicInfo* beatmapDataBasicInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomDifficultyBeatmap*>(level, parentDifficultyBeatmapSet, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset,
                                                                                       beatsPerMinute, beatmapColorSchemeIdx, environmentNameIdx, beatmapSaveData, beatmapDataBasicInfo));
}
inline void GlobalNamespace::CustomDifficultyBeatmap::_ctor(::GlobalNamespace::IBeatmapLevel* level, ::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet,
                                                            ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset,
                                                            float_t beatsPerMinute, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx,
                                                            ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::IBeatmapDataBasicInfo* beatmapDataBasicInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmap*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmapSet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapDataBasicInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, parentDifficultyBeatmapSet, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset,
                                                          beatsPerMinute, beatmapColorSchemeIdx, environmentNameIdx, beatmapSaveData, beatmapDataBasicInfo);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomDifficultyBeatmap::CustomDifficultyBeatmap() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
