#pragma once
// IWYU pragma private; include "GlobalNamespace\AvatarSystemSelectionFlowCoordinator.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarSystemSelectionFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "GlobalNamespace/zzzz__AvatarSystemSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction::AvatarSystemSelectionFlowCoordinator_FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction::AvatarSystemSelectionFlowCoordinator_FinishAction() {}
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction::Continue{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction::Back{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11::*)()>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x5a07700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a07e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "avatarSystemsMetadata", ty:
// "::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty:
// "::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_selectableAvatarSystemMetadata_5__3",
// ty: "::BeatSaber::AvatarCore::IAvatarSystemMetadata*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11::AvatarSystemSelectionFlowCoordinator__Initialize_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* avatarSystemsMetadata,
    ::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator> __4__this, ::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* __7__wrap1,
    ::BeatSaber::AvatarCore::IAvatarSystemMetadata* _selectableAvatarSystemMetadata_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->avatarSystemsMetadata = avatarSystemsMetadata;
  this->__4__this = __4__this;
  this->__7__wrap1 = __7__wrap1;
  this->_selectableAvatarSystemMetadata_5__3 = _selectableAvatarSystemMetadata_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__11::AvatarSystemSelectionFlowCoordinator__Initialize_d__11() {}
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a069a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
            { "add_didFinishEvent",
              {},
              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a06a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
            { "remove_didFinishEvent",
              {},
              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Initialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a06b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                { "Initialize", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(bool)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a06bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), { "Setup", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5a06bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5a06ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a06f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.SetAvatarSystemPreferred
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::SetAvatarSystemPreferred)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5a06ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                                                           { "SetAvatarSystemPreferred", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a07130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                { "HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5a07134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                { "HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5a072b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                { "HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleAvatarEditorFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(
    ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*, ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleAvatarEditorFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a07434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                { "HandleAvatarEditorFlowCoordinatorDidFinish",
                                                  {},
                                                  { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>(), ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(),
                                                    ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.HandleSelectAvatarSystemViewControllerDidPressContinueButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a07554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), { "HandleSelectAvatarSystemViewControllerDidPressContinueButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a07578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)()>(&::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a0759c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator._Initialize_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_Initialize_b__11_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a0763c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                                                           { "<Initialize>b__11_0", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SelectAvatarSystemViewController>& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__selectAvatarSystemViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectAvatarSystemViewController;
}
constexpr ::UnityW<::GlobalNamespace::SelectAvatarSystemViewController> const& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__selectAvatarSystemViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectAvatarSystemViewController;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_set__selectAvatarSystemViewController(::UnityW<::GlobalNamespace::SelectAvatarSystemViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectAvatarSystemViewController = value;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarSystemCollection = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>*&
GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>* const&
GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>*&
GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__avatarFlowCoordinators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarFlowCoordinators;
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>* const&
GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__avatarFlowCoordinators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarFlowCoordinators;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_set__avatarFlowCoordinators(
    ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarFlowCoordinators = value;
}
constexpr bool& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__continueButtonVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButtonVisible;
}
constexpr bool const& GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_get__continueButtonVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButtonVisible;
}
constexpr void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::__cordl_internal_set__continueButtonVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____continueButtonVisible = value;
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::add_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
          { "add_didFinishEvent",
            {},
            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
          { "remove_didFinishEvent",
            {},
            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Initialize(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* avatarSystemsMetadata) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                              { "Initialize", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystemsMetadata);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::Setup(bool continueButtonVisible) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), { "Setup", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continueButtonVisible);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                               ::HMUI::ViewController_AnimationType animationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::SetAvatarSystemPreferred(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                                                         { "SetAvatarSystemPreferred", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                              { "HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                              { "HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                              { "HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator,
                                                                                                              ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem,
                                                                                                              ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                              { "HandleAvatarEditorFlowCoordinatorDidFinish",
                                                {},
                                                { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>(), ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(),
                                                  ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator, avatarSystem, finishAction);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::HandleSelectAvatarSystemViewControllerDidPressContinueButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), { "HandleSelectAvatarSystemViewControllerDidPressContinueButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topViewController);
}
inline void GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AvatarSystemSelectionFlowCoordinator::_Initialize_b__11_0(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                                                         { "<Initialize>b__11_0", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, avatarSystem);
}
inline ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* GlobalNamespace::AvatarSystemSelectionFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator::AvatarSystemSelectionFlowCoordinator() {}
