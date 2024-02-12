#pragma once
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_impl.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemCell_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "GlobalNamespace/zzzz__SelectAvatarSystemCell_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::*)()>(
    &::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x2317594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2317b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SelectAvatarSystemCell>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "avatarSystemMetadata", ty: "::BeatSaber::AvatarCore::IAvatarSystemMetadata*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__SelectAvatarSystemCell___Load_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> __4__this,
    ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->avatarSystemMetadata = avatarSystemMetadata;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14::__SelectAvatarSystemCell___Load_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::*)()>(
    &::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2317b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2317e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SelectAvatarSystemCell>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap1", ty: "::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__SelectAvatarSystemCell___ReloadIsCreated_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> __4__this,
    ::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView> __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17::__SelectAvatarSystemCell___ReloadIsCreated_d__17() {}
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.add_didSetAvatarSystemPreferredEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::add_didSetAvatarSystemPreferredEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2309ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "add_didSetAvatarSystemPreferredEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.remove_didSetAvatarSystemPreferredEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::remove_didSetAvatarSystemPreferredEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2317284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "remove_didSetAvatarSystemPreferredEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.add_didRequestEditOfAvatarEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::add_didRequestEditOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2309af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "add_didRequestEditOfAvatarEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.remove_didRequestEditOfAvatarEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::remove_didRequestEditOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2317334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "remove_didRequestEditOfAvatarEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.add_didRequestCreationOfAvatarEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::add_didRequestCreationOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2309a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "add_didRequestCreationOfAvatarEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.remove_didRequestCreationOfAvatarEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*)>(&::GlobalNamespace::SelectAvatarSystemCell::remove_didRequestCreationOfAvatarEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23173e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "remove_didRequestCreationOfAvatarEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::SelectAvatarSystemCell::Load)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2309c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2317494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.SetSelectedAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::GlobalNamespace::SelectAvatarSystemCell::SetSelectedAvatarSystem)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x230948c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "SetSelectedAvatarSystem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.ReloadIsCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::ReloadIsCreated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2309534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                                                                               "ReloadIsCreated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::Activate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23095c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "Activate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.Deactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::Deactivate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2309670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "Deactivate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.TryActivateOnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(
    &::GlobalNamespace::SelectAvatarSystemCell::TryActivateOnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2317498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                                                                               "TryActivateOnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.HandleLoadedSelectionViewDidPressPreferredButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(
    &::GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressPreferredButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x231752c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                                                 "HandleLoadedSelectionViewDidPressPreferredButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.HandleLoadedSelectionViewDidPressEditButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(
    &::GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressEditButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x231754c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                                                 "HandleLoadedSelectionViewDidPressEditButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell.HandleLoadedSelectionViewDidPressCreateButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(
    &::GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressCreateButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x231756c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                                                 "HandleLoadedSelectionViewDidPressCreateButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectAvatarSystemCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectAvatarSystemCell::*)()>(&::GlobalNamespace::SelectAvatarSystemCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231758c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarSystemCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didSetAvatarSystemPreferredEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetAvatarSystemPreferredEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const&
GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didSetAvatarSystemPreferredEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetAvatarSystemPreferredEvent;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSetAvatarSystemPreferredEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didRequestEditOfAvatarEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestEditOfAvatarEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const&
GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didRequestEditOfAvatarEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestEditOfAvatarEvent;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didRequestEditOfAvatarEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didRequestCreationOfAvatarEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestCreationOfAvatarEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const&
GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get_didRequestCreationOfAvatarEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didRequestCreationOfAvatarEvent;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didRequestCreationOfAvatarEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__loadedAvatarSystemMetadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedAvatarSystemMetadata;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> const&
GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__loadedAvatarSystemMetadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedAvatarSystemMetadata;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set__loadedAvatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadedAvatarSystemMetadata)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__selectedAvatarSystemMetadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystemMetadata;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> const&
GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_get__selectedAvatarSystemMetadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystemMetadata;
}
constexpr void GlobalNamespace::SelectAvatarSystemCell::__cordl_internal_set__selectedAvatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedAvatarSystemMetadata)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadedSelectionView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "add_didSetAvatarSystemPreferredEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::remove_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "remove_didSetAvatarSystemPreferredEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::add_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "add_didRequestEditOfAvatarEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::remove_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "remove_didRequestEditOfAvatarEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::add_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "add_didRequestCreationOfAvatarEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::remove_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "remove_didRequestCreationOfAvatarEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SelectAvatarSystemCell::Load(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarSystemMetadata);
}
inline void GlobalNamespace::SelectAvatarSystemCell::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::SetSelectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "SetSelectedAvatarSystem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarSystem);
}
inline void GlobalNamespace::SelectAvatarSystemCell::ReloadIsCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                                                                             "ReloadIsCreated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::Activate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "Activate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "Deactivate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::TryActivateOnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                                                                             "TryActivateOnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressPreferredButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                                               "HandleLoadedSelectionViewDidPressPreferredButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressEditButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), "HandleLoadedSelectionViewDidPressEditButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelectAvatarSystemCell::HandleLoadedSelectionViewDidPressCreateButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(),
                                               "HandleLoadedSelectionViewDidPressCreateButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectAvatarSystemCell* GlobalNamespace::SelectAvatarSystemCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelectAvatarSystemCell*>());
}
inline void GlobalNamespace::SelectAvatarSystemCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectAvatarSystemCell*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectAvatarSystemCell::SelectAvatarSystemCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
