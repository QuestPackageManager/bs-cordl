#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarSystemCollection.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystem_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection___c::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224dc88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection___c._get_anyAvatarCreated_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection___c::*)(::BeatSaber::AvatarCore::IAvatarSystem*)>(&::BeatSaber::AvatarCore::AvatarSystemCollection___c::_get_anyAvatarCreated_b__14_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x224dc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>::get(), "<get_anyAvatarCreated>b__14_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AvatarSystemCollection___c::setStaticF___9(::BeatSaber::AvatarCore::AvatarSystemCollection___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::AvatarCore::AvatarSystemCollection___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>::get>(
      std::forward<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>(value));
}
inline ::BeatSaber::AvatarCore::AvatarSystemCollection___c* BeatSaber::AvatarCore::AvatarSystemCollection___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::AvatarCore::AvatarSystemCollection___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>::get>();
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection___c::setStaticF___9__14_0(::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>*, "<>9__14_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>*>(value));
}
inline ::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* BeatSaber::AvatarCore::AvatarSystemCollection___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>::get>();
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::AvatarSystemCollection___c::_get_anyAvatarCreated_b__14_0(::BeatSaber::AvatarCore::IAvatarSystem* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>::get(), "<get_anyAvatarCreated>b__14_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, avatarSystem);
}
inline ::BeatSaber::AvatarCore::AvatarSystemCollection___c* BeatSaber::AvatarCore::AvatarSystemCollection___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection___c::AvatarSystemCollection___c() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18::*)()>(
        &::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x224dd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18>::get(),
        "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (
    ::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x224e19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18>::get(),
        "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18>::get(),
      "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18>::get(),
      "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::AvatarCore::AvatarSystemCollection*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::List_1_Enumerator<::BeatSaber::AvatarCore::IAvatarSystem*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18::
    AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this,
        ::System::Collections::Generic::List_1_Enumerator<::BeatSaber::AvatarCore::IAvatarSystem*> __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18::
    AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__18() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x910;
  constexpr static std::size_t addrs = 0x224e204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x224eb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BeatSaber::AvatarCore::AvatarSystemCollection*", modifiers: "", def_value: Some("{}") }, CppParam { name: "selectedAvatarTypeIdentifier", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData> __t__builder,
    ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this, ::StringW selectedAvatarTypeIdentifier,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData, ::Array<::GlobalNamespace::MultiplayerAvatarData>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->selectedAvatarTypeIdentifier = selectedAvatarTypeIdentifier;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16::AvatarSystemCollection__GetMultiplayerAvatarsData_d__16() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_selectableAvatarSystems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_selectableAvatarSystems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224cbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                               "get_selectableAvatarSystems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_availableAvatarSystems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_availableAvatarSystems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224cbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                               "get_availableAvatarSystems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_supportedOptionalAvatarDataType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_supportedOptionalAvatarDataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224cbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "get_supportedOptionalAvatarDataType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(
    ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::_ctor)> {
  constexpr static std::size_t size = 0xa9c;
  constexpr static std::size_t addrs = 0x224cbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.AvatarSystemBySelectionSortOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatSaber::AvatarCore::IAvatarSystem*, ::BeatSaber::AvatarCore::IAvatarSystem*)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemBySelectionSortOrder)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x224d680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "AvatarSystemBySelectionSortOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_anyAvatarCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::get_anyAvatarCreated)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x224d7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                               "get_anyAvatarCreated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.HasAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(uint32_t)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::HasAvatarSystem)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x224b3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "HasAvatarSystem",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x224d8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetMultiplayerAvatarsData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetMultiplayerAvatarOptionalDataProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarOptionalDataProvider)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x224d9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetMultiplayerAvatarOptionalDataProvider",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x224dab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                    "CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x224db74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::BeatSaber::AvatarCore::AvatarSystemIdentifier)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224dc1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x224da80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(uint32_t)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x224b428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>*&
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableAvatarSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystems;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* const&
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableAvatarSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystems;
}
constexpr void
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set__availableAvatarSystems(::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____availableAvatarSystems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*&
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableUserSelectableAvatarSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableUserSelectableAvatarSystems;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* const&
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableUserSelectableAvatarSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableUserSelectableAvatarSystems;
}
constexpr void
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set__availableUserSelectableAvatarSystems(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____availableUserSelectableAvatarSystems)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__supportedOptionalAvatarDataTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedOptionalAvatarDataTypes;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* const& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__supportedOptionalAvatarDataTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedOptionalAvatarDataTypes;
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set__supportedOptionalAvatarDataTypes(::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____supportedOptionalAvatarDataTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystem*& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__fallbackAvatarSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackAvatarSystem;
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystem* const& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__fallbackAvatarSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackAvatarSystem;
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set__fallbackAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fallbackAvatarSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableAvatarSystemList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystemList;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* const&
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableAvatarSystemList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystemList;
}
constexpr void
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set__availableAvatarSystemList(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____availableAvatarSystemList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* BeatSaber::AvatarCore::AvatarSystemCollection::get_selectableAvatarSystems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                             "get_selectableAvatarSystems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* BeatSaber::AvatarCore::AvatarSystemCollection::get_availableAvatarSystems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                             "get_availableAvatarSystems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* BeatSaber::AvatarCore::AvatarSystemCollection::get_supportedOptionalAvatarDataType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "get_supportedOptionalAvatarDataType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection::_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* boundAvatarSystems) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, boundAvatarSystems);
}
inline int32_t BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemBySelectionSortOrder(::BeatSaber::AvatarCore::IAvatarSystem* system1, ::BeatSaber::AvatarCore::IAvatarSystem* system2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "AvatarSystemBySelectionSortOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, system1, system2);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::AvatarSystemCollection::get_anyAvatarCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                             "get_anyAvatarCreated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline bool BeatSaber::AvatarCore::AvatarSystemCollection::HasAvatarSystem(uint32_t avatarTypeIdentifierHash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "HasAvatarSystem",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, avatarTypeIdentifierHash);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarsData(::StringW selectedAvatarTypeIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetMultiplayerAvatarsData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*, false>(this, ___internal_method, selectedAvatarTypeIdentifier);
}
inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarOptionalDataProvider(::StringW selectedAvatarTypeIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetMultiplayerAvatarOptionalDataProvider",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*, false>(this, ___internal_method, selectedAvatarTypeIdentifier);
}
inline ::System::Threading::Tasks::Task* BeatSaber::AvatarCore::AvatarSystemCollection::CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                  "CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(this, ___internal_method, avatarSystemMetadata);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::BeatSaber::AvatarCore::AvatarSystemIdentifier avatarSystemIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(this, ___internal_method, avatarSystemIdentifier);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::StringW avatarTypeIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(this, ___internal_method, avatarTypeIdentifier);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(uint32_t avatarTypeIdentifierHash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(this, ___internal_method, avatarTypeIdentifierHash);
}
inline ::BeatSaber::AvatarCore::AvatarSystemCollection*
BeatSaber::AvatarCore::AvatarSystemCollection::New_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* boundAvatarSystems) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::AvatarSystemCollection*>(boundAvatarSystems));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemCollection() {}
