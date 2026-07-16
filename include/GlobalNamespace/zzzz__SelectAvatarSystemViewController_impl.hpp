#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectAvatarSystemViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemViewController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemCell_def.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemViewController_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31::*)()>(
    &::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5a1918c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a193c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::SelectAvatarSystemViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::SelectAvatarSystemViewController> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31() {}
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.add_didSetAvatarSystemPreferredEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::add_didSetAvatarSystemPreferredEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a17454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                { "add_didSetAvatarSystemPreferredEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.remove_didSetAvatarSystemPreferredEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::remove_didSetAvatarSystemPreferredEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a17514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                { "remove_didSetAvatarSystemPreferredEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.add_didRequestEditOfAvatarEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::add_didRequestEditOfAvatarEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a175d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                             { "add_didRequestEditOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.remove_didRequestEditOfAvatarEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::remove_didRequestEditOfAvatarEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a17694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                { "remove_didRequestEditOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.add_didRequestCreationOfAvatarEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::add_didRequestCreationOfAvatarEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a17754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                { "add_didRequestCreationOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.remove_didRequestCreationOfAvatarEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::remove_didRequestCreationOfAvatarEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a17814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                { "remove_didRequestCreationOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.add_didPressContinueButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::add_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a178d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "add_didPressContinueButtonEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.remove_didPressContinueButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::System::Action*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::remove_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a17980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                                                           { "remove_didPressContinueButtonEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.get_continueButtonVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(
    &::GlobalNamespace::SelectAvatarSystemViewController::get_continueButtonVisible)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a17a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "get_continueButtonVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.set_continueButtonVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(bool)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::set_continueButtonVisible)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a17a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "set_continueButtonVisible", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.Prewarm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::Prewarm)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a17a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                             { "Prewarm",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(),
                                                                 ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::DidActivate)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5a180dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(bool, bool)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a1881c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.SetSelectedAvatarSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::SetSelectedAvatarSystem)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5a17acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                                                           { "SetSelectedAvatarSystem", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.ReloadCreateEditButtonOfAvatarSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::ReloadCreateEditButtonOfAvatarSystem)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5a18480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                             { "ReloadCreateEditButtonOfAvatarSystem", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.SetAllCellsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(bool)>(&::GlobalNamespace::SelectAvatarSystemViewController::SetAllCellsActive)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5a17dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "SetAllCellsActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.ReloadContinueButtonInteractability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(
    &::GlobalNamespace::SelectAvatarSystemViewController::ReloadContinueButtonInteractability)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a18778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "ReloadContinueButtonInteractability", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SelectAvatarSystemViewController::*)(int32_t)>(&::GlobalNamespace::SelectAvatarSystemViewController::CellSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a18ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(&::GlobalNamespace::SelectAvatarSystemViewController::NumberOfCells)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a18ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "NumberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::GlobalNamespace::SelectAvatarSystemViewController::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::CellForIdx)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5a18b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                                                           { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.HandleLoadedSelectionViewDidPressPreferredButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressPreferredButton)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a19108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                             { "HandleLoadedSelectionViewDidPressPreferredButton", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.HandleLoadedSelectionViewDidPressEditButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressEditButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a19134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                             { "HandleLoadedSelectionViewDidPressEditButton", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController.HandleLoadedSelectionViewDidPressCreateButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressCreateButton)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a19150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                             { "HandleLoadedSelectionViewDidPressCreateButton", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(&::GlobalNamespace::SelectAvatarSystemViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1916c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemViewController._DidActivate_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemViewController::*)()>(&::GlobalNamespace::SelectAvatarSystemViewController::_DidActivate_b__26_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a19170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "<DidActivate>b__26_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TableView>& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__tableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr ::UnityW<::HMUI::TableView> const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__tableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableView = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__continueButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__continueButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____continueButton = value;
}
constexpr ::UnityW<::HMUI::HoverHint>& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__hoverHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverHint;
}
constexpr ::UnityW<::HMUI::HoverHint> const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__hoverHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverHint;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set__hoverHint(::UnityW<::HMUI::HoverHint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hoverHint = value;
}
constexpr ::UnityW<::GlobalNamespace::SelectAvatarSystemCell>& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__cellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__cellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::SelectAvatarSystemCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellPrefab = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarSystemCollection = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get_didSetAvatarSystemPreferredEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetAvatarSystemPreferredEvent;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get_didSetAvatarSystemPreferredEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetAvatarSystemPreferredEvent;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSetAvatarSystemPreferredEvent = value;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get_didRequestEditOfAvatarEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestEditOfAvatarEvent;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get_didRequestEditOfAvatarEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestEditOfAvatarEvent;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didRequestEditOfAvatarEvent = value;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get_didRequestCreationOfAvatarEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestCreationOfAvatarEvent;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get_didRequestCreationOfAvatarEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestCreationOfAvatarEvent;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didRequestCreationOfAvatarEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get_didPressContinueButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressContinueButtonEvent;
}
constexpr ::System::Action* const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get_didPressContinueButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressContinueButtonEvent;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set_didPressContinueButtonEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPressContinueButtonEvent = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__avatarSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystems;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const&
GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__avatarSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystems;
}
constexpr void
GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set__avatarSystems(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarSystems = value;
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__selectedAvatarSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystem;
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* const& GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_get__selectedAvatarSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystem;
}
constexpr void GlobalNamespace::SelectAvatarSystemViewController::__cordl_internal_set__selectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAvatarSystem = value;
}
inline void GlobalNamespace::SelectAvatarSystemViewController::add_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                              { "add_didSetAvatarSystemPreferredEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::remove_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                              { "remove_didSetAvatarSystemPreferredEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::add_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                           { "add_didRequestEditOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::remove_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                           { "remove_didRequestEditOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::add_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                           { "add_didRequestCreationOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::remove_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                              { "remove_didRequestCreationOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::add_didPressContinueButtonEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "add_didPressContinueButtonEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::remove_didPressContinueButtonEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                                                         { "remove_didPressContinueButtonEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SelectAvatarSystemViewController::get_continueButtonVisible() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "get_continueButtonVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::set_continueButtonVisible(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "set_continueButtonVisible", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::Prewarm(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* avatarSystems,
                                                                       ::BeatSaber::AvatarCore::IAvatarSystemMetadata* selectedAvatarSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                           { "Prewarm",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(),
                                                               ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystems, selectedAvatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::SetSelectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* selectedAvatarSystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                                                         { "SetSelectedAvatarSystem", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectedAvatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::ReloadCreateEditButtonOfAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                           { "ReloadCreateEditButtonOfAvatarSystem", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::SetAllCellsActive(bool active) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "SetAllCellsActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::ReloadContinueButtonInteractability() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "ReloadContinueButtonInteractability", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::SelectAvatarSystemViewController::CellSize(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline int32_t GlobalNamespace::SelectAvatarSystemViewController::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "NumberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> GlobalNamespace::SelectAvatarSystemViewController::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                                                         { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, idx);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressPreferredButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                           { "HandleLoadedSelectionViewDidPressPreferredButton", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressEditButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                           { "HandleLoadedSelectionViewDidPressEditButton", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::HandleLoadedSelectionViewDidPressCreateButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(),
                                                           { "HandleLoadedSelectionViewDidPressCreateButton", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemViewController::_DidActivate_b__26_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemViewController*>(), { "<DidActivate>b__26_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectAvatarSystemViewController* GlobalNamespace::SelectAvatarSystemViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectAvatarSystemViewController*>());
}
/// @brief Convert operator to "::HMUI::TableView_IDataSource"
constexpr GlobalNamespace::SelectAvatarSystemViewController::operator ::HMUI::TableView_IDataSource*() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::TableView_IDataSource"
constexpr ::HMUI::TableView_IDataSource* GlobalNamespace::SelectAvatarSystemViewController::i___HMUI__TableView_IDataSource() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectAvatarSystemViewController::SelectAvatarSystemViewController() {}
