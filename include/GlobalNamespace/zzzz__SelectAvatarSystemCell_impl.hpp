#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectAvatarSystemCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemCell_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemCell_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell__Load_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell__Load_d__14::*)()>(&::GlobalNamespace::SelectAvatarSystemCell__Load_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x5a1f628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell__Load_d__14>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell__Load_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell__Load_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::SelectAvatarSystemCell__Load_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1fc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell__Load_d__14>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SelectAvatarSystemCell__Load_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell__Load_d__14>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell__Load_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell__Load_d__14>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SelectAvatarSystemCell__Load_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SelectAvatarSystemCell__Load_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SelectAvatarSystemCell>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "avatarSystemMetadata", ty: "::BeatSaber::AvatarCore::IAvatarSystemMetadata*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SelectAvatarSystemCell__Load_d__14::SelectAvatarSystemCell__Load_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> __4__this,
    ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->avatarSystemMetadata = avatarSystemMetadata;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectAvatarSystemCell__Load_d__14::SelectAvatarSystemCell__Load_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17::*)()>(
    &::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5a1fc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1ff60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SelectAvatarSystemCell>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17::SelectAvatarSystemCell__ReloadIsCreated_d__17(int32_t __1__state,
                                                                                                                          ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                          ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> __4__this,
                                                                                                                          ::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView> __7__wrap1,
                                                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectAvatarSystemCell__ReloadIsCreated_d__17::SelectAvatarSystemCell__ReloadIsCreated_d__17() {}
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.add_didSetAvatarSystemPreferredEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemCell::add_didSetAvatarSystemPreferredEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a18f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                { "add_didSetAvatarSystemPreferredEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.remove_didSetAvatarSystemPreferredEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemCell::remove_didSetAvatarSystemPreferredEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1f2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                { "remove_didSetAvatarSystemPreferredEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.add_didRequestEditOfAvatarEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemCell::add_didRequestEditOfAvatarEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a18edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                             { "add_didRequestEditOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.remove_didRequestEditOfAvatarEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemCell::remove_didRequestEditOfAvatarEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1f3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                { "remove_didRequestEditOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.add_didRequestCreationOfAvatarEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemCell::add_didRequestCreationOfAvatarEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a18e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                { "add_didRequestCreationOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.remove_didRequestCreationOfAvatarEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(
    &::GlobalNamespace::SelectAvatarSystemCell::remove_didRequestCreationOfAvatarEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a1f464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                { "remove_didRequestCreationOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::SelectAvatarSystemCell::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a1905c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "Load", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1f524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { ::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.SetSelectedAvatarSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::SelectAvatarSystemCell::SetSelectedAvatarSystem)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a1882c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                                                           { "SetSelectedAvatarSystem", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.ReloadIsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::ReloadIsCreated)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a188d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "ReloadIsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::Activate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a18978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "Activate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::Deactivate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a18a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "Deactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.TryActivateOnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::TryActivateOnEnable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a1f528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "TryActivateOnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.HandleLoadedSelectionViewDidPressPreferredButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(
    &::GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressPreferredButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a1f5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "HandleLoadedSelectionViewDidPressPreferredButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.HandleLoadedSelectionViewDidPressEditButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(
    &::GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressEditButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a1f5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "HandleLoadedSelectionViewDidPressEditButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.HandleLoadedSelectionViewDidPressCreateButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(
    &::GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressCreateButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a1f600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "HandleLoadedSelectionViewDidPressCreateButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1f620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarSystemCollection = value;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didSetAvatarSystemPreferredEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetAvatarSystemPreferredEvent;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didSetAvatarSystemPreferredEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetAvatarSystemPreferredEvent;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSetAvatarSystemPreferredEvent = value;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didRequestEditOfAvatarEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestEditOfAvatarEvent;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didRequestEditOfAvatarEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestEditOfAvatarEvent;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didRequestEditOfAvatarEvent = value;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didRequestCreationOfAvatarEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestCreationOfAvatarEvent;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didRequestCreationOfAvatarEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestCreationOfAvatarEvent;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didRequestCreationOfAvatarEvent = value;
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__loadedAvatarSystemMetadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedAvatarSystemMetadata;
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* const& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__loadedAvatarSystemMetadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedAvatarSystemMetadata;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set__loadedAvatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadedAvatarSystemMetadata = value;
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__selectedAvatarSystemMetadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystemMetadata;
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* const& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__selectedAvatarSystemMetadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystemMetadata;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set__selectedAvatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAvatarSystemMetadata = value;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__loadedSelectionView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedSelectionView;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView> const& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__loadedSelectionView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedSelectionView;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set__loadedSelectionView(::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadedSelectionView = value;
}
constexpr bool& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__activateViewOnEnable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateViewOnEnable;
}
constexpr bool const& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__activateViewOnEnable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateViewOnEnable;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set__activateViewOnEnable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activateViewOnEnable = value;
}
inline void GlobalNamespace::SelectAvatarSystemCell::add_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                              { "add_didSetAvatarSystemPreferredEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::remove_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                              { "remove_didSetAvatarSystemPreferredEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::add_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                           { "add_didRequestEditOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::remove_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                           { "remove_didRequestEditOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::add_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                           { "add_didRequestCreationOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::remove_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                              { "remove_didRequestCreationOfAvatarEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::Load(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "Load", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystemMetadata);
}
inline void GlobalNamespace::SelectAvatarSystemCell::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::SetSelectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(),
                                                                                         { "SetSelectedAvatarSystem", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemCell::ReloadIsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "ReloadIsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::Activate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "Activate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "Deactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::TryActivateOnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "TryActivateOnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressPreferredButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "HandleLoadedSelectionViewDidPressPreferredButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressEditButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "HandleLoadedSelectionViewDidPressEditButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressCreateButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { "HandleLoadedSelectionViewDidPressCreateButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectAvatarSystemCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectAvatarSystemCell* GlobalNamespace::SelectAvatarSystemCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectAvatarSystemCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectAvatarSystemCell::SelectAvatarSystemCell() {}
