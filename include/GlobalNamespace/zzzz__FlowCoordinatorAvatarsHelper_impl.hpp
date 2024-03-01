#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FlowCoordinatorAvatarsHelper_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "GlobalNamespace/zzzz__FlowCoordinatorAvatarsHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b1884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0._HasUserSelectedAvatarSystemWithCreatedAvatar_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::*)(
    ::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::_HasUserSelectedAvatarSystemWithCreatedAvatar_b__0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24b188c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0*>::get(),
                                                 "<HasUserSelectedAvatarSystemWithCreatedAvatar>b__0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::__cordl_internal_get_playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::__cordl_internal_get_playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDataModel;
}
constexpr void GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::__cordl_internal_set_playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0* GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0*>());
}
inline void GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::_HasUserSelectedAvatarSystemWithCreatedAvatar_b__0(::BeatSaber::AvatarCore::IAvatarSystemMetadata* system) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0*>::get(), "<HasUserSelectedAvatarSystemWithCreatedAvatar>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, system);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0::__FlowCoordinatorAvatarsHelper____c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0::*)()>(
    &::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x24b1948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0>::get(),
                                   "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24b1cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0>::get(),
                                   "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerDataModel", ty:
// "::UnityW<::GlobalNamespace::PlayerDataModel>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "avatarSystemCollection", ty: "::BeatSaber::AvatarCore::AvatarSystemCollection*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel,
    ::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->playerDataModel = playerDataModel;
  this->avatarSystemCollection = avatarSystemCollection;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0::__FlowCoordinatorAvatarsHelper___HasUserSelectedAvatarSystemWithCreatedAvatar_d__0() {}
//  Writing Method size for method: ::GlobalNamespace::FlowCoordinatorAvatarsHelper.HasUserSelectedAvatarSystemWithCreatedAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::BeatSaber::AvatarCore::AvatarSystemCollection*, ::GlobalNamespace::PlayerDataModel*)>(
        &::GlobalNamespace::FlowCoordinatorAvatarsHelper::HasUserSelectedAvatarSystemWithCreatedAvatar)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x24b12cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlowCoordinatorAvatarsHelper*>::get(),
                                                 "HasUserSelectedAvatarSystemWithCreatedAvatar", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlowCoordinatorAvatarsHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlowCoordinatorAvatarsHelper::*)()>(
    &::GlobalNamespace::FlowCoordinatorAvatarsHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b187c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlowCoordinatorAvatarsHelper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<bool>*
GlobalNamespace::FlowCoordinatorAvatarsHelper::HasUserSelectedAvatarSystemWithCreatedAvatar(::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection,
                                                                                            ::GlobalNamespace::PlayerDataModel* playerDataModel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlowCoordinatorAvatarsHelper*>::get(),
                                               "HasUserSelectedAvatarSystemWithCreatedAvatar", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(nullptr, ___internal_method, avatarSystemCollection, playerDataModel);
}
inline ::GlobalNamespace::FlowCoordinatorAvatarsHelper* GlobalNamespace::FlowCoordinatorAvatarsHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FlowCoordinatorAvatarsHelper*>());
}
inline void GlobalNamespace::FlowCoordinatorAvatarsHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlowCoordinatorAvatarsHelper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlowCoordinatorAvatarsHelper::FlowCoordinatorAvatarsHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
