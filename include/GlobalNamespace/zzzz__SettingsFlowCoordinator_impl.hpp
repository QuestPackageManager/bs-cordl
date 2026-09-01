#pragma once
// IWYU pragma private; include "GlobalNamespace\SettingsFlowCoordinator.hpp"
#include "BeatSaber/Settings/zzzz__Settings_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsNavigationController_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__DropdownDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__SettingsNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsSubMenuInfo_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SettingsFlowCoordinator_FinishAction::SettingsFlowCoordinator_FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsFlowCoordinator_FinishAction::SettingsFlowCoordinator_FinishAction() {}
constexpr ::GlobalNamespace::SettingsFlowCoordinator_FinishAction GlobalNamespace::SettingsFlowCoordinator_FinishAction::Cancel{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SettingsFlowCoordinator_FinishAction GlobalNamespace::SettingsFlowCoordinator_FinishAction::Ok{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SettingsFlowCoordinator_FinishAction GlobalNamespace::SettingsFlowCoordinator_FinishAction::Apply{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28::*)()>(
    &::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5a0e3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a0e838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SettingsFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28::SettingsFlowCoordinator__ApplySettingsAsync_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28::SettingsFlowCoordinator__ApplySettingsAsync_d__28() {}
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29::*)()>(
    &::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5a0e8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a0ec60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SettingsFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29::SettingsFlowCoordinator__CancelSettingsAsync_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29::SettingsFlowCoordinator__CancelSettingsAsync_d__29() {}
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27::*)()>(
    &::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5a0eccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0f100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "finishAction", ty:
// "::GlobalNamespace::SettingsNavigationController_FinishAction", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SettingsFlowCoordinator>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::SettingsNavigationController_FinishAction finishAction,
    ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->finishAction = finishAction;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>*)>(
    &::GlobalNamespace::SettingsFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a0d73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
            { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>*)>(
    &::GlobalNamespace::SettingsFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a0d7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
                            { "remove_didFinishEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::SettingsFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5a0d8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::SettingsFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5a0dc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.ReplaceViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::SettingsFlowCoordinator::ReplaceViewController)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a0ddd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { "ReplaceViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.ShowSecretViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::SettingsFlowCoordinator::ShowSecretViewController)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0de70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { "ShowSecretViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.HandleDidSelectSettingsSubMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::GlobalNamespace::SettingsSubMenuInfo*, int32_t)>(
    &::GlobalNamespace::SettingsFlowCoordinator::HandleDidSelectSettingsSubMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a0de74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
                                                             { "HandleDidSelectSettingsSubMenu", {}, { ::i2c::type_of<::GlobalNamespace::SettingsSubMenuInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.HandleRequestToSelectProfileToCopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>)>(
    &::GlobalNamespace::SettingsFlowCoordinator::HandleRequestToSelectProfileToCopyFrom)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5a0dee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
                                                             { "HandleRequestToSelectProfileToCopyFrom", {}, { ::i2c::type_of<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.HandleSettingsNavigationControllerDidFinishAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::GlobalNamespace::SettingsNavigationController_FinishAction)>(
    &::GlobalNamespace::SettingsFlowCoordinator::HandleSettingsNavigationControllerDidFinishAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0e100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
                                                { "HandleSettingsNavigationControllerDidFinishAsync", {}, { ::i2c::type_of<::GlobalNamespace::SettingsNavigationController_FinishAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.ApplySettingsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::SettingsFlowCoordinator::*)()>(
    &::GlobalNamespace::SettingsFlowCoordinator::ApplySettingsAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0e1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { "ApplySettingsAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator.CancelSettingsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::SettingsFlowCoordinator::*)()>(
    &::GlobalNamespace::SettingsFlowCoordinator::CancelSettingsAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a0e260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { "CancelSettingsAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)()>(&::GlobalNamespace::SettingsFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0e310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsFlowCoordinator._HandleRequestToSelectProfileToCopyFrom_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsFlowCoordinator::*)(::System::ValueTuple_2<int32_t, int32_t>)>(
    &::GlobalNamespace::SettingsFlowCoordinator::_HandleRequestToSelectProfileToCopyFrom_b__26_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a0e318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
                                                             { "<HandleRequestToSelectProfileToCopyFrom>b__26_0", {}, { ::i2c::type_of<::System::ValueTuple_2<int32_t, int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>*&
GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>* const&
GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__mainSettingsMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsMenuViewController;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__mainSettingsMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsMenuViewController;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__mainSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainSettingsMenuViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsNavigationController>& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__settingsNavigationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsNavigationController;
}
constexpr ::UnityW<::GlobalNamespace::SettingsNavigationController> const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__settingsNavigationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsNavigationController;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__settingsNavigationController(::UnityW<::GlobalNamespace::SettingsNavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsNavigationController = value;
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get_fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get_fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileStorage = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__settingsApplicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__settingsApplicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsApplicator = value;
}
constexpr ::UnityW<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController>& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__controllerProfilesViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllerProfilesViewController;
}
constexpr ::UnityW<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController> const&
GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__controllerProfilesViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllerProfilesViewController;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__controllerProfilesViewController(::UnityW<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controllerProfilesViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController>& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__dropdownDialogPromptViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdownDialogPromptViewController;
}
constexpr ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__dropdownDialogPromptViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdownDialogPromptViewController;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__dropdownDialogPromptViewController(::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dropdownDialogPromptViewController = value;
}
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel*& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__controllerProfilesModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllerProfilesModel;
}
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel* const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__controllerProfilesModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllerProfilesModel;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__controllerProfilesModel(::BeatSaber::GameSettings::ControllerProfilesModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controllerProfilesModel = value;
}
constexpr ::BeatSaber::Settings::Settings& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__undoSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____undoSettings;
}
constexpr ::BeatSaber::Settings::Settings const& GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_get__undoSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____undoSettings;
}
constexpr void GlobalNamespace::SettingsFlowCoordinator::__cordl_internal_set__undoSettings(::BeatSaber::Settings::Settings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____undoSettings = value;
}
inline void GlobalNamespace::SettingsFlowCoordinator::setStaticF__selectedSettingsSubMenuInfoIdx(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_selectedSettingsSubMenuInfoIdx", ::GlobalNamespace::SettingsFlowCoordinator*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SettingsFlowCoordinator::getStaticF__selectedSettingsSubMenuInfoIdx() {
  return ::cordl_internals::getStaticField<int32_t, "_selectedSettingsSubMenuInfoIdx", ::GlobalNamespace::SettingsFlowCoordinator*>();
}
inline void
GlobalNamespace::SettingsFlowCoordinator::add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
          { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsFlowCoordinator::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
          { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SettingsFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::SettingsFlowCoordinator::ReplaceViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { "ReplaceViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::SettingsFlowCoordinator::ShowSecretViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { "ShowSecretViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::SettingsFlowCoordinator::HandleDidSelectSettingsSubMenu(::GlobalNamespace::SettingsSubMenuInfo* settingsSubMenuInfo, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
                                                           { "HandleDidSelectSettingsSubMenu", {}, { ::i2c::type_of<::GlobalNamespace::SettingsSubMenuInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsSubMenuInfo, idx);
}
inline void GlobalNamespace::SettingsFlowCoordinator::HandleRequestToSelectProfileToCopyFrom(::ArrayW<::System::ValueTuple_2<::StringW, int32_t>> profilesToCopyFrom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
                                                           { "HandleRequestToSelectProfileToCopyFrom", {}, { ::i2c::type_of<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profilesToCopyFrom);
}
inline void GlobalNamespace::SettingsFlowCoordinator::HandleSettingsNavigationControllerDidFinishAsync(::GlobalNamespace::SettingsNavigationController_FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
                                              { "HandleSettingsNavigationControllerDidFinishAsync", {}, { ::i2c::type_of<::GlobalNamespace::SettingsNavigationController_FinishAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finishAction);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SettingsFlowCoordinator::ApplySettingsAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { "ApplySettingsAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SettingsFlowCoordinator::CancelSettingsAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { "CancelSettingsAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsFlowCoordinator::_HandleRequestToSelectProfileToCopyFrom_b__26_0(::System::ValueTuple_2<int32_t, int32_t> arguments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsFlowCoordinator*>(),
                                                           { "<HandleRequestToSelectProfileToCopyFrom>b__26_0", {}, { ::i2c::type_of<::System::ValueTuple_2<int32_t, int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arguments);
}
inline ::GlobalNamespace::SettingsFlowCoordinator* GlobalNamespace::SettingsFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingsFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsFlowCoordinator::SettingsFlowCoordinator() {}
