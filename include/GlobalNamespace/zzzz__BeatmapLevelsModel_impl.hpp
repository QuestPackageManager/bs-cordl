#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelsModel.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_impl.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsRepository_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__IPlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::*)()>(&::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3724c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0._CreateBeatmapLevelPack_g__ToRuntime_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::*)(::GlobalNamespace::BeatmapLevelSO*)>(
    &::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::_CreateBeatmapLevelPack_g__ToRuntime_0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3724d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0*>(),
                                                             { "<CreateBeatmapLevelPack>g__ToRuntime|0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0._CreateBeatmapLevelPack_g__ShouldBeKeptIntact_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::_CreateBeatmapLevelPack_g__ShouldBeKeptIntact_1)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3724e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0*>(),
                                                             { "<CreateBeatmapLevelPack>g__ShouldBeKeptIntact|1", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::__cordl_internal_get_desiredSensitivityFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredSensitivityFlag;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::__cordl_internal_get_desiredSensitivityFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredSensitivityFlag;
}
constexpr void GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::__cordl_internal_set_desiredSensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___desiredSensitivityFlag = value;
}
constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO>& GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::__cordl_internal_get_pack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pack;
}
constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO> const& GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::__cordl_internal_get_pack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pack;
}
constexpr void GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::__cordl_internal_set_pack(::UnityW<::GlobalNamespace::PackDefinitionSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pack = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::__cordl_internal_get_censoredLocalizedSongName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___censoredLocalizedSongName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::__cordl_internal_get_censoredLocalizedSongName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___censoredLocalizedSongName;
}
constexpr void GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::__cordl_internal_set_censoredLocalizedSongName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___censoredLocalizedSongName = value;
}
inline void GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::_CreateBeatmapLevelPack_g__ToRuntime_0(::GlobalNamespace::BeatmapLevelSO* level) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0*>(),
                                                                                         { "<CreateBeatmapLevelPack>g__ToRuntime|0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*>(this, ___internal_method, level);
}
inline bool GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::_CreateBeatmapLevelPack_g__ShouldBeKeptIntact_1(::GlobalNamespace::BeatmapLevel* level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0*>(),
                                                           { "<CreateBeatmapLevelPack>g__ShouldBeKeptIntact|1", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level);
}
inline ::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0* GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0::BeatmapLevelsModel___c__DisplayClass33_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x3724f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3725378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelsModel*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_beatmapLevel_5__2", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::BeatmapLevelsModel* __4__this, ::StringW levelID,
    ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelID = levelID;
  this->cancellationToken = cancellationToken;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->_beatmapLevel_5__2 = _beatmapLevel_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x37253f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3725894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelDataVersion", ty:
// "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: Some("{}") }, CppParam { name: "_beatmapLevel_5__2", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder, ::GlobalNamespace::BeatmapLevelsModel* __4__this,
    ::StringW levelID, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
    ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelID = levelID;
  this->cancellationToken = cancellationToken;
  this->beatmapLevelDataVersion = beatmapLevelDataVersion;
  this->_beatmapLevel_5__2 = _beatmapLevel_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::*)(int32_t)>(&::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3724894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3725914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::*)()>(&::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::MoveNext)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3725918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29.System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PackDefinitionSO> (::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37259ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<PackDefinitionSO>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x37259f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3725a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29.System_Collections_Generic_IEnumerable_PackDefinitionSO__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* (::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::*)()>(
        &::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_Collections_Generic_IEnumerable_PackDefinitionSO__GetEnumerator)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3725a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<PackDefinitionSO>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3725adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO>& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO> const& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_set___2__current(::UnityW<::GlobalNamespace::PackDefinitionSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_set___4__this(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get_include() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___include;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get_include() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___include;
}
constexpr void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_set_include(::GlobalNamespace::PackDefinitionSO_Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___include = value;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___3__include() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__include;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___3__include() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__include;
}
constexpr void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_set___3__include(::GlobalNamespace::PackDefinitionSO_Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__include = value;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get_exclude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exclude;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get_exclude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exclude;
}
constexpr void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_set_exclude(::GlobalNamespace::PackDefinitionSO_Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exclude = value;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___3__exclude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__exclude;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___3__exclude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__exclude;
}
constexpr void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_set___3__exclude(::GlobalNamespace::PackDefinitionSO_Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__exclude = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>>& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>> const& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_set___7__wrap1(::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
constexpr int32_t& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::__cordl_internal_set___7__wrap2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
inline void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PackDefinitionSO> GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<PackDefinitionSO>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PackDefinitionSO>>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_Collections_Generic_IEnumerable_PackDefinitionSO__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<PackDefinitionSO>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29* GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
constexpr GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__PackDefinitionSO__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
constexpr GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__PackDefinitionSO__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29::BeatmapLevelsModel__SelectPacks_d__29() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.get_packDefinitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* (::GlobalNamespace::BeatmapLevelsModel::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel::get_packDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3723a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "get_packDefinitions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.get_entitlements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IEntitlementModel* (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::get_entitlements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3723a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "get_entitlements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.add_newPackWasCreatedFromDefinitionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::BeatmapLevelsModel::add_newPackWasCreatedFromDefinitionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3723a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                             { "add_newPackWasCreatedFromDefinitionEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.remove_newPackWasCreatedFromDefinitionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::BeatmapLevelsModel::remove_newPackWasCreatedFromDefinitionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3723b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                             { "remove_newPackWasCreatedFromDefinitionEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)(
    ::GlobalNamespace::BeatmapLevelsEntitlementModel*, ::GlobalNamespace::IBeatmapLevelLoader*, ::GlobalNamespace::IPlayerDataModel*, ::BGLib::Polyglot::LocalizationModel*,
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*)>(&::GlobalNamespace::BeatmapLevelsModel::_ctor)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x3723c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsEntitlementModel*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelLoader*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IPlayerDataModel*>(), ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::Dispose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x37243e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.ClearLoadedBeatmapLevelsCaches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x372448c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "ClearLoadedBeatmapLevelsCaches", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.ReloadCustomLevelPackCollectionAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelsRepository*>* (
    ::GlobalNamespace::BeatmapLevelsModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelsModel::ReloadCustomLevelPackCollectionAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3724534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "ReloadCustomLevelPackCollectionAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetLevelPackForLevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelPack* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(
    &::GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x37245a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "GetLevelPackForLevelId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetLevelPack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelPack* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW, bool)>(
    &::GlobalNamespace::BeatmapLevelsModel::GetLevelPack)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x37245b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "GetLevelPack", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetAllPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* (::GlobalNamespace::BeatmapLevelsModel::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel::GetAllPacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x37245d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "GetAllPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW, bool)>(
    &::GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x37245e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "GetBeatmapLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.LoadBeatmapLevelDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* (
    ::GlobalNamespace::BeatmapLevelsModel::*)(::StringW, ::GlobalNamespace::BeatmapLevelDataVersion, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::BeatmapLevelsModel::LoadBeatmapLevelDataAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3724600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                         { "LoadBeatmapLevelDataAsync",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.CheckBeatmapLevelDataExistsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW, ::GlobalNamespace::BeatmapLevelDataVersion, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::BeatmapLevelsModel::CheckBeatmapLevelDataExistsAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3724708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                         { "CheckBeatmapLevelDataExistsAsync",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.SelectPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* (
    ::GlobalNamespace::BeatmapLevelsModel::*)(::GlobalNamespace::PackDefinitionSO_Tags, ::GlobalNamespace::PackDefinitionSO_Tags)>(&::GlobalNamespace::BeatmapLevelsModel::SelectPacks)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3724810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                { "SelectPacks", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO_Tags>(), ::i2c::type_of<::GlobalNamespace::PackDefinitionSO_Tags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.ReloadAllBeatmapLevelPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::ReloadAllBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37248b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "ReloadAllBeatmapLevelPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.SetExcludedLevelIdsAndReload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::BeatmapLevelsModel::SetExcludedLevelIdsAndReload)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x37248b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                             { "SetExcludedLevelIdsAndReload", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.LoadAllBeatmapLevelPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::LoadAllBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x3723f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "LoadAllBeatmapLevelPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.CreateBeatmapLevelPack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevelPack*> (::GlobalNamespace::BeatmapLevelsModel::*)(
    ::GlobalNamespace::PackDefinitionSO*, ::GlobalNamespace::PlayerSensitivityFlag, ::StringW)>(&::GlobalNamespace::BeatmapLevelsModel::CreateBeatmapLevelPack)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x37249ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
            { "CreateBeatmapLevelPack", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO*>(), ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel._CreateBeatmapLevelPack_g__IsSensitivitySafe_33_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PlayerSensitivityFlag, ::GlobalNamespace::PlayerSensitivityFlag)>(
    &::GlobalNamespace::BeatmapLevelsModel::_CreateBeatmapLevelPack_g__IsSensitivitySafe_33_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3724d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
            { "<CreateBeatmapLevelPack>g__IsSensitivitySafe|33_2", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(), ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelsRepository*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_ostAndExtrasBeatmapLevelsRepository() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ostAndExtrasBeatmapLevelsRepository;
}
constexpr ::GlobalNamespace::BeatmapLevelsRepository* const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_ostAndExtrasBeatmapLevelsRepository() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ostAndExtrasBeatmapLevelsRepository;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set_ostAndExtrasBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ostAndExtrasBeatmapLevelsRepository = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsRepository*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_dlcBeatmapLevelsRepository() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dlcBeatmapLevelsRepository;
}
constexpr ::GlobalNamespace::BeatmapLevelsRepository* const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_dlcBeatmapLevelsRepository() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dlcBeatmapLevelsRepository;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set_dlcBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dlcBeatmapLevelsRepository = value;
}
constexpr int32_t& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_allPacksCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allPacksCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_allPacksCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allPacksCount;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set_allPacksCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allPacksCount = value;
}
constexpr ::GlobalNamespace::IBeatmapLevelLoader*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_levelLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoader;
}
constexpr ::GlobalNamespace::IBeatmapLevelLoader* const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_levelLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoader;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set_levelLoader(::GlobalNamespace::IBeatmapLevelLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelLoader = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>>& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__packDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packDefinitions;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>> const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__packDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packDefinitions;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set__packDefinitions(::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packDefinitions = value;
}
constexpr ::GlobalNamespace::IPlayerDataModel*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::GlobalNamespace::IPlayerDataModel* const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set__playerDataModel(::GlobalNamespace::IPlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::BGLib::Polyglot::LocalizationModel*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__localizationModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationModel;
}
constexpr ::BGLib::Polyglot::LocalizationModel* const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__localizationModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationModel;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set__localizationModel(::BGLib::Polyglot::LocalizationModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizationModel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__entitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlements;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__entitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlements;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set__entitlements(::GlobalNamespace::BeatmapLevelsEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlements = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsRepository*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__allLoadedBeatmapLevelsRepository() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLoadedBeatmapLevelsRepository;
}
constexpr ::GlobalNamespace::BeatmapLevelsRepository* const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__allLoadedBeatmapLevelsRepository() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLoadedBeatmapLevelsRepository;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set__allLoadedBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allLoadedBeatmapLevelsRepository = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsRepository*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__allExistingBeatmapLevelsRepository() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allExistingBeatmapLevelsRepository;
}
constexpr ::GlobalNamespace::BeatmapLevelsRepository* const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__allExistingBeatmapLevelsRepository() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allExistingBeatmapLevelsRepository;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set__allExistingBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allExistingBeatmapLevelsRepository = value;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_newPackWasCreatedFromDefinitionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newPackWasCreatedFromDefinitionEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_newPackWasCreatedFromDefinitionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newPackWasCreatedFromDefinitionEvent;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set_newPackWasCreatedFromDefinitionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newPackWasCreatedFromDefinitionEvent = value;
}
inline void GlobalNamespace::BeatmapLevelsModel::setStaticF__excludedLevelIds(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "_excludedLevelIds", ::GlobalNamespace::BeatmapLevelsModel*>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::BeatmapLevelsModel::getStaticF__excludedLevelIds() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "_excludedLevelIds", ::GlobalNamespace::BeatmapLevelsModel*>();
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* GlobalNamespace::BeatmapLevelsModel::get_packDefinitions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "get_packDefinitions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(this, ___internal_method);
}
inline ::GlobalNamespace::IEntitlementModel* GlobalNamespace::BeatmapLevelsModel::get_entitlements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "get_entitlements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IEntitlementModel*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel::add_newPackWasCreatedFromDefinitionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                           { "add_newPackWasCreatedFromDefinitionEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapLevelsModel::remove_newPackWasCreatedFromDefinitionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                           { "remove_newPackWasCreatedFromDefinitionEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapLevelsModel::_ctor(::GlobalNamespace::BeatmapLevelsEntitlementModel* entitlementChecker, ::GlobalNamespace::IBeatmapLevelLoader* beatmapLevelLoader,
                                                       ::GlobalNamespace::IPlayerDataModel* playerDataModel, ::BGLib::Polyglot::LocalizationModel* localizationModel,
                                                       ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsEntitlementModel*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelLoader*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IPlayerDataModel*>(), ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entitlementChecker, beatmapLevelLoader, playerDataModel, localizationModel, packDefinitions);
}
inline void GlobalNamespace::BeatmapLevelsModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "ClearLoadedBeatmapLevelsCaches", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelsRepository*>*
GlobalNamespace::BeatmapLevelsModel::ReloadCustomLevelPackCollectionAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "ReloadCustomLevelPackCollectionAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelsRepository*>*>(this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "GetLevelPackForLevelId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::BeatmapLevelsModel::GetLevelPack(::StringW levelPackId, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "GetLevelPack", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*>(this, ___internal_method, levelPackId, ignoreCase);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* GlobalNamespace::BeatmapLevelsModel::GetAllPacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "GetAllPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevel(::StringW levelId, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "GetBeatmapLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*>(this, ___internal_method, levelId, ignoreCase);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*
GlobalNamespace::BeatmapLevelsModel::LoadBeatmapLevelDataAsync(::StringW levelID, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                       { "LoadBeatmapLevelDataAsync",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*>(this, ___internal_method, levelID, beatmapLevelDataVersion,
                                                                                                                                 cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::BeatmapLevelsModel::CheckBeatmapLevelDataExistsAsync(::StringW levelID,
                                                                                                                       ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                       { "CheckBeatmapLevelDataExistsAsync",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, levelID, beatmapLevelDataVersion, cancellationToken);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
GlobalNamespace::BeatmapLevelsModel::SelectPacks(::GlobalNamespace::PackDefinitionSO_Tags include, ::GlobalNamespace::PackDefinitionSO_Tags exclude) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                              { "SelectPacks", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO_Tags>(), ::i2c::type_of<::GlobalNamespace::PackDefinitionSO_Tags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(this, ___internal_method, include, exclude);
}
inline void GlobalNamespace::BeatmapLevelsModel::ReloadAllBeatmapLevelPacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "ReloadAllBeatmapLevelPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel::SetExcludedLevelIdsAndReload(::System::Collections::Generic::IEnumerable_1<::StringW>* excludedLevelIds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                           { "SetExcludedLevelIdsAndReload", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, excludedLevelIds);
}
inline void GlobalNamespace::BeatmapLevelsModel::LoadAllBeatmapLevelPacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(), { "LoadAllBeatmapLevelPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevelPack*>
GlobalNamespace::BeatmapLevelsModel::CreateBeatmapLevelPack(::GlobalNamespace::PackDefinitionSO* pack, ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag,
                                                            ::StringW censoredLocalizedSongName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
          { "CreateBeatmapLevelPack", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO*>(), ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevelPack*>>(this, ___internal_method, pack, desiredSensitivityFlag,
                                                                                                                                                 censoredLocalizedSongName);
}
inline bool GlobalNamespace::BeatmapLevelsModel::_CreateBeatmapLevelPack_g__IsSensitivitySafe_33_2(::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag,
                                                                                                   ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapLevelsModel*>(),
          { "<CreateBeatmapLevelPack>g__IsSensitivitySafe|33_2", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(), ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, desiredSensitivityFlag, contentRating);
}
inline ::GlobalNamespace::BeatmapLevelsModel*
GlobalNamespace::BeatmapLevelsModel::New_ctor(::GlobalNamespace::BeatmapLevelsEntitlementModel* entitlementChecker, ::GlobalNamespace::IBeatmapLevelLoader* beatmapLevelLoader,
                                              ::GlobalNamespace::IPlayerDataModel* playerDataModel, ::BGLib::Polyglot::LocalizationModel* localizationModel,
                                              ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelsModel*>(entitlementChecker, beatmapLevelLoader, playerDataModel, localizationModel, packDefinitions));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BeatmapLevelsModel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BeatmapLevelsModel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsModel::BeatmapLevelsModel() {}
