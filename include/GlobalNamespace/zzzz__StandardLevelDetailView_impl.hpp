#pragma once
// IWYU pragma private; include "GlobalNamespace\StandardLevelDetailView.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailView_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSegmentedControlController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultySegmentedControlController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__LevelParamsPanel_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailView_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Tweening/zzzz__Tween_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView___c::*)()>(&::GlobalNamespace::StandardLevelDetailView___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5970ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView___c._SetContent_b__47_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::StandardLevelDetailView___c::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::StandardLevelDetailView___c::_SetContent_b__47_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5970ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView___c*>(), { "<SetContent>b__47_1", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailView___c::setStaticF___9(::GlobalNamespace::StandardLevelDetailView___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::StandardLevelDetailView___c*, "<>9", ::GlobalNamespace::StandardLevelDetailView___c*>(
      std::forward<::GlobalNamespace::StandardLevelDetailView___c*>(value));
}
inline ::GlobalNamespace::StandardLevelDetailView___c* GlobalNamespace::StandardLevelDetailView___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::StandardLevelDetailView___c*, "<>9", ::GlobalNamespace::StandardLevelDetailView___c*>();
}
inline void GlobalNamespace::StandardLevelDetailView___c::setStaticF___9__47_1(::System::Func_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapCharacteristic>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapCharacteristic>*, "<>9__47_1", ::GlobalNamespace::StandardLevelDetailView___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapCharacteristic>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapCharacteristic>* GlobalNamespace::StandardLevelDetailView___c::getStaticF___9__47_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapCharacteristic>*, "<>9__47_1", ::GlobalNamespace::StandardLevelDetailView___c*>();
}
inline void GlobalNamespace::StandardLevelDetailView___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::StandardLevelDetailView___c::_SetContent_b__47_1(::GlobalNamespace::BeatmapKey key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView___c*>(), { "<SetContent>b__47_1", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method, key);
}
inline ::GlobalNamespace::StandardLevelDetailView___c* GlobalNamespace::StandardLevelDetailView___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelDetailView___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailView___c::StandardLevelDetailView___c() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::*)()>(
    &::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596fd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0._SetContent_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::_SetContent_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5970efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0*>(),
                                                                                           { "<SetContent>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::__cordl_internal_get_allowedBeatmapDifficultyMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowedBeatmapDifficultyMask;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::__cordl_internal_get_allowedBeatmapDifficultyMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowedBeatmapDifficultyMask;
}
constexpr void GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::__cordl_internal_set_allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowedBeatmapDifficultyMask = value;
}
inline void GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::_SetContent_b__0(::GlobalNamespace::BeatmapKey key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0*>(),
                                                                                         { "<SetContent>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0* GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailView___c__DisplayClass47_0::StandardLevelDetailView___c__DisplayClass47_0() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65::*)()>(
    &::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65::MoveNext)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0x5970f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5971780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandardLevelDetailView>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_beatmapLevelData_5__2", ty: "::GlobalNamespace::LoadBeatmapLevelDataResult", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_songLength_5__3", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65::StandardLevelDetailView__CalculateAndSetContentAsync_d__65(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this,
    ::GlobalNamespace::BeatmapKey beatmapKey, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::LoadBeatmapLevelDataResult _beatmapLevelData_5__2, float_t _songLength_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapDataBasicInfo*> __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->beatmapKey = beatmapKey;
  this->cancellationToken = cancellationToken;
  this->_beatmapLevelData_5__2 = _beatmapLevelData_5__2;
  this->_songLength_5__3 = _songLength_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailView__CalculateAndSetContentAsync_d__65::StandardLevelDetailView__CalculateAndSetContentAsync_d__65() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59::*)()>(
    &::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59::MoveNext)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x59717ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5971ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandardLevelDetailView>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59::StandardLevelDetailView__CheckIfBeatmapLevelDataExists_d__59() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60::*)()>(
    &::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60::MoveNext)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x5971acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5972034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandardLevelDetailView>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapLevelId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this, ::StringW beatmapLevelId,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->beatmapLevelId = beatmapLevelId;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60::StandardLevelDetailView__CheckIfBeatmapLevelDataExistsAsync_d__60() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66::*)()>(
    &::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66::MoveNext)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x59720a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59726f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::StandardLevelDetailView>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66::StandardLevelDetailView__SetBeatmapLevelVersions_d__66(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::StandardLevelDetailView> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailView__SetBeatmapLevelVersions_d__66::StandardLevelDetailView__SetBeatmapLevelVersions_d__66() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.add_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>*)>(
    &::GlobalNamespace::StandardLevelDetailView::add_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x596f6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                { "add_didChangeDifficultyBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.remove_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>*)>(
    &::GlobalNamespace::StandardLevelDetailView::remove_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x596f78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                { "remove_didChangeDifficultyBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.add_didFavoriteToggleChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*)>(
    &::GlobalNamespace::StandardLevelDetailView::add_didFavoriteToggleChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x596f84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                             { "add_didFavoriteToggleChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.remove_didFavoriteToggleChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*)>(
    &::GlobalNamespace::StandardLevelDetailView::remove_didFavoriteToggleChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x596f90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                             { "remove_didFavoriteToggleChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.get_actionButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Button> (::GlobalNamespace::StandardLevelDetailView::*)()>(
    &::GlobalNamespace::StandardLevelDetailView::get_actionButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596f9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "get_actionButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.set_actionButtonText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::StringW)>(&::GlobalNamespace::StandardLevelDetailView::set_actionButtonText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x596f9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "set_actionButtonText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.get_practiceButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Button> (::GlobalNamespace::StandardLevelDetailView::*)()>(
    &::GlobalNamespace::StandardLevelDetailView::get_practiceButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596f9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "get_practiceButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.set_hidePracticeButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(bool)>(&::GlobalNamespace::StandardLevelDetailView::set_hidePracticeButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x596f9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "set_hidePracticeButton", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.get_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::get_beatmapKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x596fa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "get_beatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.set_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::StandardLevelDetailView::set_beatmapKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596fa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.SetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(
    ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapDifficultyMask, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristic>*,
    ::GlobalNamespace::BeatmapDifficulty, ::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic>, ::GlobalNamespace::PlayerData*)>(&::GlobalNamespace::StandardLevelDetailView::SetContent)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x596fa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                            { "SetContent",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(),
                                ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristic>*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic>>(), ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.ClearBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::ClearBeatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596fea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "ClearBeatmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::Awake)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x596fea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::OnEnable)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x597006c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::OnDisable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x597026c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::OnDestroy)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x597040c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.HandleBeatmapLevelsModelLevelDownloadingUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate)>(
    &::GlobalNamespace::StandardLevelDetailView::HandleBeatmapLevelsModelLevelDownloadingUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59705cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                { "HandleBeatmapLevelsModelLevelDownloadingUpdate", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.HandleDidPressRefreshButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::HandleDidPressRefreshButton)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59707b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "HandleDidPressRefreshButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::BeatmapDifficultySegmentedControlController*, ::GlobalNamespace::BeatmapDifficulty)>(
        &::GlobalNamespace::StandardLevelDetailView::HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59707b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                { "HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, ::GlobalNamespace::BeatmapCharacteristic)>(
        &::GlobalNamespace::StandardLevelDetailView::HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5970808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                         { "HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.ShowContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::StandardLevelDetailViewController_ContentType, float_t)>(
    &::GlobalNamespace::StandardLevelDetailView::ShowContent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5970630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                { "ShowContent", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelDetailViewController_ContentType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.RefreshContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::RefreshContent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x596fd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "RefreshContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.CheckIfBeatmapLevelDataExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::CheckIfBeatmapLevelDataExists)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x596fdfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "CheckIfBeatmapLevelDataExists", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.CheckIfBeatmapLevelDataExistsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::StandardLevelDetailView::*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::StandardLevelDetailView::CheckIfBeatmapLevelDataExistsAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5970904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                             { "CheckIfBeatmapLevelDataExistsAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.SetContentForBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::SetContentForBeatmapData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59708cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "SetContentForBeatmapData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.ClearContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::ClearContent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59709cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "ClearContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.SetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::SetContent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5970a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "SetContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.CalculateAndSetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::CalculateAndSetContent)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5970af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "CalculateAndSetContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.CalculateAndSetContentAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::StandardLevelDetailView::*)(::GlobalNamespace::BeatmapKey, ::System::Threading::CancellationToken)>(&::GlobalNamespace::StandardLevelDetailView::CalculateAndSetContentAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5970d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                { "CalculateAndSetContentAsync", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.SetBeatmapLevelVersions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::SetBeatmapLevelVersions)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5970ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "SetBeatmapLevelVersions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(int32_t, int32_t, int32_t, float_t)>(
    &::GlobalNamespace::StandardLevelDetailView::SetData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5970c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                             { "SetData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.CreateBeatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::StandardLevelDetailView::*)()>(
    &::GlobalNamespace::StandardLevelDetailView::CreateBeatmapKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5970894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "CreateBeatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView.TriggerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::TriggerEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59707e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "TriggerEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)()>(&::GlobalNamespace::StandardLevelDetailView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5970e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView._Awake_b__49_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(bool)>(&::GlobalNamespace::StandardLevelDetailView::_Awake_b__49_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5970e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "<Awake>b__49_0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelDetailView._CalculateAndSetContentAsync_b__65_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelDetailView::*)(float_t)>(
    &::GlobalNamespace::StandardLevelDetailView::_CalculateAndSetContentAsync_b__65_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5970e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "<CalculateAndSetContentAsync>b__65_0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__actionButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__actionButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButton;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__actionButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____actionButton = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__actionButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButtonText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__actionButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButtonText;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__actionButtonText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____actionButtonText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__practiceButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__practiceButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceButton;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__practiceButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____practiceButton = value;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelBar = value;
}
constexpr ::UnityW<::GlobalNamespace::LevelParamsPanel>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__levelParamsPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelParamsPanel;
}
constexpr ::UnityW<::GlobalNamespace::LevelParamsPanel> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__levelParamsPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelParamsPanel;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__levelParamsPanel(::UnityW<::GlobalNamespace::LevelParamsPanel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelParamsPanel = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__levelParamsPanelCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelParamsPanelCanvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__levelParamsPanelCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelParamsPanelCanvasGroup;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__levelParamsPanelCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelParamsPanelCanvasGroup = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapDifficultySegmentedControlController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficultySegmentedControlController;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController> const&
GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapDifficultySegmentedControlController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficultySegmentedControlController;
}
constexpr void
GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__beatmapDifficultySegmentedControlController(::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDifficultySegmentedControlController = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController>&
GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapCharacteristicSegmentedControlController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicSegmentedControlController;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController> const&
GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapCharacteristicSegmentedControlController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicSegmentedControlController;
}
constexpr void
GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__beatmapCharacteristicSegmentedControlController(::UnityW<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicSegmentedControlController = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__favoriteToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoriteToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__favoriteToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoriteToggle;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__favoriteToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____favoriteToggle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__buttonsWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonsWrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__buttonsWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonsWrapper;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__buttonsWrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonsWrapper = value;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__loadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__loadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingControl = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevelVersionsWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelVersionsWrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevelVersionsWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelVersionsWrapper;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__beatmapLevelVersionsWrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelVersionsWrapper = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevelVersionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelVersionText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevelVersionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelVersionText;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__beatmapLevelVersionText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelVersionText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevelDataVersionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelDataVersionText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevelDataVersionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelDataVersionText;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__beatmapLevelDataVersionText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelDataVersionText = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::BeatmapDataLoader*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapDataLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr ::GlobalNamespace::BeatmapDataLoader* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapDataLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataLoader = value;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__audioClipAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClipAsyncLoader = value;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevelsEntitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevelsEntitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsEntitlementModel;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsEntitlementModel = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get_didChangeDifficultyBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get_didChangeDifficultyBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeDifficultyBeatmapEvent = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get_didFavoriteToggleChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFavoriteToggleChangeEvent;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get_didFavoriteToggleChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFavoriteToggleChangeEvent;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFavoriteToggleChangeEvent = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevel = value;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__allowedBeatmapDifficultyMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__allowedBeatmapDifficultyMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowedBeatmapDifficultyMask = value;
}
constexpr ::GlobalNamespace::PlayerData*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__playerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerData;
}
constexpr ::GlobalNamespace::PlayerData* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__playerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerData;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__playerData(::GlobalNamespace::PlayerData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerData = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationTokenSource = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__checkExistsCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkExistsCancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__checkExistsCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkExistsCancellationTokenSource;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__checkExistsCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkExistsCancellationTokenSource = value;
}
constexpr ::Tweening::Tween*& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__levelParamsPanelCanvasGroupTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelParamsPanelCanvasGroupTween;
}
constexpr ::Tweening::Tween* const& GlobalNamespace::StandardLevelDetailView::__cordl_internal_get__levelParamsPanelCanvasGroupTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelParamsPanelCanvasGroupTween;
}
constexpr void GlobalNamespace::StandardLevelDetailView::__cordl_internal_set__levelParamsPanelCanvasGroupTween(::Tweening::Tween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelParamsPanelCanvasGroupTween = value;
}
inline void GlobalNamespace::StandardLevelDetailView::add_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                              { "add_didChangeDifficultyBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailView::remove_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                              { "remove_didChangeDifficultyBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::StandardLevelDetailView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailView::add_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                           { "add_didFavoriteToggleChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailView::remove_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                           { "remove_didFavoriteToggleChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Button> GlobalNamespace::StandardLevelDetailView::get_actionButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "get_actionButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Button>>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::set_actionButtonText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "set_actionButtonText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Button> GlobalNamespace::StandardLevelDetailView::get_practiceButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "get_practiceButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Button>>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::set_hidePracticeButton(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "set_hidePracticeButton", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::StandardLevelDetailView::get_beatmapKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "get_beatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelDetailView::SetContent(::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                                                                 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristic>* notAllowedCharacteristics,
                                                                 ::GlobalNamespace::BeatmapDifficulty defaultDifficulty,
                                                                 ::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic> defaultBeatmapCharacteristic,
                                                                 ::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                          { "SetContent",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>(),
                              ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristic>*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                              ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic>>(), ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, allowedBeatmapDifficultyMask, notAllowedCharacteristics, defaultDifficulty, defaultBeatmapCharacteristic,
                                                   playerData);
}
inline void GlobalNamespace::StandardLevelDetailView::ClearBeatmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "ClearBeatmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::HandleBeatmapLevelsModelLevelDownloadingUpdate(::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate levelDownloadingUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                              { "HandleBeatmapLevelsModelLevelDownloadingUpdate", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelDownloadingUpdate);
}
inline void GlobalNamespace::StandardLevelDetailView::HandleDidPressRefreshButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "HandleDidPressRefreshButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(::GlobalNamespace::BeatmapDifficultySegmentedControlController* controller,
                                                                                                                           ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                              { "HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, difficulty);
}
inline void GlobalNamespace::StandardLevelDetailView::HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(
    ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* controller, ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                       { "HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, beatmapCharacteristic);
}
inline void GlobalNamespace::StandardLevelDetailView::ShowContent(::GlobalNamespace::StandardLevelDetailViewController_ContentType contentType, float_t progress) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                           { "ShowContent", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelDetailViewController_ContentType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentType, progress);
}
inline void GlobalNamespace::StandardLevelDetailView::RefreshContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "RefreshContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::CheckIfBeatmapLevelDataExists() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "CheckIfBeatmapLevelDataExists", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailView::CheckIfBeatmapLevelDataExistsAsync(::StringW beatmapLevelId,
                                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                           { "CheckIfBeatmapLevelDataExistsAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, beatmapLevelId, cancellationToken);
}
inline void GlobalNamespace::StandardLevelDetailView::SetContentForBeatmapData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "SetContentForBeatmapData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::ClearContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "ClearContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::SetContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "SetContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::CalculateAndSetContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "CalculateAndSetContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandardLevelDetailView::CalculateAndSetContentAsync(::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                              { "CalculateAndSetContentAsync", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, beatmapKey, cancellationToken);
}
inline void GlobalNamespace::StandardLevelDetailView::SetBeatmapLevelVersions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "SetBeatmapLevelVersions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::SetData(int32_t notesCount, int32_t obstaclesCount, int32_t bombsCount, float_t songLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(),
                                                           { "SetData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notesCount, obstaclesCount, bombsCount, songLength);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::StandardLevelDetailView::CreateBeatmapKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "CreateBeatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::TriggerEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "TriggerEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelDetailView::_Awake_b__49_0(bool _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "<Awake>b__49_0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GlobalNamespace::StandardLevelDetailView::_CalculateAndSetContentAsync_b__65_0(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelDetailView*>(), { "<CalculateAndSetContentAsync>b__65_0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StandardLevelDetailView* GlobalNamespace::StandardLevelDetailView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelDetailView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelDetailView::StandardLevelDetailView() {}
