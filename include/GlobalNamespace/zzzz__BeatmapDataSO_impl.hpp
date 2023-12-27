#pragma once
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_impl.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataSO_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232f974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0._GetBeatmapDataBasicInfoAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::_GetBeatmapDataBasicInfoAsync_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x232f97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*>::get(),
                                                                               "<GetBeatmapDataBasicInfoAsync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatmapDataBasicInfo*& GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::__get_beatmapDataBasicInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapDataBasicInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataBasicInfo*> const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::__get_beatmapDataBasicInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapDataBasicInfo;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::__set_beatmapDataBasicInfo(::GlobalNamespace::IBeatmapDataBasicInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapDataBasicInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData*& GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::__get_beatmapSaveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapSaveData;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::__get_beatmapSaveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapSaveData;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::__set_beatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapSaveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0* GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*>());
}
inline void GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::_GetBeatmapDataBasicInfoAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*>::get(),
                                                                             "<GetBeatmapDataBasicInfoAsync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0::__BeatmapDataSO____c__DisplayClass4_0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4::*)()>(
    &::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x232fc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x232ffac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapDataSO*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo*> __t__builder, ::GlobalNamespace::BeatmapDataSO* __4__this,
    ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass4_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4::__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__4() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2330004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0._GetBeatmapDataAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::_GetBeatmapDataAsync_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x233000c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*>::get(),
                                                                               "<GetBeatmapDataAsync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_readonlyBeatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readonlyBeatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_readonlyBeatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readonlyBeatmapData;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__set_readonlyBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readonlyBeatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData*& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_beatmapSaveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapSaveData;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_beatmapSaveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapSaveData;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__set_beatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapSaveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapDifficulty;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___beatmapDifficulty = value;
}
constexpr float_t& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_beatsPerMinute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatsPerMinute;
}
constexpr float_t const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_beatsPerMinute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatsPerMinute;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__set_beatsPerMinute(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___beatsPerMinute = value;
}
constexpr bool& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_loadingForDesignatedEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr bool const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_loadingForDesignatedEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__set_loadingForDesignatedEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___loadingForDesignatedEnvironment = value;
}
constexpr ::GlobalNamespace::EnvironmentInfoSO*& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___environmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___environmentInfo;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0* GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*>());
}
inline void GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::_GetBeatmapDataAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*>::get(),
                                                                             "<GetBeatmapDataAsync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0::__BeatmapDataSO____c__DisplayClass5_0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5::*)()>(
    &::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2330220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2330598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapDifficulty", ty:
// "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapDataSO*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5::__BeatmapDataSO___GetBeatmapDataAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData*> __t__builder, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
    float_t beatsPerMinute, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::BeatmapDataSO* __4__this, ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass5_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapDifficulty = beatmapDifficulty;
  this->beatsPerMinute = beatsPerMinute;
  this->loadingForDesignatedEnvironment = loadingForDesignatedEnvironment;
  this->environmentInfo = environmentInfo;
  this->playerSpecificSettings = playerSpecificSettings;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataSO___GetBeatmapDataAsync_d__5::__BeatmapDataSO___GetBeatmapDataAsync_d__5() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23305f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0._LoadBeatmapSaveDataAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::_LoadBeatmapSaveDataAsync_b__0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23305f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*>::get(),
                                                                               "<LoadBeatmapSaveDataAsync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData*& GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::__get_beatmapSaveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapSaveData;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::BeatmapSaveData*> const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::__get_beatmapSaveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beatmapSaveData;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::__set_beatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapSaveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataSO*& GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataSO*> const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::__set___4__this(::GlobalNamespace::BeatmapDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0* GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*>());
}
inline void GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::_LoadBeatmapSaveDataAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*>::get(),
                                                                             "<LoadBeatmapSaveDataAsync>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0::__BeatmapDataSO____c__DisplayClass8_0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8::*)()>(
    &::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2330684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23308d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapDataSO*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatmapSaveDataVersion3::BeatmapSaveData*> __t__builder, ::GlobalNamespace::BeatmapDataSO* __4__this,
    ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass8_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8::__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::*)()>(
    &::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2330930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0._RunTaskAndLogException_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::*)()>(
    &::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::_RunTaskAndLogException_b__0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2330938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0*>::get(),
                                                                               "<RunTaskAndLogException>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::__get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___action;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::__get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___action;
}
constexpr void GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::__set_action(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0* GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0*>());
}
inline void GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::_RunTaskAndLogException_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0*>::get(),
                                                                             "<RunTaskAndLogException>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataSO____c__DisplayClass9_0::__BeatmapDataSO____c__DisplayClass9_0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9::*)()>(
    &::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x23309f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2330c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9::__BeatmapDataSO___RunTaskAndLogException_d__9(int32_t __1__state,
                                                                                                                          ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                                          ::System::Action* action,
                                                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->action = action;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataSO___RunTaskAndLogException_d__9::__BeatmapDataSO___RunTaskAndLogException_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataSO.get_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapDataSO::*)()>(&::GlobalNamespace::BeatmapDataSO::get_data)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x232eca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "get_data",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataSO.GetBeatmapDataBasicInfoAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* (
    ::GlobalNamespace::BeatmapDataSO::*)()>(&::GlobalNamespace::BeatmapDataSO::GetBeatmapDataBasicInfoAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x232f12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(),
                                                                               "GetBeatmapDataBasicInfoAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataSO.GetBeatmapDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (
    ::GlobalNamespace::BeatmapDataSO::*)(::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::BeatmapDataSO::GetBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x232f21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "GetBeatmapDataAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataSO.SetJsonData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataSO::*)(::StringW)>(&::GlobalNamespace::BeatmapDataSO::SetJsonData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232f350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "SetJsonData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataSO.LoadBeatmapSaveDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>* (
    ::GlobalNamespace::BeatmapDataSO::*)()>(&::GlobalNamespace::BeatmapDataSO::LoadBeatmapSaveDataAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x232f358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(),
                                                                               "LoadBeatmapSaveDataAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataSO.RunTaskAndLogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::BeatmapDataSO::*)(::System::Action*)>(
    &::GlobalNamespace::BeatmapDataSO::RunTaskAndLogException)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x232f44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "RunTaskAndLogException",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataSO.Compress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW)>(&::GlobalNamespace::BeatmapDataSO::Compress)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x232f514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "Compress", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataSO.Decompress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::BeatmapDataSO::Decompress)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x232ecc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "Decompress", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataSO::*)()>(&::GlobalNamespace::BeatmapDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232f96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapDataSO::__get__jsonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____jsonData;
}
constexpr ::StringW const& GlobalNamespace::BeatmapDataSO::__get__jsonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____jsonData;
}
constexpr void GlobalNamespace::BeatmapDataSO::__set__jsonData(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____jsonData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::BeatmapDataSO::__get__compressedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____compressedData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::BeatmapDataSO::__get__compressedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____compressedData;
}
constexpr void GlobalNamespace::BeatmapDataSO::__set__compressedData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____compressedData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapDataBasicInfo*& GlobalNamespace::BeatmapDataSO::__get__beatmapDataBasic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapDataBasic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataBasicInfo*> const& GlobalNamespace::BeatmapDataSO::__get__beatmapDataBasic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapDataBasic;
}
constexpr void GlobalNamespace::BeatmapDataSO::__set__beatmapDataBasic(::GlobalNamespace::IBeatmapDataBasicInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataBasic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::BeatmapDataSO::get_data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "get_data",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GlobalNamespace::BeatmapDataSO::GetBeatmapDataBasicInfoAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(),
                                                                             "GetBeatmapDataBasicInfoAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*
GlobalNamespace::BeatmapDataSO::GetBeatmapDataAsync(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t beatsPerMinute, bool loadingForDesignatedEnvironment,
                                                    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "GetBeatmapDataAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*, false>(
      this, ___internal_method, beatmapDifficulty, beatsPerMinute, loadingForDesignatedEnvironment, environmentInfo, playerSpecificSettings);
}
inline void GlobalNamespace::BeatmapDataSO::SetJsonData(::StringW jsonData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "SetJsonData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonData);
}
inline ::System::Threading::Tasks::Task_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>* GlobalNamespace::BeatmapDataSO::LoadBeatmapSaveDataAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(),
                                                                             "LoadBeatmapSaveDataAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BeatmapSaveDataVersion3::BeatmapSaveData*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::BeatmapDataSO::RunTaskAndLogException(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "RunTaskAndLogException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, action);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::BeatmapDataSO::Compress(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "Compress", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, s);
}
inline ::StringW GlobalNamespace::BeatmapDataSO::Decompress(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), "Decompress", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, bytes);
}
inline ::GlobalNamespace::BeatmapDataSO* GlobalNamespace::BeatmapDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapDataSO*>());
}
inline void GlobalNamespace::BeatmapDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataSO::BeatmapDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
