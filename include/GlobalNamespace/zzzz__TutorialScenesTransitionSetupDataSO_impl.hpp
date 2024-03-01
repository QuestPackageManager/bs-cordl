#pragma once
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType() {}
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::Completed{ static_cast<int32_t>(
    0x0) };
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::ReturnToMenu{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType::Restart{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*)>(
    &::GlobalNamespace::TutorialScenesTransitionSetupDataSO::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24191d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*)>(
    &::GlobalNamespace::TutorialScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2418124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.get_playerSpecificSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::TutorialScenesTransitionSetupDataSO::get_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241aca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                                                                               "get_playerSpecificSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.set_playerSpecificSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::TutorialScenesTransitionSetupDataSO::set_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241aca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "set_playerSpecificSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::TutorialScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x24159e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)(
    ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType)>(&::GlobalNamespace::TutorialScenesTransitionSetupDataSO::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x241acb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "Finish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::TutorialScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241acd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*&
GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfo;
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_set__environmentInfo(
    ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::SceneInfo>>*&
GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__tutorialSceneInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialSceneInfo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::SceneInfo>>*> const&
GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__tutorialSceneInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialSceneInfo;
}
constexpr void
GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_set__tutorialSceneInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::SceneInfo>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tutorialSceneInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SceneInfo>& GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__gameCoreSceneInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameCoreSceneInfo;
}
constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__gameCoreSceneInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameCoreSceneInfo;
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_set__gameCoreSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameCoreSceneInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*&
GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*> const&
GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__playerSpecificSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const&
GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__playerSpecificSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings_k__BackingField;
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_set__playerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSpecificSettings_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__loadedEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedEnvironmentInfo;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__loadedEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedEnvironmentInfo;
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_set__loadedEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadedEnvironmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SceneInfo>& GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__loadedTutorialSceneInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedTutorialSceneInfo;
}
constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_get__loadedTutorialSceneInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedTutorialSceneInfo;
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupDataSO::__cordl_internal_set__loadedTutorialSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadedTutorialSceneInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::add_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::TutorialScenesTransitionSetupDataSO::get_playerSpecificSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                                                                             "get_playerSpecificSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "set_playerSpecificSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::Init(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerSpecificSettings);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::Finish(::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType endState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), "Finish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endState);
}
inline ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* GlobalNamespace::TutorialScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>());
}
inline void GlobalNamespace::TutorialScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialScenesTransitionSetupDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
