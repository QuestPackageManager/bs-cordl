#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/BeatAvatarSystem.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystem_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarSystem_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarSystemSettings_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarSystem_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarDataModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12::*)()>(
        &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2259494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22597b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12>::get(), "SetStateMachine",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)(
    ::Zenject::DiContainer*, ::BeatSaber::BeatAvatarSDK::AvatarDataModel*, ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*)>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2258f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.get_avatarCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::get_avatarCreated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2258fec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.InstantiateAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>* (
    ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)(::BeatSaber::AvatarCore::AvatarDisplayContext, int32_t, ::Zenject::DiContainer*)>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatar)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2259008;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.InstantiateAvatarEditorUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>* (
    ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)(::Zenject::DiContainer*)>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatarEditorUI)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22590b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.InstantiateAvatarSelectionView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>* (
    ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)(::Zenject::DiContainer*)>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatarSelectionView)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2259118;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.GetMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* (
    ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::GetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x225917c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.GetMultiplayerAvatarOptionalDataProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::GetMultiplayerAvatarOptionalDataProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2259208;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2259210;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.__GetRandomizedMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* (
    ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__GetRandomizedMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2259304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem.DeleteUserCreatedAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::DeleteUserCreatedAvatar)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2259394;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 26));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__cordl_internal_get__avatarDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* const& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__cordl_internal_get__avatarDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings>& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> const& BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__cordl_internal_set__settings(::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::setStaticF_kAvatarSystemTypeIdentifier(::BeatSaber::AvatarCore::AvatarSystemIdentifier value) {
  ::cordl_internals::setStaticField<::BeatSaber::AvatarCore::AvatarSystemIdentifier, "kAvatarSystemTypeIdentifier",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get>(
      std::forward<::BeatSaber::AvatarCore::AvatarSystemIdentifier>(value));
}
inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::getStaticF_kAvatarSystemTypeIdentifier() {
  return ::cordl_internals::getStaticField<::BeatSaber::AvatarCore::AvatarSystemIdentifier, "kAvatarSystemTypeIdentifier",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get>();
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::_ctor(::Zenject::DiContainer* container, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* model,
                                                                  ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, model, settings);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::get_avatarCreated() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>*
BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatar(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext, int32_t levelOfDetail, ::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>*, false>(this, ___internal_method, avatarDisplayContext, levelOfDetail,
                                                                                                                                    container);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>*
BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatarEditorUI(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>*, false>(this, ___internal_method, container);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>*
BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::InstantiateAvatarSelectionView(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>*, false>(this, ___internal_method, container);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::GetMultiplayerAvatarsData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::GetMultiplayerAvatarOptionalDataProvider() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::__GetRandomizedMultiplayerAvatarsData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>*, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::DeleteUserCreatedAvatar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem* BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::New_ctor(::Zenject::DiContainer* container, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* model,
                                                                                                                  ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* settings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*>(container, model, settings));
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem::BeatAvatarSystem() {}
