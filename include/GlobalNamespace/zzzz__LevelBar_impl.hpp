#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelBar.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelBar__Setup_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar__Setup_d__19::*)()>(&::GlobalNamespace::LevelBar__Setup_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5741844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__Setup_d__19>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar__Setup_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar__Setup_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LevelBar__Setup_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5741a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__Setup_d__19>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelBar__Setup_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__Setup_d__19>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelBar__Setup_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__Setup_d__19>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelBar__Setup_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LevelBar__Setup_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelBar>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "beatmapKey", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelBar__Setup_d__19::LevelBar__Setup_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                          ::UnityW<::GlobalNamespace::LevelBar> __4__this, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->beatmapKey = beatmapKey;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelBar__Setup_d__19::LevelBar__Setup_d__19() {}
//  Writing Method size for method: ::GlobalNamespace::LevelBar__Setup_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar__Setup_d__20::*)()>(&::GlobalNamespace::LevelBar__Setup_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5741a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__Setup_d__20>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar__Setup_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar__Setup_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LevelBar__Setup_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5741ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__Setup_d__20>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelBar__Setup_d__20::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__Setup_d__20>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelBar__Setup_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__Setup_d__20>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelBar__Setup_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LevelBar__Setup_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelBar>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapDifficulty", ty:
// "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapCharacteristic", ty: "::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelBar__Setup_d__20::LevelBar__Setup_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                          ::UnityW<::GlobalNamespace::LevelBar> __4__this, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                          ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                          ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->beatmapLevel = beatmapLevel;
  this->beatmapDifficulty = beatmapDifficulty;
  this->beatmapCharacteristic = beatmapCharacteristic;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelBar__Setup_d__20::LevelBar__Setup_d__20() {}
//  Writing Method size for method: ::GlobalNamespace::LevelBar__SetupData_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar__SetupData_d__21::*)()>(&::GlobalNamespace::LevelBar__SetupData_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x5741ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__SetupData_d__21>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar__SetupData_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar__SetupData_d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LevelBar__SetupData_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5742360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__SetupData_d__21>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelBar__SetupData_d__21::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__SetupData_d__21>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelBar__SetupData_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar__SetupData_d__21>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelBar__SetupData_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LevelBar__SetupData_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelBar>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapDifficulty", ty:
// "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapCharacteristic", ty: "::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelBar__SetupData_d__21::LevelBar__SetupData_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                  ::UnityW<::GlobalNamespace::LevelBar> __4__this, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                  ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                                  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic,
                                                                                  ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->beatmapLevel = beatmapLevel;
  this->beatmapDifficulty = beatmapDifficulty;
  this->beatmapCharacteristic = beatmapCharacteristic;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelBar__SetupData_d__21::LevelBar__SetupData_d__21() {}
//  Writing Method size for method: ::GlobalNamespace::LevelBar.set_hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar::*)(bool)>(&::GlobalNamespace::LevelBar::set_hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x573e148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "set_hide", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar::*)(::GlobalNamespace::BeatmapKey)>(&::GlobalNamespace::LevelBar::Setup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x57347c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar::*)(
    ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*)>(&::GlobalNamespace::LevelBar::Setup)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5741670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar.SetupData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::LevelBar::*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*)>(&::GlobalNamespace::LevelBar::SetupData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5741738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "SetupData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar::*)()>(&::GlobalNamespace::LevelBar::OnDestroy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5741814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelBar._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelBar::*)()>(&::GlobalNamespace::LevelBar::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5741840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::LevelBar::__cordl_internal_get__songArtworkImageView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songArtworkImageView;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::LevelBar::__cordl_internal_get__songArtworkImageView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songArtworkImageView;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__songArtworkImageView(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songArtworkImageView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelBar::__cordl_internal_get__songNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songNameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelBar::__cordl_internal_get__songNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songNameText;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__songNameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelBar::__cordl_internal_get__authorNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authorNameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelBar::__cordl_internal_get__authorNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authorNameText;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__authorNameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____authorNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelBar::__cordl_internal_get__showSongSubName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showSongSubName;
}
constexpr bool const& GlobalNamespace::LevelBar::__cordl_internal_get__showSongSubName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showSongSubName;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__showSongSubName(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showSongSubName = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LevelBar::__cordl_internal_get__singleLineSongInfoContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleLineSongInfoContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LevelBar::__cordl_internal_get__singleLineSongInfoContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleLineSongInfoContainer;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__singleLineSongInfoContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____singleLineSongInfoContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LevelBar::__cordl_internal_get__multiLineSongInfoContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineSongInfoContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LevelBar::__cordl_internal_get__multiLineSongInfoContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineSongInfoContainer;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__multiLineSongInfoContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiLineSongInfoContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelBar::__cordl_internal_get__multiLineSongNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineSongNameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelBar::__cordl_internal_get__multiLineSongNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineSongNameText;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__multiLineSongNameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiLineSongNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelBar::__cordl_internal_get__multiLineAuthorNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineAuthorNameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelBar::__cordl_internal_get__multiLineAuthorNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiLineAuthorNameText;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__multiLineAuthorNameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiLineAuthorNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelBar::__cordl_internal_get__showDifficultyAndCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showDifficultyAndCharacteristic;
}
constexpr bool const& GlobalNamespace::LevelBar::__cordl_internal_get__showDifficultyAndCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showDifficultyAndCharacteristic;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__showDifficultyAndCharacteristic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showDifficultyAndCharacteristic = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelBar::__cordl_internal_get__difficultyText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelBar::__cordl_internal_get__difficultyText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyText;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__difficultyText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::LevelBar::__cordl_internal_get__characteristicIconImageView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristicIconImageView;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::LevelBar::__cordl_internal_get__characteristicIconImageView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristicIconImageView;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__characteristicIconImageView(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____characteristicIconImageView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelBar::__cordl_internal_get__useArtworkBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useArtworkBackground;
}
constexpr bool const& GlobalNamespace::LevelBar::__cordl_internal_get__useArtworkBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useArtworkBackground;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__useArtworkBackground(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useArtworkBackground = value;
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::LevelBar::__cordl_internal_get__artworkBackgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____artworkBackgroundImage;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::LevelBar::__cordl_internal_get__artworkBackgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____artworkBackgroundImage;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__artworkBackgroundImage(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____artworkBackgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::LevelBar::__cordl_internal_get__defaultArtworkImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultArtworkImage;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::LevelBar::__cordl_internal_get__defaultArtworkImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultArtworkImage;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__defaultArtworkImage(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultArtworkImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::LevelBar::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::LevelBar::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LevelBar::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::LevelBar::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::LevelBar::__cordl_internal_get__beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::LevelBar::__cordl_internal_get__beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr void GlobalNamespace::LevelBar::__cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelBar::set_hide(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "set_hide", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelBar::Setup(::GlobalNamespace::BeatmapKey beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::LevelBar::Setup(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                             ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel, beatmapDifficulty, beatmapCharacteristic);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LevelBar::SetupData(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                              ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "SetupData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, beatmapLevel, beatmapDifficulty, beatmapCharacteristic);
}
inline void GlobalNamespace::LevelBar::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelBar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelBar*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelBar* GlobalNamespace::LevelBar::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelBar*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelBar::LevelBar() {}
